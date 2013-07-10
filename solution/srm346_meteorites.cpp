/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7683
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

class Meteorites {
public:
    double perimeter(vector<int> x, vector<int> y, vector<int> r);
};

double Meteorites::perimeter(vector<int> x, vector<int> y, vector<int> r) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 10};
    vector<int> y = {0, 0};
    vector<int> r = {6, 7};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 63.72326520248748;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {-10, -10, -10, 0, 0, 0, 10, 10, 10};
    vector<int> y = {-10, 0, 10, -10, 0, 10, -10, 0, 10};
    vector<int> r = {7, 7, 7, 7, 7, 7, 7, 7, 7};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 135.3757009200326;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {-100, 100, 100, -100};
    vector<int> y = {-100, -100, 100, 100};
    vector<int> r = {110, 110, 110, 110};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2008.3301227325105;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 0, 0, 0};
    vector<int> y = {0, 0, 0, 0};
    vector<int> r = {1, 2, 3, 100000};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 628318.5307179586;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 0, 123, 345, 437, 9, 87, 32, 67, 8, 2514, 376, 1400};
    vector<int> y = {0, 1, 67543, 86, 2, 56, 1453, 45, 4356, 4, 634, 24, 1109};
    vector<int> r = {56, 56, 345, 834, 724, 934, 513, 52, 452, 354, 541, 541, 890};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 18640.610497639977;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {-1000000};
    vector<int> y = {1000000};
    vector<int> r = {1000000};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6283185.307179586;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {0, 1000, -1000, -1000, 1000, 2000, 3000, 4000, 2000, 4000, 5500, 4001, 2501, 5501};
    vector<int> y = {0, 2000, -1000, 7, 100, 2000, 3000, 2000, 4000, 4000, 4000, 5500, 3999, 4003};
    vector<int> r = {1000, 1200, 500, 10, 200, 400, 1090, 1760, 1077, 1500, 1, 2, 180, 13};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 29961.59041870208;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {0, 3, 3, -3, -3, 4, 4, -4, -4};
    vector<int> y = {0, 4, -4, 4, -4, 3, -3, 3, -3};
    vector<int> r = {4, 2, 2, 2, 2, 2, 2, 2, 2};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 52.62601110436389;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {0, 3, 3, -3, -3, 4, 4, -4, -4};
    vector<int> y = {0, 4, -4, 4, -4, 3, -3, 3, -3};
    vector<int> r = {6, 3, 3, 3, 3, 3, 3, 3, 3};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 51.030982363044366;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {0, 4};
    vector<int> y = {0, 0};
    vector<int> r = {3, 5};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 34.405693408734464;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {0, 0, 8, 8};
    vector<int> y = {0, 8, 8, 0};
    vector<int> r = {7, 7, 7, 7};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 78.04404956922885;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {0, 0, 200, 200};
    vector<int> y = {0, 200, 200, 0};
    vector<int> r = {101, 100, 101, 100};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2365.376409614406;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {-719194, 452084, -248679, -200180, 899314, -401412, -612550, 623574, 939320, -295315, -222435, 671640, 384578, 869828, 466869, 575202, -383563, -920262, 888304, 552572, -487991, -174184, 930238, 432172, -619780, 91869, 820064, -505901, -503782, 420978, -461261, -857256, -415706, -494950, 977739, 704841, -323983, 510617, -46043, 271055, -352419, -852122, -973921, 316573, -71446, -44802, 120198, -370602, -505217, 760376};
    vector<int> y = {320494, 623003, 619439, 238966, 864240, 429750, 135622, -794555, -261367, -216452, -599245, 592536, 710904, 841011, 678894, 340761, 167383, -116888, -359106, -143808, -486982, -644136, 689694, -382847, 985927, -234451, -513943, -704308, 705508, -504720, 293804, -816126, 843976, -248255, 542282, 225748, -750900, 35896, 445985, 372137, 762327, -488610, 669750, 13588, -943679, 937073, -600841, -802069, -332261, -759292};
    vector<int> r = {735445, 719053, 482318, 621434, 219394, 876124, 924117, 271949, 492480, 227580, 114726, 452807, 99315, 848213, 583016, 113435, 609372, 928539, 752814, 214744, 916792, 13403, 203853, 382369, 703865, 398609, 902216, 716516, 886961, 510760, 534779, 347333, 616543, 645541, 289359, 806573, 333672, 60660, 536374, 208576, 337940, 341189, 866965, 102325, 867859, 249691, 80015, 915934, 224063, 462816};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.22285716816561E7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {-977971, 412177, 545088, 547529, -879024, -223351, -627764, -559854, 552604, -697097, -177511, 822544, -353798, -945327, 600434, -898774, -168715, 876573, -674230, -615681, 762989, -743175, 32987, 853390, -135439, 194144, -507928, 603203, 200442, -603943, 127160, 150076, -161362, -546526, -533719, -731374, -326569, 541189, 236505, -828251, 645600, -729166, 732846, 362479, 712343, -220678};
    vector<int> y = {-459265, -558015, 610363, 527769, 867601, -7786, 664865, -29968, -971170, 718289, 707041, 520393, -554086, -303694, 334171, -407408, -499764, 577141, -204857, 179611, -844975, -218401, 969470, 904332, 949075, -179526, -238424, 303971, 61029, -740291, 889164, -382639, -290577, -279459, 813670, -882429, 816610, 716236, 231226, 974160, 319422, 254697, 537695, 250513, -892466, -530834};
    vector<int> r = {522052, 994819, 203464, 155633, 236163, 768271, 911588, 1304, 784678, 323335, 13842, 586858, 619871, 313464, 822833, 584859, 673456, 624314, 876132, 730482, 99639, 414294, 703613, 69082, 301834, 634965, 17625, 118908, 777728, 635948, 811725, 468384, 920580, 589464, 961069, 582686, 973210, 984707, 174571, 684759, 595531, 271933, 232339, 387903, 445673, 309355};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.138483238337112E7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-326792, 879984, -267133, 631643, 228186, -888630, 773061, 175908, -985434, -344375, -961623, -765530, -609101, 331375, -386275, -333972, -421014, -503236, -745332, -651753, -951603, -329265, 100539, 384311, -132058, -126698, 599587, -725050, -546844, -670394, -8105, -344937, 688, -207839, -305977, 586268, 268437, 184282, 510316, 414395, 448968, -782490, -558598, 780242, 503784};
    vector<int> y = {225170, 702330, -685968, 780938, -521418, -778811, 258695, -59773, -942484, -904916, 957277, -775875, 852824, -590122, 379649, 309418, -368981, -661464, 173193, -28125, -824852, -820873, -480142, -411277, 477163, 581417, 270150, 472795, -170340, -166603, -508192, -120206, 662130, -275883, -921078, 138497, -131689, 427660, -8964, 953714, -804717, 71459, 733683, -777283, -470861};
    vector<int> r = {146466, 501212, 775493, 85555, 234992, 351878, 358214, 184892, 679031, 678093, 196273, 331836, 93733, 600028, 877473, 671279, 360296, 87811, 501761, 933019, 473642, 796054, 342953, 494876, 344376, 141899, 468027, 891965, 634073, 889988, 663867, 813739, 766551, 570343, 284828, 480344, 663686, 331924, 696067, 668151, 800692, 459654, 344283, 285443, 380175};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0999212457543412E7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {45855, -459443, -994215, 253688, 895526, -158487, 513718, -121718, -48912, 990729, 94569, -695832, -596196, 897277, 27082, -245652, 246957, -973439, -535036, 533187, 745000, 102883, 409544, 704830, 979154, 309069, 995097, 592434, 61669, -341491, 589819, -273808, -394199, 911270, 307844, -683774, 63729, 452513, 440367, -510162, 839809, -609757, 175549, -1731, 419744, -847867, -671687, 241640, -36327};
    vector<int> y = {861475, 312694, 34926, 424190, -621296, -588119, -482733, -580067, 735801, 328490, -363877, -86880, -357127, 975840, 200307, -103671, -989748, 459447, -813750, 937643, 35278, 141294, 419469, -257012, -91284, 729823, 939757, 437032, 454722, 885415, 782104, 347972, -672617, -10475, -896500, -505838, 535149, 258405, -427100, 872839, -790418, 869994, -318429, 993424, 951602, 658030, -354234, -98301, 260994};
    vector<int> r = {905447, 671009, 438766, 288797, 805449, 788801, 386219, 624694, 774696, 17369, 38949, 650958, 499925, 784730, 215476, 819589, 517715, 609268, 485816, 60429, 591172, 528956, 506060, 934027, 434578, 774109, 714155, 210781, 455632, 160463, 967848, 626388, 544983, 378370, 257147, 642301, 235634, 831113, 569184, 533305, 901950, 210087, 248882, 486534, 345572, 493827, 652663, 805639, 699532};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1347197609944772E7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {249, 511639, -588981, 158920, 538296, -246683, -584486, 405950, -629584, -276332, -70431, -310050, 505810, 142620, 188900, 426897, -128956, 578289, -292833, 186989, -453236, -660325, -661999, -60851, 163442, -202999, -155967, -226054, 39538, 276103, -322033, 553070, -666118, 161505, 623375, -481716, -40875, -116159, 604023, 602869, 435022, 407110, 332885, 639671, 66522, -343019, 671428, -604602, -317351, -324244};
    vector<int> y = {-332, 435456, 322363, 652318, 402047, 624762, 330688, -535879, 234784, 612053, 667914, 595152, 442288, 656044, 644912, -518597, 658520, 341883, 604235, -645921, 495622, -122886, -114684, -669819, 651102, 640370, 653699, -632972, -670249, -612592, 589492, 381936, -82637, 651793, -251349, -468390, 670265, -662369, 295342, 297016, -512545, -534976, -583922, -207958, -669286, -578489, -22873, 292545, -592417, 588077};
    vector<int> r = {671871, 3204, 6921, 5098, 333, 6589, 875, 884, 8387, 5629, 1115, 4656, 737, 3710, 6008, 5361, 4747, 6823, 4261, 6810, 5718, 5287, 3457, 6951, 4394, 6764, 8936, 1827, 8841, 4904, 6630, 3538, 6397, 2791, 8610, 6399, 548, 7061, 3308, 9439, 230, 7267, 1406, 5705, 6008, 5466, 5487, 5923, 658, 1132};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4476143.214659139;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {336, 164865, -271897, -313938, 259895, 344563, -123550, 146445, 137473, -228321, 330078, -281705, 335916, -328622, -208949, -64620, 293050, 332313, -333040, 98078, -296963, 322142, 168011, 334814, 207033, 254250, 311777, -328437, 213994, -89242, -341524, 279313, -322865, 203446};
    vector<int> y = {971, -300740, 211566, 140276, 226313, -777, 321506, -310098, -314501, -256175, 98676, -195389, -75300, -99776, 273243, 338916, 181109, -85469, -83956, -328081, 173311, 122568, 300577, 80486, -273781, -230565, 146696, 102009, -268424, 332014, 42670, -200307, 119271, -276337};
    vector<int> r = {343802, 1844, 9285, 2012, 1195, 4824, 3744, 3123, 3445, 5805, 5969, 2791, 6658, 3904, 5033, 4789, 1799, 8011, 3698, 9237, 2361, 7117, 3900, 1170, 3561, 2712, 1709, 2552, 5360, 9742, 8150, 4445, 7256, 6265};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2325793.4735397277;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {39, 175085, -537146};
    vector<int> y = {-670, 633121, -379197};
    vector<int> r = {657333, 3971, 5919};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4141540.316607796;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {-321, 565326, 231453, -343069, -443199, 520036, -35576, -682225, 625634, -657683, 144292, 484655, -529078, -402950, -380276, 682865, 143784, 688438, -19205, -490805, -648150, -381414, 257948, 172829, 673160, -691525, -680671, -666373, 613665, 669563, 155217, -200727, 275219, 680445, 692972, -272057, 514877, 401907, -605677, 127254, -94617, -107817, 350942, 591588, -42605, 452850, -609129, 381889, 664276};
    vector<int> y = {-357, 407173, 657153, -607439, 537618, -465172, 695848, 144953, -307017, 231644, 681748, -501153, -454663, 568727, -584069, 138942, 681699, 109273, -697084, 495058, -258647, 583484, -647557, -675810, 179571, 92114, 150843, 204067, 330023, 194486, -679707, -667971, -641322, -150082, -73805, 641124, 470025, 568987, -345291, 685243, -691102, 688408, -602835, 367906, 695940, 528676, 340700, 582206, 210755};
    vector<int> r = {697117, 2219, 7906, 1920, 3161, 8923, 337, 1514, 2115, 1956, 3076, 1518, 133, 308, 8357, 6048, 6697, 3337, 2573, 746, 3713, 1364, 4676, 1704, 3931, 3848, 3253, 8559, 3254, 9190, 8266, 4715, 7771, 8201, 2374, 8620, 8896, 3840, 9411, 7314, 414, 669, 6692, 105, 5640, 5281, 6576, 5227, 6299};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4625355.904340492;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-982125, -947135, -850397, -849727, -891228, -945660, -888902, -850286, -920087, -845510, -961495, -880361, -804265, -993243, -923740, -984908, -850314, -794380, -934885, -876147, -855887, -849269, -825080, -907825, -990521, -994554, -819340, -892804, -980872, -889870, -834900, -849731, -939658, -920739, -884313, -915974, -877140, -912815, -918277, -853658, -891907, -892935, -996095, -883893, -780892, -945712, -941536, -862817, -939450, -866306};
    vector<int> y = {-804998, -662199, -846845, -744267, -958659, -604540, -899414, -730751, -668535, -934394, -987932, -921939, -887816, -688835, -727921, -948964, -861446, -898255, -984505, -915993, -686049, -865198, -692578, -748334, -989767, -959279, -804725, -849753, -592142, -736628, -742586, -759725, -663613, -830979, -709642, -955098, -887642, -673840, -708446, -849406, -924445, -927993, -913146, -767261, -759631, -914908, -643253, -794733, -949466, -671782};
    vector<int> r = {150458, 497119, 671409, 340518, 754430, 878832, 135591, 323945, 121461, 780871, 538520, 557423, 972471, 362734, 572427, 812731, 443591, 922281, 485400, 349638, 238512, 588483, 523977, 961501, 566340, 764904, 638492, 838804, 846467, 635910, 121021, 549037, 396749, 773683, 413686, 149100, 680519, 978772, 498012, 576487, 337118, 500211, 705623, 429245, 971942, 336761, 536700, 859590, 550344, 555319};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6663315.494888882;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {605718, 212549, 903626, -192621, 887781, -151897, -217284, 701037, -119862, 119849, 791883, 640511, 278808, -235612, -316740, -137715, -332372, 43771, -139093, -20198, 423832, 299343, -79399, 841664, -370551};
    vector<int> y = {156136, -764575, -689718, 574673, -660309, 697520, 418521, -815713, -364751, 920503, 988304, -720889, -701571, 506439, 262126, 565403, 438045, 907162, -201977, 816164, -784891, -742761, 746733, -765819, 99809};
    vector<int> r = {915574, 899941, 572511, 599889, 621990, 156667, 951837, 714327, 536397, 255510, 842625, 491957, 353935, 288264, 134131, 637082, 832282, 690095, 974981, 952839, 569932, 590316, 437020, 986390, 731367};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.097300806421218E7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {-51180, 553672, 236631, 586017, 593658, -441205, -329533, 145608, 566948, 62153, -126302, 475843, 200312, 557284, 32692, -642775, -722138, -478816, -395532, 325539, -726508, 552183};
    vector<int> y = {746595, 518903, 132793, 879675, 922975, 208643, 175489, 76704, 826236, 109339, 125073, 492041, 123153, 939567, 6239, 789870, 951501, 301378, 166655, 204554, 727397, 453664};
    vector<int> r = {646921, 476754, 611609, 166748, 277982, 704456, 750301, 929002, 252068, 112939, 213275, 773192, 562703, 105700, 975324, 937690, 780721, 402737, 640893, 433862, 668944, 865340};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 8874264.690015806;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {-987577, -137060, -492230, -66784, -394489, -98958, -816061, 3308, -175480, -827581, -76311, -3724, -76120, -352735, -238569, -6920, -85074, -450292, -322038, -97437, -335366, -81947, -42727, -884578, -855737, -262864, -694987, -120572, -91551, -420403, -951543, -124573, -100803, -367636, -128513, -167065, -237760, -98821, -66638, -830482, -78449, -236456, -53900, -216952, -293297, -232764, -575048, -26805, -313513};
    vector<int> y = {-628897, -110702, 176415, -831324, 196297, -677653, 358102, -534285, 22746, 334186, -313165, -813976, -92328, 123606, 31369, -642952, -300178, 188032, 6357, -839742, 89021, -526580, -494281, 337109, 322357, 23484, 240319, -270457, -623558, 76781, 284718, -183168, -590231, 135885, -215021, -107915, -100865, -825946, -381887, 326090, -295667, 130858, -883389, 1549, 24897, -64560, 239540, -459485, -26558};
    vector<int> r = {954949, 508718, 222756, 130964, 891609, 722900, 486036, 613042, 970060, 647628, 921939, 843248, 938674, 584741, 696586, 833741, 439949, 434983, 783193, 585824, 208142, 764875, 134231, 195031, 212081, 284966, 750916, 157422, 843626, 880533, 508869, 260813, 668925, 808596, 708786, 491275, 674978, 681021, 173594, 973919, 586475, 974611, 668723, 860473, 124388, 551015, 744354, 196177, 472808};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 9559807.675095629;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {0, -97498, 66048, 159275, -444602, 248729, -104302, -449856, 723877, -486862, 344900, 642076, 473580, -114492, 88939, 71032, -268870, 616389, 80168, 727296, 795222, 110074, -42274, -518240, -19328, -380777, 282937, -15869, 284172, -23353, -52378, 949357, 736969, 875459, -676634, -19653, 129537, -361770, -466475, 725614, -807423, 290140, 339194, -43677, 810819, 938517, -417464, 500409, 33245, -340165};
    vector<int> y = {0, 123197, -111437, 10155, 583110, 265514, -290211, 390391, 618151, -4036, 211171, 247565, -72036, 575629, -550185, -303480, 712982, -432338, -182469, 572952, 561903, 205893, -49946, 332738, -98012, 534268, -928803, 882521, -367343, 6725, 12733, -13202, -194812, 364498, 153277, 64952, 32660, -390896, -566136, -23130, 508104, 256781, 51581, 86594, -438737, 268656, 670523, -831919, -70845, 182957};
    vector<int> r = {1000000, 842888, 870458, 840399, 266725, 636179, 691612, 404367, 48100, 513119, 595585, 311848, 520970, 413093, 442670, 688315, 238004, 247102, 800694, 74128, 26286, 766527, 934563, 384134, 900098, 343923, 29055, 117334, 535568, 975695, 946094, 50549, 237715, 51690, 306220, 932137, 866407, 467384, 266438, 274015, 46005, 612547, 656904, 903012, 78088, 23785, 210138, 29174, 921740, 613752};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6283185.307179586;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {462224, 521698, -184204, 168347, -443946, -1470, -2447, 375330, 4858, -72645, 551399, -154497, -521883, 150690, 458701, 318536, -84780, 431321, -726118, -438690, -5850, 0, -207908, -113746, -277451, -478728, -248419, 70430, 61032, 18182, 687002, 713338, -84789, 56692, 204032, 929211, 329212, 414879, -577277, -152099, 505578, -62277, -271667, 908391, 607624, 631816, -679743, 50026, 262849, 291204};
    vector<int> y = {360646, -776873, -127306, 197808, 359456, 2937, -10930, -106357, 322973, -112051, 751553, 187372, -494561, 44320, -141460, 263127, 165789, 254271, 48812, 689320, -38761, 0, 118376, -289964, -796735, -272376, 383922, -126176, -641363, -175629, 199189, -631863, -401205, -137401, -552136, 314313, -523017, -323864, -763306, -864554, 9251, 222183, -69352, 144559, -708690, 553173, 503005, -7437, 210089, -540987};
    vector<int> r = {413724, 64209, 776082, 740250, 428774, 996713, 988797, 609889, 676988, 866458, 67864, 757144, 281003, 842925, 519979, 586837, 813789, 499306, 272241, 182923, 960797, 1000000, 760751, 688521, 156335, 449208, 542714, 855496, 355737, 823430, 284702, 47053, 589931, 851360, 411369, 19066, 381995, 473677, 42979, 122166, 494335, 769251, 719618, 80176, 66483, 160240, 154382, 949422, 663505, 385614};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6283185.307179586;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {591642, 756623, -736642, -757516, 519731, 400523, 20756, 39323, 49608, -786415, 622647, 12372, -179792, 159180, -361822, 73778, -829887, -296703, -123074, 0};
    vector<int> y = {472373, 370978, -85262, 57188, 227529, 340646, 60692, 285820, 59987, 177862, 558063, -674722, 670926, 117226, -274534, 56765, 192714, 56255, -370033, 0};
    vector<int> r = {242913, 157321, 258438, 240326, 432644, 474204, 935854, 711485, 922155, 193720, 163861, 325162, 305399, 802310, 545812, 906909, 148029, 698009, 610034, 1000000};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6283185.307179586;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {99086, -47956, 227356, -363670, 205848, -530778, 600194, -73746, 0, -294733, 513580, 462310, -638560, 239837, 344163};
    vector<int> y = {-41507, 681045, -192564, -219131, -276923, 42653, 374014, -787643, 0, -325865, 371643, -100020, 727348, 470406, -375321};
    vector<int> r = {892569, 317266, 702052, 575410, 654947, 467508, 292806, 208910, 1000000, 560616, 366055, 526991, 32116, 471979, 490768};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6283185.307179586;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-545392, 544458, -566102, 549342, 30009, 514791, 473177, -501439, -338272, -505194, -950684, 133, 722489, 532853, 71254, 968084, -57487, 9801, -88146, 363815, -86669, -65147, -920564, -100769, 34353, 386, -117200, 96283, -545170, -392947, -278651, 311676, -22108, -654651, 316143, -342333, 318651, 19368, 466095, -927783, -431744, 429089, 445349, 63515, -186272, 129114, 84078, 0, -715798};
    vector<int> y = {-55008, -331239, -367366, -239552, -111214, -536065, -512669, -617350, -485860, -129147, 174588, 22993, -506400, -328685, -237736, -249459, 264509, 9626, 48249, 607043, -15688, -217851, -210411, -320948, -464859, -400596, 84218, 974755, 85101, 190707, -724709, -856611, -142117, -154529, 178046, 330040, -628756, -24695, -550340, -7973, 255858, -466266, -148523, -221775, -127178, -184114, 204219, 0, -588957};
    vector<int> r = {451838, 362695, 325142, 400696, 884806, 256778, 302340, 204660, 407977, 478557, 33415, 977004, 117710, 373925, 751813, 289, 729314, 986260, 899510, 292281, 911920, 772614, 55693, 663602, 533871, 599401, 855677, 20499, 448225, 563218, 223564, 88447, 856171, 327355, 637166, 524478, 295105, 968613, 278805, 72180, 498134, 366340, 530535, 769306, 774450, 775123, 779148, 1000000, 73047};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6283185.307179586;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {27441, 27426, 28442, 29433, 30508, 24367, 29443, 25395, 30486, 29482, 29495, 26422, 25374, 28490, 26459, 30428, 24426, 25359, 28439, 30431, 26375, 26436, 25368, 28430, 24419, 25360, 24339, 25418, 26441, 28418, 30454, 25441, 29413, 27438, 31459, 29451, 27383, 27433, 28401, 27403, 30516, 29479, 24337, 27405, 30481, 26391, 26415, 28456, 24406, 24388};
    vector<int> y = {-18144, -8052, -28217, -13082, -33217, -18158, -28175, -13052, -13077, -33219, -23114, -18132, -28168, -3018, -23156, -3063, -3000, -18141, -8082, -8113, -28176, -8036, -23187, -13108, -13078, -33229, -23203, -8120, -33235, -33243, -18085, -3069, -18080, -28240, -33247, -8033, -23172, -3054, -18168, -33269, -23192, -3063, -33212, -13099, -28183, -13073, -3039, -23154, -28236, -8080};
    vector<int> r = {5210, 5719, 5114, 5564, 5422, 5096, 5056, 5916, 5478, 5612, 6040, 5458, 5074, 5740, 5066, 5538, 5707, 5898, 5850, 5760, 5197, 5706, 5582, 5347, 5785, 5692, 5201, 5859, 5391, 5255, 5284, 5471, 5236, 5078, 5496, 5949, 5077, 5300, 5088, 5638, 5127, 5844, 5662, 5405, 5834, 5321, 5827, 5600, 5894, 5287};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 111373.3577102927;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {-58497, -54382, -54424, -50353, -54400, -50354, -58474, -58458, -58539, -54403, -58524, -50344, -54384, -50320, -50345};
    vector<int> y = {88903, 88873, 80869, 88866, 72900, 80889, 64846, 72873, 80845, 64870, 56795, 72866, 56832, 56858, 64868};
    vector<int> r = {8885, 9076, 8101, 10770, 11096, 10174, 9554, 11159, 11872, 8408, 9856, 10914, 9810, 8320, 10355};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 143415.6926842999;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {47476, 47426, 47417, 50833, 47469, 50770, 50763, 50746, 50800, 50756, 47455, 47445, 47434, 50754, 50795, 50777, 47479, 54115, 54121, 54125, 47450, 47420, 47443, 47424, 47457, 50770, 50835, 47438, 47474, 50745, 50822, 50756, 50820, 47403, 50774, 54075};
    vector<int> y = {99157, 167410, 173689, 124003, 111556, 105347, 148803, 179832, 155031, 161206, 105280, 130118, 117694, 86719, 167449, 117693, 155026, 105302, 92894, 99093, 161269, 92930, 148842, 136386, 142610, 92899, 130205, 179829, 86654, 99115, 173641, 136393, 142554, 123927, 111569, 86688};
    vector<int> r = {6474, 9351, 6514, 8991, 6591, 8428, 7529, 8338, 8168, 9422, 8749, 7518, 7134, 9158, 7333, 8524, 8971, 8500, 9474, 8281, 6290, 9376, 9228, 8608, 7544, 7876, 7706, 9225, 6898, 7932, 7351, 8544, 8072, 8074, 8369, 7245};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 258670.03517598487;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {53842, 36789, 53926, 45392, 45364, 36824, 45359, 53895, 53867, 36786, 45390, 36808, 53838, 53912, 45359, 36837, 53882, 53858, 45396, 36827, 53894, 53923, 36839, 36789, 45344, 36786, 36795, 62443, 45391, 53860, 45328, 53905, 36817, 45368, 53901, 45339, 45370, 45390, 53838, 45368, 36829, 36850, 53868, 36830, 36781, 36812, 53910, 45376, 45395};
    vector<int> y = {105458, 47088, 54376, 105404, 61687, 25239, 39835, 32605, 76307, 54448, 98082, 98172, 83509, 47105, 25332, 76292, 61688, 98164, 119996, 112710, 39875, 90823, 83593, 119955, 83519, 90839, 105424, 10712, 76315, 119952, 10693, 18038, 32588, 47134, 10670, 32542, 68998, 54455, 112654, 112695, 18032, 39874, 68941, 61655, 10750, 68958, 25255, 18028, 90800};
    vector<int> r = {10554, 11135, 8606, 15625, 11562, 8879, 13027, 11218, 10427, 15549, 8809, 10287, 14445, 14364, 9852, 12108, 14816, 15456, 9411, 12105, 15014, 10290, 11434, 12950, 12339, 11517, 8606, 15454, 15015, 9856, 15213, 11975, 15518, 8918, 10534, 14079, 11900, 14128, 15224, 14927, 13658, 9460, 13877, 10113, 15494, 14121, 8702, 13097, 8854};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 369337.3774601991;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {-70881, -63605, -63655, -67235, -67297, -70879, -63588, -67296, -70872, -63663, -70823, -63648, -70877, -63664, -67245, -70880, -67243, -67220, -67223, -70913, -67234, -70873, -67238, -70898, -67271, -67264, -70852, -67290, -67253, -67236, -70833, -63656, -70895, -70824, -70842, -67240, -70892, -70837, -70823, -70860, -67280, -67240, -70880, -67236, -70880, -63607, -67204, -67277, -67207, -70839};
    vector<int> y = {75379, 32023, 24787, 97026, 86182, 64491, 39213, 42782, 60894, 28329, 79021, 46398, 89812, 50071, 79024, 24742, 46398, 82579, 75333, 42863, 35635, 57329, 71722, 82621, 57323, 93472, 28366, 53691, 31940, 24774, 53653, 35615, 97045, 86163, 31937, 68091, 93411, 46465, 71766, 50072, 28405, 60934, 68095, 39197, 39212, 42846, 50077, 89869, 64482, 35574};
    vector<int> r = {4282, 3738, 4540, 4240, 3752, 3694, 4093, 4419, 3639, 4130, 4229, 4394, 4499, 3860, 4009, 3617, 3760, 3885, 4008, 4308, 4262, 4454, 3874, 4073, 3710, 4295, 4106, 4166, 4419, 4305, 4278, 3791, 3758, 4543, 3893, 4013, 4393, 4257, 4249, 4279, 4269, 3947, 3782, 4249, 4158, 3927, 4064, 4105, 4015, 4141};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 188520.35832559172;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {48268, 41887, 48248, 60983, 41948, 54636, 41858, 67392, 61039, 41914, 48264, 41926, 67348, 54613, 48309, 60996, 61042, 67360, 54676, 41876, 67343, 48317, 48228, 61002, 48276, 54654, 41916, 48285, 54624, 60971, 54631, 54613, 60982, 67382, 48234, 41902, 61040, 67364, 67367, 67373, 60994, 41885, 54678, 54634};
    vector<int> y = {-38009, -6232, -18900, -18933, -44455, -44397, -38040, -12600, -6202, 169, -12577, -12616, -44467, -6210, -44468, -38015, -31666, -31720, -31735, -25348, -50791, -50784, -31681, -50799, -6155, -50836, -31717, -25340, -38031, -12609, -18933, 200, 184, -38072, 125, -18939, -44442, -25324, -18942, -6173, -25348, -50795, -12592, -25336};
    vector<int> r = {6969, 6854, 6798, 6933, 6531, 6947, 6469, 7168, 6381, 7056, 6798, 7079, 7245, 6885, 7126, 7045, 6409, 7208, 7073, 6508, 6678, 6566, 6395, 6476, 6922, 6479, 6917, 6467, 6695, 6381, 7001, 6527, 7200, 7236, 6933, 6747, 6529, 7347, 6694, 7312, 6756, 6717, 6889, 6996};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 199151.63072150963;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {42490, 42466, 49858, 42496, 42415, 49914, 42421, 57295, 49919, 49908, 57262, 49841, 42428, 49841, 49893, 49844, 49868, 42487, 42492, 42409};
    vector<int> y = {31823, 9513, 2144, 46597, 24324, 9511, 16928, -12700, 24376, 31734, -5300, -5276, 2143, 16970, -12675, 39217, 46576, -12719, 39167, -5312};
    vector<int> r = {8210, 7593, 8292, 8237, 7542, 8005, 8055, 8036, 8318, 8329, 8382, 7871, 7515, 8044, 7473, 8343, 7422, 8069, 8028, 7964};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 200217.83695627906;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {14089, 32374, 14093, 32381, 14087, 14096, 23253, 14113, 14102, 32373, 14108, 14138, 32383, 23191, 23233, 32362, 14133, 23213, 23181, 23205, 14079, 32353, 14115, 14147, 23264, 14114, 23223, 23239, 23202, 23211, 32377, 23278, 32330, 14123, 23222, 23260, 23267, 32378, 23274, 23273, 23224, 14132, 14072, 32365, 32385, 14108, 14076, 23237, 14080};
    vector<int> y = {27852, 55220, 110038, 18771, 82673, 91775, 46112, 64358, 146577, 37010, 100961, 37022, 64449, -17760, 55305, 46098, 137446, -8702, 9571, 91761, 119170, 73531, 18746, -8650, 119214, 467, 128292, 18734, 73538, 27907, 479, 146562, 27830, 128337, 110121, 64418, 36953, -17790, 100940, 137479, 460, 46174, 55241, 9597, -8709, 9643, -17809, 82659, 73568};
    vector<int> r = {9684, 9565, 10130, 9904, 9862, 9415, 9415, 9327, 9653, 10087, 9243, 9602, 9926, 9463, 9184, 9418, 9672, 10047, 10066, 9796, 9574, 10013, 9406, 9194, 9913, 9794, 9765, 9292, 9804, 9319, 9477, 9677, 9215, 9484, 9426, 9765, 9268, 9200, 9584, 9456, 9968, 9843, 10015, 9784, 9981, 9260, 9401, 9730, 9491};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 435867.7174877981;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {77889, 77817, 77826, 87556, 77856, 77909, 87597, 87557, 77837, 77832, 77880, 87576, 87629, 87630, 87637, 87600, 77861, 87560, 87645, 87623, 77894, 87562, 87589, 87620, 77871, 77894, 77863, 87614, 87559, 77845, 77839, 77899, 87565, 87591, 87565, 77840, 87552, 87551, 87548, 77870, 87549, 77904, 77825, 77893, 77866, 77819, 77845, 87640, 77872, 87612};
    vector<int> y = {46248, -2429, 17070, 143624, 163057, 85197, 85219, 75413, 114417, 94895, 75492, 17096, 7347, 231170, 65715, 202040, 7324, 114372, 211738, 192274, 172809, 94965, 182543, 133882, 231190, 143646, 124086, 124125, 36477, 65704, 202011, 221446, -2384, 104626, 163091, 55949, 26818, 172766, 221455, 182591, 55967, 26834, 36537, 104704, 133872, 192235, 153347, 153360, 211734, 46243};
    vector<int> r = {9756, 9777, 9898, 9915, 9915, 9767, 9772, 9804, 9810, 9884, 9874, 9835, 9904, 9915, 9769, 9843, 9767, 9747, 9898, 9930, 9762, 9780, 9868, 9868, 9835, 9776, 9870, 9827, 9793, 9873, 9839, 9837, 9912, 9735, 9764, 9934, 9780, 9800, 9772, 9909, 9743, 9837, 9864, 9894, 9847, 9812, 9828, 9735, 9838, 9931};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 571110.1158207011;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {-554, 2496, 5564, -461, 5537, -3565, -507, 2500, -6514, -6517, 2500, -3485, -3522, -3538, 5528, -6543, 2502, -486, 5516, -6537};
    vector<int> y = {-16760, -19701, -19786, -19738, -13673, -22785, -22795, -13687, -16758, -19762, -16750, -13699, -16671, -19759, -16751, -13668, -22796, -13710, -22740, -22771};
    vector<int> r = {3132, 3142, 3194, 3196, 3089, 3180, 3197, 3050, 3112, 3188, 3077, 3132, 3054, 3177, 3043, 3166, 3134, 3054, 3219, 3076};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 63876.00766370537;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {48310, 55989, 40527, 48272, 71529, 55987, 63785, 71470, 32796, 32813, 79263, 40602, 48296, 63810, 71511, 32815, 79260, 63805, 79288, 40574, 56067};
    vector<int> y = {9133, 24616, 16869, 24636, 24660, 9172, 9156, 16850, 16903, 9195, 16894, 9198, 16868, 16907, 9192, 24621, 9117, 24599, 24589, 24642, 16882};
    vector<int> r = {7805, 7918, 7849, 7856, 7815, 7819, 7868, 7788, 7793, 7838, 7896, 7812, 7761, 7759, 7810, 7769, 7880, 7826, 7845, 7852, 7849};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 178716.82685410336;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {-90677, -84453, -88607, -88576, -86536, -86570, -82345, -90731, -86509, -90702, -88590, -82349, -88622, -84477, -90703, -88631, -86561, -90683, -88568, -86540, -88596, -84436, -90641, -82387, -82400, -90730, -82403, -84418, -82334, -86490, -82408, -90730, -84421, -86563, -88637, -82416, -84469, -84421, -84444, -90682, -88614, -86493, -86500, -82333, -86570, -90708, -88582, -82408, -84449};
    vector<int> y = {-1925, -3968, -6128, -1914, 10493, 177, 100, 10500, 4296, 102, 160, 6386, 2245, 6408, 14664, 12586, -1972, 8492, -3974, 12561, 8499, 10567, 2256, 8454, -1974, 4284, 4274, 180, 10538, 2227, 12592, 12616, 4324, 6332, 6329, -6081, 14663, 12566, -6086, -4014, 14649, 8474, -4023, -4034, 14713, 6379, 10539, 2178, 8430};
    vector<int> r = {2249, 2084, 2155, 2090, 2108, 2272, 2142, 2249, 2240, 2230, 2121, 2179, 2226, 2194, 2085, 2176, 2097, 2103, 2243, 2161, 2217, 2266, 2190, 2219, 2229, 2227, 2253, 2098, 2217, 2273, 2084, 2273, 2248, 2130, 2194, 2211, 2103, 2163, 2173, 2252, 2115, 2165, 2192, 2133, 2234, 2089, 2248, 2217, 2084};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 73161.72809491484;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {358577, 579399, -191627, 589514, 358915, 237777, -139708, -153706, 686249, 428987, 338812, 346227, 609800, 297991, -81529, 256259, 818523, 384446, 907149, 291916, 462516, -775562, 465399, -59151, -237330, -222218, 416455, 218239, 334575, 296912, 689805, 862205, 773092, 795477, 193371, 7915, -70093, 16618, 717506, 785834, 34357, 697596, 633948, -36292, 472643, 386474, 498848, 756744, -966130, 882063};
    vector<int> y = {-107896, -315318, -772507, -924699, -676852, -577355, -395049, 541910, -677932, 150454, -822608, 642404, -488862, -495256, -817190, -402445, 503671, -473722, 7277, 512961, -566937, 742700, -616838, -359709, -775925, -260539, -237475, -394984, -178888, -103586, -833439, 668253, -932522, 518621, -170008, -217935, -484455, -687276, -900309, -149357, -393645, -828707, 620040, 1325, -397850, -896577, -935096, -267632, 392142, -962117};
    vector<int> r = {509712, 482110, 128569, 481523, 300793, 703152, 447676, 733265, 85343, 732417, 78433, 500425, 309231, 56058, 555218, 860336, 513815, 80781, 73629, 301430, 253460, 251298, 270005, 328678, 855569, 342437, 490515, 521026, 37209, 342745, 43361, 680567, 190942, 252737, 757906, 72186, 671525, 286851, 711318, 127723, 798458, 32657, 439, 680427, 682148, 190956, 177526, 575387, 396082, 290668};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.090670891077729E7;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {934958, 905377, 626887, -657477, 591216, 134250, -138311, 535528, 804707, -103381, -656312, 208761, 924495, 493222, 540922, -560843, 202690, 254860, -21996, 634991, -819530, 558662, 240080, -694897, 164301, 687418, 379964, -621178, -160251, 882456, 584085, 739357, 850834, 260569, -30873, 935058, 425516, -403721, -146521, 816616, -144225, 630744, 502711, -534596, 435859};
    vector<int> y = {40737, 387783, -891, -819872, 648736, -165542, -368778, 457208, 252579, 23655, -814894, 16455, 411428, -479968, -561487, 502105, -219994, 523347, 787878, -416860, -412420, 33103, -355267, 427374, -395560, -238980, 215016, -763711, 813306, -162999, 354418, 49772, 94007, -148034, 71246, 40157, -293076, 548796, -31570, 306849, -118524, -294174, -213333, 71475, -126818};
    vector<int> r = {435458, 346028, 452307, 55849, 874451, 659324, 702644, 291592, 919081, 716252, 283215, 48123, 14565, 362404, 969222, 864445, 64813, 217010, 463256, 165036, 93661, 409486, 813784, 432388, 947688, 305815, 619847, 386231, 721851, 948206, 995334, 317088, 433138, 253545, 850947, 139455, 372307, 273340, 888950, 539853, 707857, 636618, 3846, 718154, 190436};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0218655294908693E7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {357242, 465026, 926733, -157024, 301618, 565658, 48408, 795186, 428206, 327241, 402267, 771276, 173511, 850622, -47524, -794024, 855811, 959519};
    vector<int> y = {-733656, -856729, 52147, -682595, -313754, -476425, -312697, -158401, -571236, -404366, -844184, -47163, -552132, 111636, 288800, -108050, 14664, 41334};
    vector<int> r = {602394, 466852, 106190, 640895, 29790, 492525, 335567, 377813, 248367, 760225, 100913, 274811, 225245, 880867, 72782, 829813, 61652, 7049};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 9591468.609287847;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {316152, 876943, 233355, -292466, 736093, -304877, -665503, 527602, -542836, -210056, 503274, 670202, 704666, -37428, 208448, -940163, -718803, 198618, -365557, 487770, -324089, -955541, 770191, -684407, -56587, 190010, 894356, 675610, 753325, -118203, -27446, 52935, 344869, -413352, -524689, -334918, -97025, -38287, 718258, -818431, 932306, 773457, 232649, 701773, 93591, 193469, 209909, 887975, 48929};
    vector<int> y = {983584, 436247, -389629, 651142, 949810, 682541, -679331, 698427, -745933, 654577, 597496, 401710, 68041, -826432, 934391, -508116, -599377, 823851, 110405, 666384, -97170, -721217, 989662, 134287, -915941, -343476, 465800, -270755, 749088, -316995, -904407, 139976, 528641, 283362, -397473, 533247, -737686, -916984, 453555, -765056, 958881, 89410, -390172, 307454, -605090, 825680, 550408, 411711, -304409};
    vector<int> r = {207794, 28816, 85587, 636906, 886575, 801412, 189491, 75314, 211036, 863180, 490807, 311062, 183738, 323889, 946927, 596940, 600168, 308628, 311479, 546245, 687441, 608815, 266607, 710342, 13841, 889066, 65861, 410952, 383061, 731112, 109992, 146034, 733464, 225456, 724689, 321308, 790775, 25538, 154547, 975395, 113278, 783316, 69426, 461357, 454768, 576314, 487464, 346517, 569494};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1206887727097197E7;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {495613, 495795, 495237, 495491, 495600, 494427, 495717, 495671, 495571, 495079, 495752, 495866, 495719, 495664, 495509, 495393, 495613, 495766, 496131, 495485, 495579, 495420, 495311, 495521, 495724, 495488, 495494, 495260, 496732, 495495, 495734, 495549, 493215, 494990, 496364, 495721, 495579, 494476, 493748, 496062, 495348, 495845, 494525, 496130, 495611, 495595, 495317, 495672, 494484, 495340};
    vector<int> y = {-233024, -232749, -232691, -233452, -233578, -233865, -233313, -233336, -232756, -232583, -233032, -233840, -233768, -233365, -232795, -233165, -233860, -233880, -233219, -233313, -234750, -233152, -232661, -233581, -233532, -233470, -233384, -232463, -235001, -232553, -233697, -233503, -232508, -232034, -233955, -233670, -233664, -232446, -233994, -233380, -233480, -233112, -232334, -234276, -233103, -232789, -232920, -233550, -233880, -232641};
    vector<int> r = {119, 243, 96, 508, 170, 143, 36, 34, 489, 752, 20, 694, 435, 302, 701, 16, 171, 749, 98, 988, 974, 223, 786, 471, 390, 101, 294, 423, 778, 607, 8, 187, 402, 147, 637, 403, 900, 607, 617, 90, 949, 335, 222, 647, 248, 148, 998, 221, 980, 921};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 16742.982119698085;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {-35072, -36864, -36160, -36081, -36163, -36625, -36005, -36931, -36066, -35677, -36313, -36647, -36061, -35907, -35708, -36125, -34942, -36161, -36015, -35798, -36121, -35684};
    vector<int> y = {-714508, -714806, -714538, -714567, -714884, -714558, -714536, -714886, -714503, -714706, -714841, -714505, -714603, -713808, -713768, -714569, -713928, -714143, -713918, -714630, -714564, -715115};
    vector<int> r = {979, 736, 178, 91, 240, 250, 487, 368, 120, 371, 268, 27, 634, 354, 884, 393, 581, 287, 790, 35, 721, 586};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10369.730103519334;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {-717044, -715816, -715853, -716422, -716849, -716443, -715950, -716059, -717000, -715677, -716447, -716607, -716413};
    vector<int> y = {343306, 342863, 342462, 341908, 343098, 342822, 342804, 343078, 342929, 341918, 342255, 342719, 342821};
    vector<int> r = {190, 628, 819, 990, 344, 697, 893, 570, 813, 741, 154, 596, 667};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 9451.491714376696;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {194263, 194011, 194065, 194040, 194080, 193493, 193469, 193839, 194413, 194097, 194460, 193718, 194029, 193670, 193709, 194578, 194291, 193973, 194233, 194280, 193913, 193947, 194547, 194663, 194140, 194977, 193984, 194229, 194686, 194242, 193945, 193245, 194088, 194181, 194112, 193944, 194777, 193745, 192533, 193828, 194920, 194204, 194142, 193813, 193995, 194120, 193684, 193939, 193668};
    vector<int> y = {43299, 42097, 43285, 42384, 42180, 42330, 42591, 41110, 41042, 42170, 42968, 43091, 41959, 42491, 42201, 42969, 42255, 42158, 43201, 41576, 42262, 42195, 42786, 42016, 42235, 42869, 41638, 42276, 41857, 42140, 42171, 43754, 42835, 42071, 41240, 42207, 42675, 42022, 44603, 42949, 41629, 42174, 42057, 42037, 42174, 41931, 42356, 42228, 41697};
    vector<int> r = {737, 768, 533, 340, 184, 618, 168, 267, 913, 789, 664, 563, 243, 653, 340, 518, 575, 345, 466, 932, 289, 216, 487, 316, 355, 768, 463, 91, 831, 517, 154, 587, 983, 544, 27, 138, 914, 932, 573, 32, 619, 844, 650, 489, 329, 390, 973, 281, 746};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 15423.626184744304;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {614916, 614954, 614881, 614953, 615026, 614981, 614774, 614951, 614885, 614848, 614929, 614921, 614884, 615020, 614875, 614992, 614926, 614844, 615001, 614835, 614863, 614915, 614949, 614989, 614855, 614952, 614798, 615152, 615015, 614992, 614939, 614952, 614911, 614933, 615037, 614858, 614889, 614972, 614917, 614908, 614873, 614870, 614999, 614809, 614859, 614797, 615013, 614966, 614844, 614819};
    vector<int> y = {82207, 82237, 82372, 82343, 82306, 82303, 82176, 82387, 82357, 82372, 82288, 82284, 82389, 82169, 82405, 82257, 82269, 82475, 82289, 82385, 82371, 82263, 82283, 82316, 82470, 82268, 82300, 82342, 82346, 82185, 82309, 82399, 82346, 82462, 82284, 82281, 82359, 82278, 82293, 82279, 82308, 82397, 82381, 82297, 82379, 82282, 82260, 82280, 82279, 82289};
    vector<int> r = {90, 9, 75, 79, 60, 19, 56, 53, 62, 45, 7, 14, 28, 97, 48, 54, 49, 36, 59, 9, 71, 86, 6, 46, 39, 2, 26, 41, 7, 100, 55, 73, 1, 28, 23, 93, 53, 81, 64, 28, 30, 20, 73, 84, 36, 77, 6, 57, 43, 58};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1863.4414926327204;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {247425, 247553, 247529, 247484, 247548, 247492, 247553, 247435, 247613, 247608, 247495, 247596, 247461, 247469, 247422, 247434, 247495, 247563, 247547, 247400, 247490, 247376, 247430, 247467, 247461, 247437, 247522, 247319, 247434, 247449};
    vector<int> y = {46356, 46450, 46453, 46463, 46445, 46485, 46463, 46389, 46452, 46481, 46426, 46438, 46416, 46531, 46481, 46489, 46390, 46440, 46442, 46264, 46422, 46489, 46533, 46440, 46368, 46494, 46515, 46352, 46405, 46409};
    vector<int> r = {25, 40, 31, 15, 52, 42, 93, 33, 96, 3, 85, 14, 25, 71, 2, 48, 52, 10, 62, 50, 59, 100, 76, 85, 10, 33, 52, 62, 21, 29};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1765.590212079342;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {549248, 549144, 549103, 549139, 549199, 549143, 549168, 549105, 549158, 549308, 549112, 549189, 549291, 549118, 549125};
    vector<int> y = {-436018, -436131, -436081, -436131, -436110, -436116, -436099, -436145, -436141, -436141, -436197, -436222, -436031, -436089, -436085};
    vector<int> r = {63, 64, 72, 31, 51, 41, 41, 41, 16, 83, 97, 73, 34, 14, 17};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1367.045403209348;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {546009, 546094, 546168, 545892, 546006, 546127, 546138, 545910, 545928, 546129, 546077, 546050, 545933, 546080, 545922, 546050, 546009, 545862, 545913, 545913, 546065, 546252, 546072, 546049, 545823, 546040, 546172, 546108, 546043, 546145, 546085, 546118, 546042, 546108, 546023, 545899, 546101, 546139, 545937, 546305, 546003, 546096, 546086, 546005, 546134, 545929, 546278, 546174, 546060};
    vector<int> y = {-464731, -464605, -464546, -464744, -464731, -464666, -464657, -464669, -464612, -464753, -464595, -464684, -464795, -464586, -464654, -464693, -464635, -464719, -464660, -464679, -464604, -464632, -464609, -464790, -464658, -464702, -464580, -464602, -464691, -464707, -464667, -464662, -464641, -464685, -464745, -464669, -464650, -464543, -464679, -464535, -464741, -464817, -464803, -464765, -464639, -464710, -464607, -464611, -464697};
    vector<int> r = {55, 48, 72, 57, 16, 47, 95, 99, 61, 75, 42, 74, 93, 35, 73, 33, 73, 35, 29, 6, 2, 88, 54, 94, 48, 100, 48, 85, 26, 69, 84, 14, 31, 76, 38, 87, 91, 11, 98, 20, 70, 34, 5, 69, 55, 77, 6, 45, 100};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1749.380554118555;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {385259, 385263, 385388, 385374, 385244, 385304, 385281, 385296, 385244, 385244, 385286, 385267, 385222, 385304, 385316, 385249, 385281, 385234, 385185, 385269, 385192, 385297, 385335, 385199, 385217, 385244, 385276, 385241, 385456, 385237, 385280, 385269, 385275, 385281, 385227, 385255, 385225, 385279, 385260, 385104, 385344, 385310, 385266, 385270, 385236, 385259, 385333, 385121, 385209, 385358};
    vector<int> y = {-35805, -35881, -35925, -35941, -35890, -35794, -35982, -35750, -35883, -35904, -35886, -35885, -35884, -35850, -35891, -35905, -36069, -35990, -35779, -35908, -35860, -35935, -35921, -35893, -35854, -35948, -36035, -35897, -35760, -35990, -35995, -35884, -36017, -35860, -35856, -35891, -35904, -35885, -35951, -35966, -35821, -35965, -36011, -35913, -35980, -35852, -35903, -35871, -35909, -35845};
    vector<int> r = {4, 24, 59, 18, 34, 27, 86, 53, 38, 42, 3, 2, 46, 62, 53, 33, 8, 85, 46, 27, 57, 65, 68, 45, 48, 50, 93, 81, 48, 45, 89, 3, 28, 17, 91, 20, 51, 19, 75, 86, 97, 60, 92, 22, 59, 5, 57, 62, 42, 83};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1678.7017355434816;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {927020, 926847, 926858, 926801, 926923, 926817, 926930, 926870, 926853, 926913, 926881, 926871, 926825, 926837, 926838, 926952, 926863, 926852, 926871, 926848, 926849, 926912};
    vector<int> y = {36550, 36621, 36578, 36665, 36563, 36648, 36583, 36613, 36612, 36563, 36609, 36620, 36613, 36647, 36687, 36627, 36712, 36687, 36620, 36633, 36679, 36556};
    vector<int> r = {91, 46, 19, 33, 91, 2, 62, 5, 22, 90, 27, 2, 20, 25, 32, 82, 45, 90, 6, 40, 14, 60};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1063.6501214002506;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {-931359, -931333, -931361, -931217, -931252, -931291, -931421, -931454, -931315, -931333, -931527, -931515, -931227, -931304, -931277, -931402, -931164, -931276, -931375};
    vector<int> y = {-219487, -219352, -219354, -219251, -219298, -219255, -219360, -219387, -219191, -219462, -219268, -219402, -219323, -219506, -219299, -219500, -219323, -219117, -219407};
    vector<int> r = {13, 83, 18, 36, 53, 43, 52, 46, 83, 32, 98, 80, 54, 9, 2, 90, 91, 17, 42};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2182.14102441414;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-474736, -474840, -474798, -474975, -474634, -474789, -474655, -475063, -474873, -474877, -474908, -475024, -474844, -474981, -474903, -474861, -474858, -474998, -474934, -475006, -474708, -475026, -474908, -474680, -474873, -474932, -475004, -474910, -475004, -474543, -474951, -474912, -474934, -474994, -474808, -474794, -474857, -474828, -474950, -474832, -474987, -474836, -474864, -475015, -474981, -474852, -474936, -474682, -474860};
    vector<int> y = {80079, 79970, 80050, 80087, 80085, 80024, 79970, 79988, 80080, 80041, 80071, 80029, 80088, 80032, 79961, 79996, 80095, 80052, 80076, 79997, 80158, 79978, 80053, 80000, 80059, 80013, 79888, 80056, 79952, 80007, 80058, 80045, 80128, 80027, 80113, 80028, 80014, 80080, 79995, 80049, 79971, 80200, 80047, 80101, 79992, 79991, 80011, 80015, 80010};
    vector<int> r = {85, 40, 90, 16, 46, 11, 95, 74, 14, 96, 46, 10, 74, 47, 40, 1, 13, 10, 39, 87, 62, 41, 7, 49, 28, 52, 98, 17, 49, 43, 72, 89, 83, 10, 8, 88, 18, 79, 95, 63, 92, 95, 68, 72, 7, 20, 81, 40, 77};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2063.922761031443;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {845328, 835560, 856226, 859926, 834260, 868595, 843545, 843536, 834227, 853185, 852289, 835811, 835914, 842424, 836753, 837636, 830752, 831947, 846265, 828928, 840633, 831846, 840286, 834941, 839448, 843597, 842365, 845580, 851572, 833869, 848282, 842989, 843497, 839241, 845196, 833805, 843706, 839778, 839099, 845311, 851209, 843902, 846526, 833128, 837916, 841154, 845403, 841312, 842252, 842007};
    vector<int> y = {-188857, -203181, -206728, -208704, -208812, -215156, -207033, -196012, -207672, -216355, -203124, -200353, -195459, -188230, -208302, -197348, -199290, -188620, -193406, -204861, -208844, -199420, -197967, -195597, -192922, -209791, -198232, -198945, -209820, -213861, -215130, -206542, -204819, -186344, -201884, -202779, -212394, -206110, -212579, -201308, -197730, -201960, -217321, -204357, -201405, -185173, -211603, -203995, -207978, -203134};
    vector<int> r = {2710, 6272, 8506, 6400, 8148, 9842, 4500, 6431, 4413, 6763, 4320, 3083, 3139, 9598, 9234, 8075, 5305, 4752, 2059, 7948, 4802, 9295, 7586, 408, 2978, 8885, 9284, 9191, 4479, 692, 8471, 5990, 3471, 7119, 909, 8303, 253, 66, 4942, 1016, 7934, 6115, 2010, 2815, 9832, 5548, 8002, 2617, 7351, 7786};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 172913.3829438101;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {166085, 170427, 161046, 160352, 168092, 171012, 165773, 165091, 162432, 167129, 161396, 172894, 162707, 164444, 158471, 157678, 168095, 167156, 166188, 156808, 166566, 166653, 171019, 183078, 170233, 167282, 171045, 172860, 175730, 165753, 161191, 169831, 154521, 168287, 172478, 155928, 166371, 165360, 170780, 169275, 164933, 167276};
    vector<int> y = {416872, 420962, 420083, 412216, 427933, 429424, 417172, 418385, 419409, 420878, 412727, 412482, 423285, 411743, 423165, 404857, 420164, 425683, 424244, 421517, 414583, 418866, 417160, 411020, 433559, 420741, 402014, 436627, 419312, 430855, 439270, 434187, 413725, 429486, 415680, 435607, 422721, 421041, 430558, 422274, 429203, 414416};
    vector<int> r = {562, 3077, 6688, 9796, 718, 3701, 4196, 6319, 9474, 3727, 3749, 7767, 2019, 5824, 4340, 9079, 9622, 4252, 7707, 5346, 2672, 5436, 4543, 9355, 4881, 2231, 3970, 7550, 2398, 4269, 9259, 2661, 9148, 1300, 2931, 9106, 8504, 1362, 3194, 2044, 3048, 2312};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 205363.39509804262;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {-524178, -516289, -535793, -537739, -531512, -533398, -541196, -528351, -534088, -533938, -523002, -535392, -526244, -539099, -519173, -543281, -528195, -535698, -536345, -547454, -528052, -524440, -536416, -535121, -537504, -533986, -534955, -537083, -527374, -531994, -520084, -520188, -517100, -542170, -527173, -519599, -519126, -520688, -518588, -530203, -530552, -527607, -532208, -535473, -520811, -546636, -532931};
    vector<int> y = {850548, 847201, 835048, 828345, 840539, 836010, 842160, 845116, 833911, 838043, 842877, 838675, 839971, 829311, 854173, 829826, 832378, 837489, 838114, 831524, 830374, 833007, 833751, 833334, 834975, 834938, 834560, 838467, 850890, 832681, 839737, 836220, 853240, 837107, 842574, 845274, 836132, 846777, 834349, 833765, 819722, 834511, 833216, 841257, 852098, 841110, 835069};
    vector<int> r = {4553, 7278, 1398, 4452, 6871, 2930, 9240, 8310, 2159, 362, 7830, 1572, 8538, 765, 6569, 4206, 959, 396, 4852, 9552, 4597, 7472, 1490, 450, 4485, 3989, 1338, 5755, 5422, 8002, 8720, 8247, 6720, 6655, 8056, 1183, 8099, 778, 5757, 3373, 7840, 1984, 3154, 8954, 7975, 3303, 5199};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 167322.54189281262;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {429090, 440417, 436254, 427820, 429060, 433690, 432279, 439737, 435122, 425592, 433688, 434639, 431710, 434804, 432779, 436250, 431114, 422406, 442737, 439658, 432052, 447219, 431466, 422015, 430358, 428481, 421989, 440729, 425856, 435752, 435409, 431203, 430461, 433474, 440154, 425694, 428126, 432973, 434219, 431071, 427747, 426925, 428699, 436932, 434540, 438358, 433337, 428556, 430756};
    vector<int> y = {148833, 151548, 160460, 135357, 143981, 151297, 147628, 144771, 145987, 151446, 151415, 147193, 131262, 146884, 154077, 142524, 143236, 151820, 151948, 155336, 136534, 150116, 146781, 138523, 145379, 141664, 139893, 146509, 144802, 148320, 151394, 152709, 152014, 153590, 146892, 151223, 145995, 141228, 137389, 151290, 151985, 146828, 134084, 135683, 152737, 159991, 160135, 149100, 142528};
    vector<int> r = {6084, 8857, 8629, 7831, 4408, 236, 9674, 1196, 1520, 6509, 7844, 1963, 607, 6470, 1265, 3429, 3463, 7189, 3129, 3323, 5398, 9606, 2596, 714, 3395, 1146, 8378, 424, 2948, 7063, 2772, 7811, 6294, 149, 3908, 6552, 4941, 2448, 4368, 2621, 3805, 186, 1409, 5701, 7879, 7466, 6911, 4490, 2287};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 147256.29636367623;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {-999998, -999999, 1000000, -1000000, -999998, -1000000};
    vector<int> y = {1000000, 999998, 999999, 999998, 999999, -999999};
    vector<int> r = {1000000, 999998, 999999, 1000000, 1000000, 999998};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.884154213939498E7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {999997, 999999, -999997, -999995, 1000000, 1000000, -999997, -999997, 999996, -1000000, 999996, 999999, -999997, -1000000, 999999, -999998, -999999, 999995, 999998, -999995, 999998, -1000000, -1000000, 999997, -999999, -999996, -999998, 1000000, 999997, -1000000, -999996, -999998, -999998, -999998, -999998, -999995, 999998, -1000000, 999998, 999997, -999999, -1000000, -999997, 999996, -999998, 999999, 999998, -999998, -999995, 999996};
    vector<int> y = {-999995, 1000000, -999995, 999997, -1000000, 1000000, 999995, -1000000, 999996, 999997, -999999, 999999, 999997, -999997, -999996, -1000000, 999999, -999995, -999995, 999999, -999995, -999998, -999999, -999997, 1000000, 1000000, 1000000, -999996, 999997, 999998, 999997, 999999, -999995, -1000000, -999999, -1000000, 999997, -1000000, -999999, -999995, 999999, 999995, 999997, -999997, -999996, -1000000, -999999, 999999, 999998, 999996};
    vector<int> r = {999999, 999998, 999999, 999998, 999999, 999997, 999997, 999999, 999999, 999997, 999998, 999999, 999997, 999999, 999998, 999998, 1000000, 999999, 999999, 999997, 999997, 999997, 1000000, 999998, 999998, 999998, 999998, 1000000, 1000000, 1000000, 999998, 999999, 999997, 1000000, 1000000, 999999, 999998, 1000000, 999998, 999998, 999999, 1000000, 1000000, 999997, 999998, 999997, 999999, 999997, 999997, 1000000};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2.508756726552003E7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {-999996, -999996, -999999, 999996, 999997, 999998, 999995, -1000000, -1000000, -1000000, 999995, -999997, -999996, -999999, -1000000, 999995, -999999, 999996, -999999};
    vector<int> y = {1000000, -999998, 999996, 999995, 1000000, 999995, -999999, 1000000, -999996, 999995, -999995, -999998, -999995, 1000000, -999997, 999995, 999999, 999997, -999996};
    vector<int> r = {1000000, 999999, 999999, 999999, 999997, 1000000, 999997, 999998, 999998, 999999, 1000000, 999997, 1000000, 999997, 999997, 999997, 999998, 999997, 999999};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2.50855300082571E7;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {0, 2};
    vector<int> y = {0, 0};
    vector<int> r = {5, 3};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 31.41592653589793;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {0, 10, 0};
    vector<int> y = {1, 0, 0};
    vector<int> r = {2, 5, 3};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 50.26548245743669;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {9, 0, 1};
    vector<int> y = {4, 9, 9};
    vector<int> r = {4, 3, 1};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 43.982297150257104;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {9, 0};
    vector<int> y = {4, 9};
    vector<int> r = {4, 3};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 43.982297150257104;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {0, 1};
    vector<int> y = {9, 9};
    vector<int> r = {3, 1};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 18.84955592153876;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {3, 3, 3};
    vector<int> y = {2, 7, 1};
    vector<int> r = {3, 8, 2};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 50.26548245743669;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {0, 0, 0, 9, 8, 9, 9, 10, 20, -1000000, 1000000, 1000000, 1000000, 999991, 999992, 999991, 999991, 999990, 999980, 1000, 1002, 1006, 100000, 105000};
    vector<int> y = {0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 999999, 999999, 999999, 999999, 999999, 1000000, 999998, 999999, 999999, 0, 0, 0, 100000, 105000};
    vector<int> r = {1, 2, 3, 1, 1, 1, 1, 1, 3, 999000, 1, 2, 3, 1, 1, 1, 1, 1, 3, 4, 2, 2, 8000, 8000};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6341954.222219305;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {10, 11, 12, 13, 14, 15};
    vector<int> y = {10, 10, 10, 10, 10, 10};
    vector<int> r = {10, 10, 10, 10, 10, 10};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 72.83602443294978;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {0, 0, 0, 9, 8, 9, 9, 10, 20, -1000000, 1000000, 1000000, 1000000, 999991, 999992, 999991, 999991, 999990, 999980, 1000, 1002, 1006, 100000, 105000, -1000000};
    vector<int> y = {0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 999999, 999999, 999999, 999999, 999999, 1000000, 999998, 999999, 999999, 0, 0, 0, 100000, 105000, 1};
    vector<int> r = {1, 2, 3, 1, 1, 1, 1, 1, 3, 999000, 1, 2, 3, 1, 1, 1, 1, 1, 3, 4, 2, 2, 8000, 8000, 999000};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6341956.222219305;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {-100, -100, -100, -200, 0, 200, 150, 170};
    vector<int> y = {200, 300, 102, 199, 201, -200, -210, -217};
    vector<int> r = {100, 10, 9, 8, 11, 34, 23, 10};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 971.3962397892994;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000};
    vector<int> y = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> r = {499991, 499992, 499993, 499994, 499995, 499996, 499997, 499998, 499999, 499990, 499911, 499912, 499913, 499914, 499915, 499916, 499917, 499918, 499919, 499910, 499921, 499922, 499923, 499924, 499925, 499926, 499927, 499928, 499929, 499920, 499931, 499932, 499933, 499934, 499935, 499936, 499937, 499938, 499939, 499930};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2565026012703435E7;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {5, 6, 9, 11, 11, 11, 11, 15, 16, 17, 8};
    vector<int> y = {21, 12, 7, 10, 12, 15, 17, 16, 6, 13, 12};
    vector<int> r = {5, 5, 3, 2, 1, 3, 3, 4, 6, 2, 3};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 91.98107038422017;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {0, 100, 50};
    vector<int> y = {0, 0, 50};
    vector<int> r = {75, 75, 75};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 727.962849959307;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {100000, 100000, 100000, 100000, 100000, 200000, 200000, 200000, 200000, 200000, 300000, 300000, 300000, 300000, 300000, 400000, 400000, 400000, 400000, 400000, 500000, 500000, 500000, 500000, 500000};
    vector<int> y = {100000, 200000, 300000, 400000, 500000, 100000, 200000, 300000, 400000, 500000, 100000, 200000, 300000, 400000, 500000, 100000, 200000, 300000, 400000, 500000, 100000, 200000, 300000, 400000, 500000};
    vector<int> r = {999999, 969999, 699999, 599999, 499999, 989999, 967799, 699559, 533999, 499922, 999999, 969977, 699559, 593339, 492299, 998999, 969999, 655999, 533999, 429999, 989999, 967799, 699955, 593339, 499222};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7177932.597507919;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {100, 100300, 99, 100, -100100};
    vector<int> y = {100, 99, 100300, -100100, 100};
    vector<int> r = {100200, 1, 1, 1, 1};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 629579.734209112;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {-65800, 667600, 366400, 4144, 0, 671100, 725900, 586800, 455300, 665000, 131900, 203500, 119600, 84200, -71200, -88500, 804000, 794200, 826700, 1654, 0, 645200, 281100, 337600, 435300, 400900, 11000, 339900, 254800, 863200, 1, 62600, 309000, 895700, 775900, 84300, 396600, 637600, 293400, 531400, 594700, 144800, 36320, 0, 32600, 453700, 54400, 512100, 108200, 193500};
    vector<int> y = {193500, 554400, 383300, 12400, 363900, 866400, 1710, 0, 893000, 298000, 130600, 68200, 139200, 402100, 775100, 593000, 807500, 527000, 482900, 5, 78300, 457600, 409700, 551500, 299200, 229300, 816100, 763900, 136100, 377300, 105500, 635600, 73000, 296900, 243000, 11600, -80000, 701000, 340, 0, 446000, 129000, 675900, -61400, 394800, 790900, 121800, 875800, 322700, 759100};
    vector<int> r = {512100, 108200, 193500, 383300, 12400, 363900, 866400, 1710, 111, 893000, 298000, 130600, 68200, 139200, 402100, 775100, 593000, 807500, 527000, 482900, 5, 78300, 457600, 409700, 551500, 299200, 229300, 816100, 763900, 136100, 377300, 266100, 4577, 177, 303100, 105500, 635600, 15000, 594400, 472700, 48100, 836400, 596800, 347000, 470500, 7151, 377, 228700, 583000, 896100};
    Meteorites* pObj = new Meteorites();
    clock_t start = clock();
    double result = pObj->perimeter(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7924888.982884096;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10157606&rd=10670&pm=7683
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
 
using namespace std;
 
double EPS=1e-10;
double Pi=acos(-1.0);
 
int n;
 
struct Circle{
  double x,y,r;
}c[100];
 
struct Raid{
  int num;
  int remove;
  double low,high;
  double x1,y1;
  double x2,y2;
}arc[10000];
 
struct point{
  double x,y;
};
 
int f;
 
double Polar(double x,double y)
{
  if(fabs(x)<EPS){
    if(y>EPS) return Pi/2.0;
    else return 3*Pi/2.0;
  }
  else{
    if(x>EPS) return atan(y/x);
    else return atan(y/x)+Pi;
  }
}
 
int Remove(int k,double low,double high)
{
  if(low+EPS<arc[k].high&&arc[k].low+EPS<high){
    if(arc[k].high+EPS<=high){
      if(low+EPS<=arc[k].low) arc[k].remove=1;
      else arc[k].high=low;
    }
    else if(low+EPS<=arc[k].low) arc[k].low=high;
    else {
      arc[f].low=arc[k].low;
      arc[f].high=low;
      arc[f].remove=0;
      arc[f].num=arc[k].num;
      f++;
      arc[k].low=high;
    }
  }
  return 0;
}
 
int Remove_Arc(int k,double low,double high)
{
  Remove(k,low,high);
  if(low+EPS<0) Remove(k,low+2*Pi,high+2*Pi);
  if(high>2*Pi+EPS) Remove(k,low-2*Pi,high-2*Pi);
  return 0;
}
 
int Cir_Cir(int k,int n)
{
  Circle c1=c[arc[k].num];
  Circle c2=c[n];
  double del,alpha;
  double d;
  d=sqrt((c1.x-c2.x)*(c1.x-c2.x)+(c2.y-c1.y)*(c2.y-c1.y));
  if(d+EPS<c1.r+c2.r){
    if(d>EPS+fabs(c1.r-c2.r)){
      del=acos((c1.r*c1.r+d*d-c2.r*c2.r)/(2*c1.r*d));
      alpha=Polar(c2.x-c1.x,c2.y-c1.y);
      Remove_Arc(k,alpha-del,alpha+del);
    }
    else if(c1.r+EPS<c2.r) Remove_Arc(k,0,2*Pi);
  }
  return 0;
}
 
double Area_Poly(point a[],int n)
{
  int i;
  double area;
  a[n]=a[0];
  area=0;
  for(i=0;i<n;i++) area+=a[i].x*a[i+1].y-a[i].y*a[i+1].x;
  area/=2.0;
  return area;
}
 
double Length(Raid a)
{
  double r=c[a.num].r;
  double alpha=a.high-a.low;
  return r*alpha;
}
 
int Equal(Circle a,Circle b)
{
  if(fabs(a.x-b.x)<EPS&&fabs(a.y-b.y)<EPS&&fabs(a.r-b.r)<EPS) return 1;
  return 0;
}
 
class Meteorites {
  public:
  double perimeter(vector <int> x, vector <int> y, vector <int> r) {
    n=x.size();
    double ret=0;
    int i,j,k=0,t;
    for(i=0;i<n;i++){
      c[i].x=x[i];
      c[i].y=y[i];
      c[i].r=r[i];
      for(j=0;j<k;j++)if(Equal(c[j],c[i]))break;
      if(j<k) continue;
      c[k++]=c[i];
    }
    n=k;
    f=0;
    for(i=0;i<n;i++){
      arc[f].num=i;
      arc[f].low=0;
      arc[f].high=2*Pi;
      arc[f].remove=0;
      t=f;
      f++;
      for(j=0;j<n;j++)if(i!=j){
        for(k=t;k<f;k++)if(arc[k].remove==0)
          Cir_Cir(k,j);
      }
    }
    k=0;
    for(i=0;i<f;i++)if(arc[i].remove==0){
      arc[k]=arc[i];
      arc[k].x1=c[arc[k].num].r*cos(arc[k].low)+c[arc[k].num].x;
      arc[k].y1=c[arc[k].num].r*sin(arc[k].low)+c[arc[k].num].y;
      arc[k].x2=c[arc[k].num].r*cos(arc[k].high)+c[arc[k].num].x;
      arc[k].y2=c[arc[k].num].r*sin(arc[k].high)+c[arc[k].num].y;
      k++;
    }
//    while(1){
      for(i=0;i<k;i++) if(arc[i].remove==0){
        ret+=Length(arc[i]);        
      }
//    }
    return ret;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/