/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11808
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

class EvenRoute {
public:
    string isItPossible(vector<int> x, vector<int> y, int wantedParity);
};

string EvenRoute::isItPossible(vector<int> x, vector<int> y, int wantedParity) {
    string ret;
    return ret;
}


int test0() {
    vector<int> x = {-1, -1, 1, 1};
    vector<int> y = {-1, 1, 1, -1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {-5, -3, 2};
    vector<int> y = {2, 0, 3};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {1001, -4000};
    vector<int> y = {0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {11, 21, 0};
    vector<int> y = {-20, 42, 7};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 6};
    vector<int> y = {10, -20};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0};
    vector<int> y = {1};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {0};
    vector<int> y = {-1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {0};
    vector<int> y = {2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {0};
    vector<int> y = {2};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {-1000000};
    vector<int> y = {-1000000};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {1000000};
    vector<int> y = {1000000};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {-263388, -931529, 657347, 466608, 997443, 834355, -886371, 109540, -582891, 629047, -599776, -50291, 323946, 607756, 859484, -667288, 3162, 965544, 111552, -691291, 346138, 683063, -538638, -343487, -51711, -130227, -172109, -789257, 406582, -30928, 248796, 14016, -274097, 549829, 463828, -351945, -666625, 612186, 47649, 717665, 689553};
    vector<int> y = {187819, -591298, 283127, -422588, -59153, 982380, -188377, -281873, 351172, 357642, -819797, 200878, 876608, 554146, 596130, -776377, 306323, -500951, 809364, 532358, -654058, -431239, 13504, 988330, 120986, -563250, 234304, 757491, 936591, -830935, -994559, -917268, -392346, 535691, -968368, -163240, -168890, 562211, -914741, -233206, -362532};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {-838730, -167467, -260859, -924519, -487115, -126585, -466553, -891077, 621961, 887202, -679493, -693372};
    vector<int> y = {117927, 137485, -303033, 36790, -702722, 140738, 665994, -484609, -134916, -944617, 508348, 694666};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {573168, -848684, 699789, -826237, 649131, -383443, 58647, -386236, 781603, -754143, -977572, -752562, 318572, 440256, -450242, -644763, 36812, -839786, 110128, -74869, 866327, 397421, -474463, 535111, 696818, -635512};
    vector<int> y = {-999357, 127343, 889616, 894792, -336726, -736954, -95930, 119968, -298338, 864104, -120527, 248194, 853669, 297041, -290623, 446904, 430768, 56630, -279631, -390020, -691700, -876047, -626545, -518345, 670420, 845927};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-12737, 975306, -208951, -345433, 276407, -712434, 302382, 406410, -389330, -801428, 142360, -898826, -240301, -971468, 915916, 984898, -443509, 129278, -202248, 926165, 60309, -264287, -560066, 390977, 36261, 941490, 299155, -518955, 567139, 610816, -749804, -235426, -191142, -885851};
    vector<int> y = {361299, 257910, -367376, -374762, -900425, 955749, 130252, -137897, 689287, -258452, -612747, -397697, 119500, 706708, 282683, -459631, 932635, 201643, -691388, 866841, 425474, 569344, -313805, 244298, 55351, 136465, 695541, 533775, -993607, -85838, -207563, 479343, 315015, 462519};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {-963662, 924337, -963058, 180301, 719921, 267175, 538558};
    vector<int> y = {826433, -553567, -590676, -18082, 15649, -324325, 534834};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-810742, 891236, -289982, -85908, -982879, -364693, 67597, 818999, 279107, 680495, -15920, -604831, 672008, -350753, 327724, 856926, -206005, -622313, -901344, -95596, 56939, 383652, 809353};
    vector<int> y = {-237539, 249059, -667713, -412437, -619724, -674852, -527180, 478060, 107903, 567445, -275069, 266734, 189532, -746286, -209320, 122682, -266570, 560819, -360160, -982565, 325096, -682556, -514348};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {-916853, -161081, 341465, 193418, 507113, 378682, 625186, -937382, -284964, -717481, -756698, -899609, 384807, -909242, 973325, -731104, 663462, -935724, -351562, 467638, 718382, 340715, -714662, -232904, 979063, 385904, 45691, -406284, -49829, 408388, -809958, -518180, 354030, 642766, 333734, 956587};
    vector<int> y = {803429, -764500, 164357, 636658, -338563, -90725, -786029, -931671, -940496, -631393, 525290, 538704, 222708, 436734, 138513, -384221, -49530, -694995, -683417, 802676, 361845, -883280, -364598, -126971, 479663, -933008, 322401, 349160, -705203, 397757, 102265, -862118, -368726, -904746, 684477, -562006};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {999665, -197704, 756173, -173021, -453987, 608283, -263532, -747445, -593431, -637852, -818189, 280971, 240399, -86667, 6028, 758927};
    vector<int> y = {524603, 370874, -899269, 330708, -55507, 758539, -15404, 472285, 933966, 352511, 156674, 72758, -447457, 15133, 220526, -35787};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {591016, 160721, -189855, -901121, 844662, 377607, -869162, 739938, -520523, -962044, 816236, 294550, -835604, 572196, 694025, 8798, 889440, -393856, 817709, 721433, -443380, -708283, 921918, 57209, 410995, -362157, 802203, 435702, -576607, -382604, -532234, 335394};
    vector<int> y = {-446048, -738910, -177795, 629996, -825733, -370668, 675241, -201042, 489217, 83013, 398721, -604515, -474713, -589516, -380668, -499449, -390822, -992477, -77976, 83273, -525920, -772789, -526074, -579844, 786777, 788027, -868658, -121001, 22421, 104401, 43159, -112742};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {917736, 13317, 299529, 822498, 340247, 782157, 565783, 476632, -351562, 129645, 601547, 79769, -653115, 332949, 466222, 615156, -658672, 103969};
    vector<int> y = {50403, -930073, -683658, 371714, -600131, 264008, -236205, 417619, -296362, 520787, 162722, 563221, -546027, -422095, 213095, 861096, -506963, -369078};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {-495334, 904660, -736851, 293594, -492131, -949021, 322816, -801706, 884108, 449536, 461858, 517769, 129799, -894398, -415766, 251259, 400839, -72798, 336884};
    vector<int> y = {933772, 845012, -705960, -398043, 518065, -678037, 140898, -8930, -81113, 959238, 206951, 511601, -13596, -932286, 245009, -594922, 928916, -137620, -481973};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {310363, -645590, 316247, 163310, 89450, 26694, -77883, -378868, -524430, -599919, 648604, -886156, -342242, 930202, 41306, 81289, -172677, 414703, 859576, -237689, 37482, -719184, -540786, -195527, 651234, -473879, 313268, -45304, 577025, -651739, -697285, -263548, -852503, -778181, -756475, 55824, 885978, 649851, 670091};
    vector<int> y = {155048, -181598, 710310, -984791, -13016, -90154, 806579, -899696, 142164, 327458, -129862, -493144, 163731, -7589, -903501, 245113, -936076, 410697, 137573, -119779, -183041, -323863, 236045, 444468, 596468, -88702, -800489, 388132, 214980, 459969, 490942, 184834, -323418, -607132, 728741, -744143, -92874, 712811, 832099};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {-964056, -874410, 847087, -895369, 116172, 723730, -141751, -975307, 20126, -342840, 509336};
    vector<int> y = {-912293, -273850, 249783, -616886, 950850, -552678, -177042, -486773, -677337, -676987, 567030};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {205611, -424733, -521595, 931285, 422085, 993662, 666904, -107831, 468644, 246254, 168678};
    vector<int> y = {710144, -599499, 696773, 994525, -482493, -389598, 500387, -573457, 966576, -321325, -743201};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {628670, -239383, -162399, -321373, 514327, -984890, 80427, 503238, -482731, -786698, -163968, -851493, 324957, 352254, 382689, -281256, -93839, -572798, 44811, -521876, -428008, -537042, -1777, 869279, 857491, -638780, 33968, -888353, 244487, 293593, -998516, 83609, 773320, -362815, 163016, -165868, 851361, -709933, -946585};
    vector<int> y = {535345, 121228, -529174, 270769, 722618, -295790, -350228, -985637, 171584, -554357, 794297, -686941, 355265, -298933, -470342, 934616, -192575, -535131, 703913, 827096, 791766, 218558, 194998, 487388, 578285, -461325, 960772, -270064, 183702, -557769, -3426, 659194, -891119, 524929, -512231, -266075, 754189, -125974, -445413};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {315726, -52313, -4446, -677516, 768853, 446870, 633591, -147918, -30270, 67695, 220919, 839498, 430153, 207325, -860335, 714811, -361247, 403614, 611745, -434562, 800988, -323088, 791600, -743932, 28007, -648029, -200128, 971899, -974388, 974867, 172133, 710562, 143893, -826195, -789847, -179577, -291096, -775035};
    vector<int> y = {-565089, 985836, 653637, -271998, -255517, 469367, 458096, 876818, -226708, 517771, -748479, 912519, -969729, 787041, -537097, -971177, 963893, -864681, -662871, -620056, 890328, 265729, 775486, 97363, -319894, -680149, 379737, -966385, -36742, 300649, 32215, -183066, 935040, 547630, -169972, -482184, -784708, 969386};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {164413, 339970, 942453, 274313, 358589, -531074, 283908, 300000, 531104, 869763, 116702, 891368, -630785, 2472};
    vector<int> y = {-743551, -884858, -431745, -655811, 928667, -317711, -195649, 667865, -797008, 196367, 499919, 934462, -359502, 76204};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-143829, -637438, 349700, 917846, 672052, 889620, -865861, -406733, 871715, -399506, 737058, 351501, -293369, 104070, -944886, 678632, -867081, 922856};
    vector<int> y = {812845, -669782, -707483, 143596, 136720, 280493, 559113, 338367, 269697, 762127, -989385, 441718, -422073, -408393, -430277, 130481, 176841, 535481};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {601276, 443551, 118917, 175815, -298051, 174793, -313529, -463811, -375173, 802119, -744163, 936262, -369384};
    vector<int> y = {-747315, -8306, 759784, -217245, -685164, 907004, -892744, 292131, 717589, 722527, -554975, 639285, 351038};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {-917085, 649769, -436920, 697311, -680953, 769125, -833664, 235804};
    vector<int> y = {428637, 561485, -857015, 287489, -779643, 702685, 871333, 620253};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {558048, -835227, -186948, 696819, 407182, -482615, -313477, -814501, 431206, 645913, -92136, 856259, 163762, -328222, 372403, 3975, -763580, -428364, -561546};
    vector<int> y = {418429, -68327, -515966, -673236, 392350, 493223, -550395, 15558, 696551, 408850, 570160, 523737, -278292, 847918, -802157, 428635, -683517, 107666, 267088};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {-14175, 867591, 646432, -353746, 934509, 22474, -91005, -7405, 8027, 501391, 908960, -135887, -766153, -978938, 74459, -599028, 562987, 713174, 204115, 217543, 743400, 934698, 857323, -924265, 300300, 563158, -385643, 494373, -645985, 298205, -390453, 156855, 250380, 217474, 300078, -966207, -554755, -832793, -318909, -302223};
    vector<int> y = {-631165, 749490, -478390, 167237, -518953, -198495, -227676, -58221, -238636, 193011, 366214, 982731, -702504, -697647, 981095, 759077, -919978, 945331, 313131, -631940, -216704, -779133, 647609, -436669, -197026, 994955, 52553, -445766, -399991, 716766, -620813, 478302, -18384, 771918, -213967, 9275, -260443, -880193, -158582, -825698};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {-547642, -808469, -724062, 923411, -173038, 792942, 274034, 682638, 333104, 808919, 127177, -98610, 115693, -140736, -49792, -571559, 763019, -175316, -423215, -186517, 669365, 145848, -901969, -144044, 256932, -914456};
    vector<int> y = {-17123, 256454, -729888, -155136, 427509, 815993, 332053, -413389, 718045, -94962, -999456, -192966, -748197, -595096, -613162, 286241, 58061, 922843, -527063, 951975, 837509, -472829, 868922, 350543, 767666, -738677};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {638930, -695919, 957248, 256724, 491081, -898394, -679076, 234549, -715779, -154240, 795914, 578459, -892713, 518021, -917454, 122522, 444748, -816890, 824175, -306438, 52834, 414881, 293677, -623103};
    vector<int> y = {-845139, -991043, -145590, -228248, -246636, -65112, 183422, 627179, 522146, 713858, 749738, 181478, -156056, -904703, 262597, 305611, -917709, -356398, 602288, 798138, 884764, 261077, 81370, -738762};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {-926869, -373318, -307603, -142992, -203951, -528360, 801755, -132305, 27316, -211528, -842903, 714445, 628085, 36906, -842822, 586257, -351677, -141031, -151564};
    vector<int> y = {131590, -893408, 277970, -629154, 966758, -455701, 52232, 159360, -640999, -730343, -348696, -651710, 896381, -441004, -48036, 650318, 842338, -591171, -176888};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {-855764, 896989, -839899, -637235, -699800, 406503, -974092};
    vector<int> y = {220590, 502226, -848281, 976185, 382585, -397666, 281689};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {613002, -307615, 434011, -134208, -238661, 717597, -311030, 19900, -169459, -575204, -66601, -782476, -926114, 748128, -909571, 287866, -369444, 627728, 200993};
    vector<int> y = {-923121, -567140, 377239, -514815, 159522, 247134, -522394, 325159, 933409, -277100, -333105, -263063, -139505, -939841, -94639, 670139, 485805, -732869, 793304};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {440700, 71192, 508071, -224710, 549086, 590377, 326615, -67803, -485053, 665053, -979894, -747257, -332876, 427017, 130025, -778062, -965827, 790945, 589953, -501070, -733776, 409064, 738766, 294245, 853566, 843099, 279376, -582823, -832945, 576666, 510448, -57319, 664762, 770652, -294771, -221173, -882785, -983911, -754224, 678188, -108192, 810005, -712364, -371583, 149175, 806534, 624674};
    vector<int> y = {691494, 168178, -363054, -875305, -243022, -271852, 633118, -424629, 532040, -123873, -198267, -799246, -678131, 627057, -97290, -705804, -593044, -801215, -161448, 818402, 359196, 333897, -819765, -738564, 398100, -937211, 221598, 982852, -378562, 728364, 76582, -896458, 572247, -85669, 188509, 696584, 151947, -466067, 290741, -299178, -555911, 415460, -234300, -376090, 617994, 724957, 233379};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {620628, -912494, 259202, -76997, 616756, 322337, 628106, 123568, -979484};
    vector<int> y = {-706604, -341479, 893235, -21660, 834892, -62601, -891683, 867985, 797437};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {-549293, 690861, 737063, -268561, 693863, -692890, 312384, 414237, -923708, -112535, 325215, 588262, -721615, -859243, -543902, -624071, 899388, -623097, -333913, 485849, -767322, -972504, 561697, -297308, -58226, -105117, -671121, -689855, 520636, -597063, 563140, -130994, -359858, 720360, -76215, 95271, 392995, -865857, 601536, -751470, 628031, 999804, 691095, 507751, -824105, -328066, 137029, -172735, -239799};
    vector<int> y = {-361133, -872342, -835161, 779034, 312424, -449361, 156029, -472325, -222154, 531242, 896003, 745050, -654406, 855870, -54195, 22721, -881202, 745394, 257445, -722865, -898250, 701522, 845255, -603546, 642408, -65681, -625897, -448467, 578351, -604378, -982905, -407716, -124973, -991806, 2316, -127432, 829896, 476930, -62138, -796643, -912349, 695311, 944096, 544317, 873941, -123754, 429706, -438701, 683954};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {60680, 303689, 794843, -99838, 257956, -781259, 121890, 155926, 67446, 62941, -42672, -389715, -272685, 371119, -911685, 976884, -378796, 271292, -319899, 549996, -965740, 236959, 604424, -233971, -41360, -252461, -114416, -511970, -322515, 691811, -436787, -570820, 173903, 927590, -126513, -694543, 417885, 743908, 450858, -230167, -78802};
    vector<int> y = {410463, -732518, -155228, -607719, 409851, 437340, -988441, -376867, -713917, -104478, -97755, -939312, 507752, -411176, 91216, 684261, -75249, 718819, 18696, 929599, 235955, 174454, 31127, 768062, -348949, -762094, -545399, -963203, -925782, 113808, -438450, 1633, -710372, 815363, -393848, -856022, -709760, -193169, -660257, 910336, 524757};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {478885, 782094, -65997, -875627, -631187, 704466, -579668, -526520, -426357, -499054, -780163, -751311, 358208, 143920, -39219, 22662, 368256, 149605, -254690, 944694, -693133, -372373, 425324, 584744};
    vector<int> y = {-886114, 550513, -876018, -762238, -531840, -896301, -475519, -283301, 624480, -830059, -143502, 197802, -274719, -5785, 309326, -698183, 947313, -895700, -474383, 487365, 188702, 568346, -837741, 489287};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {-92684, -208874, 247940, 521350, 784122, 641308, -26730, 532558, 557511, -496576, 557383, -139580, 843815, 337281, 581913, 117223, 645305, 959124, 128552, -282947, 997950, -659203};
    vector<int> y = {-498123, -517931, -579373, 807543, 916155, -214957, 676835, -598403, -939618, 897045, 597826, -215913, 27096, -669820, 445986, -625556, -633280, -896809, -782933, -355656, -287053, 105392};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {-813761, 362771, 511664, -388556, 216188, 903271, 191024, 977871};
    vector<int> y = {437202, 383918, 426747, 728649, -894861, -940666, 708263, 23642};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {127326, -611493, 142501, 943696, -550356, -892139, -142196, 656461, 637937, -962566, -407859, -360843, 180481, 45717, -957130, 438821, 50998, -798454, 324904, 956104, 681547, -98868, 35191, -357564, -694563, -742803, 363469, 246197, 370269, 43910, -991012, 152670, 912144, -145935, 569397, -943005, -720676, -661467, 149336, -738933, -271127, 803512, 74975, -326781, -894446, 442371, 220313, 438390};
    vector<int> y = {-657779, 127782, -417556, -734119, 82927, -936456, 659895, 267598, -596600, 975075, 830996, -609534, -714286, 468424, -485865, 533428, 436691, 7197, -678251, 380645, -846106, -13003, -767526, -105131, 713064, 821778, 171484, -646162, -479672, 936119, 850425, 84537, -348695, 838512, 300674, -571618, 858921, -839186, 14767, -925396, -985336, 627127, -464952, -885322, 225353, -769232, -294282, -915885};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {541933, -895875, 910943, 727259, 887816, 680630, 952785, 450943, -522091, 6820, -7350, -395485, 33472, -935983, -449829, -846242, 427458, 60036, 242743, -239112, -420356, -257290, 220581, -876762, -684279, -50937, 260003, -866620, -648250, -173799, 528619, -940709, -717111, 610439, 440353, 873666, 245323, -493776, 674623, -204503, 982458, -454811, 492375, -184606};
    vector<int> y = {-743178, 483326, 46154, 357810, 223781, -264509, 97046, -963490, 489704, -654527, -885263, 238022, 94671, 729812, -316710, 381869, 321611, 358035, 529510, -861625, -502953, 283975, 592998, -509533, -348442, -726532, -915322, 45879, -706325, 754570, 834360, -971876, -567742, -418570, 97488, 183823, 496494, -746443, 148046, 831412, 564637, 809214, -44846, 47995};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {-535941, 887414, -139275, -327613, 467503, -410690, 503638};
    vector<int> y = {-696804, 384403, 725378, -998854, -713778, -646775, 964189};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {800814, -783453, -973862, 425201, 935628, -856402, -546607, 447893, -364494, 300914, 286928, -965170, -529308, -646497, -352814, 999034, 642952, 520717, -978481, 43678, -397183, -103700, -653640, 421173, -797432, -293183, 661719, 458354, -368421, -7724, -297072, -632823};
    vector<int> y = {-909599, -932126, 906125, -481564, -275287, -519781, -356016, -860044, 388257, -793027, -19855, 278549, -480351, -583722, 682899, 447349, -846647, 162198, -93852, 826989, -443676, -432951, 656043, -884188, 336421, 263466, 355650, -286477, -786310, 598787, 257921, -275554};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {212867, 383260, -869298, 933693, 985610, 324811, -80533, 822978, -321697, 805112, 990922, 54943, -638746, 152536, 552105, -343114, -6274, -964540, 813375, -759085, 424317, 835434, 652966, -145266, 126389, -475047, 831824, 30973, 95879, -10497, 72586, -442188, 8244, 985268, -253858, -545881, -903319, -325474, -385413, 717002, -497065, -396717};
    vector<int> y = {-397238, 360715, 603509, 65312, 348059, 231766, -398506, -132057, -263602, 880939, 955547, 565288, 944335, 415387, -169016, -132747, 971307, 683433, -555498, 815370, 37906, 738575, 222575, -622633, -83804, -303674, 467825, 182536, 554852, 624704, 386031, 43693, 27713, 507095, 475763, 434820, 396922, -828601, -947246, -768255, -984580, 614472};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {-778332, -712649, -982643, 471771, -31438, -969260, 891379};
    vector<int> y = {-694485, -916626, 423694, 125836, -346905, -268031, 169724};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {-356510, -418627, 611938, -825585, -332420, 663487, -385680, 786555, -383378, -425197, -669052, 996192, 351786, -17156, 339685, 831449, 501889, -935076};
    vector<int> y = {159775, -419892, -107101, -674522, -860785, 834572, 516825, 164122, -929409, -228656, -435567, -193805, -711433, 755279, -131356, -174018, 237866, -926269};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {886921, -339365, 4672, 676777, 220834, -236088, -17132, 867532, 528854, 521758, -775478, -401333, 715234, -785109, 588560, 965872, 74262, 94132, 91055, 905526, -723346, 121022, -82412, -165286, 791845, 876975, -697399, -364735, -326125, 987779, 63383, 677094, 218020, -518039, -260717, -386203, 888001, 655856, 663668, -425358, -83114, 105423, -514543, -447989, -309782, -646625, -740653};
    vector<int> y = {-194380, -320100, 962381, -30656, 596091, -275977, 704699, 437981, -881275, 287593, -787065, -853640, 97163, 577158, 310741, 879847, 374033, -66305, -866572, 638421, -908699, 128319, -476689, 900519, 567206, 208830, 421054, 816322, 478196, 320898, -780662, 518527, -938581, -983260, -743336, 418860, -144392, -944721, 511069, -902993, 932667, -547146, 525594, -516568, 60533, -645842, -163088};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {236587, -749121, -65151, 579033, -905139, -651385, 778598, -956041, 723759, 780705, -762052, -528203, 810909, -733354, -233829, -118564, -25460, -248400, -107151, 909384, -225230, 634255, -143740, 751628, -376047, 118582, -37305, 305025};
    vector<int> y = {417434, -640148, -999320, 703626, -753992, 887256, -217327, 509218, -891510, -977072, -360175, 771122, 567340, 566583, 739790, 849005, -370577, -444331, 231450, -944469, 455185, 909112, -627919, -546153, -148798, -170353, 774724, -71150};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {-839348, -384804, 88643, -22903, 551483, 652180, -786627, -79664, -338888, 176426, -658119, -356331, -300145, -778997, 678335, -982504, 417162, 610532, 304991, -35977, 800815, 450837, 485483, -527975, -67511, 592042, -182927, -184898, -395108, 36637, 150822, 887730, -763772, 154161, 650481, -29354, 286807, 747934, -841538, 387592, 316724};
    vector<int> y = {628711, -4935, 696784, -951492, -517114, -32541, 257020, -628231, 840467, 462895, -956240, -623694, -848894, 849722, -796748, -529287, -675407, -922667, 332346, -429718, 615146, -322106, 144504, -676770, -854990, -90033, -734162, 955583, 322695, 939330, 468609, -819133, -370227, -612972, -15062, -40955, 303628, -274271, 422887, -474329, 165727};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {358228, -364048, 772150, 564542, 593325, -337001, -417593, -953383, 796656, 662651, 267518, -659850, 619195, -305823, -804889, 582671, -227459, -929801, -709574, 593408, 45909, -994336, 505538, -569696, -736257, -951771, -181099, 770026, -666382, 283689, 871079, -780766, 137123, 544416, -381174, 971699, 338969, -688645};
    vector<int> y = {373511, -911805, 749921, -903397, -310018, -446678, 925236, 783966, 734823, 610802, 340237, 635237, 906454, -174052, 938954, 943070, 158542, 448652, 584745, 450541, -758672, -318713, 840375, 745919, -61762, -311958, 821776, -583941, 325, -35000, 959622, -689949, -690484, -205383, -523369, -713956, -249030, 183524};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {668396, 241279, -904219, -816480, -762051, 252641, 720776, -452772, 781307, -887077, -373017, 238672, -542924, -877463, -324298, 451066, -281292, 237964, -495401, -127870, 127324, 215340, 98898, -988233, 312903, -361648, -174091, 737701, -23424, 424810, 872094, -190459, -760606, -727651, -584447, -65718, 378911, -501800, -865772, -634976, -670864, -999567, -71629, 846709, 734268, 775021, -10009};
    vector<int> y = {-298592, -87457, -256263, -84728, -809885, -559395, 114550, 982682, -77295, -791667, -206719, 44132, 806264, 693117, -363810, 683148, 518404, 920520, -197311, -471696, 622572, -610906, -440902, 800793, 823397, -289902, 673463, 851967, 112952, -624390, 966274, 274673, -899738, -964693, 840213, -376786, -257585, -777050, 411822, 562438, -378676, 612245, 232279, -910237, -20722, -68003, 980543};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {-360801, -572750, -506969, 455716, 123073, -809655, -850563, 35871, 811102, -172034, 306635, 191124, -807877, 720579, -822803, 431212, 880280, -228042, -789236, -540416, 983861, 920169, 162400};
    vector<int> y = {-877831, -872910, 771459, -249414, 39413, -574711, 204537, -643873, 151628, 622390, -156047, -775926, -926795, -602579, -968167, 743916, -437070, -961034, 39076, -8074, -977645, -644363, -416564};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {-566163, -156348};
    vector<int> y = {908571, -765704};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {38719, 745473, 483023, 65117, -227243, -85491, 984758, -259349, 536593, 721774, -31293, -892604, -337358, 530756, 532668, 852078, -403839, 371153, 731412, -516432, 530099, 93582, -26824, 768646, 425401, 365442, -45187, 513077, 103558, -798301, 676556};
    vector<int> y = {-678201, 27249, 155535, 479773, -341893, -969607, 34042, -286589, 568113, -716292, -45461, 635258, 179346, -61396, -481486, 981612, 989299, 69903, -506308, 161820, -832575, -589100, -912080, -879174, -292727, -208606, -7287, -899687, -372376, 48637, -203408};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {157467, 286522, 820855, 494857, -510124, 741134, 309442, -315628, 439189, 108548, -292627, 298613, 828934, 711883, 88291, 395025, -768326, -786185, -954568, -176936, -453246, -19343, 579155, 211106, -562723, 248743, 756083, 664611, -574873, -850553, 890077, 685806, -628883, 749665, 16900, 796438, 798897, 234231, -98875, 609644, -320488, 924760, 261765, -540379, -923022, -930009};
    vector<int> y = {114151, -886876, 943615, 203861, 952572, 583378, -132272, -12558, 95781, 834772, 240553, 417349, 96534, -967151, 861639, 304073, 602982, 985223, 733398, 560346, 770468, 594541, -504285, 91606, 640597, -200813, 938617, 965483, -348009, -937489, -902629, -697824, 440039, -213523, -636374, -894314, -993301, 644339, 805393, -450384, 64840, -845546, 23469, -488881, 521884, -574771};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {-771974, 33176, -342647, -956813, -888824, 573828, -420131, 305584, -485199, 715235, 243569, -238809, -677398, 295711, -344782, 397501, 479954, 692105, -997921, 908660, 494426, -914771, -526305, -602369, 61997, -184219, -247117, -312410, 304784, 890193, 230537, 836923, 752255, 256266, -629690, -157172, 376176, -541812, 557443, -583150, 772103, 101398, 357713, -993362, 957186};
    vector<int> y = {595226, 648818, -870105, -239873, 66210, -504558, 706405, 520480, 688613, -704591, -132167, -521663, 389000, 728585, 600016, -42529, -933208, -601755, 350621, 651236, 151664, 899273, 536085, 792049, 58343, -77125, -418265, 399298, -547288, -579357, 155345, -543255, -317337, 392270, -397572, -196962, 649094, 286682, -886121, -187798, 853953, 515196, 238129, 259364, 864682};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {951205, -921001, -462195, -284328, 276926, 475108, 193112, 336123, 940486, -595633, 531665, -397235, 608805, 640088, -526697, 6694, 15927, 872013, -884325, -708882, 431275, -78568, -399794, 514821, 483950, -2166};
    vector<int> y = {829837, -337123, -125489, -161880, -31304, -741512, 192736, 244161, 638276, -205545, -418603, 413507, -801009, 556308, 704895, -410812, -945979, -47273, -104805, 595420, 628855, 862450, -672210, 498517, -623218, 557162};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {-116336, 469288, 280909, 752421, -561441, 507235, 855552, -943257, -160346, -658189, -53300, -254691, -381520, 845619, -207900, -747438, -353369, -337844, -912205, 807994, 473446, 449827, -220107, 480146, -983941, 978316, -160203, 600121, -306220, 88420, 852349, 891579, -717496, -176044, -648885, -626818, 821606, 69333, 782997, 419722, -579695, -589641, -941276, 120705, -229996, 343612};
    vector<int> y = {-465588, -267924, -963191, 855515, -116335, 108591, -389026, -275465, -419296, 952041, 162262, 220397, -838280, 85429, 746262, 67042, -89337, -531340, -123731, -941352, 820654, -264595, -298939, 13630, -346883, 487180, 977695, -899099, -531006, -546232, 478547, 717863, 255566, 283196, -940793, -648826, 45596, 914727, 963163, 766544, -435011, -619423, 68666, 114323, 107228, 103362};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {-554250, -978975, 639455, 279618, 216314, 936533, 340045, -618838, -391967, 839809, 212665, -476189, -253282, -698426, -736250, -733648, -602793, 464693, 848368, -265503, 909222, 93788, 178967, -152491, -767999, 973002, -139092, 619457, 934697, -643374, -9055, -699982, -879191, 836867, 778029, -415951, -868922, 172393, 738601, -705318, -816573, 984252, -594841, 173009, -90685};
    vector<int> y = {-688662, -309689, -169677, 614740, 516878, -48549, -526867, -592560, -74791, -710671, 192363, 709683, -813198, 63798, -624910, 698618, 542517, 900991, -939082, 964979, 421966, 720562, 665793, 756249, 181217, 335054, -25392, -327119, 179287, -426148, 533049, -568324, -712543, -106629, -505723, 461763, -831290, -121643, 496347, -283132, -804603, -412970, 437653, 874333, -324209};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {-87687, 271247, -187744, 974546, -295006, 346944, -185530, -477700, -698170, -200752, -15729, 218, -857768, -747531, -458698, 299366, -59334, 489137, -908842, 694246, 639273, -542740, 989552, 361329, -493534, -950084, -338982, -522201, -42230, 674761, -132042, 340632, -221430, 252519, 976473, -262277, -136860, -202953, 223921, 790967, 55298, -528509, 648501};
    vector<int> y = {-485823, 207223, 657412, 512682, 312100, -243820, 274476, 883734, 455668, -706062, 546453, 325000, 119698, 698859, -721336, 501394, 276628, -701755, -970576, 402622, -267981, -412128, -779516, -515569, -843932, 856084, -247572, -665099, -313678, 79149, -916082, 548692, 272196, -232683, 29167, 278053, -815674, 581803, -280691, 941653, -832436, 404255, 317785};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {-901115, -516119, 104438, 701421, -890401, 103287, -502183, 550288, 100823, 542932, -797652, 295533, 782891, -597337, -645161, -783120, 30266, 95969, -187887, 761540, -547348, -350700, -390559, -912459, 187119, -880009, -837818};
    vector<int> y = {529531, 980121, 601318, -546861, -635039, 73183, -519065, -903546, 823039, -142622, 710790, 768617, -571825, -868283, 797237, 529284, -224108, 414291, 782863, 908446, 366060, -356978, -739849, -811325, 483917, 603541, 354096};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {-947381, 463436, 901279, 283216, -982038, -312414, 357165, 194603, -476914, 811155, 598919, 494254, -713128, -92194, 50016};
    vector<int> y = {72841, 995036, -504053, 703074, 6076, -518800, -414549, -794467, 213054, -865877, 385781, 250860, 128572, -895172, 663684};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {368259, -991260, -306027, -222105, -423698, 687030, 704973, 862605, -553567, 507713, -826368, -402677, 737136, 753337, -698405, -300273, -850030, -790183, 364800, -467761, -905105, 250688, -291563, 89579, -445775, -722299, -725060, 226140, 561613, -644452, -891041, -737215, -478337, -899044, -211440, -543244};
    vector<int> y = {-838291, -989150, 613527, -76007, -641338, -415584, 835957, 818625, -459697, -727883, -683252, 842547, 744922, -206311, -124131, 274759, -135738, 284177, -42620, 853315, 887161, 614970, -648951, 318575, -773441, 503539, 744446, 13486, 926863, 594860, -33537, 668569, -859649, -689154, 94038, -133518};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {-948271, 369235, -668854, 569218, 35859, -434631, -790735, 162013, 937669, -81142, -469201, 340684, 65020, -974197, 230507, -690616, 43632, 873835, 713874, 326659, -511819, 955056, 781207, -252861, 99358, 780544, -278497, 925505, 550778, -857790, -989452, -791717, 105853, -565851, -110148, 995165, 424244, -514344, 764964, -198999, -433699, 367736, -883840, -552006};
    vector<int> y = {320857, -605405, -663866, -805382, -945505, -468375, -893423, -294891, 821343, 23886, 274991, -295966, 695834, 65549, -979055, 838478, -316290, 951891, -324304, 881399, -993441, 339714, 272033, 702847, -147424, 855866, -679685, -729891, -177436, -724066, 479882, 49403, 420761, 676181, -479618, -299103, -671066, -905434, -161538, -74559, 759923, 899620, -5994, 881492};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {-749318, -315603, 185237, -797568, 249430, 326264, -481436, -398421, 884665, 776333, 817632, 681852, -322527, -56473, 429678, -19987, -924786, -99862, 361787, -17089, 923800, -799884, -457978, 663252, -580765, 569486, -581748};
    vector<int> y = {193000, -151911, -643521, -445624, -423802, -369638, -270456, 289461, -678537, -574829, -60912, 410810, -957365, 859499, 252220, -627709, -439468, 917560, 505995, 372381, -209878, 775528, -991548, 199058, -924999, -64326, -277550};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {295761, -324152, 516459, 743013, 363493, -946149, 949127, 761736, -65722, 826943, 413007, -460662, 384540, -339351, -41444, -830196, 281303, 642508, -93271, -75152, 463018, 259156, 587265, -655410, 580790, -426434, 966378, -639392, 337584, -727382, -213397, -56511, -73736, -703494, -120625, 638743, -576803, 893666, 677731, -617101, 636502, 862037, -456979, 717569, -268916};
    vector<int> y = {119723, -994156, 374357, 317149, -286493, 173667, 54073, 769848, 372752, -311831, 774613, -74346, -964304, 368323, 606128, 15320, -698135, -667794, -368537, 133810, -440262, 222304, -212579, 687702, 396616, 115122, -155740, -157392, -405082, 799644, 340229, -290017, -168356, 16794, -647197, 497351, 949221, 886822, -849851, -590139, 21866, 287295, 247405, -875151, -631076};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {109072, 848430, -408705, 180930, -956587, 673373, 964214, -907590, 177198, 587244, 598858, -248907, 226035, -992753, -974139, -134629, -180674, 524889, -684403, -768023, 608838, 488063, 139245, -163160, 771655, 854328, -99720, -743174, -139879, 950933, -233608, -650402, -54471, 37059, 7567, -816604, -219945, -952173, 834096, 728084, 207821, 650954, 238576, 878644, -775620, -450960, -563479};
    vector<int> y = {602408, 957344, -775691, -303784, 356251, 942587, -283568, 849754, 753436, -680062, 377706, 88017, -545489, -833489, -174559, -914507, -979902, -539391, -52815, -687443, 219686, -456437, -31453, -210096, 836099, 150408, -876520, 492658, 767367, -940703, -953658, 323668, 610927, 195771, 453451, 566096, 85119, 684603, 740086, 747510, -375189, 957110, -214012, -424426, -949796, -492128, -622173};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {-11098, 255140, 692798, 396454, -776967, -337208, -847349, -193437, -933778, 28889, 628826, -29128, 803486, -39488, -728234, -575712, 578122, -853691, 263202, -614851, -228766, -281640, 133088, 815136, 995205, -211406, -444343};
    vector<int> y = {37474, 487680, -71284, 118362, -868915, -646494, 567985, -204679, -32650, -891755, 290596, -293122, 262218, 392432, -845172, 796766, -338182, 21205, -141282, -319575, 440160, -637514, 282522, -874538, 409445, -51748, 47929};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {-72521, -20780};
    vector<int> y = {24385, 520440};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {482755, -835514, -676201, 969645, 769397, 379838, 453102, 994341, 685647, -502164, -536508, -114726, 857534, -916888, 135231, 60678, 440067, -607448, 363105, -140471, 681919, 256052, 912829, 987458, 762155, -15170};
    vector<int> y = {111455, 927014, 671431, 610297, -324319, -296198, 311670, 783141, -448961, -719016, 646124, 45532, 390554, -288212, -708181, 127852, -910301, -796850, 328649, -381017, 416361, -753138, 626921, 775502, -315603, -583984};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {904200, -205564, 239996, 911992, 956182, -12765, 119155, -380811, -114138, 427973, 97064, 271143, -255946, 880615, 823266, 327933, -859776, 917029, 529752, -488073, 763008, 219578, -960491, 459281, -321462, 350906, 249368, 550613, -417223, -879755, -242968, 233673, 544427, -785564, 629044};
    vector<int> y = {-100260, -884142, 185546, -80730, 680794, 920981, -170577, 192375, 918464, -184721, -619912, 366019, -333926, -766771, -603028, -102523, -968686, 448379, -734798, -753409, -518142, -140490, 254363, 701659, 177954, -776198, 211390, -171985, 509367, -245765, 142112, 168913, -747245, 18472, -728608};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {-343849, -34242, 609039, 395116, -637984, 498757, -815629, -838490, 545143, 203861, 113309, -879109, -46571, -459158, -129979, -749379, 556914, 93836, -183821, -272391, 68144, -241543, 155293, 576622, 220374, 55721, -286546, -853760, 81042, -778697, -869679, 504193};
    vector<int> y = {-619255, -95584, -989633, -235476, -938710, -519667, -746671, -463822, 257967, -507203, 160631, 594701, 730059, 897972, -860115, 624003, 348550, -930982, -571639, 783605, -871874, -85175, -841525, -276216, 100198, 782653, 907808, -355648, -896664, -568903, -888725, -687555};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {-719190, -69488, -278415, 309656, 243487, -53542, 641669, -889360, 649796, 9441, -595804, 65334, 936, -453582, -240475, 445594, 259622, 644064, -329064, 935386, 29353, 572356, 672446, -994698, 804051, 932511, -765101, 628441, -683946, -440643, 524591, -848932, -349728, 944250, 304137, -965907, -426651, -610514, -135945};
    vector<int> y = {-887826, -289676, 148193, 742244, 699367, -676726, -408227, 365350, 799916, 261785, 711138, -600458, -365084, 678462, 554903, -638218, -86630, -504348, -807464, -560950, 36199, 101248, -820154, 389688, -573597, -943537, -159723, 149077, 216636, -474711, 194437, -736266, 125670, -728798, -570761, -530703, 836023, 358018, -200549};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {-97126, -809534, 967344, -221280, -279757, 67389, -710361, 629310, -484237, 944056, -986268, -86556, -535520, 722076, 732143, -7441, 797101, -399565, -30819, 138567};
    vector<int> y = {-387190, 478718, -969692, 832540, -966547, 811993, -581015, 139060, 148413, 125700, -612966, 593674, -262270, -65956, 475795, 388293, -13903, -407003, -392637, -204541};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {-461149, 635441, 768768, -845025, 477469, 899681, 728299, 303916, 58004, -510521, -861874, 102930};
    vector<int> y = {181313, -727643, -752580, 587041, -206365, -369387, -453885, 764986, -378662, 114523, -432070, 263672};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {819604, 582159, -503715, 261875, -217847};
    vector<int> y = {-294690, -402197, -59155, 120095, -647015};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {-436556, -484948, 73318, -7055, 424165, 359046, -411340, -564390, 697798, 232656, 814664, -383609, 568550, 727777, 180422, 835068, 846283, 680707, -664477, -934368, 635418, -727194, -968360, 46940, 113937, -497060, -683113, 229984};
    vector<int> y = {-621880, 165652, 225156, 933233, -825509, 175918, -747086, 856520, -670212, -905140, 411510, -183333, -344812, 900027, 966282, 904524, -976423, -135067, -698209, -226058, 189294, 146704, -432006, -815856, -551285, -719374, 446977, -541398};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {629389, -396274, 450488, -518031, 137654, 223000, -540047, 443128, 29268, -643216, 499635, 154995, 185890, 169951, -974849, -892677, -70865, 180472, -744221, 382741, -674856, -301527, -843610, -695629, 509722, -287308};
    vector<int> y = {985469, -243710, 576550, -768279, -975138, -470482, -116557, 609606, 481048, -157012, -864367, 500553, 644828, 214583, -470903, -483431, 846849, -426852, -857825, -412065, 832460, -529383, -338678, -643529, -38820, 868126};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {-410423, -352021, -515542, 839129, 282920, 655784, -412692, 117290, -262328, -531890, -951208, -742202, -755507, -40232, -145347, 9602, -88872, -842766, 718821, 666303, 117012, -934530, -96919, -829570, -661130, -14833, 494729, 840509, 209834};
    vector<int> y = {551903, 329983, -11776, 748625, -669558, -141412, -326146, 381698, -413564, 833256, -857046, 780520, -722999, 910800, 155839, -219760, 936868, -730258, 394225, 46355, -304104, 598736, -870563, 78580, 832040, -322623, -159445, -251939, 843052};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {320060, 794577, 917128, -966873, 417714, -820479, 790034, 158842, 166852, 453930, 227162};
    vector<int> y = {396612, 42277, -388068, -345155, -443218, 898265, 125554, -619772, -701300, -283528, 672842};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {12774, 564122, 542543, 7330, 179496, -699324, -899171, -188123, 147180, 732601, 99628, -430401, -90629, -525994};
    vector<int> y = {796175, 239597, -839452, -969463, 46265, -400341, 473038, -389584, 452929, 601634, 953531, -467442, 388802, 902475};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {-900465, -986763, -895665, 615613, 456762, 199635, -824797, 432169, -153382, -426055, -906499, 403111, 174150, 596255, 525275, 557122, 667547, -16290, -43664, 913448, 534934, 288161, 625512, -944293, 567608, 706547, -567052, -814631, 261614, -239929, 651050, -560380, 940558, 165619, 864104, -559535, 442989, -438564};
    vector<int> y = {389048, 338082, 715840, 735386, 538101, 45944, 945570, 346658, 221175, 476646, -151176, 274536, 623377, 378594, -56080, 72469, 742944, 560509, -561405, 459437, -464101, -195654, 370233, -335330, 405975, -923296, 592045, -902256, -900833, 779882, 959595, -175277, -832321, 833512, 470327, 109738, 882308, 721447};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {435354, 570415, -421605, -21013, 222623, 744410, -149078, -244142, -268121, 377528, 183871, 55021, 827547, 645824, -137183, 218184, -496345, 253423, -116147, 714206, 396735, 450405, -834241, -279091, 528354, 623422, 590602, 515708, 2331, 282367, 249604, -81229, -491020};
    vector<int> y = {-439383, 867454, -189472, -848570, 193286, 842615, -602657, 373145, -127132, 57995, 584816, 562726, 493088, 906643, 492334, 408287, -74372, 701224, 908938, 324439, 890344, 756378, -672134, 48378, -972997, -885863, -309683, -568903, 376276, 98730, -787209, 871738, 683139};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {-808129, -486165, -301275, -90818, 559894, 63911, -396438, 489842, -19473, 373418, -897240, -698277, -638937, 115705, 125827, 336423, -176997, -194208, 184919, -255120, -174132};
    vector<int> y = {586734, 173936, -455868, 534661, 942395, 680738, 884285, 398301, 4054, 247563, 479615, -541300, 242690, 727860, -520572, -989848, -872512, 684637, 417816, 735205, 814269};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {-603096, -192797, 651508, -190540, 2113, -8221, -470580, -337033, 537070, -748816, -735487, 832950, -612845, -561622, 492918, 495486, 471665, 647646, -946532, 360655, 647072, 468575, 284106, 498674, 249832, 705904, 824496, -309690, -513121, -960829, -151778, 973454, 567862, 768030, 319738, -880016, -578076, -292549, -93089};
    vector<int> y = {-966821, 943566, -174513, 315907, -150382, -195962, -711543, -991422, -45859, 766685, 230344, -379381, -709654, 661929, -847191, 216905, 118804, -77149, -28995, 513460, 749217, -136268, -977993, -95445, 955509, 958617, 599849, 138257, 251272, -355366, -323959, 139363, -526801, -910881, 356529, 383867, -507189, -806540, 563338};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {-706301, 951902, 387663, 7038, -173337, 568818, -492714, -838417, -889152, -811251, 957666, -44318, -456167, 745578, 930788, -671519, -224949, 294271, 326128, 670397, -111524, -347755, -630596, 6343, 171516, 911652, 293994, 311231, -262654, 353670, -49808, 224310};
    vector<int> y = {738260, 350943, -872482, -602507, 45302, -770205, -362799, -51280, -686283, 631296, -732917, 37743, -356914, 613883, -325335, 862732, 988948, 751440, 650699, -429764, -435167, 877072, -200869, -456988, 222875, -288089, -619483, -262174, -468103, 888255, 614451, -53019};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {-96998, 478129, -881931, 716010, 390428, -530129, -798313, -880726, 506159, -110941, 912587, 714082, -814878, -412420, 692273};
    vector<int> y = {309489, 328910, -463570, -307719, 16107, 696024, -970072, 982983, 830792, -771192, 994594, -406251, -493083, -657087, -756006};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {770137, 53087, 464121, -865680, 539075, 954110, 502905, -475652, -255891, 881766, -562840, 692836, 124450, -146312, 169756, 455408, 238949};
    vector<int> y = {395378, 567582, 514460, 250755, 192968, -442015, 320080, -12165, 260196, -852963, -180981, -169209, -216123, 584831, -486053, 909733, 709538};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {888725, -711478, -129938, -365181, 12953, -150497, -788926, 138918, -706682, 300636, 781510, 888375, -441862, 638287, -317222, 835788, 168495, -156648, -315197, 409096, 535056, 638180, 124785, 191039, -50487, 364275, -429315, -829012, 645207, 788172, -32918, -596669, 512460, -924188, 193959, 870606, -635454, -454556, 954833, 243664, 406377};
    vector<int> y = {-523340, -255363, -79131, -794768, -787124, -1958, -933539, 221351, -883717, 925283, 185731, -993062, -454171, 260168, -314481, 632195, -170976, -131973, 553836, 557253, -441143, 661385, 176522, -508104, -731372, -71440, -367148, 499697, -905874, 650723, 759367, -24188, 920199, 880343, -647760, -983961, 822169, 877891, -168816, 164015, -300116};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {-688917, 978469, -134683, -278606, 207124, 967763, -575459, 326061, -408473, -87622};
    vector<int> y = {73434, 643176, -421998, -67553, -945239, -745594, -123736, 550520, 589398, 248811};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {-797201, 659925, -485521, 509920, -293089, -528868, -701896, 91618, 621128, 712810, 652141, 645308, -817778, -914638, 589407, -278027, 668740, 15085};
    vector<int> y = {540974, -500414, 454598, -464767, -742498, 903685, -765975, 569887, 919731, -584545, 34762, 556233, -791083, 409849, 809110, 613604, 301119, -186290};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {741347, 337926, 984564, -619029, -733510, -501840, -159186, 900432, 549443, -233978, 425683, 57760, 446888, -69149, -578317, -108271};
    vector<int> y = {485040, 993003, -549353, 333264, 734563, 176647, -266927, 378119, 366340, 776201, -882816, -76921, -626609, -701920, 424204, -146704};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {753113, 760520, -290290, 152438, 873669, 585977, -367658, -687263, 155020, -865580, -217007, -129090, -70631, -955693, -601026, 269076, -761909, -616966, -22598, 51398, 525397, 818088, 404984, -523373, 257567};
    vector<int> y = {-113926, 729203, 113351, 809157, -768040, -136328, 228761, 613842, 296967, 947147, 935178, 157417, 905680, 54836, 610229, 905173, 29294, 169037, 88819, 665027, -312586, 975733, -993517, 923590, -100012};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {-616749, 150647, 194082, 538732, -757144, 869401, -829525, -663032, 899552, 822311, -512454, -435941, -470295, -810013, -610621, 804228, 359179, -570215, -819828, -663007, -163929, -893760, 232159, 870323, -656881, 865337};
    vector<int> y = {-746474, 353264, 409977, -900553, 709773, -437972, 706606, 984723, -119883, 131084, 924963, -64084, -677418, 74294, -649226, 545671, 976842, -268110, 671619, 185550, 136338, 922639, 808826, -111950, 166962, -974368};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {-709412, -867102, 803597, -157847, -797461, 678110, -366112, -934314, 738756, -163998, 368839, -448882, -920597, -441851, -147049, 555048, -219096};
    vector<int> y = {532969, -576471, 197592, -38514, 226454, -992253, -238469, 631999, 114287, 172281, 387054, 515525, 101638, 394510, 317498, -258381, 793581};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {93630, -898900, -965391};
    vector<int> y = {865331, 402457, -725854};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {415859, -668713, 661850, 419241, 802599, 830142, 494076, -296749, 543803, -526941, 855859, 761278, -639732, 19849, -815787, -617325, -422501, -581360, -582792, 699804, 252729, 522525, 688955, -300183};
    vector<int> y = {-522552, 390564, -293645, -425326, -104040, -272277, 470695, 252190, -469662, -710024, -94433, 665413, -58619, -840488, 808406, 630204, -588536, -532153, -98977, 30031, -446338, -882668, -194650, 501100};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {-902515, 370945, 847856, 445028, 207574, -607012, -39452, 532666, -395555, 992437, 973528, -948782, 4633, -148902, -548464, 754926, -884949, 517478, -844139, -948268, -102964, -912706, 327711, 948278, 815268, -543140, -491634, -789344, 38864, -405027};
    vector<int> y = {81923, -259304, 40715, -420729, -842429, 214907, -13265, -353971, 325970, 801092, -379799, -601417, -646156, -695711, -546983, -725847, 945748, 439873, 155938, 723441, -512789, -276535, 590550, 541697, -342371, 785044, -418897, -38659, -336659, -171512};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {585164, -79197, 973151, -12386, 829600, 140563, 352664, -403564, 843276, 972670, 855411, 267541, -561595, -676122, 972180, 705457, -635700, -706334, 791104, 523507, -809398, -77032, -143632, -850644, -307079, 438507, -460992, -178360, -216360, -989557, -984224, 794753, -408599, -926436, 947727, 127093, -401052, -242135, 135957, -143190, 540759, -152685};
    vector<int> y = {766673, 416830, -758438, 446673, -790665, 235232, -965911, 905963, 177581, -502809, 547842, -391914, 875312, 534223, 925633, -982480, -48521, -995079, -169303, 723401, -763771, 511699, 588473, -825199, -704876, -516493, -52965, -734385, -735095, -613022, 347141, 236152, 765628, -217769, -680354, 121580, -400646, 477702, -103178, -160746, -473720, 133972};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {501411, 783611, 162837, -170833, 553572, 454377, 344402, 153503, 887699, 698826, -558969, 572648, -595038, 7551, -610698, 696073, -373037, 183155, 899227, 488417, -160087, 395155, 948793, 700817, -10690, -757094, -387809, 497269, 803983, 366890, -748489, 846252, -189770, 335487, -755930, -527156, -221520, -395940, -875560, 303879, -688461, 310078, 29363, 796707, 416781, 427903};
    vector<int> y = {964524, 578516, -551700, -184852, 244915, 650658, -765139, 209650, -438880, 812661, 473276, 697583, 226703, -855536, 223662, -468780, -104100, -937354, -561842, -273982, 180846, -362030, -45084, 462220, 993667, 299219, -314132, -626432, 234688, -579633, -49758, 879709, 546697, 154544, -727325, 704127, -351777, -159585, 141777, -466846, -785660, 494251, 377102, 34718, -329642, 315462};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {-804937, -202965, 202664, -817417, 692879, 451380, -221207, -357974, 558362, -509233, -39879, -754044, 872582, 427956, 526208, -217037, -460623, -56889, -730865, 24791, 223115, 87581, 447461, -503454, 635881, 856316, 14881, -389001, 240785, 777633, 685004};
    vector<int> y = {402049, -135069, -946558, 950803, -438139, 535536, 624420, -377330, 989770, 921583, 63843, -464056, 292916, -864670, 810012, -427817, 615791, -471495, 277821, -282706, -790895, -173633, -219036, -58738, 465867, 631532, -993527, 550233, -714247, -300639, -696648};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {-157544, 779671, -985562, 423819, 474041, 128504, 39238, -939342, -1868, 661496, -335225, 538975, 877242, 195186, 293939, -380109, -383774, -496845, 526366, 634989};
    vector<int> y = {388635, -988571, 962620, -966295, 305647, 630322, 633022, -633502, -912054, -798950, -620677, 103593, -502430, -619524, -918919, 246705, 507842, 271755, -938264, 197893};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {340953, -259473};
    vector<int> y = {355413, -292843};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {310406, 464850, -224962, -74943, 267900, -547738, -107072, 279662, 732800, -923339, 625836, 867144, -726136, -160027, 47327, 709373, -670579, 4736, 38279, -164175, 891236, 641632, 377948, -634683, -896633, -11117, -41729, -903989, -413613, 811438, -85448, 669835, 843757, 211864, 862710, 183528, -397874, 925511, -753554, -576386};
    vector<int> y = {-851524, 561066, -397682, 16647, 610028, -186142, 572416, -188176, 178274, -869415, -567227, 607636, -817136, -718885, 347439, 40055, 541409, -290152, 404227, -835297, -171712, 816182, -955862, 37061, 558381, -346945, -203415, -207185, -321651, -68792, -795178, 50979, -363957, 62708, -574210, -687196, 118816, -191873, 97560, -139492};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {-846444, -809378, 247180, 658870, 265195, -314925, 106886, -306527, 590633, 874418, 183153, -785236, 883751, 3459, 159757, -959307, 324934};
    vector<int> y = {251586, 741502, 204848, 811410, -221527, -743219, -31994, 666531, -910023, 583064, -448059, -976192, 968471, 707777, -284001, -981213, 567340};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {580663, 469155, -261557, -894553, 594154, 84131, 223333, -4987, -308926, -388666, -643415, -541904, 425551, -329403, -405868, 731080};
    vector<int> y = {417067, -468065, 672707, 129157, 216140, -703621, 741433, 84147, 363028, 282364, -981347, -578882, 642531, -358316, -861128, -713308};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {-469969, -179944, -799172, -250794, 773183, -859815, -500126, 329476, -945982, 420297, 205934, 744706, -645760, -575546, -450028, 815088, 568330, -280017, -479602, -159151, -447870, 563268, 967166, 506297, -306786, -696505, 399965, -553109, 809974, -534910, -332232, 405998, -465029, -393749, 843340, 218844, 396224, -536523, -271170, -606331, -50075, 280104, -213596};
    vector<int> y = {328835, -9074, -744448, -769500, 475998, -713637, 483036, -990758, 257518, -356223, 710027, -669804, -294344, -923437, -19674, 620822, -465202, 501789, -638092, -104927, 491228, 423028, -583586, 583575, 894416, -44899, -866297, -727579, -5482, -903530, -28284, -783574, -318275, -321731, -889512, -711658, -381189, 8232, -911832, 593452, 547153, 30686, 919782};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {-338707, 541891, 71068, 71260, -49258, 767717, -333813, -126043, -969657, 484856, 48164, -573030, -316555, 266231, 736351, 18577, 496335, -723244, -524811, 587615, -632433, 515710, -35296, -511402};
    vector<int> y = {-118287, -821969, -820502, -220814, 485996, -957587, -646333, 44273, 519629, 974604, -659878, -784678, 306949, -945389, 68175, 42365, -420465, -191348, -52701, -975566, -730605, 748230, -655620, -792482};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {25210, -719973, -687063, 115363, -357772, 30182, 555460, 477172, -642493, -740957, -593166, 503573, -493482};
    vector<int> y = {700429, -550863, -37231, -604137, 601708, -295792, 28236, -207882, 543837, -82547, 154178, -704827, 40002};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {450384, -383341, 646507, 388538, 627342, 48763, 841299, -815369, -917029, -279486, -174319, -44060, -483022, -685344, -999448, -222753, -458603, 146331, 257107};
    vector<int> y = {-657536, 713845, -379617, 224472, -136872, 415679, -911637, -601233, -279175, -705424, -66443, -732976, 799298, 676536, 57772, -815463, 133603, -214771, 12893};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {-54121, 880171, -87014, -454322, 244409, -703962, 619978, 309593, -624308, -303494, -484757, 319612, -746259};
    vector<int> y = {132530, 886352, 344103, -289635, -689588, 132690, -868511, 938576, 754877, 823835, 134216, 234169, 802088};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x = {-292459, 706259, -818197, 328462, 181412, 339402, 857493, 893980, 568526, 989124, 694485, -878774, -945304};
    vector<int> y = {670408, -400518, 618840, -569133, 240781, 32377, -743232, 458835, -853503, -990009, -471026, 76885, -564927};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> x = {-948789, 604859, 558736, -423110, 400252, -239419, 848312, -223754, 682826, -169539, 252703, -163271, -590567, -769039, -352792, -790538, -284901, 943249, -820194, 448743, 187961, 256831, -158419, 460914, 869163, -505336, -133614, -321402, 242291, -743266, -978548, 949123, -833407, -835722, -401218, 360118, 232175, -374640, -103222, 628721, 97554, -583362, 982017, -181263, -342476, 725621};
    vector<int> y = {-209486, -616976, -71375, -506796, 3793, 664458, -300991, 466823, -771997, -688722, -403278, 824188, -752168, 278148, 672221, 602709, 998280, 615853, 583125, 608208, -361954, 222446, 609168, 19343, 75682, 615389, -173831, 979623, 249382, -570259, 436399, -774558, 83120, -757675, -475421, 476511, 647546, -396559, 737113, -144278, 112197, -17185, 769056, 973000, -375793, -154400};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> x = {506973, -75351, 569858, 469842, -296520, 74987, -121578, 414922, 380876, -659968, -369, 728984, -165772, 953456, -307905, 948037, 303962, -247065, 933204, 435376, -361730, -886919, -193490, -5338, 3536, 720960, -623629, 796800, 962849, 948013, -487136, -406595, -349443, 246707, -656413, 753356, -478977, -974239, 245024, -525153, -340727};
    vector<int> y = {-638406, 960364, 671109, -198265, 920827, -872618, 560129, 60788, -750355, -513551, -798594, 104549, 562005, 501095, -753386, 714388, -391899, -506716, 505105, -795819, -240957, -933204, -189901, -931617, 656795, -178767, 136570, -470877, -14944, 703820, -179715, 149498, -724606, 455828, 518808, -220595, 828046, -540594, 688009, -967658, 289888};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> x = {-232975, -176273, 166716, -119134, -903445, -856137, -191986, 359274, -326735, 284145, 74674, 309458, -808985, -920477, 834043, -449237, 921357, 371594, -777435, -922224, -228067, -70284, 630945, -71172, -101288, 326301, -490969, 853111, 36712, -926614, 363870, -679462, 99093};
    vector<int> y = {637626, 380060, 371699, -674085, 776336, -927462, 554367, -204483, 106928, 581352, 252059, 344829, 541990, 54206, -172602, -265675, -625334, 773741, -772002, -446375, -845104, -141639, 919332, -547725, -476843, 650736, -874102, -568362, 824771, 373633, -384089, -687525, 358310};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> x = {11, 21, 0};
    vector<int> y = {-20, 42, 7};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> x = {-2};
    vector<int> y = {-1};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> x = {-1};
    vector<int> y = {-2};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> x = {1, 2};
    vector<int> y = {2, 2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> x = {1, 3};
    vector<int> y = {0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> x = {-1};
    vector<int> y = {0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> x = {-3};
    vector<int> y = {0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> x = {1, 1};
    vector<int> y = {1, 2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> x = {1, 0};
    vector<int> y = {0, 1};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> x = {1, 3};
    vector<int> y = {2, 3};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> x = {1, -5};
    vector<int> y = {0, -7};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> x = {1, 2};
    vector<int> y = {0, 2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> x = {-2};
    vector<int> y = {1};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> x = {1, -1};
    vector<int> y = {0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> x = {0, 0};
    vector<int> y = {1, 2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> x = {0, 1};
    vector<int> y = {1, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> x = {3, -3};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> x = {-1, -3};
    vector<int> y = {0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> x = {-19};
    vector<int> y = {4};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> x = {-1, 2};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> x = {1, 0};
    vector<int> y = {1, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> x = {0};
    vector<int> y = {-1};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> x = {1, 3};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> x = {1, 2};
    vector<int> y = {3, 3};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> x = {5, 3, 2};
    vector<int> y = {2, 4, 2};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> x = {1, 1};
    vector<int> y = {2, 4};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> x = {0, 0};
    vector<int> y = {2, 3};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> x = {1, -2};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> x = {0, 0};
    vector<int> y = {2, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> x = {1, -1, 0, 0};
    vector<int> y = {0, 0, 1, -1};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> x = {-1, -9};
    vector<int> y = {9, 6};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> x = {0, 1};
    vector<int> y = {1, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> x = {-1, -1, 1, 1};
    vector<int> y = {-1, 1, 1, -1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> x = {1001, -4000};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> x = {1, 0};
    vector<int> y = {0, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> x = {1, 2};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> x = {1, 2};
    vector<int> y = {2, 1};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> x = {-3};
    vector<int> y = {3};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> x = {2, 3};
    vector<int> y = {2, -2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> x = {1, 1, 3};
    vector<int> y = {1, 2, 4};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> x = {2, 3};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> x = {-9};
    vector<int> y = {0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> x = {0, 0};
    vector<int> y = {-1, -3};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> x = {-1};
    vector<int> y = {1};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> x = {-11};
    vector<int> y = {0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> x = {1, 2};
    vector<int> y = {1, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> x = {-1, 1};
    vector<int> y = {0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> x = {1, 3, 4};
    vector<int> y = {0, 0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> x = {0, 0};
    vector<int> y = {1, 3};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> x = {2, 1};
    vector<int> y = {2, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> x = {1, 1};
    vector<int> y = {0, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> x = {0, 0};
    vector<int> y = {1, 3};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> x = {1, 1};
    vector<int> y = {0, 2};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> x = {1001, -4000};
    vector<int> y = {0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> x = {-1, -9, 1};
    vector<int> y = {9, 6, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> x = {1, 0, 1};
    vector<int> y = {2, 2, 4};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> x = {0, 2};
    vector<int> y = {1, 3};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> x = {1001, -4000, 997};
    vector<int> y = {0, 0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> x = {1, 2, 3, 4, 3};
    vector<int> y = {1, 2, 3, 4, 2};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> x = {1};
    vector<int> y = {1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> x = {1, 4};
    vector<int> y = {2, 5};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> x = {10, 2, 3};
    vector<int> y = {0, 0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 0, 9, 8, 7, 76, 6, 56, 5, 34, 123, 345, 54, 345, 341232, 534, 534123, 534, 534, 534, 53, 44, 2, 34, 23, 656, 765, 756, 67756, 78, 4};
    vector<int> y = {234, 23, 2, 34, 23, 4, 5, 65, 65, 65, 687, 67, 123, 45, 35, 4, 45, 7876, 876, 34, 45, 3, 454, 123, 567, 5674, 123, 645, 7567, 6, 34, 534, 56, 7, 45234, 56, 64, 56, 45, 76, 7, 3, 534, 65, 4, 7566, 45, 566, 654, 76456};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> x = {0, 1};
    vector<int> y = {2, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> x = {1, 2};
    vector<int> y = {1, 3};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> x = {1, 1};
    vector<int> y = {1, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> x = {0, -1};
    vector<int> y = {1, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> x = {2, 3, 5};
    vector<int> y = {0, 0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> x = {3, 3};
    vector<int> y = {1, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> x = {0, 1};
    vector<int> y = {1, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> x = {1, -1, 0};
    vector<int> y = {1, -1, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> x = {3, 1};
    vector<int> y = {0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> x = {1, 3};
    vector<int> y = {4, 3};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> x = {0, 0, 0};
    vector<int> y = {1, 2, 3};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> x = {1, 2};
    vector<int> y = {2, 5};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> x = {-100};
    vector<int> y = {-101};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> x = {0, 3};
    vector<int> y = {1, 2};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> x = {-1};
    vector<int> y = {-4};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> x = {-1, -1};
    vector<int> y = {-1, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> x = {1, 1};
    vector<int> y = {2, 4};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> x = {2, 3, 1};
    vector<int> y = {3, 4, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> x = {1, 6};
    vector<int> y = {6, 2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> x = {3};
    vector<int> y = {3};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> x = {-5, 2};
    vector<int> y = {-4, 2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> x = {-4959, 3467, 1334, 1500, 4169, 724, -3522, 4358, 1962, -536, 705, 3145, -1719, 1827, 4961, -4509, -2005, -3058, -173, 436, -2609, -396, -1098, -4847, -4708, -2618, 2421, 3716, 4718, 4895, 447, -3274, -229, -3462, -3131, 4912, 667, 1299, 2035, 4894, 3703, -1189, -3678, -4667, 2673, -336, 141, 2711, 3253, 1868};
    vector<int> y = {547, 2644, -2338, -2243, -4963, -2141, 3723, 4741, 2529, -4222, -2684, -1965, -2810, -3158, -4712, -4894, 4040, 3942, 4264, -2352, 2446, -1195, 890, 1729, -630, 350, 6, -3899, -607, -1452, 4629, -2377, -916, 4954, 3756, -3160, -34, 2376, -1069, 1308, 1944, -2561, -374, -3677, 537, -3462, 1118, -2918, -2071, 1541};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> x = {-1, 2};
    vector<int> y = {-2, 3};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> x = {1, -1};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> x = {3, 1};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> x = {1, 2, 3, 4, 5, 6};
    vector<int> y = {0, 0, 0, 0, 0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> x = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72};
    vector<int> y = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> x = {0, 0, 0, 0};
    vector<int> y = {3, 1, 5, 7};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> x = {15, 1, 79, 46, 61};
    vector<int> y = {69, 37, 94, 81, 46};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> x = {3};
    vector<int> y = {2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> x = {-5, -3, 4};
    vector<int> y = {0, 0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> x = {-2, -1, 2, 1};
    vector<int> y = {-1, 1, 2, -2};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> x = {2, 4};
    vector<int> y = {1, 3};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> x = {2, 2, 3};
    vector<int> y = {0, 1, 2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 113, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> x = {-4000, 1001};
    vector<int> y = {0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> x = {-1, 1, 1};
    vector<int> y = {-1, 1, 2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> x = {1, 2};
    vector<int> y = {0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> x = {0, 0};
    vector<int> y = {1, -1};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> x = {2, 3, 5, 4};
    vector<int> y = {0, 0, 0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> x = {1, 2, 3, 4};
    vector<int> y = {2, 3, 4, 4};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> x = {0};
    vector<int> y = {-3};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> x = {2, 1, 1, 4, 5};
    vector<int> y = {0, 2, 4, 4, 8};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> x = {-1, -1};
    vector<int> y = {0, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> x = {2, 3};
    vector<int> y = {1, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> x = {1, 2};
    vector<int> y = {0, 3};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> x = {3, 5};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> x = {2, 4, 4};
    vector<int> y = {0, 0, 1};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> x = {0, 0};
    vector<int> y = {10, 7};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> x = {-1, 1};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> x = {-1, -1, 1, 1, 1};
    vector<int> y = {-1, 1, 2, 4, 6};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> x = {2, 2, 2};
    vector<int> y = {2, 1, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> x = {1, 3};
    vector<int> y = {2, 4};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> x = {1, 4};
    vector<int> y = {2, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> x = {2, 1};
    vector<int> y = {0, 0};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> x = {2};
    vector<int> y = {2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> x = {1};
    vector<int> y = {2};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> x = {-1, 1, 0, 0};
    vector<int> y = {0, 0, 1, -1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> x = {2, 3};
    vector<int> y = {4, 4};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<int> x = {1, 0};
    vector<int> y = {2, 2};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<int> x = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47};
    vector<int> y = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<int> x = {0};
    vector<int> y = {1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<int> x = {0, 3};
    vector<int> y = {1, 3};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<int> x = {-5, -7};
    vector<int> y = {-4, -8};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<int> x = {1, 2};
    vector<int> y = {2, 3};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<int> x = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CANNOT";
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<int> x = {2, 2};
    vector<int> y = {0, 1};
    int wantedParity = 0;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<int> x = {1, 1};
    vector<int> y = {1, 0};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<int> x = {-1, -1};
    vector<int> y = {0, 1};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<int> x = {-9};
    vector<int> y = {-8};
    int wantedParity = 1;
    EvenRoute* pObj = new EvenRoute();
    clock_t start = clock();
    string result = pObj->isItPossible(x, y, wantedParity);
    clock_t end = clock();
    delete pObj;
    string expected = "CAN";
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22921626&rd=14729&pm=11808
********************************************************************************
#line 5 "EvenRoute.cpp" 
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
 
#define PB push_back 
#define MP make_pair 
 
#define REP(i,n) for(i=0;i<(n);++i) 
#define FOR(i,l,h) for(i=(l);i<=(h);++i) 
#define FORD(i,h,l) for(i=(h);i>=(l);--i) 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef long long LL; 
typedef pair<int,int> PII; 
 
 
class EvenRoute 
{ 
        public: 
        string isItPossible(vector <int> x, vector <int> y, int w) 
        { 
                int n, ans1; 
                int flag = 0; 
        n = x.size(); 
                for (int i = 0; i < n; i++) 
                { 
          ans1 = abs(x[i]) + abs(y[i]); 
          if ((ans1 & 1) == w) 
          { 
            return "CAN"; 
          } 
        } 
                return "CANNOT"; 
        } 
         
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/