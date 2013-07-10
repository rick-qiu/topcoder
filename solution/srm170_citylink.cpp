/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1864
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

class CityLink {
public:
    int timeTaken(vector<int> x, vector<int> y);
};

int CityLink::timeTaken(vector<int> x, vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 5};
    vector<int> y = {0, 5};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 0};
    vector<int> y = {30, -59};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, -1038, 591, 9813, 10000, 9015, 656631, -195};
    vector<int> y = {4, 1000, 0, -10000, 129, 9573, 15320, 15320};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 328413;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {1502, -10295, 12981, 59838, 1002, -1000000, 539813, 100309, 50912, 5300};
    vector<int> y = {5300, 50912, 100309, 539813, -1000000, 1002, 59838, 12981, -10295, 1502};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 989705;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {658, 1992, -5993, 1598, 169993, 10295};
    vector<int> y = {1259, 6003, 12000, 5883, -259, 993};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 159698;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {100000};
    vector<int> y = {-1000000};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {-1000000, 1000000};
    vector<int> y = {1000000, -1000000};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {0, 3, 4};
    vector<int> y = {0, 2, 5};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {-1000000, -999999, -999997, -999993, -999988, -999980, -999970, -999956, -999935, -999920, -999904, -999878, -999853, -999819, -999797, -999749, -999711, -999640, -999600, -999526, -999436, -999408, -999339, -999226, -999179, -999085, -999031, -998985, -998842, -998689, -998606, -998478, -998429, -998180, -998105, -997972, -997747, -997622, -997491, -997221, -997076, -996846, -996647, -996410, -996204, -996003, -995704, -995568, -995222, 1000000};
    vector<int> y = {-1000000, -999999, -999997, -999993, -999988, -999980, -999970, -999956, -999935, -999920, -999904, -999878, -999853, -999819, -999797, -999749, -999711, -999640, -999600, -999526, -999436, -999408, -999339, -999226, -999179, -999085, -999031, -998985, -998842, -998689, -998606, -998478, -998429, -998180, -998105, -997972, -997747, -997622, -997491, -997221, -997076, -996846, -996647, -996410, -996204, -996003, -995704, -995568, -995222, 1000000};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1995222;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {455173, 543071, 890072, -665150, 553450, -794400, -476339, 216786, 605354, -290164, -943912, 840464, -777651, -181062, -247457, 174014, 970466, 319084, 259473, -74993, -475821, -144717, -137683, 11455, -751413, 233129, 514474, -330139, 800862, -953740, -938200, 795971, 937359, -72347, 286414, 44605, -981881, 375858, -510618, -99616, 660881, -405078, 724531, 429602, -246418};
    vector<int> y = {397464, -406057, -457612, -452955, -647181, 524935, 214284, 963616, -823481, -751968, 275757, 330335, -790156, 792012, -426999, -274859, -282915, -622038, -828641, 330348, 648034, 47840, -927932, -14903, -761284, -177899, 73592, 736823, 488800, -446596, 220274, -450309, 115055, 714258, -629914, -671982, 899888, 397862, -95262, 255395, -866488, 175354, 264783, 525392, 993288};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 374953;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {-184617, -607808, -814229, -189847, 311087, 462060, 715784, 532389, -631246, -468545, -384568, -263503, -93077, 737814, -245138, 28537, 979514, 970170, 445402, -934687, -522014, -604408, 924172, -657734, -117467, -565500, -943887, 806177, 172277, 912778, -690059, 49660, 396894, -545260, 800152, -883792, 82278, -10667, -42793, 816800, -277255, -627444, 939723, -223254, -242427};
    vector<int> y = {730988, 365074, 507247, 900029, 180239, 639105, 879373, 631071, -562874, 624150, 182393, 790786, -998721, -567685, 731101, -912330, 938155, -834715, -219678, -243512, -955202, -806231, 927981, -707075, -126279, 497965, 170997, -36963, -938585, -555436, 458740, -710545, 19829, -157705, 37479, -721863, 29227, 6449, 331599, -642835, -231274, 296284, -303842, 629425, -310477};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 450832;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {584940, 641074, -937418, -153440, -21520, 538512, -33683, 280801, -957630, -175584, 852570, 289518, -949710, -556975, 260674, 305981, 798237, -279992, -357192, 283122, 968033, -569818, 906797, -540609, -159192, -133872, -123051, -122918, -341254, 641806, -29918, -234967};
    vector<int> y = {-851738, 874395, 178329, -95123, 884040, 774043, -432262, -509809, 129825, -600464, 593142, 148854, 985676, -802860, 132549, -154387, 464480, 860819, 566568, -861287, 339059, 451775, 710983, 949167, 283808, 210803, -844355, 444665, 320108, 919420, 465212, 285744};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 508719;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {-997534, 572500, 464536, -945508, -858606, -289610, 965659, 728037, -439464, -356160, -666653, 374928, -234838, 658388, -423195, 160064, 125545, 183157, -38798, 911100, 261341, 989825, -166677, -6110};
    vector<int> y = {663989, -913541, 711213, -196406, 506267, -630197, 176982, 249466, -61161, -283819, -394069, -829120, 811773, -769627, 461557, 96697, 249989, 107506, 237649, 620022, 138915, 226999, 717861, 393859};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 664538;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-844844, -975102, -997608, -956326};
    vector<int> y = {-889961, -238913, -804222, -668409};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 429496;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {-725953, 833148, -477481, 201526, -416376, -56676, -699826, -848936, 949090, -474715, -621755, 615561, -758266, 525529, -62253, 326529, 282942, -801818, -364205, 511136, -402714, -768432, 693975, 704885, 884446, 103469, -552994, 785828, -352046, -838896, 168476, -650228, 164736, 291729};
    vector<int> y = {425822, 951537, 476119, 705676, -319847, -505276, -795336, -710001, -15613, 460405, 699411, 5711, -105927, -45062, 857120, 729220, 159677, 805461, 399708, 736845, -28115, -102540, -617367, 643064, -769830, -737309, 236455, 206167, 311356, -896874, 487634, -31157, -452046, -682044};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 432560;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {320290, 62373, -196205, -496426, -817857, 588299, 767533, 894171, 636817, -313208, 261442, 151500, 139691, -568764, 412071, -329843, 321418};
    vector<int> y = {-945200, -707826, -522742, 703854, -853362, -70261, 850990, 521413, 100337, 465599, -210081, 266501, -879658, -794930, 266618, 249786, -750045};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 464708;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {-874788, -954467, 426782, 934791, -5445, -231883, 940023, 720186, 647321, -442880, -832780, 862483, 124384, 42447, -549482, -566446, -462959, 439648, 706111, -162231, 677643, -748516, 474339, 540711, -800, -447094, 810144, -943864};
    vector<int> y = {-272787, 829066, -290403, -643480, 785780, 33394, 868454, 405621, -489896, -86179, 194888, -627710, 129100, -625831, 292402, 93156, -3487, 963823, 374438, 218091, 605886, 617665, 971671, 639086, -384744, 166421, -584611, 451953};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 509986;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {616010, -487568};
    vector<int> y = {826122, -91589};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1103578;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {-876986, 256189, 926701, 454525, 215241, -112220, 267258, 955822, -998797, 940651, 156293, 486925, 720173, -171561, -421303, -159179, -782847, -218202, -905841, 943174, 368489, 293551, 193071, 961141, 239245, 300662};
    vector<int> y = {962878, 562662, 479725, -235531, 132167, 466726, -637882, 325394, 472447, 71536, -731781, 212430, 548839, -936281, -745725, -298289, -902991, -338721, -763678, 309400, -169047, -364254, 766798, 711701, -580784, -604463};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 764766;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {747700, -511131, 91666, -241101, 949879, 761415, 258184, -734830, -369615, -39348, -465659, 81347, 551910, -343067, -594331, 823305, 858877, 594634, 48383, -972779, 760560, 190324, 102625, -629680, 345655};
    vector<int> y = {-689459, 441266, 701359, -440747, -627824, 674637, -203436, -683275, 372736, 974048, -89546, 695994, -144803, 993485, 30910, -846632, -170401, -49458, -129042, -1738, 788636, 536170, 455494, -749565, 848398};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 457423;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {879997, -659320, -171814, -249652, 601546, 162400, -842441, -615601, 557808, 652749, 533343, -736182};
    vector<int> y = {-241149, -906585, 195877, -178330, -701317, -727661, -490576, 108102, 772783, 73495, 958810, 586938};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 699288;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {-763263, 829295, 805655, 979815, -88118, 392691, 341004, -255844, 894187, -685328, 918321, 961419, 592948, 741871, 816157, 130616, 286065, 635286, -434037, -826351, -276819, -379545, -701873, -261278, 415959, 113350, 511019, 542807, 144532, 690574, 130911, 531008, 333376, -973880, 816245, -587965, -716464, 121035};
    vector<int> y = {957258, 582393, -428798, -435495, -926771, -374815, -268213, -842888, 533922, -596389, 940200, 691103, 34913, -930818, 328808, -947107, 477336, 91719, -867475, 995271, 566341, -935816, 882038, -290261, 53394, 334279, 592194, 621392, 802104, 478114, 338615, -65598, 683719, 899339, -282804, -460575, 32490, 99089};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 495323;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {859757, -152089, 439604, 459021, -240152, 211181, 288412, 692862, -779699};
    vector<int> y = {-673747, 430577, -300385, 549223, 80413, -438049, -310706, 144453, -372737};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 539547;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {-578554, -622833, 888006, 294541, -660883, -694519, -207243, 136407, -411237, -800220, 113296, 866593, 86030, 885534, 811040, -291689, -281542, -12399, -90469, -669719, -302284, -945431, 267496, -768768, -938150, 29097, -771370, 885244, -513574, 545143, 318425, 564802, -108792, 678197, -165457, 566812, 161665};
    vector<int> y = {170810, -762310, -210798, -311033, -584425, -711504, -368266, -776667, -646552, -344588, 280193, 675247, 73312, -769518, 30223, -767515, 602904, 123889, -717859, 766074, -364238, 490473, 708403, -626315, -568988, 692572, 413115, 314660, -711798, -185109, -229121, -445692, -447598, 800739, -991523, -950316, -861193};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 403333;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {-570839, -711185, -573515, -650632, 465883, 39151, 283760, 360536, 163204, 663453, 540048, 395709, 567824, 425024, 83277, -807483, -554109, 350135};
    vector<int> y = {847210, 320272, 237253, -363518, -720092, 297968, 327353, -901349, -351160, 717512, -266719, 340786, 921612, 617509, -918744, -970137, -518668, -127624};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 609990;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-783072, -780682, 65434, 780596, 395248, -926585, -422449, -898439, 704062, 396081, 384796, 226375, 723532, 911943, 123798, -41701, 845453, -645013, 212329, 821099, 49681, 686515, -797134, 455489, 230423, -432548, -99990, -401304, 567491, 345831, -152766, 66866, -483402, -879002, -925139, 371354, -128539, 786626, -154056};
    vector<int> y = {-973717, -503164, 517286, -607214, -603328, -955913, 790928, 310832, 442347, -856902, 531015, 466052, 256238, -277711, 301744, 340726, 177617, -89114, -346991, 125002, 894514, 627232, 788076, -575647, -148430, 132644, 793827, -376458, 28064, 208714, -178444, -307314, 421853, 728927, -540478, 641969, 57869, 74328, 242115};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 415435;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {-406208, -416442, 511120, -157442, -537699, 997919, 235281, -262120, 336072, -433609, 269446, -46222, 897374, -301960, 375017};
    vector<int> y = {-388890, 726437, -622615, -865339, -611953, 671015, -180526, -554607, -322841, 582425, 25913, -88586, -988354, 489127, -542420};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 728473;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {968809, 571366, 97235, 55228, 445903, 747241, 195982, -627777, -62363, -792235, -163746, 991266, 648478, 480559, 895354, -357163, 524254, -405742, 715231, -629189, 610188, -204523, 719617, -35030, 251934, -787834, 958691, -129294, 241194};
    vector<int> y = {68690, -787330, -533824, 749323, 443276, 116918, 84140, 641375, 566808, -479939, 751104, -734907, -479663, 137604, 938139, 864163, -268371, -378511, 649487, 161134, -364523, 323595, 167700, 174679, 690161, -394387, -796569, 607168, -648735};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 502977;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {136548, -577540, -151491, -887607, -130681, -641766, -593082, 343355, 230753, 212909, -719586, -382403, 379185, -725842, -420352, -234025, -532896, -730818, -140051, -214390, 695733, -205428, -345020, 833164, 683833, -191411, -16007, 367699, 282066, 866956, 302132, 130186, -143784, 84848, -184205, -519717, -950848};
    vector<int> y = {-193171, 518136, 154089, 469998, -720695, -452122, -6289, 730514, 28481, -594569, 420495, -113973, 338454, 503778, 142849, -766379, 188435, 315613, -100999, -753307, 143844, -897350, -862074, 885733, 563498, -518328, 943613, -636823, -840717, -620861, 150356, 769236, 916794, 716165, -612117, -488473, 274855};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 499257;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {830124, -554748, 12685, -470444, 819444, -761345, -11083, 679420, 617039, 787009, -52206, 981160, -409658, 939689, 199776, -168155, 642268, -31363, 104664, -205016, -716193, -624830, -728887, -662674, -580610, 120492, -659936, 559320, 162253, 431872, -441750, 909355, 540814, 890321, 411035, -395564, -763631};
    vector<int> y = {-416975, 938738, 827568, 622606, -731811, -66362, -279952, -452824, -635199, -285085, 698305, 157284, 543177, 466615, -458184, 29900, 277097, 172378, -984382, -75893, 33639, 272724, -945411, 888152, -358240, 884610, 101651, 447832, 499008, -637971, -736283, -282057, -122009, 162904, -314696, -787733, -20393};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 378043;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {-492518, -660257, 971013, -966449, 838993, 932367, -185119, -281304, -492950, 603690, 40653, 632739, -72434, 325418, 71838, 142250, -625928, 9804, -19079, 235557, 213409, 141590, 634150, -759950, 877551, -598957, 877697, 639185, -130750, 945095, -695522, -444742, 604189, 541060, 643269, -560125, -538035, 919818};
    vector<int> y = {551622, -86941, -18497, -626953, 652628, 286825, 948801, 694336, 499839, 742419, -894, -796444, -164531, 139833, -177550, -903255, 999419, -137490, 560781, 337340, 167924, -454285, -622289, -341375, -638835, -81797, -966219, -194738, 482028, -541487, 604771, -321450, -917512, -414890, -223384, 374103, 581465, -903886};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 448970;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {-840133, 836726, 673208, -83846, 428964, 93665, -816064, 215470, 142288, 392895, 952505, 385471, -64695, 708512, 196817};
    vector<int> y = {-245261, 38458, 272354, 706990, 721416, -89008, -930396, 788707, 894020, 742202, -504570, -270880, -240427, 34195, -677949};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 751369;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {874110, 347522, 267424, 828722, -433735, -414496, -748501, -307274, -685179, 433100, -460751, 959920, 381261, 494307, -566266, 926253, 928000, 220412, -71499, -312738, 634122};
    vector<int> y = {594217, -87432, 137302, 491839, -932437, 477257, 172534, -959795, -413255, -942977, -554044, 785796, 236918, -67118, -666217, -692156, 791200, 195424, 566559, 494767, 790192};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 604724;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {885621, -817825, 794973, -606223, 825596, 811915, -779007, -859452, 999993, 597553, -597669, -436901, 352105, 319868, -718795, -663680, -409790, 127503, 804841, -245397, -638988, -723323, -349799, -229268, 408983, 992881, 309314, 926494};
    vector<int> y = {-37275, -556749, -231080, 851996, -160267, -871184, 566258, 153875, -525669, -174738, 906179, -884820, -870343, -153129, 110060, -315749, -481505, -614818, 521280, -852139, 83943, 99431, -582775, 167619, -114290, 811314, -444021, -338581};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 558555;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {246361, 484267, -637965, 981483, 813447};
    vector<int> y = {-974285, -126154, -831482, 397956, -633336};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 884326;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {334726, 868084, -277364, 830020, 79412, -459545, -996113, -700293, 606740, -507955, -492587, -705932, 397222, 880167, -206542, -484600, -597050, -141228, 45670, 15849, -675606, -386524, 124491, -841092, -825765, -941543, -796435};
    vector<int> y = {638694, -786837, -855239, 372837, 118177, -511606, 50761, 830627, -256374, -190198, -482239, 898685, -537414, 312604, -235743, -871817, -616517, 125586, -311208, -874918, -926271, -671719, 430610, -268770, 168379, 199074, -647474};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 631553;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {600788, 495351, -874004, 946217, -337443, 630378, 892796, 321418, 160989, 148779, 37063, -316970, 788476, -655824, -427600, -397267, -453334, 604004, -124883, 444267, -85230, -639331, -53910, 860294, -887916, -368799, -376688, 434867, -799510, 916763, -6829, 463503, 652431, -787502, 652577, 100074};
    vector<int> y = {332538, -86609, -740393, -228395, -152875, -694431, -163405, -464697, 395147, -993304, 96814, -714281, -631166, -12451, -303298, -826813, -384490, -327338, -932355, -944900, 592070, 324991, -800488, -892921, 526499, 149148, 831657, -588213, 779043, -227110, 36921, 539837, 584932, -472452, -825810, -432653};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 334168;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {460743, 229776, -212517, 772339, -514519, 454719, -126222, 35054, -699306, -836583, -693702, -9954, -566823, 543807, 135093, -108947, 38342, -226485, -507465, -342769, 19617, -669995, 13308, 63641, -792146, 169042};
    vector<int> y = {-590237, 660255, 854281, -686019, 438912, -165437, -616068, 170247, -674631, 337615, 703254, 891230, -964981, -392633, -371421, 113261, -879171, 825825, 63279, -21983, -370624, 893395, 365059, 314002, 744484, -485848};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 440601;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {-323487, 880914, 949188, -635950, 896760, -866466, -231749, 27550, 651442, 368573, -147003, 811551, -156966, -56664, -187981, -447320, -619706, -282510, 956726, 942100, 76277, 423351, 587270, -806516, 491318, -963047, 341449, -885352, 491481, 806852, 550323, -690543, 827976, 294950, 143340, -326962, -652466, -418430, 64715, -791635, -145464, 935199, -388753, 932745, 625256, 441079, -383448, -858954, -670240};
    vector<int> y = {-594619, -288468, 5707, 95192, 477311, -464986, -523216, -651044, -477008, -719183, 261967, -264518, 125552, -412483, 974914, 488533, -48981, -153092, 81541, -629089, -406941, 844529, -549100, 238711, 562057, -138259, 848504, -298092, 575410, -179075, -640469, -551958, 544374, 784702, 754476, -780384, -903612, -547771, 292480, 73458, -237256, -286589, -950154, -379847, 739596, 693004, -732039, -555472, 953422};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 464889;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {999, 826, 914, 773, 527, 253, 539, 238, 180, 746, 135, 556, 345, 335, 347};
    vector<int> y = {88, 7, 734, 722, 202, 624, 217, 200, 127, 443, 804, 525, 566, 285, 624};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 287;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {698, 825, 979, 479, 791, 307, 925, 6, 56, 223, 621, 408, 724, 186, 673, 361, 875, 78, 802, 909, 943, 712, 445, 346, 204, 353, 949, 27, 439, 35, 24, 485, 639, 458, 472, 738, 288, 341, 169, 586, 609, 254, 405, 937, 495, 958, 425, 474, 358, 857};
    vector<int> y = {65, 706, 911, 702, 34, 415, 876, 125, 485, 500, 27, 498, 974, 9, 810, 372, 538, 207, 909, 945, 568, 221, 718, 501, 922, 177, 113, 26, 213, 113, 748, 251, 563, 441, 719, 768, 450, 733, 687, 725, 292, 911, 281, 845, 324, 871, 443, 64, 933, 830};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {595, 292, 291, 566, 316};
    vector<int> y = {950, 45, 377, 331, 291};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 573;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {608, 555, 179, 210, 521, 897, 611, 362, 656, 152, 814, 305, 98, 778, 999, 73, 319, 972, 825, 172, 703, 644, 440, 988, 225, 110, 947, 251, 450, 178, 450, 760, 584, 267, 620, 108, 212, 342, 111, 102, 823, 728, 979};
    vector<int> y = {545, 13, 844, 674, 168, 946, 371, 321, 219, 661, 454, 859, 683, 781, 421, 959, 981, 498, 183, 346, 69, 667, 6, 97, 492, 39, 415, 397, 29, 801, 603, 769, 85, 410, 791, 323, 753, 653, 331, 337, 564, 122, 979};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 282;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {782, 49, 163, 696, 237, 904, 105, 108, 260, 123, 324, 367, 981, 742, 262, 975, 434, 332, 30, 233, 513, 971};
    vector<int> y = {360, 935, 653, 284, 133, 999, 695, 780, 213, 265, 806, 661, 283, 104, 73, 396, 377, 949, 380, 619, 489, 618};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 381;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {79, 797, 873, 968, 781, 661, 724, 678, 444, 935, 407, 203, 470, 652, 146, 496, 372, 221, 707, 277, 523, 552, 407, 749, 658, 25, 921, 556, 756, 702, 534, 831, 196, 856, 593, 744, 776, 68};
    vector<int> y = {398, 644, 62, 679, 982, 64, 117, 149, 75, 821, 884, 139, 175, 959, 622, 577, 645, 598, 189, 488, 290, 599, 231, 204, 684, 417, 581, 391, 560, 254, 551, 258, 52, 904, 486, 469, 297, 536};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {169, 890, 117, 127, 215, 158, 572, 309, 243, 672, 776, 241, 672, 38, 130, 553, 666, 154, 102, 186, 503, 92, 757, 551, 673, 0, 503, 711, 303, 849, 28};
    vector<int> y = {740, 854, 307, 50, 518, 775, 412, 123, 567, 647, 928, 262, 710, 321, 574, 300, 443, 136, 633, 317, 345, 75, 753, 353, 575, 449, 593, 175, 101, 786, 402};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 222;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {694, 592, 300, 369, 728, 414, 175, 706, 193, 881, 784, 705, 130, 513, 834, 2, 465, 63, 171, 88, 850, 406, 22, 554, 746, 857, 262, 547, 721, 660, 327, 436, 312, 263, 284, 734, 853};
    vector<int> y = {198, 182, 225, 970, 66, 803, 168, 528, 281, 642, 474, 312, 806, 916, 267, 881, 946, 118, 432, 251, 502, 26, 113, 215, 787, 883, 562, 744, 60, 555, 14, 793, 500, 483, 351, 135, 140};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {228, 67, 352, 653, 469, 782, 288, 577, 521, 632, 255, 929};
    vector<int> y = {605, 443, 855, 235, 215, 565, 194, 844, 943, 666, 484, 90};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 276;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {632, 256, 316, 66, 188, 626, 162, 216, 347, 18, 358, 62, 847, 556, 10, 452, 822, 833, 181, 765};
    vector<int> y = {824, 838, 769, 922, 509, 395, 213, 730, 781, 541, 214, 301, 81, 331, 646, 995, 60, 491, 899, 370};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 271;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {1593, -88517, 14301, 3200, 6, -15099, 3200, 5881, -2593, 11, 57361, -92990};
    vector<int> y = {99531, -17742, -36499, 1582, 46, 34001, -19234, 1883, 36001, 0, 233, 485};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 73418;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {1593, -88517, 14301, 3200, 6, -15099, 3200, 5881, -2593, 11, 57361, -92990};
    vector<int> y = {99531, -17742, -36499, 1582, 46, 34001, -19234, 1883, 36001, 0, 233, 485};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 73418;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {-1000000, 1000000};
    vector<int> y = {-999999, 999999};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {1, -1};
    vector<int> y = {100000, -10000};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 110000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {1593, -88517, 14301, 3200, 6, -15099, 3200, 5881, -2593, 11, 57361, -92990, 1000000, -1000000};
    vector<int> y = {99531, -17742, -36499, 1582, 46, 34001, -19234, 1883, 36001, 0, 233, 485, 1000000, -1000000};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 998117;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {-1000000, 2, 3, 4, 5, 6, 7, 8, 1000000};
    vector<int> y = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, -1000000};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-1000000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 37000, 38000, 39000, 40000, 41000, 42000, 43000, 44000, 45000, 46000, 47000, 48000, 49000, 1000000};
    vector<int> y = {-1000000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 37000, 38000, 39000, 40000, 41000, 42000, 43000, 44000, 45000, 46000, 47000, 48000, 49000, 1000000};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1002000;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 2};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {0, 0};
    vector<int> y = {30, -59};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 1000000};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 1000000};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 999952;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {1, 0, 2};
    CityLink* pObj = new CityLink();
    clock_t start = clock();
    int result = pObj->timeTaken(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4655&pm=1864
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define FOREACH(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
char buf1[1000];
 
string i2s(int x) {
  sprintf(buf1,"%d",x);
  return buf1;
}
 
 
const int MAXN = 64;
 
int n;
int dist[MAXN][MAXN];
 
struct CityLink {
  // MAIN
  int timeTaken(vector <int> x, vector <int> y) {
    n = size(x);
    REP(a,n) REP(b,n) {
      if(x[a]==x[b]) dist[a][b] = (abs(y[a]-y[b])+1)/2;
      else if(y[a]==y[b]) dist[a][b]=(abs(x[a]-x[b])+1)/2;
      else dist[a][b] = max(abs(x[a]-x[b]),abs(y[a]-y[b]));
    }
    REP(c,n) REP(a,n) REP(b,n)
      dist[a][b] = min(dist[a][b],max(dist[a][c],dist[c][b]));
    int r=0;
    REP(a,n) REP(b,n) r=max(r,dist[a][b]);
    return r;
  }
  
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/