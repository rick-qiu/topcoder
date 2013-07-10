/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11095
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

class CircleMarket {
public:
    int makePurchases(vector<int> openTime, vector<int> closeTime, int travelTime);
};

int CircleMarket::makePurchases(vector<int> openTime, vector<int> closeTime, int travelTime) {
    int ret;
    return ret;
}


int test0() {
    vector<int> openTime = {0, 0, 0};
    vector<int> closeTime = {100, 100, 100};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> openTime = {45, 45, 0};
    vector<int> closeTime = {50, 50, 20};
    int travelTime = 15;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> openTime = {1000, 1000};
    vector<int> closeTime = {1010, 1010};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> openTime = {999999, 2, 4};
    vector<int> closeTime = {1000000, 22, 44};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> openTime = {363, 237, 382, 232, 392, 3829, 99999, 12};
    vector<int> closeTime = {365, 1239, 2384, 234, 394, 3831, 100001, 15};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> openTime = {125583, 65917, 125116, 172075, 515215, 450107, 356787, 200438, 45858, 428125, 131149, 45055, 479440, 128530, 465323, 432920, 80219, 215525, 50589, 74539, 113470, 750763, 180018, 3927};
    vector<int> closeTime = {195983, 618327, 625649, 958910, 908202, 912367, 448940, 924171, 50114, 943376, 786156, 110289, 830201, 759568, 720295, 580918, 398252, 471293, 404674, 991862, 988835, 939467, 190144, 958975};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> openTime = {157756, 154657, 124478, 68004, 485351, 253780, 314608, 77234, 75081, 24427, 306237, 82911, 288230, 202974, 396443, 266224, 42390, 247879, 155930, 286532, 192006, 498916, 877560, 121005, 86372, 264134, 405703, 11668, 199926, 431116, 237343, 14188, 785420, 81665, 24754, 75908, 27529, 595891, 429463, 8133, 22104, 157961, 438538, 536639, 34140, 599144, 694788};
    vector<int> closeTime = {863190, 817478, 195073, 369352, 809884, 627825, 918456, 914768, 435173, 456782, 675829, 944244, 492346, 524875, 687174, 960764, 566484, 895012, 360200, 375191, 221236, 548394, 907695, 969652, 954976, 664264, 712166, 974429, 575472, 838249, 335354, 685501, 933621, 954288, 885976, 911298, 960373, 900658, 663512, 998695, 965379, 785695, 876749, 661304, 810511, 952919, 863345};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> openTime = {26609, 183945, 696106, 795960, 439976, 59387, 1606, 45267, 8726, 10679, 121, 126385, 172450, 170150, 149486, 175812, 454324, 491, 177975, 508082, 33331, 577079, 966356, 250167, 542222, 560820, 258572, 76382, 61183, 6685, 75954, 420507, 883387, 755423, 35049, 74802, 31472, 921145, 74801, 416524, 15184, 291825, 129983, 287499, 176672, 150482};
    vector<int> closeTime = {927436, 868289, 908986, 884207, 754497, 893396, 948449, 89214, 984645, 969095, 996552, 306276, 971495, 355764, 913305, 908257, 503214, 980667, 405851, 653185, 261367, 769440, 973738, 628548, 584250, 680620, 970155, 159830, 860218, 574696, 833848, 487401, 892618, 878056, 281308, 891322, 945552, 979639, 567627, 837276, 936191, 996998, 944460, 968051, 286262, 879538};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> openTime = {148806, 169884, 300995, 163, 153297, 75466, 14071, 55109, 112178, 145446, 78402, 10851, 348230, 619230, 51203, 58796, 148346, 37398, 323488, 46599, 92929, 221229, 290764, 108779, 7957};
    vector<int> closeTime = {903515, 995647, 430333, 991883, 798401, 624359, 761898, 992129, 812331, 406111, 950648, 994324, 939969, 934739, 938335, 921150, 847001, 961633, 910661, 892169, 159682, 949352, 362105, 947979, 995968};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> openTime = {554178, 84452, 356813, 114018, 84541, 536723, 348120, 91896, 1820, 836457, 35572, 172925, 65602, 210221, 118777, 126437, 146515, 499026, 48180, 141221, 52528, 166508, 412864, 7901, 837, 264726};
    vector<int> closeTime = {780186, 561322, 716775, 763542, 786141, 934306, 520876, 942172, 999640, 851298, 845508, 324731, 646102, 695905, 980535, 930987, 204330, 924830, 993857, 992082, 910050, 999000, 993531, 605536, 998508, 868779};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> openTime = {1091, 6455, 293762, 158349, 263434, 15402, 182591, 177592, 83786, 104012, 97551, 935, 545025, 671015};
    vector<int> closeTime = {923901, 849160, 669033, 952897, 924344, 270502, 950677, 384019, 945600, 730030, 940196, 997515, 567180, 965633};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> openTime = {131023, 154275, 54, 643532};
    vector<int> closeTime = {604824, 499534, 999998, 791792};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> openTime = {142330, 548459, 131075, 230535, 378138, 105, 33321, 12832, 514139, 539637, 738241, 113585, 102554, 136572};
    vector<int> closeTime = {965013, 578112, 393407, 981185, 551756, 997720, 267388, 990270, 645346, 709999, 742511, 558983, 664544, 290186};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> openTime = {232156, 293258, 55914, 66246, 289889, 74478, 242711, 538460, 535274, 387502, 987760, 41577, 111989, 85487, 194174, 177606, 68662, 339824, 2017, 707828, 464350, 15396, 66558, 496399, 188323, 172978, 710891, 35357, 60974, 423447, 7238, 416044, 326407, 16424, 80177, 99274, 145003, 229015, 202169, 529641, 169916, 178816};
    vector<int> closeTime = {279556, 772773, 710736, 736262, 475541, 979054, 995867, 821958, 852054, 802815, 998525, 939201, 371102, 953421, 297841, 980245, 934349, 935788, 998350, 813157, 497738, 996266, 894942, 645928, 241686, 778529, 969351, 993256, 134754, 552482, 780012, 883039, 767026, 998070, 452966, 935019, 680938, 696026, 945768, 811132, 960784, 957594};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> openTime = {128440, 84215, 5959, 311823, 472816, 72227, 460202, 551997, 730607, 71425, 25483, 23435, 392448, 248153, 622670, 30808, 149894, 6664, 358394, 315348, 60326, 28280, 135958, 362735, 275097, 321866};
    vector<int> closeTime = {255570, 838753, 627908, 832792, 527785, 709460, 873303, 993560, 784953, 267408, 935486, 707046, 940414, 264238, 873319, 827051, 794410, 819846, 969129, 882013, 815713, 964581, 216727, 481908, 936599, 737619};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> openTime = {870041, 251311, 68115, 447890, 878424, 290897, 454061, 557214, 596174, 98576, 148277, 213847, 145538, 89321, 119884, 736441, 442687, 10929, 607260, 82650, 111899, 604701, 64859, 67928, 317292, 349306, 506046, 55402, 78332, 80461, 450389, 137594, 68119, 79178, 391799, 472248, 750114, 69200, 10078, 646098, 491586, 170575, 109285, 1245, 170335, 190736, 522468};
    vector<int> closeTime = {984082, 940573, 347184, 998675, 926243, 363390, 467758, 627780, 802596, 964409, 785908, 662713, 964964, 985497, 582579, 927035, 475115, 964851, 633152, 244624, 938775, 729898, 543729, 734335, 523999, 583991, 647717, 709931, 756898, 868274, 721762, 555073, 957248, 580007, 474720, 971497, 912785, 991350, 687274, 928846, 805242, 918303, 893500, 998393, 833374, 774979, 952828};
    int travelTime = 5;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> openTime = {69798, 298963, 63128, 333610, 710401, 607961, 281218, 474701, 309512, 175035, 732056, 80204, 329662, 902452, 34131, 76461, 94141, 457912, 196698, 5516, 172599, 40303, 727906, 368432, 158298, 685986, 423191, 447150, 753094, 664653, 195852, 965913, 183143, 527783, 35130, 35670, 43622, 2689, 127560, 463037, 39179, 813199, 24338, 595415, 114559};
    vector<int> closeTime = {923596, 999047, 937414, 685838, 767327, 999902, 854246, 957750, 463956, 256662, 981553, 187165, 688795, 975689, 940566, 991753, 524159, 483379, 300393, 221102, 886581, 887648, 857515, 944408, 747848, 723022, 533820, 965784, 859436, 964827, 601714, 983614, 991651, 703831, 752860, 713755, 933223, 921119, 928339, 566427, 184431, 876119, 987463, 769700, 985759};
    int travelTime = 4;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> openTime = {789620, 405022, 275590, 477493, 153486, 153288, 174318, 63682, 246295, 748951, 382343, 187817, 683842, 143374, 330874, 166059, 39561, 125930, 309999, 1817, 632826, 211995, 28448, 636511, 338411, 16447, 91074, 252915, 6950, 181529, 108544, 17008, 2863, 604040, 153427, 837772, 287946, 196497, 13328, 34888, 25307, 632283, 204143, 166387, 261850, 319759, 150180, 16197, 127450};
    vector<int> closeTime = {869794, 812883, 742716, 776432, 455934, 988364, 456414, 862063, 555597, 819360, 766005, 620431, 813277, 785513, 469889, 413664, 992505, 244038, 871493, 942983, 823027, 544448, 898105, 651318, 651915, 988793, 602950, 889747, 943937, 261004, 767116, 974203, 919571, 999326, 681966, 994058, 838210, 841722, 744865, 836949, 997095, 814730, 934485, 957176, 453180, 733966, 858536, 86533, 998554};
    int travelTime = 6;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> openTime = {676176, 275856, 206320, 89718, 358553, 5685, 78809, 705601, 345791, 106622, 710842, 102730, 197806, 133712, 343607, 209208, 677724, 426918, 3688, 741145, 416220, 74504, 109534, 41333, 823671, 856, 534896, 191417, 793108, 15298, 502191, 38115, 620724, 305780, 121387, 763694, 28581, 30115, 362306, 530676, 110008, 273007, 515489, 31279, 279819, 153766, 213965, 262620};
    vector<int> closeTime = {780189, 556460, 209491, 812576, 512373, 977563, 838852, 823979, 891183, 715315, 799754, 839261, 690597, 986620, 960833, 956689, 879717, 809839, 995245, 844040, 598360, 917744, 984791, 882200, 939253, 965060, 869702, 905749, 950846, 695510, 752266, 458052, 968165, 736617, 861764, 987161, 986467, 650931, 980721, 582101, 978129, 383344, 648943, 883585, 864897, 894248, 860702, 264218};
    int travelTime = 5;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> openTime = {147497, 135602, 253380, 22709, 837176, 137416, 25712, 476959, 66776, 258564, 56983, 22348, 825465, 15809, 635583, 354043, 6188, 158366, 35595, 93136, 579208, 64270, 447629, 411407, 31755, 134045, 18809, 251294, 220118, 38571, 310212, 9565, 11156, 219171, 102848, 245198, 508390, 145355, 190113, 29422, 81952, 217451, 142242, 499372, 339135, 121304, 139073, 372939};
    vector<int> closeTime = {578785, 798117, 957819, 381769, 933060, 635532, 924351, 784772, 985269, 563509, 98014, 987175, 972237, 896693, 944773, 426072, 695273, 819460, 921462, 958222, 779752, 907851, 803704, 670483, 974146, 495865, 234257, 451504, 629664, 795542, 939967, 252333, 994920, 927266, 670238, 813967, 772687, 929713, 872533, 996635, 991213, 873968, 968809, 622926, 762244, 998847, 687747, 738010};
    int travelTime = 10;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> openTime = {262849, 39948, 196973, 89103, 84878, 14321, 64634, 168464, 392260, 26420, 370534, 116905, 239912, 52666, 171868, 5032, 285350, 46192, 333693, 890336, 564679, 185786, 28663, 197041, 191520, 623711, 170078, 467678, 239248, 577154, 144232, 74227, 75293, 84314, 79003, 229337, 191699, 59824, 25542, 303604, 243439, 408888, 202993, 151886, 380917, 33569, 817054, 358096};
    vector<int> closeTime = {855574, 525537, 331402, 768249, 926608, 937966, 775651, 644124, 865915, 601844, 540124, 790489, 693638, 901795, 856785, 999745, 952070, 892172, 601319, 900542, 773083, 997884, 820977, 245741, 997956, 987640, 287891, 826256, 291576, 945592, 845547, 984278, 942482, 450899, 761575, 455151, 531164, 385998, 995885, 448337, 356005, 437930, 540013, 958817, 937383, 937483, 917179, 445478};
    int travelTime = 6;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> openTime = {431433, 418351, 46381, 20965, 35625, 274480, 117609, 616708, 85693, 216835, 248460, 385089, 128338, 293293, 326626, 6354, 74336, 3305, 132173, 309453, 101, 15540, 568257, 7558, 466236, 19127, 162217, 156763, 362384, 71993, 104056, 28229, 201319, 72311, 2179, 331544, 405198, 25315, 191148, 102351, 79717, 621393, 457957, 605421, 333210, 79018, 68672, 287546, 51638, 3229};
    vector<int> closeTime = {969950, 881119, 956687, 449725, 930805, 808077, 893992, 830328, 333198, 927597, 970980, 972230, 761439, 904454, 733862, 964859, 734173, 879597, 387321, 606205, 999938, 793924, 974683, 867415, 907262, 604368, 374812, 341489, 661543, 80598, 980180, 178041, 621060, 765351, 993276, 902942, 841269, 851563, 941319, 482227, 861237, 920450, 471530, 650718, 938985, 774920, 978827, 498296, 551073, 991785};
    int travelTime = 6;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> openTime = {408271, 917863, 127515, 19144, 25894, 875300, 274936, 634659, 245594, 32537, 77872, 232722, 777123, 82248, 200300, 416121, 195176, 12232, 576717, 18524, 24997, 224897, 135246, 108327, 50663, 25260, 436809, 273398, 593506, 17961, 286607, 14675, 365012, 197162, 184159, 379931, 739643, 398220, 171612, 26388, 494604, 160788, 338741, 14890, 486314, 390778, 32600, 306364};
    vector<int> closeTime = {973845, 958007, 944254, 38497, 661206, 927479, 887508, 971647, 495332, 100594, 864131, 682044, 953110, 971490, 994373, 783029, 481730, 611770, 659448, 986595, 971607, 774386, 670096, 881494, 880466, 475625, 660805, 448774, 864735, 998348, 658376, 400581, 433046, 266849, 722510, 726808, 928333, 721204, 499164, 821846, 927278, 539082, 665361, 948695, 973727, 612182, 493174, 871485};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> openTime = {556628, 336234, 250474, 294287, 562924, 41694, 182852, 250411, 597643, 286460, 562136, 16128, 57495, 707197, 260420, 364328, 301270, 422278, 288, 80646, 402836, 47809, 482798, 66811, 109200, 160983, 645349, 461989, 41237, 71653, 364269, 174243, 47975, 623333, 761075, 6236, 10732, 353353, 258840, 168765, 37864, 770603, 663926, 205500, 62320};
    vector<int> closeTime = {961825, 876640, 729963, 757277, 869793, 814865, 624180, 920648, 967958, 738839, 918441, 975950, 783513, 958759, 443158, 658514, 797087, 438220, 971185, 918831, 899016, 992229, 952095, 717999, 872233, 996278, 759196, 899850, 797222, 960925, 419244, 701057, 623760, 798632, 822328, 290967, 967088, 493549, 381639, 842075, 936151, 946229, 870179, 988838, 989784};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> openTime = {697156, 74881, 170086, 33037, 90546, 96569, 425389, 31473, 535956, 112137, 612427, 607523, 20788, 122111, 532664, 404344, 117853, 328762, 44729, 9361, 47064, 334356, 159470, 25668, 152757, 19186, 156425, 328716, 111342, 424832, 647984, 603115, 355436, 561722, 90342, 616491, 137069, 371700, 58911, 5764, 92562, 120225, 219571, 518206, 512831, 109029, 101029, 318624};
    vector<int> closeTime = {997682, 563241, 604505, 373064, 431398, 863978, 988253, 421469, 983786, 983027, 816008, 668672, 672581, 292863, 806783, 586649, 558057, 828348, 800131, 971123, 848487, 658341, 432887, 994488, 854618, 726749, 958464, 847447, 912585, 829519, 761911, 699914, 839369, 700008, 797630, 832018, 944508, 622713, 934492, 435077, 948413, 958231, 822250, 700343, 900525, 959628, 554158, 440663};
    int travelTime = 5;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> openTime = {87911, 808662, 86412, 772542, 307777, 614660, 9310, 937321, 298017, 608108, 568649, 453045, 922790, 550855, 61175, 513501, 129113, 741648, 456824, 410806, 787532, 327302, 649648, 113029, 269679, 78297, 331543, 604048, 531336, 418642, 365410, 604817, 849085, 551113, 517741, 302467, 676934, 233831, 485674, 185883, 124980, 895627, 666498, 943126, 401875, 488010, 891401, 277124};
    vector<int> closeTime = {87912, 808664, 86413, 772547, 307779, 614664, 9311, 937330, 298026, 608118, 568657, 453047, 922794, 550865, 61182, 513503, 129114, 741654, 456827, 410813, 787539, 327309, 649656, 113037, 269681, 78307, 331551, 604056, 531343, 418644, 365419, 604822, 849094, 551121, 517742, 302471, 676944, 233841, 485682, 185891, 124984, 895637, 666508, 943131, 401878, 488016, 891403, 277130};
    int travelTime = 20;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> openTime = {489554, 13997, 408836, 177529, 154173, 533743, 406078, 378930, 847309, 974127, 302320, 527522, 651233, 871218, 178863, 602143, 805472, 608180, 184180, 965959, 33657, 395053, 282073, 130502, 684585, 726198, 421921, 884057, 645272, 201141, 457507, 504145, 405993, 829401, 906316, 61544, 369329, 942039, 515518, 264924, 828378, 520168, 574541, 495136, 363530, 268323};
    vector<int> closeTime = {489557, 14002, 408840, 177539, 154178, 533750, 406083, 378936, 847312, 974128, 302321, 527531, 651235, 871228, 178868, 602148, 805475, 608189, 184181, 965964, 33662, 395058, 282078, 130509, 684588, 726206, 421922, 884064, 645281, 201144, 457513, 504151, 405996, 829408, 906326, 61546, 369335, 942048, 515519, 264929, 828386, 520178, 574546, 495144, 363540, 268332};
    int travelTime = 11;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> openTime = {804807, 46094, 390237, 538328, 149204, 155278, 888985, 423137, 309024, 473917, 433612, 266928, 888093, 185985, 892880, 449108, 349698, 491894, 906823, 926355, 702622, 433244, 881812, 900214, 155583, 654509, 647677, 853958, 879130, 692571, 967195, 395983, 300549, 73351, 204297, 434846, 193877, 810676, 443109, 251515, 836430, 961927, 564337, 6133, 632012, 206773};
    vector<int> closeTime = {804813, 46102, 390246, 538337, 149213, 155286, 888986, 423142, 309025, 473927, 433618, 266935, 888094, 185995, 892884, 449115, 349704, 491899, 906833, 926362, 702624, 433254, 881817, 900222, 155589, 654513, 647679, 853962, 879134, 692576, 967201, 395992, 300552, 73358, 204298, 434854, 193883, 810683, 443118, 251518, 836433, 961933, 564338, 6134, 632018, 206782};
    int travelTime = 7;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> openTime = {88508, 757848, 95022, 988206, 291605, 681487, 861863, 756103, 906654, 363413, 440638, 479418, 650527, 183830, 628737, 227811, 852936, 991706, 974785, 92121, 498695, 35652, 480391, 859610, 296304, 946612, 282211, 507465, 525142, 399515, 572457, 496718, 937697, 680087, 718758, 55829, 416267, 6733, 970424, 850396, 49765, 698812, 254816, 535506, 591121, 349861, 205412};
    vector<int> closeTime = {88515, 757850, 95032, 988209, 291612, 681495, 861869, 756104, 906656, 363416, 440644, 479421, 650534, 183833, 628740, 227820, 852946, 991712, 974787, 92130, 498703, 35655, 480401, 859620, 296311, 946618, 282215, 507467, 525149, 399518, 572464, 496719, 937706, 680089, 718761, 55834, 416274, 6735, 970427, 850399, 49775, 698816, 254823, 535510, 591123, 349869, 205413};
    int travelTime = 18;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> openTime = {226751, 108684, 952981, 590631, 318188, 862301, 951787, 222840, 560892, 249642, 546288, 529003, 540247, 103805, 672019, 842609, 948829, 753293, 86455, 932491, 202350, 62070, 326146, 625817, 632075, 525989, 624654, 351227, 723224, 525134, 559905, 169861, 674766, 837813, 683390, 613356, 871914, 479464, 374229, 643898, 578618, 111393, 824056, 653131, 723185, 35831, 781345, 902049, 512979};
    vector<int> closeTime = {226752, 108691, 952988, 590638, 318191, 862302, 951789, 222850, 560900, 249650, 546297, 529008, 540255, 103814, 672024, 842613, 948833, 753294, 86461, 932498, 202351, 62072, 326153, 625827, 632079, 525999, 624655, 351233, 723226, 525140, 559910, 169870, 674775, 837822, 683400, 613361, 871924, 479472, 374233, 643908, 578619, 111400, 824058, 653135, 723186, 35836, 781351, 902052, 512980};
    int travelTime = 6;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> openTime = {73523, 470964, 382050, 544240, 734860, 264373, 472180, 643099, 607286, 852514, 425193, 485406, 637562, 721155, 705456, 503946, 170777, 107798, 503311, 302486, 435222, 9415, 350259, 509051, 150441, 823678, 785074, 795579, 449960, 412332, 717470, 536975, 618789, 185899, 676176, 231398, 819175, 996229, 980355, 474840, 445490, 365812, 518609, 985288, 616373, 626381};
    vector<int> closeTime = {73533, 470973, 382058, 544244, 734862, 264382, 472190, 643106, 607292, 852522, 425195, 485407, 637565, 721159, 705457, 503948, 170780, 107805, 503312, 302496, 435231, 9425, 350267, 509057, 150445, 823679, 785084, 795586, 449968, 412338, 717473, 536983, 618792, 185905, 676184, 231405, 819180, 996234, 980363, 474848, 445498, 365821, 518614, 985297, 616379, 626389};
    int travelTime = 18;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> openTime = {657849, 786986, 449885, 571409, 770844, 383911, 936868, 26308, 26068, 827041, 547163, 716253, 541142, 923223, 874247, 249110, 901630, 557914, 892595, 735087, 214405, 21442, 503376, 329202, 181023, 330780, 602234, 516506, 382166, 503298, 570766, 409122, 24104, 414711, 555805, 194854, 244387, 683294, 434163, 986806, 666033, 787727, 448884, 548905, 75647, 96756, 647089, 476809, 288553};
    vector<int> closeTime = {657856, 786994, 449892, 571419, 770852, 383918, 936872, 26309, 26071, 827050, 547165, 716258, 541152, 923229, 874256, 249112, 901635, 557924, 892604, 735097, 214412, 21451, 503381, 329205, 181031, 330785, 602237, 516516, 382173, 503308, 570770, 409124, 24105, 414721, 555809, 194861, 244390, 683299, 434169, 986809, 666038, 787736, 448887, 548908, 75655, 96763, 647092, 476810, 288561};
    int travelTime = 17;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> openTime = {400607, 643710, 635630, 306279, 800636, 863257, 361390, 157968, 601740, 368710, 814981, 604178, 967112, 577603, 594796, 287679, 860826, 370185, 652905, 388716, 531340, 426436, 925429, 864780, 68947, 862439, 884622, 111957, 907738, 527382, 846740, 338296, 636190, 599514, 55140, 402910, 651900, 54962, 94268, 257015, 30151, 732060, 406398, 43823, 779339};
    vector<int> closeTime = {400614, 643717, 635636, 306289, 800637, 863260, 361391, 157978, 601750, 368718, 814988, 604188, 967114, 577606, 594798, 287683, 860835, 370193, 652910, 388725, 531347, 426445, 925438, 864783, 68956, 862443, 884623, 111959, 907741, 527383, 846745, 338300, 636196, 599519, 55144, 402914, 651901, 54964, 94277, 257019, 30156, 732065, 406399, 43827, 779344};
    int travelTime = 5;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> openTime = {257187, 638458, 600452, 693042, 999137, 794689, 813736, 878300, 401646, 135586, 79118, 737322, 97433, 105507, 956754, 459050, 867072, 803475, 128075, 289523, 260478, 148125, 446179, 320422, 241849, 302213, 989871, 617256, 881781, 820688, 534548, 205997, 291862, 794754, 691366, 433713, 388121, 120689, 512239, 579462, 664400, 161570, 730186, 722593, 516446, 223839, 562874};
    vector<int> closeTime = {257195, 638468, 600453, 693044, 999143, 794698, 813746, 878301, 401654, 135587, 79125, 737327, 97439, 105509, 956757, 459055, 867075, 803482, 128079, 289526, 260484, 148132, 446180, 320427, 241853, 302220, 989878, 617264, 881785, 820693, 534549, 205999, 291870, 794759, 691374, 433715, 388125, 120692, 512244, 579464, 664403, 161574, 730192, 722597, 516448, 223845, 562884};
    int travelTime = 12;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> openTime = {355739, 955672, 328175, 583796, 551091, 167009, 804011, 827774, 126997, 845657, 412962, 64879, 977274, 787256, 15423, 318733, 946797, 263833, 777865, 149284, 34149, 945384, 766338, 15034, 647634, 515240, 88140, 993546, 911262, 598106, 450968, 243219, 867579, 419446, 767346, 774962, 548590, 713168, 390289, 874633, 692149, 483901, 830928, 406831, 884277, 124369, 887732};
    vector<int> closeTime = {355743, 955677, 328185, 583806, 551092, 167016, 804013, 827779, 126998, 845660, 412972, 64880, 977278, 787266, 15432, 318736, 946805, 263842, 777868, 149289, 34154, 945394, 766341, 15040, 647642, 515241, 88150, 993549, 911265, 598107, 450974, 243225, 867581, 419451, 767354, 774971, 548598, 713171, 390294, 874638, 692155, 483904, 830931, 406837, 884285, 124371, 887737};
    int travelTime = 8;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> openTime = {829693, 484763, 502762, 671946, 506225, 152455, 331848, 124441, 352478, 527995, 269522, 516911, 524547, 231042, 472170, 21154, 801076, 694823, 716322, 829248, 618406, 830757, 330789, 349288, 818022, 548274, 850433, 267994, 291768, 175360, 524065, 848267, 707759, 705257, 663703, 993296, 852755, 287842, 239302, 243802, 602175, 641736, 974103, 992591, 549308, 368729, 707227, 318589, 569525};
    vector<int> closeTime = {829888, 484917, 502940, 672081, 506419, 152635, 332008, 124609, 352585, 528124, 269683, 517102, 524721, 231202, 472363, 21284, 801238, 694948, 716489, 829352, 618587, 830882, 330904, 349407, 818136, 548390, 850614, 268105, 291899, 175519, 524208, 848456, 707865, 705421, 663823, 993478, 852903, 287984, 239405, 243939, 602307, 641901, 974279, 992703, 549501, 368851, 707330, 318781, 569700};
    int travelTime = 151;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> openTime = {22583, 892129, 861854, 979194, 514203, 423639, 884591, 369673, 273841, 551096, 913948, 616910, 359554, 244514, 39281, 768098, 446276, 235801, 70321, 697943, 601301, 119378, 105936, 702092, 133084, 40707, 730471, 86686, 582519, 331086, 203235, 354788, 834054, 891103, 41107, 925099, 524471, 310024, 438007, 196798, 875232, 243347, 631261, 252208, 101783};
    vector<int> closeTime = {22689, 892323, 861999, 979317, 514360, 423804, 884782, 369808, 274012, 551283, 914099, 617068, 359754, 244702, 39465, 768224, 446474, 235996, 70501, 698086, 601448, 119547, 106071, 702205, 133189, 40833, 730651, 86828, 582647, 331239, 203360, 354927, 834248, 891223, 41288, 925261, 524604, 310172, 438125, 196952, 875357, 243454, 631397, 252334, 101953};
    int travelTime = 150;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> openTime = {929112, 162742, 904965, 789489, 85362, 467838, 744382, 979530, 781108, 462352, 222711, 883328, 701375, 169106, 356202, 539679, 782674, 703942, 182662, 766051, 435553, 471385, 626029, 963157, 191285, 619622, 62604, 88745, 856753, 904158, 148508, 932503, 786623, 601502, 541063, 240739, 138069, 171803, 136319, 978714, 379511, 695676, 880761, 605029, 75341, 910475, 994291, 969947, 612702};
    vector<int> closeTime = {929288, 162873, 905086, 789651, 85533, 468021, 744548, 979676, 781217, 462452, 222881, 883496, 701478, 169237, 356355, 539814, 782845, 704046, 182766, 766241, 435736, 471531, 626133, 963339, 191433, 619764, 62731, 88876, 856881, 904329, 148628, 932689, 786791, 601686, 541259, 240934, 138245, 171990, 136440, 978858, 379660, 695801, 880920, 605185, 75528, 910667, 994452, 970069, 612811};
    int travelTime = 132;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> openTime = {868267, 26136, 160251, 929563, 794392, 378262, 443080, 326629, 569953, 783764, 525014, 456035, 886302, 885375, 268954, 555823, 692429, 972992, 277618, 584153, 748956, 390386, 224261, 11938, 27921, 587916, 18257, 959934, 637609, 832705, 711409, 370275, 403708, 182905, 787862, 766367, 993270, 820767, 869917, 286260, 702596, 905422, 181804, 627351, 868878, 705593, 971538};
    vector<int> closeTime = {868415, 26328, 160369, 929693, 794578, 378458, 443241, 326750, 570116, 783912, 525204, 456205, 886475, 885543, 269112, 555940, 692593, 973095, 277811, 584319, 749108, 390573, 224460, 12136, 28095, 588070, 18446, 960073, 637740, 832808, 711530, 370400, 403857, 183097, 788034, 766535, 993456, 820911, 870030, 286366, 702705, 905614, 181988, 627454, 869039, 705727, 971686};
    int travelTime = 108;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> openTime = {187659, 532272, 989363, 556987, 658889, 494443, 857377, 44216, 715388, 157270, 533990, 628556, 450563, 523923, 717762, 593473, 940270, 998081, 268274, 573261, 424313, 607643, 701971, 976162, 48564, 338673, 112013, 502113, 558062, 650013, 265521, 575614, 394473, 894766, 306686, 365534, 343557, 147765, 675731, 327371, 621187, 423973, 848757, 911898, 478898, 428848, 935236};
    vector<int> closeTime = {187816, 532464, 989494, 557109, 659019, 494581, 857535, 44367, 715544, 157431, 534133, 628690, 450746, 524025, 717869, 593597, 940405, 998186, 268403, 573362, 424479, 607837, 702094, 976266, 48731, 338842, 112198, 502280, 558248, 650130, 265624, 575743, 394637, 894941, 306839, 365683, 343727, 147909, 675916, 327529, 621331, 424078, 848890, 912005, 479032, 429008, 935423};
    int travelTime = 129;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> openTime = {892412, 75410, 647552, 718846, 176378, 333754, 891429, 501875, 811741, 374307, 297293, 101498, 436743, 655304, 99371, 136901, 907046, 81780, 745602, 809166, 504804, 998762, 372456, 487307, 254208, 918820, 264929, 304266, 394997, 799559, 42449, 522815, 403445, 615784, 581042, 605016, 745478, 767694, 908687, 932884, 702333, 573894, 305724, 862622, 314006, 658980};
    vector<int> closeTime = {892580, 75608, 647692, 718973, 176560, 333950, 891574, 502041, 811923, 374496, 297414, 101615, 436906, 655490, 99539, 137089, 907195, 81979, 745728, 809285, 504911, 998919, 372652, 487407, 254311, 918946, 265118, 304466, 395113, 799683, 42594, 523014, 403578, 615934, 581147, 605132, 745593, 767804, 908867, 933084, 702508, 574094, 305883, 862787, 314196, 659168};
    int travelTime = 126;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> openTime = {153770, 251252, 538341, 976185, 94539, 527114, 896532, 607250, 51574, 20202, 126116, 55876, 498526, 302243, 638845, 351292, 356594, 688021, 774001, 113577, 826308, 140675, 900639, 988014, 865872, 593768, 208328, 514569, 968955, 598268, 161576, 6281, 102721, 770391, 196681, 357954, 215737, 893111, 156396, 288323, 225868, 793100, 842362, 606771, 103137};
    vector<int> closeTime = {153958, 251391, 538456, 976316, 94695, 527295, 896722, 607371, 51704, 20395, 126260, 55980, 498632, 302435, 639026, 351468, 356696, 688157, 774198, 113680, 826430, 140815, 900759, 988127, 866056, 593887, 208451, 514721, 969135, 598409, 161765, 6402, 102881, 770492, 196829, 358093, 215861, 893305, 156513, 288463, 225996, 793293, 842513, 606966, 103309};
    int travelTime = 175;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> openTime = {433736, 855345, 830188, 503447, 693938, 453318, 836502, 709848, 618702, 362681, 946347, 708575, 10202, 499001, 190675, 198212, 371520, 346714, 443694, 232211, 186042, 704529, 416033, 124225, 870002, 823287, 504822, 804123, 720570, 726532, 224059, 78988, 547498, 410438, 779819, 778966, 697114, 123299, 909419, 890020, 533903, 186814, 473893, 224526, 548674, 471928, 341239};
    vector<int> closeTime = {433844, 855539, 830352, 503619, 694109, 453457, 836611, 709952, 618835, 362827, 946529, 708685, 10313, 499126, 190871, 198381, 371664, 346897, 443888, 232397, 186180, 704655, 416151, 124350, 870141, 823429, 504990, 804275, 720728, 726681, 224244, 79096, 547682, 410612, 779925, 779120, 697252, 123495, 909593, 890209, 534014, 186991, 474036, 224661, 548819, 472108, 341391};
    int travelTime = 115;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> openTime = {542952, 921045, 857655, 145117, 100850, 227558, 382285, 393633, 617790, 994129, 49915, 839981, 364219, 304084, 671373, 917243, 685827, 810493, 418575, 138594, 974348, 279230, 839189, 602498, 132536, 345064, 872859, 773050, 531402, 396167, 630227, 344822, 322061, 636388, 60184, 444849, 54072, 829136, 120956, 7670, 230671, 607681, 593208, 332651, 133727, 450742, 431020, 584952, 624588};
    vector<int> closeTime = {543065, 921191, 857810, 145272, 101008, 227706, 382442, 393814, 617914, 994313, 50104, 840179, 364412, 304278, 671553, 917364, 686001, 810617, 418727, 138773, 974477, 279400, 839371, 602623, 132681, 345198, 872960, 773205, 531547, 396345, 630363, 344922, 322235, 636490, 60298, 445044, 54265, 829305, 121105, 7830, 230864, 607871, 593379, 332787, 133902, 450877, 431206, 585148, 624710};
    int travelTime = 195;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> openTime = {598092, 661314, 342285, 302680, 783528, 714730, 233758, 585095, 330269, 922037, 702127, 50512, 449187, 900996, 90947, 712488, 335749, 965244, 310718, 13588, 301165, 227220, 579854, 323260, 636604, 353661, 697549, 890742, 104683, 235775, 453283, 773785, 640958, 200124, 514646, 15082, 70009, 157438, 657780, 300703, 128587, 375040, 685781, 764615, 494854, 728101};
    vector<int> closeTime = {598214, 661478, 342421, 302858, 783685, 714905, 233863, 585259, 330429, 922199, 702278, 50688, 449299, 901129, 91144, 712629, 335880, 965426, 310882, 13724, 301330, 227322, 580002, 323425, 636759, 353845, 697698, 890877, 104836, 235875, 453428, 773982, 641109, 200292, 514805, 15272, 70154, 157578, 657974, 300827, 128696, 375176, 685914, 764790, 495016, 728296};
    int travelTime = 167;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> openTime = {802744, 244531, 845226, 277545, 172661, 155429, 963418, 175282, 493808, 9586, 89423, 672235, 37738, 193241, 316422, 353057, 507469, 179882, 604868, 608225, 739518, 881804, 758951, 170677, 345423, 996146, 655618, 998857, 14535, 789369, 849181, 737072, 713060, 554125, 431256, 142101, 335881, 840631, 122968, 139698, 270338, 22593, 814473, 721014, 655197, 548821, 141650, 551114, 364365};
    vector<int> closeTime = {803004, 244882, 845550, 277810, 172863, 155726, 963710, 175498, 494106, 9816, 89660, 672556, 38108, 193445, 316690, 353405, 507778, 180216, 605081, 608532, 739795, 882043, 759338, 171053, 345781, 996346, 655970, 999207, 14871, 789750, 849446, 737383, 713349, 554463, 431619, 142480, 336167, 840906, 123187, 139917, 270722, 22827, 814757, 721265, 655580, 549084, 141917, 551343, 364701};
    int travelTime = 156;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> openTime = {673314, 712898, 853703, 118328, 412068, 286223, 178502, 956078, 802205, 345217, 504522, 584100, 896541, 730805, 438976, 474132, 435567, 707464, 485284, 257957, 429016, 38893, 334613, 612083, 651447, 509654, 969480, 977362, 946006, 364439, 412607, 382423, 769085, 545141, 140190, 829168, 821485, 669920, 137504, 567755, 288361, 20193, 465953, 764881, 781942};
    vector<int> closeTime = {673645, 713293, 853938, 118627, 412306, 286505, 178707, 956467, 802518, 345510, 504740, 584370, 896816, 731149, 439256, 474476, 435826, 707830, 485606, 258323, 429280, 39184, 334891, 612337, 651752, 509983, 969690, 977662, 946240, 364648, 412975, 382796, 769443, 545520, 140461, 829500, 821752, 670144, 137872, 568015, 288744, 20499, 466164, 765261, 782300};
    int travelTime = 114;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> openTime = {988824, 470846, 136975, 655629, 508020, 444110, 536581, 153887, 832028, 158352, 500359, 838645, 81423, 474333, 642903, 521256, 143708, 28750, 395863, 649937, 801723, 493646, 825189, 352632, 957828, 738151, 596007, 654114, 583399, 470392, 476265, 387626, 758318, 759001, 232749, 10972, 78250, 481262, 138843, 394518, 699513, 163119, 40012, 597046, 715292, 432317, 238349, 95653};
    vector<int> closeTime = {989223, 471079, 137354, 655928, 508230, 444427, 536793, 154172, 832267, 158557, 500610, 839008, 81647, 474596, 643288, 521467, 143996, 29103, 396122, 650246, 802104, 493870, 825445, 352871, 958048, 738500, 596273, 654324, 583796, 470627, 476596, 387985, 758651, 759276, 232971, 11245, 78640, 481628, 139181, 394818, 699869, 163380, 40409, 597427, 715527, 432675, 238633, 95916};
    int travelTime = 182;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> openTime = {519912, 827897, 505376, 308359, 401465, 187493, 38306, 575046, 915896, 518514, 566484, 234638, 535826, 700864, 798008, 444037, 989064, 190950, 223658, 807083, 729179, 860027, 744969, 218146, 679729, 863418, 436666, 734475, 683829, 510434, 135275, 67793, 689678, 763455, 854798, 127284, 584926, 77608, 763704, 882248, 875528, 647046, 973026, 767250, 357452, 944444, 206069, 281775, 618711, 306};
    vector<int> closeTime = {520147, 828257, 505757, 308673, 401739, 187871, 38596, 575343, 916296, 518736, 566756, 234959, 536209, 701130, 798337, 444265, 989447, 191300, 223943, 807315, 729386, 860278, 745322, 218526, 680109, 863659, 437056, 734720, 684039, 510822, 135630, 68032, 690042, 763663, 855111, 127552, 585149, 77918, 764029, 882470, 875915, 647313, 973419, 767559, 357834, 944750, 206309, 282112, 618987, 525};
    int travelTime = 126;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> openTime = {942556, 267424, 835214, 906262, 492517, 671041, 971432, 139615, 268838, 591064, 462952, 214599, 472803, 873492, 880790, 68392, 898871, 523691, 102188, 626483, 400077, 147326, 395347, 316471, 575414, 122694, 163187, 946323, 680011, 166394, 170484, 516195, 533815, 781864, 948512, 158036, 232642, 307052, 902209, 872310, 677551, 526089, 860742, 878853, 253741, 422600};
    vector<int> closeTime = {942884, 267676, 835438, 906466, 492800, 671352, 971708, 139886, 269051, 591287, 463209, 214996, 473061, 873865, 881117, 68630, 899175, 524070, 102455, 626858, 400371, 147687, 395620, 316677, 575624, 123044, 163387, 946697, 680234, 166602, 170791, 516447, 534048, 782099, 948844, 158311, 232924, 307329, 902495, 872582, 677830, 526444, 860944, 879138, 254023, 422874};
    int travelTime = 161;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> openTime = {414831, 326423, 197006, 110, 37370, 212846, 454184, 514553, 633858, 413533, 478630, 465396, 886432, 246303, 51976, 297276, 575887, 694556, 506435, 492573, 691558, 235936, 810999, 895986, 411650, 5174, 193926, 716988, 973750, 327307, 773084, 271732, 500448, 582352, 340097, 224230, 220959, 121417, 714948, 97491, 709326, 391619, 854915, 889173, 175731, 182541, 251477, 74697, 425419};
    vector<int> closeTime = {415210, 326651, 197209, 321, 37600, 213246, 454428, 514902, 634177, 413837, 478983, 465709, 886820, 246690, 52268, 297641, 576109, 694817, 506822, 492928, 691825, 236143, 811296, 896268, 411981, 5529, 194194, 717189, 974058, 327706, 773313, 271956, 500713, 582665, 340465, 224543, 221325, 121666, 715231, 97704, 709709, 391865, 855133, 889400, 176044, 182755, 251791, 75027, 425647};
    int travelTime = 123;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> openTime = {784751, 387410, 759340, 456008, 83394, 751597, 913726, 280394, 200205, 55961, 360494, 914497, 105454, 843810, 190310, 105398, 392796, 818857, 727324, 762772, 257036, 164494, 217946, 933600, 966719, 570197, 629600, 328029, 611614, 231933, 708932, 492047, 307112, 100889, 689919, 512533, 521410, 578080, 418318, 947464, 713663, 470745, 40827, 769882, 726653, 797186, 28657, 62148, 492516};
    vector<int> closeTime = {784976, 387751, 759685, 456272, 83607, 751932, 914056, 280595, 200473, 56349, 360856, 914719, 105731, 844065, 190568, 105671, 393053, 819152, 727646, 763072, 257430, 164733, 218220, 933970, 967004, 570573, 629853, 328254, 612003, 232229, 709216, 492271, 307460, 101219, 690311, 512929, 521676, 578439, 418610, 947763, 714026, 471003, 41053, 770170, 726929, 797500, 28884, 62364, 492867};
    int travelTime = 143;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> openTime = {282281, 497530, 386697, 474468, 498185, 270555, 691020, 583206, 446673, 99846, 35729, 559429, 107508, 498561, 776694, 152582, 263541, 941532, 688585, 363626, 392389, 783674, 345977, 165875, 58987, 976637, 38818, 640944, 818525, 394865, 851240, 268564, 202390, 49779, 100624, 717665, 824570, 142265, 514768, 739250, 811775, 259209, 268861, 545301, 612332, 958343, 3353, 612167, 996585, 811672};
    vector<int> closeTime = {282494, 497778, 386982, 474731, 498429, 270825, 691365, 583430, 446961, 100146, 35936, 559813, 107757, 498801, 777064, 152961, 263887, 941892, 688942, 363997, 392789, 784024, 346347, 166166, 59369, 976970, 39191, 641337, 818838, 395247, 851634, 268914, 202647, 49984, 100969, 717879, 824944, 142610, 515024, 739571, 812019, 259557, 269155, 545573, 612672, 958613, 3624, 612442, 996834, 811885};
    int travelTime = 198;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> openTime = {28044, 878498, 485793, 627556, 767068, 948571, 563562, 660053, 766158, 766966, 871154, 222424, 213864, 992982, 310947, 427253, 659800, 137455, 991678, 422411, 874761, 62670, 462933, 134611, 609442, 456959, 98462, 925135, 41731, 589726, 285176, 11156, 211886, 954185, 586008, 741804, 716735, 388684, 893175, 160364, 934778, 93899, 850260, 654338, 126827, 964880};
    vector<int> closeTime = {28257, 878717, 486054, 627764, 767428, 948969, 563853, 660388, 766448, 767352, 871392, 222795, 214261, 993295, 311218, 427566, 660128, 137757, 992036, 422669, 875085, 63029, 463291, 134972, 609733, 457298, 98734, 925339, 42091, 589998, 285519, 11381, 212160, 954516, 586248, 742100, 716941, 388953, 893396, 160591, 935113, 94156, 850620, 654694, 127074, 965172};
    int travelTime = 158;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> openTime = {360297, 214411, 846178, 627135, 979298, 41249, 262469, 199871, 226930, 122585, 483088, 648672, 300930, 903235, 976478, 371780, 89658, 564631, 557219, 215317, 395707, 589106, 771730, 365316, 417867, 524527, 428578, 523923, 948226, 693496, 227564, 134304, 656580, 756153, 558426, 155164, 679922, 108014, 61599, 445094, 514224, 537875, 630605, 209291, 366940, 472532, 971887, 231730, 987362, 34961};
    vector<int> closeTime = {360590, 214751, 846519, 627407, 979598, 41573, 262858, 200154, 227234, 122858, 483363, 648887, 301330, 903478, 976822, 372136, 90003, 564905, 557490, 215681, 395944, 589317, 772079, 365552, 418261, 524771, 428923, 524280, 948509, 693724, 227892, 134515, 656828, 756426, 558663, 155480, 680169, 108258, 61934, 445328, 514437, 538096, 630886, 209518, 367174, 472833, 972178, 231997, 987659, 35176};
    int travelTime = 146;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> openTime = {2733, 593166, 396013};
    vector<int> closeTime = {3058, 593530, 396370};
    int travelTime = 137;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> openTime = {610511, 342092, 141076, 215068};
    vector<int> closeTime = {610773, 342427, 141294, 215353};
    int travelTime = 146;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> openTime = {304238, 251257};
    vector<int> closeTime = {304553, 251639};
    int travelTime = 179;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> openTime = {557035, 205091, 212136};
    vector<int> closeTime = {557412, 205426, 212529};
    int travelTime = 186;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> openTime = {649928, 284762, 731969, 202850};
    vector<int> closeTime = {650293, 285057, 732300, 203183};
    int travelTime = 130;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> openTime = {969299, 115645, 241993, 397085};
    vector<int> closeTime = {969566, 115878, 242324, 397449};
    int travelTime = 160;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
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

int test61() {
    vector<int> openTime = {382947, 17780};
    vector<int> closeTime = {383301, 18108};
    int travelTime = 194;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> openTime = {255551, 740946, 735469};
    vector<int> closeTime = {255846, 741287, 735792};
    int travelTime = 107;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> openTime = {59161, 796497};
    vector<int> closeTime = {59462, 796888};
    int travelTime = 196;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> openTime = {769761, 16302, 474375, 372551};
    vector<int> closeTime = {770020, 16596, 474755, 372759};
    int travelTime = 182;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> openTime = {810344, 910431};
    vector<int> closeTime = {810345, 910432};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> openTime = {585871, 94034, 440727, 611088};
    vector<int> closeTime = {585872, 94035, 440728, 611089};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> openTime = {765577, 654646, 838127};
    vector<int> closeTime = {765578, 654647, 838128};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> openTime = {720216, 999161, 604135};
    vector<int> closeTime = {720217, 999162, 604136};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> openTime = {959242, 49149};
    vector<int> closeTime = {959243, 49150};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> openTime = {911099, 867079};
    vector<int> closeTime = {911100, 867080};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> openTime = {761804, 185348, 861795, 211826};
    vector<int> closeTime = {761805, 185349, 861796, 211827};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> openTime = {355652, 400190, 617429, 226200};
    vector<int> closeTime = {355653, 400191, 617430, 226201};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> openTime = {39589, 905784, 487809};
    vector<int> closeTime = {39590, 905785, 487810};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> openTime = {626019, 258209, 617580};
    vector<int> closeTime = {626020, 258210, 617581};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> openTime = {933591, 915209, 998463, 968506, 906840, 973822, 919394, 902407, 964214, 977871, 915418, 999088, 928638, 914491, 915130, 918950, 941983, 905038, 950005, 934956, 995251, 995290, 950960, 919632, 900305, 994229, 912474, 949244, 933726, 927746, 988616, 940193, 972127, 934122, 965600, 987977, 966307, 918935, 901298, 999538, 947368, 931772, 969552, 926758, 946551, 918349, 985271, 914841, 963860};
    vector<int> closeTime = {933593, 915211, 998465, 968507, 906843, 973824, 919396, 902410, 964216, 977872, 915421, 999090, 928639, 914494, 915132, 918952, 941984, 905041, 950006, 934959, 995252, 995293, 950962, 919633, 900308, 994232, 912477, 949245, 933728, 927749, 988619, 940195, 972130, 934125, 965601, 987980, 966310, 918937, 901300, 999539, 947371, 931774, 969553, 926759, 946552, 918352, 985273, 914842, 963862};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> openTime = {978641, 976197, 996015, 945440, 914876, 983497, 964963, 941647, 902409, 932698, 990832, 965215, 958186, 957866, 949689, 914245, 992233, 990479, 940967, 906345, 988806, 969828, 910687, 931235, 994273, 930667, 997690, 926345, 991233, 936603, 942850, 933654, 962752, 989233, 901786, 910454, 900389, 956256, 903200, 923811, 963162, 904812, 921566, 975857, 989887, 947822, 961255, 976473};
    vector<int> closeTime = {978642, 976199, 996018, 945441, 914877, 983500, 964966, 941649, 902410, 932700, 990834, 965218, 958188, 957867, 949692, 914246, 992235, 990480, 940969, 906346, 988808, 969831, 910688, 931238, 994274, 930670, 997692, 926346, 991235, 936606, 942853, 933655, 962753, 989236, 901789, 910455, 900390, 956258, 903203, 923812, 963163, 904815, 921569, 975859, 989890, 947824, 961258, 976474};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> openTime = {929255, 954639, 948435, 941499, 907959, 965518, 992045, 916683, 944382, 993058, 916993, 907536, 994354, 982088, 950803, 904063, 901868, 965306, 947998, 919034, 992407, 936212, 928072, 991256, 984226, 917186, 933608, 932748, 900386, 968754, 962988, 944352, 904321, 999185, 933161, 942972, 968159, 908130, 940926, 923810, 969308, 979235, 948660, 906316, 955175, 990106, 947994, 906786, 954572};
    vector<int> closeTime = {929257, 954642, 948438, 941502, 907961, 965519, 992047, 916684, 944383, 993059, 916994, 907539, 994357, 982091, 950805, 904065, 901870, 965307, 947999, 919037, 992408, 936213, 928075, 991259, 984227, 917188, 933609, 932750, 900387, 968756, 962989, 944353, 904323, 999188, 933162, 942974, 968160, 908131, 940928, 923812, 969311, 979236, 948662, 906318, 955176, 990107, 947996, 906788, 954573};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> openTime = {923313, 916751, 932564, 950971, 907498, 914670, 920003, 953541, 912229, 904525, 921198, 955490, 968156, 939010, 954509, 989016, 986612, 959991, 989980, 909701, 984589, 944313, 926565, 907466, 960522, 989605, 924960, 974187, 929133, 972472, 991954, 940181, 986837, 910430, 959670, 989975, 955600, 975791, 928734, 993786, 921814, 952267, 964070, 979693, 996939, 987601, 922799, 956845};
    vector<int> closeTime = {923316, 916754, 932566, 950972, 907500, 914672, 920006, 953543, 912231, 904527, 921200, 955491, 968157, 939011, 954510, 989019, 986613, 959992, 989982, 909704, 984592, 944316, 926568, 907467, 960523, 989607, 924961, 974190, 929136, 972473, 991956, 940183, 986838, 910432, 959673, 989977, 955602, 975792, 928736, 993789, 921817, 952268, 964071, 979694, 996941, 987604, 922801, 956848};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> openTime = {903758, 972063, 906581, 982657, 917506, 973971, 972099, 934240, 907636, 921832, 936850, 968507, 967694, 941363, 968092, 987323, 908812, 977102, 992988, 986663, 928199, 979721, 929029, 924507, 979410, 933190, 957901, 915067, 930415, 960538, 996468, 944257, 935159, 941088, 978209, 937400, 960220, 978973, 947130, 927699, 973257, 903288, 984654, 975921, 970781, 905754, 987684, 947221, 983109};
    vector<int> closeTime = {903761, 972064, 906584, 982658, 917508, 973972, 972102, 934241, 907638, 921833, 936853, 968508, 967696, 941366, 968095, 987326, 908815, 977104, 992990, 986665, 928201, 979722, 929030, 924510, 979412, 933191, 957903, 915069, 930417, 960541, 996471, 944258, 935160, 941090, 978210, 937402, 960221, 978976, 947132, 927702, 973259, 903289, 984657, 975923, 970782, 905756, 987686, 947223, 983112};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> openTime = {928801, 955022, 961344, 992598, 954528, 976911, 983157, 958961, 973417, 986669, 953936, 918826, 976399, 921228, 986448, 963166, 939088, 915750, 958342, 952286, 921557, 958482, 915640, 941967, 965378, 928138, 950294, 968580, 983650, 982166, 986554, 925570, 973814, 954229, 928225, 977779, 914647, 980860, 989076, 905868, 904733, 928157, 908806, 961879, 996433, 906423, 908702, 910902, 988549, 907243};
    vector<int> closeTime = {928803, 955024, 961347, 992601, 954530, 976914, 983159, 958962, 973420, 986670, 953937, 918828, 976400, 921231, 986449, 963167, 939091, 915752, 958345, 952289, 921559, 958483, 915642, 941970, 965379, 928141, 950297, 968581, 983653, 982168, 986555, 925573, 973816, 954232, 928227, 977782, 914648, 980861, 989077, 905871, 904735, 928160, 908808, 961882, 996434, 906426, 908704, 910905, 988552, 907245};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> openTime = {906488, 955744, 936799, 930928, 989946, 980870, 973002, 974715, 973947, 948622, 923752, 907207, 989795, 957233, 936721, 914224, 948412, 971564, 928874, 902375, 941558, 921297, 912444, 964917, 967333, 906300, 940435, 931440, 958998, 947798, 911309, 955564, 974833, 935633, 968286, 931129, 944852, 952228, 964975, 946571, 926950, 915992, 901060, 916184, 969405, 964795, 921319, 922553, 986527};
    vector<int> closeTime = {906489, 955745, 936802, 930930, 989949, 980873, 973005, 974718, 973948, 948623, 923755, 907210, 989798, 957235, 936722, 914226, 948415, 971565, 928875, 902378, 941559, 921300, 912446, 964920, 967335, 906302, 940436, 931442, 958999, 947800, 911312, 955567, 974835, 935636, 968287, 931130, 944854, 952229, 964976, 946574, 926951, 915995, 901063, 916187, 969407, 964796, 921322, 922556, 986528};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> openTime = {937381, 946491, 971200, 914544, 991328, 980203, 943106, 948493, 952904, 993593, 917788, 962948, 938694, 909966, 952918, 944769, 936715, 944994, 986570, 937828, 991698, 938291, 993636, 961177, 933798, 905410, 953120, 954040, 979611, 965100, 978947, 962810, 956016, 949637, 927025, 996880, 993077, 982667, 975904, 966746, 977709, 993574, 916400, 911065, 990449, 913156, 930617, 929431, 968011};
    vector<int> closeTime = {937384, 946493, 971201, 914547, 991331, 980204, 943109, 948495, 952907, 993594, 917789, 962950, 938697, 909967, 952921, 944772, 936717, 944995, 986573, 937830, 991699, 938293, 993637, 961180, 933799, 905413, 953123, 954042, 979613, 965103, 978950, 962813, 956018, 949638, 927027, 996883, 993080, 982669, 975906, 966748, 977711, 993575, 916403, 911068, 990450, 913159, 930618, 929434, 968012};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> openTime = {951151, 901796, 968301, 986573, 934061, 940098, 909745, 991993, 908527, 917523, 949262, 983384, 971478, 958242, 921641, 935726, 983941, 902652, 941409, 914392, 968671, 953034, 985118, 988516, 949491, 980621, 935591, 965484, 909151, 972881, 996748, 908716, 996424, 990998, 986647, 988414, 928256, 919215, 911424, 932831, 936412, 963889, 941094, 902993, 980443, 976831, 936768, 904511, 993380};
    vector<int> closeTime = {951154, 901799, 968302, 986576, 934063, 940100, 909747, 991994, 908528, 917526, 949265, 983386, 971480, 958245, 921642, 935729, 983942, 902653, 941411, 914395, 968674, 953035, 985121, 988518, 949494, 980624, 935592, 965487, 909153, 972882, 996749, 908718, 996426, 991000, 986649, 988417, 928257, 919217, 911427, 932833, 936413, 963890, 941096, 902994, 980446, 976832, 936771, 904512, 993383};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> openTime = {939130, 987166, 961436, 939933, 971826, 970562, 901082, 953912, 951234, 915758, 935906, 936363, 973241, 938826, 979056, 900917, 909638, 980410, 929031, 990929, 953997, 960685, 906635, 915375, 936394, 916659, 916425, 927920, 953941, 965674, 972705, 914289, 960537, 994342, 941073, 985767, 998893, 917708, 918868, 915758, 983577, 946734, 925315, 906257, 900375, 905209, 940977, 900934};
    vector<int> closeTime = {939133, 987168, 961437, 939934, 971829, 970563, 901085, 953913, 951236, 915761, 935909, 936365, 973244, 938827, 979058, 900920, 909639, 980412, 929032, 990930, 953998, 960687, 906638, 915377, 936396, 916662, 916427, 927922, 953944, 965675, 972706, 914290, 960539, 994344, 941076, 985768, 998896, 917709, 918871, 915759, 983579, 946735, 925317, 906258, 900377, 905210, 940979, 900935};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> openTime = {985263, 958401, 999097, 934830, 976254, 975082, 953465, 931709, 908326, 914444, 971307, 907004, 918619, 991551, 913506, 998248, 949857, 961417, 985133, 996316, 928690, 969773, 983035, 987288, 951663, 945927, 970971, 952178, 901323, 934311, 942821, 951794, 946158, 947918, 921553, 907617, 902556, 909234, 972480, 935937, 965800, 952063, 921391, 984025, 928829, 910985, 931325, 937901, 923847};
    vector<int> closeTime = {985266, 958404, 999100, 934832, 976255, 975085, 953467, 931711, 908329, 914447, 971310, 907007, 918620, 991553, 913507, 998250, 949859, 961419, 985135, 996319, 928693, 969774, 983037, 987289, 951665, 945929, 970972, 952179, 901326, 934312, 942822, 951797, 946161, 947919, 921555, 907620, 902557, 909237, 972481, 935940, 965803, 952065, 921394, 984026, 928831, 910986, 931326, 937903, 923849};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> openTime = {952559, 961598, 975351, 913796, 932754, 965352, 968960, 923159, 900236, 988792, 914692, 941067, 950801, 943642, 936497, 967884, 955133, 918452, 956168, 900520, 991613, 931609, 975404, 976169, 946385, 901420, 941172, 981235, 909033, 947186, 956619, 944670, 964361, 962743, 901320, 966071, 939457, 920925, 980007, 971948, 912259, 994747, 958425, 989735, 910819, 961750, 909109, 961087, 998487};
    vector<int> closeTime = {952561, 961599, 975353, 913798, 932757, 965353, 968963, 923162, 900239, 988794, 914695, 941069, 950803, 943643, 936498, 967886, 955136, 918453, 956169, 900523, 991615, 931612, 975407, 976172, 946388, 901421, 941173, 981236, 909036, 947187, 956622, 944672, 964363, 962744, 901321, 966073, 939458, 920926, 980009, 971951, 912262, 994750, 958428, 989737, 910820, 961752, 909112, 961089, 998490};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> openTime = {939660, 903912, 936499, 987782, 981639, 947916, 907610, 971960, 949024, 969328, 921923, 902898, 985011, 986352, 967858, 920576, 950271, 932306, 907546, 996450, 900485, 956326, 989407, 938654, 923466, 919436, 952714, 940829, 975670, 924079, 949993, 921803, 996944, 942533, 965816, 954781, 939825, 966315, 963982, 920756, 962543, 989918, 975935, 987656, 936694, 988707, 900744, 911085, 956094};
    vector<int> closeTime = {939661, 903913, 936502, 987784, 981641, 947918, 907613, 971962, 949025, 969331, 921926, 902900, 985013, 986354, 967859, 920579, 950273, 932309, 907548, 996452, 900486, 956327, 989408, 938655, 923467, 919438, 952717, 940831, 975672, 924080, 949996, 921804, 996946, 942535, 965817, 954782, 939827, 966316, 963983, 920758, 962545, 989921, 975936, 987658, 936697, 988710, 900746, 911088, 956097};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> openTime = {962402, 918621, 919584, 916581, 945746, 988332, 910401, 933113, 904867, 927754, 946125, 947445, 913990, 981489, 900150, 937928, 970926, 936625, 975866, 930056, 915172, 922183, 976395, 972521, 940776, 993220, 985386, 960171, 979543, 953563, 964330, 913436, 952933, 982366, 908900, 937521, 904167, 931425, 973117, 951804, 921719, 992155, 991617, 963668, 930322, 951034, 975402, 989910, 906144, 993877};
    vector<int> closeTime = {962403, 918624, 919586, 916582, 945749, 988333, 910403, 933114, 904870, 927755, 946128, 947447, 913992, 981492, 900152, 937931, 970927, 936626, 975869, 930059, 915175, 922185, 976396, 972523, 940777, 993222, 985389, 960173, 979544, 953566, 964331, 913438, 952935, 982367, 908901, 937524, 904168, 931426, 973119, 951807, 921721, 992156, 991618, 963670, 930325, 951035, 975403, 989913, 906147, 993880};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> openTime = {973103, 909004, 921460, 916289, 990554, 954147, 973595, 971680, 909241, 911111, 902710, 905850, 924905, 957763, 902757, 931684, 972349, 928248, 959269, 919386, 991751, 980560, 920044, 914686, 944877, 903242, 999961, 920799, 931726, 932045, 925677, 951251, 982549, 906692, 998614, 968947, 962188, 981792, 948771, 954380, 936497, 928372, 905292, 957960, 931517, 963630, 980997, 998042, 970022};
    vector<int> closeTime = {973106, 909007, 921462, 916291, 990556, 954149, 973596, 971683, 909243, 911113, 902711, 905852, 924906, 957765, 902760, 931685, 972352, 928251, 959272, 919388, 991753, 980563, 920045, 914687, 944878, 903245, 999962, 920800, 931727, 932048, 925680, 951252, 982552, 906694, 998615, 968949, 962191, 981793, 948772, 954383, 936498, 928373, 905295, 957963, 931520, 963631, 980999, 998045, 970023};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> openTime = {939953, 946303, 980613, 959666, 963233, 938059, 956412, 920445, 960025, 964275, 926571, 947235, 919131, 923228, 935290, 994529, 989349, 910813, 908581, 962279, 986259, 952421, 943195, 993185, 927768, 953908, 903133, 931166, 991952, 934209, 911945, 932646, 980137, 906239, 958962, 992761, 972149, 993742, 910052, 923634, 981375, 970916, 950902, 976735, 911611, 910123, 997202, 941789};
    vector<int> closeTime = {939954, 946306, 980614, 959668, 963236, 938060, 956414, 920448, 960027, 964277, 926574, 947236, 919133, 923230, 935292, 994532, 989351, 910815, 908582, 962282, 986260, 952424, 943198, 993188, 927770, 953910, 903136, 931169, 991955, 934212, 911947, 932648, 980138, 906242, 958964, 992763, 972151, 993743, 910053, 923637, 981378, 970919, 950904, 976738, 911614, 910124, 997204, 941791};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> openTime = {909201, 982611, 979902, 989502, 966693, 983417, 951962, 921355, 998364, 995482, 979807, 973156, 931342, 919869, 951105, 933648, 956964, 975999, 995927, 984339, 981700, 962297, 947573, 941375, 960179, 903237, 901307, 921535, 985465, 943558, 953803, 964134, 901258, 978740, 954723, 968748, 934962, 992252, 924878, 981654, 939889, 910938, 925583, 964167, 977652, 922257, 988815, 957533, 946804};
    vector<int> closeTime = {909202, 982612, 979904, 989505, 966695, 983419, 951963, 921357, 998365, 995484, 979808, 973158, 931344, 919870, 951107, 933651, 956967, 976001, 995930, 984340, 981702, 962300, 947574, 941378, 960181, 903238, 901308, 921536, 985467, 943560, 953804, 964137, 901260, 978741, 954726, 968750, 934963, 992255, 924879, 981657, 939890, 910941, 925586, 964169, 977655, 922258, 988818, 957536, 946807};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> openTime = {979603, 985855, 912799, 902615, 977491, 947313, 918759, 914040, 954384, 960786, 900449, 929646, 922297, 902017, 966127, 929884, 955874, 915569, 920359, 945906, 970851, 912122, 909830, 956584, 927559, 990176, 963670, 946292, 994797, 964436, 939718, 930553, 931279, 974355, 985561, 948533, 990308, 990623, 932720, 949374, 944476, 928491, 909602, 996545, 906939, 915943, 936331, 937486};
    vector<int> closeTime = {979606, 985858, 912802, 902616, 977493, 947316, 918760, 914042, 954386, 960789, 900450, 929649, 922299, 902018, 966130, 929886, 955875, 915571, 920361, 945909, 970854, 912125, 909833, 956586, 927562, 990179, 963671, 946295, 994800, 964438, 939719, 930555, 931281, 974356, 985563, 948536, 990309, 990625, 932723, 949375, 944478, 928493, 909603, 996547, 906942, 915946, 936332, 937489};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> openTime = {997097, 990770, 951278, 936523, 914847, 920903, 961742, 974347, 974048, 984170, 939929, 954520, 901779, 927255, 995452, 928156, 934903, 951124, 987314, 917705, 918316, 912293, 983707, 982679, 963802, 904596, 993387, 967847, 905324, 926427, 933657, 958545, 996118, 966806, 917327, 971157, 901628, 975353, 987210, 977270, 962793, 950997, 961795, 922888, 907193, 991444, 985739, 929778};
    vector<int> closeTime = {997099, 990771, 951280, 936525, 914850, 920904, 961744, 974350, 974051, 984171, 939931, 954521, 901781, 927258, 995453, 928159, 934905, 951127, 987315, 917706, 918319, 912294, 983709, 982682, 963804, 904599, 993390, 967850, 905325, 926429, 933659, 958548, 996120, 966809, 917329, 971159, 901630, 975356, 987213, 977271, 962795, 951000, 961798, 922891, 907195, 991447, 985741, 929779};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> openTime = {954747, 986970, 948161, 963952, 984853, 985753, 970975, 950613, 907634, 991419, 992091, 941948, 944520, 986740, 939489, 984848, 984034, 988267, 911439, 984858, 901198, 950280, 977971, 905142, 903139, 912387, 985883, 921450, 958253, 947953, 969612, 953881, 965402, 960761, 940650, 975766, 923643, 987506, 981861, 947229, 910339, 919317, 979573, 952419, 910732, 907205, 967335, 995727, 906411, 921341};
    vector<int> closeTime = {954750, 986973, 948164, 963953, 984856, 985754, 970978, 950615, 907636, 991422, 992093, 941951, 944521, 986743, 939491, 984849, 984037, 988269, 911441, 984859, 901200, 950283, 977974, 905143, 903142, 912390, 985886, 921451, 958256, 947955, 969615, 953882, 965404, 960762, 940651, 975768, 923645, 987509, 981862, 947230, 910342, 919319, 979574, 952421, 910733, 907206, 967336, 995728, 906414, 921344};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> openTime = {999999, 2, 4};
    vector<int> closeTime = {1000000, 22, 44};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> openTime = {363, 237, 382, 232, 392, 3829, 99999, 12};
    vector<int> closeTime = {365, 1239, 2384, 234, 394, 3831, 100001, 15};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> openTime = {1, 2};
    vector<int> closeTime = {3, 4};
    int travelTime = 4;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> openTime = {1, 10, 20};
    vector<int> closeTime = {2, 20, 30};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> openTime = {1, 1};
    vector<int> closeTime = {2, 2};
    int travelTime = 10000;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> openTime = {50, 40, 30, 20, 10, 1, 2, 3, 4, 6, 4, 4, 4};
    vector<int> closeTime = {51, 42, 33, 24, 100, 2, 3, 4, 5, 7, 5, 5, 5};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> openTime = {0, 0};
    vector<int> closeTime = {5, 5};
    int travelTime = 5;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> openTime = {500, 400, 300, 200, 100, 10, 20, 30, 40, 60, 40, 40, 40};
    vector<int> closeTime = {510, 420, 330, 240, 1000, 20, 30, 40, 50, 70, 50, 50, 50};
    int travelTime = 10;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> openTime = {0, 0};
    vector<int> closeTime = {1, 1};
    int travelTime = 1000;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> openTime = {363, 237, 382, 232, 392, 3829, 99999, 12};
    vector<int> closeTime = {1000, 12391, 23841, 2341, 3941, 3831, 100001, 15};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> openTime = {1, 10, 0};
    vector<int> closeTime = {2, 20, 30};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> openTime = {0, 3, 5};
    vector<int> closeTime = {1, 100, 100};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> openTime = {900000, 900000};
    vector<int> closeTime = {999999, 999999};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> openTime = {999999, 999999};
    vector<int> closeTime = {1000000, 1000000};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> openTime = {0, 0};
    vector<int> closeTime = {1, 1};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> openTime = {1, 4};
    vector<int> closeTime = {3, 6};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> openTime = {100, 2};
    vector<int> closeTime = {500, 4};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> openTime = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999};
    vector<int> closeTime = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> openTime = {1, 2};
    vector<int> closeTime = {10, 3};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> openTime = {0, 0, 0};
    vector<int> closeTime = {100, 100, 105};
    int travelTime = 4;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> openTime = {1000, 1000, 0};
    vector<int> closeTime = {1010, 1010, 100};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> openTime = {1, 3, 2, 100000, 1};
    vector<int> closeTime = {2, 4, 10, 100001, 15};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> openTime = {0, 0, 4, 0};
    vector<int> closeTime = {1, 1, 5, 1};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> openTime = {0, 0};
    vector<int> closeTime = {1, 1000000};
    int travelTime = 1000000;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> openTime = {0, 10};
    vector<int> closeTime = {1, 20};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> openTime = {1, 5};
    vector<int> closeTime = {2, 10};
    int travelTime = 5;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> openTime = {0, 100000};
    vector<int> closeTime = {1, 1000000};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> openTime = {0, 1};
    vector<int> closeTime = {1, 2};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> openTime = {0, 1, 3};
    vector<int> closeTime = {1, 3, 5};
    int travelTime = 2;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> openTime = {1, 1, 2};
    vector<int> closeTime = {2, 2, 3};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> openTime = {363, 237, 382, 232, 392, 3829, 99999, 12};
    vector<int> closeTime = {365, 1239, 2384, 234, 394, 3831, 100001, 15};
    int travelTime = 997;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> openTime = {999999, 999999, 999999};
    vector<int> closeTime = {1000000, 1000000, 1000000};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> openTime = {50, 50, 50};
    vector<int> closeTime = {100, 100, 100};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> openTime = {0, 3};
    vector<int> closeTime = {1, 5};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> openTime = {0, 0};
    vector<int> closeTime = {9, 9};
    int travelTime = 10;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> openTime = {2, 0};
    vector<int> closeTime = {5, 1};
    int travelTime = 3;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> openTime = {0, 1};
    vector<int> closeTime = {1, 2};
    int travelTime = 5;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> openTime = {99999, 2};
    vector<int> closeTime = {100000, 4};
    int travelTime = 1;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> openTime = {1, 2, 20};
    vector<int> closeTime = {2, 3, 40};
    int travelTime = 8;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> openTime = {45, 45, 45};
    vector<int> closeTime = {50, 50, 50};
    int travelTime = 15;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> openTime = {0, 0, 0};
    vector<int> closeTime = {10, 10, 10};
    int travelTime = 15;
    CircleMarket* pObj = new CircleMarket();
    clock_t start = clock();
    int result = pObj->makePurchases(openTime, closeTime, travelTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22878317&rd=14234&pm=11095
********************************************************************************
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
#include <queue> 
#include <iostream> 
#include <iomanip> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
#include <cstring> 
using namespace std; 
 
class CircleMarket{ 
public: 
  int makePurchases(vector <int> openTime, vector <int> closeTime, int travelTime){ 
    int cnt = 0; 
    int trans = 0; 
    bool stop = true; 
    int arr[10000]; 
    int j = 0; 
    while(stop){ 
      int res = j; 
      for (int i = 0; i < openTime.size(); ++i) { 
        if(trans <openTime[i])j++; 
        if(trans <openTime[i] || trans >closeTime[i]){trans+=travelTime;continue;} 
        if(arr[i]!=1){ 
          arr[i]=1; 
          cnt++; 
        } 
        trans+=travelTime; 
      } 
      if(res == j )stop =false; 
    } 
    return cnt; 
  } 
};

********************************************************************************
*******************************************************************************/