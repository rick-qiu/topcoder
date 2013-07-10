/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6807
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

class TournamentPlan {
public:
    int getTravelDistance(vector<int> street, vector<int> avenue);
};

int TournamentPlan::getTravelDistance(vector<int> street, vector<int> avenue) {
    int ret;
    return ret;
}


int test0() {
    vector<int> street = {0, 2, 0, 2, 1};
    vector<int> avenue = {0, 0, 2, 2, 1};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> street = {0, 1000000};
    vector<int> avenue = {1000000, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> street = {0, 1, 1, 3};
    vector<int> avenue = {2, 5, 1, 2};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> street = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> avenue = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> street = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> avenue = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 48000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> street = {0};
    vector<int> avenue = {0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> street = {42401, 206562, 428521, 718681, 956562, 225548, 62446, 921472, 84062, 296235, 802197, 249274, 881498, 249338, 858746, 721306, 242062, 954308, 334074, 931720, 997733, 154393, 954019, 512162, 906690, 496411, 731767, 128980, 639774, 148474, 266531, 227109, 533521, 948207, 43440, 759205, 248235, 948123, 680920, 185872, 191202, 643055, 765443, 685134};
    vector<int> avenue = {108211, 892485, 913109, 658030, 813672, 85138, 358453, 41856, 488349, 677918, 788182, 462189, 204576, 105372, 645179, 791156, 165602, 820324, 26407, 596410, 576320, 100544, 941480, 757196, 512039, 406168, 150291, 973729, 239677, 194102, 291414, 465304, 888996, 35954, 712553, 28478, 106794, 883430, 879545, 853929, 343108, 82301, 299448, 953769};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 25633162;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> street = {687456, 324734, 46724, 346362, 503099, 281058, 724499, 414905, 461285, 827075, 179040, 388972, 155604, 919711, 286198, 224145, 837661, 233414, 570445, 437871, 172757, 692178, 590293, 668337, 2516, 605532, 382332, 64786, 211577, 982478, 38676, 763265, 444688, 857407, 173166, 60325};
    vector<int> avenue = {365585, 440993, 904197, 778116, 421063, 148397, 893022, 181391, 492104, 732083, 183420, 49583, 6557, 314241, 793857, 888238, 850705, 554285, 434340, 85433, 183422, 727595, 493907, 335735, 821377, 17517, 105048, 120049, 673404, 909695, 568249, 863048, 168904, 220845, 139848, 174174};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 18013802;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> street = {667142, 821463, 636703, 975741, 311127, 685413, 491523, 193372, 661052, 859543, 316421, 709207, 641361, 202829, 464638, 522968, 352963, 959154, 340466, 753802, 153392, 131843, 45540, 200161, 737645, 780165, 117085};
    vector<int> avenue = {228146, 342593, 69806, 652003, 442151, 209456, 907593, 249229, 221842, 755712, 535775, 952361, 430391, 355790, 899644, 918087, 239118, 526083, 38446, 536211, 320497, 695097, 703598, 486943, 754779, 150870, 6181};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 13028552;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> street = {362298, 9680, 634243, 636883, 621552, 124157, 598256, 50051, 237192, 934484};
    vector<int> avenue = {427531, 841319, 970101, 940193, 154311, 145558, 190058, 892150, 25150, 173115};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 6025142;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> street = {858063, 776644, 626809, 255484, 726448, 808244, 251158};
    vector<int> avenue = {56913, 751640, 896670, 993774, 581363, 889196, 968146};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2778174;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> street = {991759, 992080, 44001, 494453, 373652, 899960, 677287, 74786, 331922, 330439, 623735, 617578, 495718, 801032, 760800, 464010, 506269, 802510, 3226, 965944, 389305, 37262, 918462, 869573, 183354, 990069, 342388, 648657, 208212, 527351, 560916, 891590, 654623, 365484, 392377, 574340, 931403, 631329, 102146, 801753, 672561, 217761, 73573};
    vector<int> avenue = {239365, 994378, 964928, 411006, 909912, 786397, 518044, 192866, 161485, 928410, 198866, 425228, 196507, 947687, 849962, 235641, 272957, 947021, 746042, 915787, 538690, 508639, 24531, 383415, 734147, 945116, 585317, 675854, 498467, 694529, 39928, 750943, 355221, 151785, 438703, 350261, 806809, 71425, 342332, 625200, 865599, 242189, 411394};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 21846556;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> street = {636041, 772372, 972532, 469642, 134493, 499982, 802479, 963630, 134120, 719471, 891552, 837404, 903233, 910125, 510429, 263976, 284195, 30811, 939503, 67304, 238873, 210568, 223220, 304864, 399006, 772071, 539778, 182643, 725384, 109788, 142414, 281288, 947528, 448242, 47262, 169768, 565311, 591963, 644844, 606447, 576832, 598604, 375578};
    vector<int> avenue = {839987, 347145, 97376, 521318, 778834, 397738, 321905, 265670, 95862, 100599, 256717, 846261, 915387, 113448, 208265, 835952, 578557, 84088, 578126, 387907, 958829, 389268, 532077, 554888, 909004, 11137, 683373, 624467, 871277, 588335, 169145, 430481, 631941, 279353, 170224, 667474, 156389, 78672, 381177, 429288, 549732, 813711, 998161};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 21435385;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> street = {795258, 351960, 124724, 925970, 45921, 305209, 849908, 521031};
    vector<int> avenue = {863542, 258955, 949263, 383177, 974748, 514353, 493518, 888982};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 4290885;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> street = {138938, 948779, 69891, 122771, 810292, 855835, 183195, 221997, 466381, 126585, 76338, 85528, 937230, 452714, 544366, 78356};
    vector<int> avenue = {84491, 59168, 959520, 701636, 703293, 361368, 138658, 478376, 665944, 813067, 651240, 791095, 207328, 50204, 495912, 587424};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 8353706;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> street = {109887, 267132, 983763, 550518, 459974, 977294, 956888, 945464, 586757, 989504, 74013, 351589, 260152, 661610};
    vector<int> avenue = {671016, 671440, 537732, 337746, 468611, 361794, 209538, 833612, 572914, 815939, 768528, 189041, 193248, 169954};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 6969264;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> street = {100638, 365510, 147652, 879875, 649857, 647136, 703842, 829935, 401472, 898787, 624588, 992949, 979553, 311932, 787693, 482188, 772913, 534810, 973133, 442571, 306195, 918773, 117800, 718280, 80057, 75946, 606160, 464988, 7844, 917703, 487175, 349911, 999207, 223708, 702989, 267686, 880592, 685943, 226727, 443373, 373858, 77558};
    vector<int> avenue = {155379, 968396, 213262, 557195, 455141, 161111, 981107, 882037, 211544, 785172, 12506, 104629, 141952, 710367, 494020, 331528, 219093, 20772, 97273, 523331, 119871, 842270, 120418, 602198, 470577, 350043, 984899, 48839, 704317, 968327, 786106, 219264, 763413, 123088, 906052, 510036, 86975, 981851, 333098, 610260, 160829, 897400};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 23192645;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> street = {260541, 23391, 274869, 26460, 138390, 920377, 862051, 143703, 366022, 17422, 768049, 192174, 90996, 944104, 869925, 332840, 291385, 112387, 379662, 122062, 730525, 216390, 102458, 863050, 344290, 643750, 49240, 560054, 265328, 57744, 866286, 358934, 515830, 565569, 819122, 461875, 862597, 674408, 206361, 839182};
    vector<int> avenue = {27508, 529749, 658913, 47002, 737786, 320790, 714290, 239477, 685497, 411585, 866240, 216414, 900576, 972079, 138515, 426793, 707930, 31275, 569740, 199022, 414745, 30544, 594569, 286343, 19371, 610230, 861514, 520865, 838351, 339262, 610365, 783077, 413522, 732202, 456753, 884249, 614799, 174299, 171573, 927075};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 20516514;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> street = {69250, 651041, 896297, 276912, 305098};
    vector<int> avenue = {781942, 166762, 148500, 889848, 745381};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2557704;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> street = {54289, 141422, 313520, 340176, 432314, 576915};
    vector<int> avenue = {57902, 569139, 198324, 535989, 148284, 830674};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2371466;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> street = {425101, 865471, 972352, 44638, 806982, 943464, 592242, 754917, 973671, 773039, 582295, 281910, 655122, 85661, 757952, 994105};
    vector<int> avenue = {957298, 373202, 565840, 892260, 433582, 522549, 958415, 374055, 701796, 510381, 712886, 533915, 990362, 159100, 298398, 746452};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 6985277;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> street = {247135, 201192};
    vector<int> avenue = {219439, 895038};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 721542;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> street = {987697, 328083, 762087, 842573, 665812, 174314, 995574, 399895, 865178, 312060, 545194, 457953, 318677, 60765, 337008, 478124, 126687, 963127, 737685, 925696, 801489, 45314, 331673, 240476, 435390, 869689, 844776, 444786, 708939, 168741, 743673, 821325, 335855, 548837, 990285, 855483, 443235, 978480, 798908, 567721, 554342, 679381, 223015, 590306, 704439};
    vector<int> avenue = {912922, 454026, 429009, 791982, 816126, 135535, 227050, 525020, 914779, 887135, 130459, 571117, 62973, 281100, 61630, 141353, 217987, 543326, 664675, 131968, 463309, 16585, 966790, 164372, 300272, 952534, 533163, 343827, 424724, 472132, 287360, 358280, 10856, 152720, 905334, 463238, 497829, 173267, 853592, 867976, 674493, 122980, 377952, 89743, 80306};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 22114110;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> street = {208424, 323526, 967014, 685048, 304667, 579978, 731028, 917590, 976171, 568102, 800497, 831982, 817303, 787255, 964444};
    vector<int> avenue = {181915, 825711, 882167, 222918, 766787, 518026, 520038, 489633, 15243, 758819, 736706, 376419, 11833, 960979, 84943};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 6942531;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> street = {229765, 989783, 457458, 559945, 526103, 784860, 107828, 169452, 826473, 943994, 574191, 837262, 588373, 355955, 775289, 818378, 638814, 985819, 774133, 812476, 570912, 687107, 379580, 706463, 316232, 304694, 799482, 668524, 51425, 716766, 623875, 576286, 241220, 889191, 218482, 350370, 478384, 306022, 853414, 380289, 455685, 246194, 911234};
    vector<int> avenue = {270664, 264279, 450907, 225200, 743034, 806714, 348981, 905090, 66693, 811739, 51366, 265148, 777289, 723669, 26215, 430668, 66769, 769742, 854143, 770513, 65783, 199883, 878988, 900447, 251193, 774212, 175322, 493872, 599242, 750869, 190244, 127666, 89184, 758552, 772231, 308889, 345287, 326915, 306646, 990633, 310179, 630012, 941448};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 21172364;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> street = {526890, 40058, 722225, 835449, 415753, 997174, 893287, 259531, 339847, 722642, 711582, 760633, 58551, 300085, 157928, 346429, 909826, 622324, 648478, 358310, 480677, 68187, 571717, 258572, 873758, 666056, 423341, 800298, 37399, 42968, 594336, 210362, 874005, 288346, 402701, 838549, 197910, 253, 488824, 489969, 50566, 47343, 921665, 973848, 594693, 667990, 576026, 76498, 222391, 34861};
    vector<int> avenue = {387054, 663897, 785369, 643329, 7398, 122829, 624981, 988310, 571991, 292238, 490239, 785568, 713789, 92248, 472518, 960574, 918826, 635920, 202639, 16553, 703300, 99842, 445274, 774940, 884693, 753654, 477700, 137311, 388777, 941229, 307002, 883350, 990812, 982521, 583222, 134954, 628221, 808727, 809537, 809682, 816377, 119742, 636610, 438619, 276703, 650797, 51308, 581660, 917067, 141335};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 25786339;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> street = {211318, 965042, 568949, 770136, 663394, 498391, 309687, 918451, 37951, 709733};
    vector<int> avenue = {15219, 281299, 749810, 358774, 954990, 316083, 889852, 252349, 745710, 56259};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 5178387;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> street = {904008, 475082, 172989, 716901, 597450, 211837};
    vector<int> avenue = {260911, 757131, 277055, 40847, 682209, 965924};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 3184902;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> street = {148024, 734399, 938682, 906566, 791507, 315707, 567217, 809718, 586094, 286492, 821364, 263091, 552010, 141493, 65453, 65641, 802968, 66183, 340084, 418182, 458114, 654784, 678342, 476188, 425879, 501639, 355624, 859527, 484066, 491793, 629724, 727539, 709494, 805933, 588219, 54466, 776946, 901732, 981569};
    vector<int> avenue = {543196, 870135, 308133, 990378, 242667, 987162, 566548, 422095, 322298, 55482, 149847, 613940, 7975, 638614, 229413, 171847, 72663, 200235, 799780, 661506, 576077, 636203, 422510, 756381, 530340, 151491, 775721, 324028, 901983, 529405, 431304, 240787, 950144, 309692, 726792, 342623, 472239, 66126, 3212};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 18278398;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> street = {325698, 30453, 493119, 892623, 152455, 962766, 149990, 618340, 702028, 325260, 688539, 444404, 310511, 982341, 396713, 215737, 986184, 987369, 732421, 495996, 787934, 137544, 203542, 681165, 489431, 714065, 814293, 646788, 618690, 678117, 89962, 474150, 404954, 103311, 848167, 61769, 359363, 43293, 174005, 183109, 860672, 759921};
    vector<int> avenue = {160350, 818527, 407551, 52876, 349575, 868830, 737876, 752386, 884654, 605527, 327208, 761829, 2421, 34773, 582245, 542045, 501637, 533157, 325831, 542949, 661659, 704319, 9680, 156515, 420216, 913136, 884036, 94664, 728894, 212025, 456606, 23383, 461706, 97546, 517649, 165101, 927715, 604601, 262186, 933795, 668152, 995933};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 21488650;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> street = {360877, 244862, 630401, 291551, 106856, 930264, 307805, 598460, 808732, 323536, 735867, 268005, 207347, 17751, 375785, 757842, 626819, 800380, 211713, 774395, 620831, 93629, 480922, 402710, 442355, 751897, 55402, 756359, 426513, 723908, 592387, 115667, 418071, 663305, 871236, 297628, 742161, 150286, 16113, 356413, 243108, 585703};
    vector<int> avenue = {37352, 500842, 562390, 717776, 251511, 211884, 936895, 18491, 950266, 75158, 135721, 677954, 777451, 417443, 150219, 717680, 604869, 949640, 405598, 739969, 749270, 149645, 522877, 293137, 935867, 292174, 783851, 921343, 109450, 725924, 20512, 810032, 832850, 666923, 686416, 965793, 290312, 322242, 734385, 341135, 328555, 658168};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 20562296;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> street = {274535, 520404};
    vector<int> avenue = {493144, 55702};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 683311;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> street = {708722, 221828, 951207, 483510, 336725, 116582, 549827, 239881, 353185, 617513, 184333, 424197, 921337, 968516, 329893, 962853, 739945, 194625};
    vector<int> avenue = {380364, 658641, 145245, 73516, 791185, 958614, 747244, 210039, 507684, 846536, 87560, 635153, 848861, 603424, 438609, 743879, 724776, 756836};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 8497159;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> street = {228568, 511626, 219026, 323770, 310404, 688005, 987253, 269932, 874219, 64351, 795811, 844801};
    vector<int> avenue = {545596, 48624, 647818, 264493, 889450, 433493, 485490, 286059, 305550, 51912, 88928, 217472};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 5635573;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> street = {925320, 607952, 936030, 726555, 476089, 751946, 483790, 159543, 940322, 305890, 882822, 673490, 569607, 561580, 430161, 852364, 336153, 522306, 753352, 151195, 428335, 100941, 815473, 493874, 618492, 100179};
    vector<int> avenue = {123910, 256076, 402676, 131859, 201784, 480859, 976642, 940934, 649447, 492162, 124966, 389303, 316695, 330395, 95503, 481416, 851236, 644874, 123695, 345143, 162814, 509726, 4067, 908390, 121218, 511273};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 11404502;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> street = {936494, 847303, 335760, 339299, 958163, 479936, 466202, 138421, 445008, 441445, 209486, 242495, 941817, 856652, 269877, 530257, 855947, 419667, 301032, 445976, 411274, 743884, 829361, 906896, 178835, 339944, 468279, 956481, 771010, 571919, 503794, 599290, 28466, 156474, 34643};
    vector<int> avenue = {434108, 427711, 59042, 901973, 293329, 121584, 535635, 720232, 390080, 296619, 233960, 96671, 763846, 151100, 708716, 873714, 871866, 377182, 396694, 943870, 735669, 929470, 928403, 915327, 819241, 321505, 764947, 213331, 235303, 433578, 432543, 376164, 764990, 67014, 467535};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 16609091;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> street = {363285, 905107, 553723, 831568, 763754, 745696, 567325, 390868, 76882, 2397, 697952, 733885, 367110};
    vector<int> avenue = {538817, 629591, 466036, 71277, 186379, 240815, 157281, 979189, 235726, 819806, 585927, 964687, 559677};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 6105060;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> street = {240024, 176313, 669104, 619399, 178296, 959398, 989101, 215111, 378490, 525828, 774066, 33433, 469330, 338428};
    vector<int> avenue = {627376, 474356, 269805, 207779, 713, 632885, 201515, 350167, 116250, 623363, 817847, 259328, 703684, 339072};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 6281347;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> street = {976613, 9491, 811320, 64088, 419709, 700952, 820813, 734739, 630283, 619857, 775269, 816194, 23974, 351723, 293876, 686309, 985724, 259387, 485907, 323206, 477193, 270051, 23692, 226013, 224450, 321341, 786155, 988882, 729078, 155109, 14059, 480853, 666263, 129349};
    vector<int> avenue = {143544, 4934, 604073, 463158, 109487, 483534, 966313, 569392, 898291, 430060, 387697, 124302, 89959, 501950, 81287, 764049, 497371, 512279, 320779, 357196, 482451, 361538, 863714, 545717, 649063, 826701, 282078, 950322, 204676, 421105, 921845, 812028, 484990, 28077};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 16667804;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> street = {296584, 17385, 580346, 543525, 101248, 721822, 52714, 948823, 639489, 729243, 454998, 701045, 857889, 30594, 842224, 747623, 290418, 693618, 828420, 912344, 889655, 945805, 716577, 242486, 177789, 106541, 697410, 410750};
    vector<int> avenue = {138848, 204151, 828671, 593764, 643864, 111420, 810217, 154406, 88779, 987154, 817926, 265972, 454578, 521885, 569688, 804187, 292815, 532623, 355651, 573673, 889149, 945137, 343588, 512563, 635842, 385143, 17227, 150726};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 13965544;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> street = {600441, 242123, 385547, 484191};
    vector<int> avenue = {923589, 334920, 733895, 847640};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 1159376;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> street = {644920, 549752};
    vector<int> avenue = {538558, 366338};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 267388;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> street = {347949, 340061, 668857, 393866, 142464, 962069, 773979, 427090, 620047, 863185, 481225};
    vector<int> avenue = {380630, 469407, 866028, 945497, 470528, 582639, 917964, 545710, 342149, 975005, 482533};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 4378593;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> street = {28003, 316946, 419451, 525882, 801111, 101294, 104048, 414640, 25174, 597015, 313134, 808125, 160828, 952129, 143269, 756922, 120368, 835387, 8722};
    vector<int> avenue = {518595, 677149, 967314, 601748, 805312, 103228, 152485, 408451, 908603, 996906, 221863, 888179, 436730, 867728, 329776, 772141, 659781, 162771, 17313};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 10297723;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> street = {724654, 701092, 325992, 272021, 202870, 790921, 912203, 686234, 451016, 991133, 974231, 457118, 613154, 815944, 655553};
    vector<int> avenue = {462289, 633514, 557947, 702271, 812994, 228249, 306797, 240050, 246804, 595295, 317228, 224669, 520187, 614191, 79486};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 5725570;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> street = {836462, 673424, 420741, 259157, 1998, 443812, 373388, 741813};
    vector<int> avenue = {657169, 302850, 271776, 463341, 969257, 805786, 113501, 30687};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 3816966;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> street = {816868, 420690, 494317, 881910, 625757, 199709, 641535, 556978, 137988, 774444, 885133, 414834, 958627, 89057, 917790, 638809, 523877, 941020, 463365, 101511};
    vector<int> avenue = {168739, 696011, 290753, 987910, 799712, 117039, 680450, 83925, 938279, 272350, 525769, 387133, 89077, 408173, 2058, 950014, 526050, 63036, 161542, 25770};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 10304779;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> street = {792153, 23825, 462938, 745469, 853955, 412317, 789152, 642421, 194344, 860378, 932781, 745304, 204535, 125514, 715827, 812065, 551538, 18373, 520087, 382482, 363764, 160473, 589795, 360449, 389712, 709004, 174481, 520016, 662760, 928316, 578117, 521750, 468819, 607591, 888882, 671148, 360157, 36789, 917551, 964508, 958863, 581326};
    vector<int> avenue = {552778, 790161, 847406, 798462, 437049, 439157, 797505, 847439, 307936, 573768, 41848, 124888, 18727, 176455, 736439, 510322, 935043, 18043, 917103, 269136, 335561, 794624, 910537, 423031, 525491, 403907, 315866, 185380, 870396, 729019, 473121, 721778, 395474, 323045, 558833, 950371, 40142, 267568, 327491, 934700, 123124, 369876};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 19970361;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> street = {299131, 23992, 566511, 306123, 868001, 92876, 974521, 276755, 758304, 205029, 874551, 960812, 599585, 960308, 654751, 206112, 9914, 704366, 20778};
    vector<int> avenue = {895469, 647349, 68734, 539349, 391197, 360026, 268880, 582048, 98307, 99362, 150562, 144731, 645845, 415033, 46221, 155807, 815344, 240031, 694111};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 10267599;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> street = {390208, 768778, 571261, 347111, 802470, 907558, 467130, 419638, 940795, 607018, 133773, 475535, 582952, 963834, 36770, 703779, 567806, 572584, 144256, 586461, 606957, 514909, 63674, 8287, 816940, 936063, 441090, 450024, 685301, 712080, 518318, 517301, 695200, 937185, 641061, 187380, 294944, 425557, 864205, 599007, 996634, 109877, 313435, 908733};
    vector<int> avenue = {978978, 301774, 588523, 148681, 282528, 331402, 942375, 581668, 262340, 103838, 518998, 173493, 777619, 917214, 728127, 17244, 39010, 537587, 761387, 519506, 21781, 507398, 691983, 72216, 540203, 691294, 106964, 719207, 768080, 761302, 172214, 703904, 491488, 732954, 418378, 361104, 850317, 852540, 276848, 121173, 675988, 435504, 715528, 305969};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 20003250;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> street = {328546, 998026, 69407, 824674, 699762, 253173, 611487, 145052, 740388, 588613, 569471, 59105, 930189, 163696, 72919, 583686, 377296, 179382, 500014, 225447, 561751, 34593, 845678, 146130, 129630, 315867, 794863, 699084, 202990, 85185, 802937, 444860, 622597};
    vector<int> avenue = {767580, 168124, 891448, 756907, 536315, 361471, 372527, 59038, 819076, 854968, 737920, 290250, 797031, 40139, 917447, 129849, 17916, 791083, 506867, 49308, 988348, 636392, 788277, 382336, 608558, 921168, 550065, 392477, 441305, 948524, 362398, 621839, 164394};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 17156654;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> street = {547932, 344043, 503097, 39372, 141202, 634161, 896411, 903556, 186296, 604174, 59156, 351303, 770143, 836139, 195402, 347901, 432168, 516971, 620277, 811347, 818693, 354573, 920788, 353477, 896527, 36551, 133540, 76978, 90276, 284433, 249001, 880571};
    vector<int> avenue = {429596, 369783, 64764, 978747, 894808, 265869, 154958, 471582, 740451, 236104, 567632, 535626, 972688, 904854, 733158, 1197, 936128, 868957, 169410, 586553, 298666, 501732, 851546, 347623, 754742, 997924, 461558, 209412, 765104, 201931, 912039, 686353};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 16781324;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> street = {540899, 624177, 65333, 956759, 155056, 342403, 854609, 345315, 90036, 110693, 834757, 719502, 126844, 964246, 844050, 278675, 424689, 237383, 713872, 165540, 365569, 889545, 548280, 774025, 82489, 340434, 999620, 208768, 239158};
    vector<int> avenue = {265617, 721715, 578086, 438545, 715180, 262279, 447347, 234142, 296593, 515192, 549441, 448283, 574955, 898789, 898925, 349790, 62482, 874400, 73320, 63768, 156820, 462652, 361378, 991004, 606686, 485590, 250727, 594700, 655628};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 13850103;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> street = {745202, 169980};
    vector<int> avenue = {632519, 907517};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 850220;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> street = {704591, 61098, 266594, 367659, 651830, 811308, 601564, 587399, 864981, 521880, 878240, 10183, 816603, 925613, 913474, 53954, 648530, 775291, 613659, 282643, 942495, 870526, 750858, 920618, 967690, 670427, 299123, 53680, 682144, 15879, 522173, 346170, 969503, 897244, 910445, 380752, 525541, 869587, 193043, 745958, 153579, 109927, 377060, 233935};
    vector<int> avenue = {577767, 220276, 709460, 813812, 356121, 536703, 856374, 265883, 626221, 846385, 835128, 985423, 951615, 849762, 312112, 255731, 752900, 189972, 285699, 180617, 302251, 31804, 31845, 264105, 185756, 940776, 144497, 470801, 63775, 873751, 435751, 630891, 460799, 174410, 210751, 157845, 922592, 964557, 906725, 380441, 920251, 708242, 21988, 718781};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 24076949;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> street = {130268, 230270, 913615, 620624, 146263, 993741, 596870, 591676, 231044, 650335, 489852, 99955, 445927, 217683, 817042, 538321, 575848, 713670, 924550, 414564, 628726, 547591, 894785, 60398, 576918, 514349, 169217, 929929, 273545, 503415, 144394, 395163, 592495, 591175, 174426, 391113, 294850, 18916, 337652, 787767, 477167, 801713, 869816, 811857, 14193, 557305, 70818, 849197, 864556, 372609};
    vector<int> avenue = {583544, 8119, 895904, 928453, 636141, 125831, 522527, 83948, 52985, 352150, 999601, 109994, 946123, 350296, 491650, 377734, 293324, 96284, 562947, 922316, 34807, 745825, 203256, 497411, 721865, 490668, 485854, 273109, 923210, 985064, 397765, 127215, 585121, 753314, 568649, 397979, 872931, 223769, 190420, 449822, 76284, 710257, 593650, 416840, 621800, 636797, 417273, 414307, 251390, 58970};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 23519822;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> street = {100000};
    vector<int> avenue = {100000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> street = {0, 1, 100};
    vector<int> avenue = {0, 1, 100};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> street = {0, 1, 10};
    vector<int> avenue = {0, 1, 10};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> street = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> avenue = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> street = {0, 8, 10};
    vector<int> avenue = {0, 10, 8};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> street = {0, 10, 10};
    vector<int> avenue = {0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> street = {0, 0, 0};
    vector<int> avenue = {0, 500001, 1000000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> street = {1000000};
    vector<int> avenue = {1000000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> street = {0, 6, 6};
    vector<int> avenue = {6, 0, 6};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> street = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> avenue = {0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 9, 9, 9, 9, 9};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> street = {1, 1, 1, 1, 1, 10};
    vector<int> avenue = {1, 1, 1, 1, 1, 10};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> street = {0, 1, 2};
    vector<int> avenue = {0, 6, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> street = {0, 0, 0, 0, 1000};
    vector<int> avenue = {0, 0, 0, 0, 1000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> street = {0, 1000000, 1000000, 1000000, 1000000};
    vector<int> avenue = {1000000, 1000000, 1000000, 1000000, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> street = {0, 3, 5};
    vector<int> avenue = {0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> street = {1000000, 999999, 999998, 400000, 300000, 100000, 999997};
    vector<int> avenue = {1, 1, 1, 1, 1, 1, 1};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2199997;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> street = {33612, 234466, 372768};
    vector<int> avenue = {663205, 885728, 237860};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 987024;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> street = {16807, 474967, 648451, 942674, 107786, 210802, 27443, 849421, 776465, 235702, 563617, 437050, 482708, 242968, 807873, 521366, 280886, 531713, 378017, 542469, 543407, 831695, 816445, 95159, 127743, 569802, 492902, 278874, 350923, 793830, 897143, 806190, 612949, 929166, 722230, 876929, 579621, 377525, 234451, 558037, 511437, 8562, 899842, 817719, 124086, 91589, 423872, 892192, 639609, 185420};
    vector<int> avenue = {33355, 920128, 616198, 357354, 514897, 571133, 787080, 700269, 507578, 60773, 725780, 453583, 727441, 117339, 795683, 805793, 540406, 847214, 306193, 374775, 259223, 938157, 28040, 406051, 622728, 388817, 737043, 554429, 337790, 15, 722338, 219825, 75595, 445023, 544653, 932844, 28524, 808847, 317305, 192390, 781688, 820466, 798752, 245780, 405483, 729750, 935832, 128530, 353860, 52252};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 24114540;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> street = {100, 100, 0};
    vector<int> avenue = {0, 100, 100};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> street = {0, 2, 4};
    vector<int> avenue = {0, 100, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> street = {0, 1000000, 1000000, 1000000};
    vector<int> avenue = {0, 1000000, 1000000, 1000000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> street = {587971, 408872, 933692, 834506, 761865, 129967, 572632, 496608, 967885, 164620, 230398, 380941, 484076, 229381, 255374, 329076, 537508, 755184, 52631, 402700, 404020, 731974, 250764, 252491, 692198, 436675, 155900, 751807, 970549, 110418};
    vector<int> avenue = {587971, 408872, 933692, 834506, 761865, 129967, 572632, 496608, 967885, 164620, 230398, 380941, 484076, 229381, 255374, 329076, 537508, 755184, 52631, 402700, 404020, 731974, 250764, 252491, 692198, 436675, 155900, 751807, 970549, 110418};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 13515154;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> street = {0, 100, 222, 323, 1000000, 5456, 476, 100000, 847, 323, 1000000, 5456, 476, 100000, 847, 974, 14570, 0, 100, 222, 323, 1000000, 5456, 476, 100000, 847, 974, 14570, 0, 100, 222, 323, 1000000, 5456, 476, 100000, 847, 974, 14570, 0, 100, 222, 323, 1000000, 5456, 476, 100000, 847, 974, 14570};
    vector<int> avenue = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 10583326;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> street = {1, 2, 3, 1000};
    vector<int> avenue = {1, 2, 3, 1000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> street = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 500000};
    vector<int> avenue = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 500000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 48000000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> street = {100, 100, 99, 101};
    vector<int> avenue = {99, 101, 100, 100};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
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
    vector<int> street = {1, 1, 10000};
    vector<int> avenue = {0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> street = {1, 1, 1000000};
    vector<int> avenue = {0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> street = {0, 0, 0, 0, 0, 1000000};
    vector<int> avenue = {0, 0, 0, 0, 0, 1000000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> street = {0, 0, 100000};
    vector<int> avenue = {0, 1, 100000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 200000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> street = {1, 2, 2, 4};
    vector<int> avenue = {2, 1, 1000, 2};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 1002;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> street = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0, 0, 0};
    vector<int> avenue = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0, 0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 7000000;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> street = {0, 0, 0, 100000};
    vector<int> avenue = {0, 0, 0, 10000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 110000;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> street = {10000};
    vector<int> avenue = {10000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
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
    vector<int> street = {0, 1, 100000};
    vector<int> avenue = {0, 1, 100000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 200000;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> street = {0, 1, 1, 3, 56};
    vector<int> avenue = {2, 5, 1, 2, 75};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> street = {0, 3, 3, 4};
    vector<int> avenue = {5, 8, 2, 5};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> street = {1, 1, 1, 500};
    vector<int> avenue = {1, 1, 1, 500};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> street = {1, 2, 10000};
    vector<int> avenue = {1, 2, 10000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 19998;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> street = {0, 900000, 900001, 900001, 900003};
    vector<int> avenue = {0, 900002, 900005, 900001, 900002};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 1800010;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> street = {0, 900000, 900001, 900001, 900003};
    vector<int> avenue = {0, 900000, 900001, 900001, 900003};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 1800008;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> street = {0, 1, 100000};
    vector<int> avenue = {0, 1, 1000000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 1100000;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> street = {0, 0, 0, 1000};
    vector<int> avenue = {1, 1, 1, 1};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> street = {0, 1, 1, 1, 1};
    vector<int> avenue = {0, 0, 0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> street = {0, 0, 0, 0, 0};
    vector<int> avenue = {2, 2, 2, 2, 100000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 99998;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> street = {1, 1000, 1000};
    vector<int> avenue = {0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> street = {1, 2, 100};
    vector<int> avenue = {1, 2, 100};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> street = {0, 0, 0, 0, 0, 0, 0, 10};
    vector<int> avenue = {0, 0, 0, 0, 0, 0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> street = {0, 1, 1000000};
    vector<int> avenue = {0, 1, 1000000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> street = {0, 0, 1, 10, 10};
    vector<int> avenue = {0, 0, 0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> street = {1, 2, 3, 4, 100000};
    vector<int> avenue = {1, 1, 1, 1, 1};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 100001;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> street = {0, 1, 1, 3};
    vector<int> avenue = {2, 10, 1, 2};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> street = {9004, 1413, 7493, 2336, 1227, 168, 3795, 2042, 6355};
    vector<int> avenue = {99, 3289, 4582, 9614, 9035, 2817, 5549, 5804, 2707};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 42887;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> street = {0, 0, 1, 6, 6};
    vector<int> avenue = {0, 6, 1, 0, 6};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> street = {1, 0, 1000};
    vector<int> avenue = {1000, 0, 1};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> street = {0, 1, 1000};
    vector<int> avenue = {0, 1, 1000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> street = {0, 0, 0};
    vector<int> avenue = {0, 0, 1000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> street = {0, 0, 1000};
    vector<int> avenue = {0, 0, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> street = {0, 1948, 2494, 9205, 943, 3784, 819, 9884, 6092, 9450, 4850, 6655, 4511, 1355, 1585, 6158, 9921, 5650, 2540, 8284, 1809, 7731, 6702, 2286, 3792, 6445, 9411, 8264, 9480, 6061, 3207, 6096, 6327, 5092, 786, 2038, 6477, 8846, 9322, 5451, 6581, 9285, 5630, 6208, 6837, 7793, 5688, 6165, 5786, 1000000};
    vector<int> avenue = {0, 573, 4561, 7680, 2485, 5013, 6435, 4578, 4761, 655, 7054, 2153, 8866, 3077, 2075, 5619, 5101, 7273, 1749, 9371, 1882, 5425, 6660, 3048, 2882, 9028, 3585, 3473, 9794, 3627, 6128, 8868, 8164, 5717, 2612, 4344, 80, 2968, 1231, 7851, 8306, 8702, 7129, 6337, 2178, 2745, 4658, 5680, 8863, 1000000};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 2212414;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> street = {0, 0, 0, 0, 100};
    vector<int> avenue = {100, 99, 98, 97, 0};
    TournamentPlan* pObj = new TournamentPlan();
    clock_t start = clock();
    int result = pObj->getTravelDistance(street, avenue);
    clock_t end = clock();
    delete pObj;
    int expected = 202;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8527113&rd=10004&pm=6807
********************************************************************************
#include <algorithm> 
#include <cctype> 
#include <cmath> 
#include <cstdarg> 
#include <cstdlib> 
#include <cstring> 
#include <functional> 
#include <iostream> 
#include <iomanip> 
#include <limits> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <vector> 
 
using namespace std; 
 
#define FORI(p, x) for(int i = p; i < (int)(x); ++i) 
#define S size() 
 
#define ALL(C) (C).begin(), (C).end() 
 
struct TournamentPlan{ 
  int getTravelDistance(vector <int> street, vector <int> avenue); 
 
}; 
 
int TournamentPlan :: getTravelDistance ( vector <int> street, vector <int> avenue ){ 
    sort(ALL(street)); 
    sort(ALL(avenue)); 
    int res = 0; 
    int n = street.S; 
    FORI (0, n) res += abs(street[n / 2] - street[i]); 
    FORI (0, n) res += abs(avenue[n / 2] - avenue[i]); 
    return res; 
} 
// Powered by Krzysan's Cleaner 1.4-6 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/