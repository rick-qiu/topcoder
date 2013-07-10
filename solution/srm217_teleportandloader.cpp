/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3004
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

class TeleportAndLoader {
public:
    int cheapTransportation(vector<int> boxes, int teleport_cost, int loader_cost);
};

int TeleportAndLoader::cheapTransportation(vector<int> boxes, int teleport_cost, int loader_cost) {
    int ret;
    return ret;
}


int test0() {
    vector<int> boxes = {1, 2, 3, 4, 5};
    int teleport_cost = 10000;
    int loader_cost = 1;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> boxes = {1000, 40, 50, 10};
    int teleport_cost = 200;
    int loader_cost = 10;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> boxes = {1, 10, 254, 987, 1000000};
    int teleport_cost = 1;
    int loader_cost = 1000;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> boxes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int teleport_cost = 24;
    int loader_cost = 1;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> boxes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000, 1000};
    int teleport_cost = 24000;
    int loader_cost = 1000;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 71000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> boxes = {577198, 828600};
    int teleport_cost = 491359;
    int loader_cost = 917843;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 982718;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> boxes = {178880, 727526, 311016, 93374, 150170, 456122, 4010, 386545, 584617, 621171, 678462, 360059, 622803, 821533, 309897, 744979, 947553, 145474, 240883, 214799, 863627, 401273, 304861, 24385, 94694, 57010, 940283, 279603, 707858, 743497, 210762, 479469, 971763, 110614, 394753, 623587, 370156, 230436};
    int teleport_cost = 822530;
    int loader_cost = 769354;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 31256140;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> boxes = {673504, 65717, 516152, 972145, 926710, 310437, 72990, 699157, 898842, 596196};
    int teleport_cost = 182837;
    int loader_cost = 486160;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1828370;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> boxes = {749416, 286583, 698774, 739487, 125377, 854036, 529679, 436108, 972944, 562355, 483384, 867325, 467279, 304757, 580201, 779860, 407513, 911029, 586052, 544199, 863642, 673203, 862127, 112761, 321964, 292345};
    int teleport_cost = 143751;
    int loader_cost = 854725;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3737526;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> boxes = {765259, 147002, 62826, 873216, 118567, 14117, 465771, 702557, 75448, 206713, 297448, 238592, 545644, 164517, 986713, 946195, 344183, 468100, 640097, 448954, 49917, 296233, 787421, 206644, 618463, 477613, 649876, 848640, 738580, 384189, 755569};
    int teleport_cost = 926249;
    int loader_cost = 193620;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 28713719;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> boxes = {598360, 506083, 758627, 635708, 823153, 589889, 933630, 745045, 684000, 322583, 313179, 111890, 871763, 158335, 81079, 656840, 558460, 418306, 476514, 156331, 755322, 846983, 894743, 307967, 130068, 803538, 624980, 74897, 669330, 107518, 232298, 942565, 678118, 504389, 508813, 521392};
    int teleport_cost = 704545;
    int loader_cost = 620405;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 25363620;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> boxes = {724104, 638884};
    int teleport_cost = 503766;
    int loader_cost = 508390;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1007532;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> boxes = {566366, 978646, 180384, 134762, 974627, 28338, 57655, 134868, 885612, 738875, 15130, 724632, 222068, 172640, 349328, 376677, 821827, 539626, 817923, 148646, 412260, 139876, 67439, 587310, 561231, 318114, 827138, 291808, 916809, 761630, 369878, 233885, 234256, 555056, 83538, 437097, 265913, 238151, 128954, 82049};
    int teleport_cost = 60345;
    int loader_cost = 936409;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 2413800;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> boxes = {968858, 547863, 710408, 265005, 538978, 408247, 599262, 700968, 445912, 7964, 615806, 590146, 227393, 4428, 84676, 875067, 830678, 708822, 542703, 146707, 745797, 31890, 659724};
    int teleport_cost = 87566;
    int loader_cost = 970061;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 2014018;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> boxes = {148635, 299945, 376712, 223160, 246534, 923109, 924453, 82801, 175998, 794892, 215468, 3769, 116415, 318040, 258194};
    int teleport_cost = 253158;
    int loader_cost = 635907;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3797370;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> boxes = {200799, 661673, 930467, 943681, 154652, 583433, 965554, 592550, 261407, 358038, 814202, 71399, 604073, 202160, 659466, 618715, 451701, 406856, 606205, 972898, 401190, 917589, 452643, 725051, 292267, 417917, 727746, 917404, 406926, 316398, 584363, 751764, 754758, 142205, 279697, 932377, 530113, 929208, 530671, 449705, 92082, 77029, 363315, 714147, 404070, 691743, 203711, 630671};
    int teleport_cost = 557101;
    int loader_cost = 558051;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 26740848;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> boxes = {475994, 745544, 696710, 381398, 51830, 173063, 318804, 217330, 496010, 450521, 620777, 410359, 862965, 638055, 576885, 396314, 291028, 627401, 19032, 466879, 959412, 744627, 827897, 596610, 80813, 473605, 603583, 835689, 351011, 273350, 237790, 380891, 119743, 644916, 187549, 923799, 988203, 923817, 976870, 911644, 189632, 271257, 749808, 175732, 492084, 825876, 127315, 587485, 780197};
    int teleport_cost = 745016;
    int loader_cost = 663709;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 36505784;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> boxes = {73282, 692860, 570381, 798239, 653238, 209995, 288024, 787156, 48010, 356660};
    int teleport_cost = 351425;
    int loader_cost = 426093;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3514250;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> boxes = {716347, 673898, 548584, 55477, 266438, 884499, 89580, 726798, 884871, 300886, 660765, 848784, 892931, 934535, 450111, 362843, 437174, 674, 792066, 91395, 700827, 157147, 49355, 19664, 54937, 652443, 21249, 401670};
    int teleport_cost = 800024;
    int loader_cost = 845142;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 22400672;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> boxes = {563475, 219308, 800351, 492623, 104774, 154468, 728795, 657637, 968705, 296581, 297562, 729253, 559505, 974686, 783639, 456818, 763210, 644932, 605941, 517502, 460911, 962188, 258208, 748964, 640043, 656036, 569558, 457063, 130616, 51177, 676341, 323670, 420438};
    int teleport_cost = 226695;
    int loader_cost = 170510;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 7480935;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> boxes = {821446, 4348, 384132, 847751, 912659, 666527, 751755, 980478, 371115, 926841, 465112, 890780, 40427, 958070, 168217, 119606, 121634, 594707, 749938, 685306, 828388, 791210, 174398, 185595, 200984, 194391};
    int teleport_cost = 311124;
    int loader_cost = 202048;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 8089224;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> boxes = {779903, 1460, 436821, 472507, 767245, 572095, 944916, 877062, 502648, 765775, 261932, 810205, 566053, 534810, 721025, 749567, 936897, 816313, 404494, 53668, 788, 774226, 158059, 686034, 354715, 817447, 650303, 488896, 81104, 146147, 940317, 382834, 47834, 245920, 262276, 213235, 866896, 908866, 623042};
    int teleport_cost = 177189;
    int loader_cost = 364461;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 6910371;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> boxes = {915638, 559934, 535749, 992889, 860151, 383292, 175998, 759734, 31661, 832754, 837128};
    int teleport_cost = 736385;
    int loader_cost = 665938;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 8100235;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> boxes = {32793, 459008, 234429, 160942, 513249, 772929, 218033, 789234, 569826, 872340, 551891, 662234, 832380, 375036, 574408, 122333, 920207, 962129, 869916, 456228, 649574, 639434, 16885, 142274, 298699, 574982, 621808, 432839, 757140, 528021, 7767, 341924, 473787, 51647, 24699, 992513, 723273, 842663, 611270, 864472, 766361, 14488, 641414, 392029, 295612};
    int teleport_cost = 905443;
    int loader_cost = 953393;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 40744935;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> boxes = {577198, 828600};
    int teleport_cost = 491359;
    int loader_cost = 918;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 982718;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> boxes = {764179, 879728, 525312, 15094, 373151, 169457, 121005, 9387, 544585, 616622, 170679, 461361, 58623, 802822, 532310, 896745, 978948, 552146, 473241, 882215, 798864, 626402, 272305, 860025, 384095, 693058, 9941, 282280, 602708, 857744, 496211, 761480, 468972, 762111, 613395, 752624, 586371, 155231, 435823, 529770, 353174, 673504};
    int teleport_cost = 65717;
    int loader_cost = 517;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 2760114;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> boxes = {972145, 926710, 310437, 72990, 699157, 898842, 596196, 182837, 486160};
    int teleport_cost = 516750;
    int loader_cost = 416;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 4650750;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> boxes = {582699, 773740, 486126, 376855, 35530, 678437, 107973, 943563, 354484, 383868, 324468, 278305, 756581, 200780, 859408};
    int teleport_cost = 512912;
    int loader_cost = 29;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 7368844;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> boxes = {586052, 544199, 863642, 673203, 862127, 112761, 321964, 292345, 143751, 854725, 614766, 258148, 1063, 825874, 215119, 566015, 116466, 770703, 556076, 447207, 712298, 447239, 591546, 643165, 516987, 712947, 194345, 182469, 99641, 96449, 953050, 916297, 232788, 420207, 643619, 462478, 612650, 875849, 639739, 579385, 188756, 568927, 248194, 619716, 598360, 506083, 758627, 635708, 823153, 589889};
    int teleport_cost = 933630;
    int loader_cost = 746;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 44586688;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> boxes = {684000, 322583, 313179, 111890};
    int teleport_cost = 871763;
    int loader_cost = 159;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3487052;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> boxes = {81079, 656840, 558460, 418306, 476514, 156331, 755322, 846983, 894743, 307967, 130068, 803538, 624980, 74897, 669330, 107518, 232298, 942565};
    int teleport_cost = 678118;
    int loader_cost = 505;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 12206124;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> boxes = {508813, 521392, 704545, 620405, 6725, 103639, 883504, 765509, 389805, 566366, 978646, 180384, 134762, 974627, 28338, 57655, 134868, 885612, 738875, 15130};
    int teleport_cost = 724632;
    int loader_cost = 223;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 13537098;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> boxes = {172640, 349328, 376677, 821827, 539626};
    int teleport_cost = 817923;
    int loader_cost = 149;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 4089615;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> boxes = {412260, 139876, 67439, 587310, 561231, 318114, 827138, 291808, 916809, 761630, 369878, 233885, 234256, 555056, 83538, 437097, 265913, 238151, 128954, 82049, 60345, 936409, 443969, 857548, 862711, 407266, 4539, 977409, 246600, 261701, 967446, 911008};
    int teleport_cost = 963616;
    int loader_cost = 806;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 30171122;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> boxes = {145228, 392005, 427085, 675876, 66831, 677709, 821543, 702147, 706746, 796032, 889660, 723088, 565971, 60282, 148635, 299945, 376712, 223160, 246534, 923109, 924453, 82801, 175998, 794892, 215468, 3769, 116415, 318040, 258194, 253158};
    int teleport_cost = 635907;
    int loader_cost = 962;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 19077210;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> boxes = {798662, 672931, 466944, 680155, 651584, 432966, 553593, 549262, 406359, 37815, 201072};
    int teleport_cost = 398605;
    int loader_cost = 73;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 4302213;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> boxes = {159660, 465619, 714452, 700407, 855607, 204973, 897402, 189918, 588453, 642726, 50293};
    int teleport_cost = 266418;
    int loader_cost = 917;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 2930598;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> boxes = {745918, 403407, 925317, 397585, 362752, 763755, 757143, 204280, 696933, 376531, 112930, 207531, 670450, 704093, 81078, 28364, 314715, 146405, 69692, 742204, 710631, 670558, 100559, 50998, 475994, 745544, 696710, 381398, 51830, 173063, 318804, 217330, 496010, 450521, 620777, 410359};
    int teleport_cost = 862965;
    int loader_cost = 639;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 28597023;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> boxes = {54577, 884397, 313292, 27628, 400020, 31467, 878960, 411745, 626828, 896597, 609081, 812474, 604604, 582836, 688352, 10274, 349238, 789381, 890120, 742645, 915188, 548924, 798989, 202924, 816977, 869912, 643190, 631272, 256750, 807176, 731493, 83826, 875128, 314588, 484781, 196746, 15664, 708179, 73282, 692860, 570381, 798239, 653238, 209995, 288024, 787156, 48010, 356660, 351425, 426093};
    int teleport_cost = 558717;
    int loader_cost = 347;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 27528378;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> boxes = {65536};
    int teleport_cost = 65536;
    int loader_cost = 65536;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 65536;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> boxes = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000};
    int teleport_cost = 1000000;
    int loader_cost = 1000000;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 19000000;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> boxes = {65537};
    int teleport_cost = 1000000;
    int loader_cost = 65536;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> boxes = {1, 10, 254, 987, 1000000};
    int teleport_cost = 1000000;
    int loader_cost = 1000000;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 5000000;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> boxes = {999, 1001, 1001, 1001};
    int teleport_cost = 100;
    int loader_cost = 10;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> boxes = {100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000};
    int teleport_cost = 1000000;
    int loader_cost = 500;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10000000;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> boxes = {3000};
    int teleport_cost = 1000000;
    int loader_cost = 1000000;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> boxes = {10000, 30000, 50000, 70000, 90000, 110000, 130000, 150000, 170000, 190000, 210000, 230000, 250000, 270000, 290000, 310000, 330000, 350000, 370000, 390000, 410000, 430000, 450000, 470000, 490000, 510000, 530000, 550000, 570000, 590000, 610000, 630000, 650000, 670000, 690000, 710000, 730000, 750000, 770000, 790000, 810000, 830000, 850000, 870000, 890000, 910000, 930000, 950000, 970000, 990000};
    int teleport_cost = 10000;
    int loader_cost = 1;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> boxes = {83, 91, 57, 100, 1, 1000, 742, 677, 709, 150, 150, 150, 150, 223, 221, 234, 999, 998, 997, 996, 567, 294, 12, 13, 445, 446, 449, 487, 322, 981, 116, 56784, 56789, 68020, 61475, 61562, 5000, 9999, 9998, 10005, 1000000, 8884};
    int teleport_cost = 5000;
    int loader_cost = 8;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 64136;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> boxes = {1000000};
    int teleport_cost = 10000;
    int loader_cost = 4000;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> boxes = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
    int teleport_cost = 10;
    int loader_cost = 1;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> boxes = {100, 110, 120, 120, 110, 100, 100, 120};
    int teleport_cost = 30;
    int loader_cost = 1;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> boxes = {1, 2, 3, 10, 11, 12, 19, 20, 21, 22, 23, 49, 50, 51, 52, 53, 54, 55, 99, 100, 101, 102, 110, 10000};
    int teleport_cost = 200;
    int loader_cost = 10;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1390;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> boxes = {999, 1001, 1001, 1001};
    int teleport_cost = 100;
    int loader_cost = 10;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> boxes = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000};
    int teleport_cost = 1000000;
    int loader_cost = 1000000;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 19000000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> boxes = {65537};
    int teleport_cost = 1000000;
    int loader_cost = 65536;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> boxes = {1, 10, 254, 987, 1000000};
    int teleport_cost = 1000000;
    int loader_cost = 1000000;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 5000000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> boxes = {999, 1001, 1001, 1001};
    int teleport_cost = 100;
    int loader_cost = 10;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> boxes = {100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000};
    int teleport_cost = 1000000;
    int loader_cost = 500;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10000000;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> boxes = {3000};
    int teleport_cost = 1000000;
    int loader_cost = 1000000;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> boxes = {10000, 30000, 50000, 70000, 90000, 110000, 130000, 150000, 170000, 190000, 210000, 230000, 250000, 270000, 290000, 310000, 330000, 350000, 370000, 390000, 410000, 430000, 450000, 470000, 490000, 510000, 530000, 550000, 570000, 590000, 610000, 630000, 650000, 670000, 690000, 710000, 730000, 750000, 770000, 790000, 810000, 830000, 850000, 870000, 890000, 910000, 930000, 950000, 970000, 990000};
    int teleport_cost = 10000;
    int loader_cost = 1;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> boxes = {83, 91, 57, 100, 1, 1000, 742, 677, 709, 150, 150, 150, 150, 223, 221, 234, 999, 998, 997, 996, 567, 294, 12, 13, 445, 446, 449, 487, 322, 981, 116, 56784, 56789, 68020, 61475, 61562, 5000, 9999, 9998, 10005, 1000000, 8884};
    int teleport_cost = 5000;
    int loader_cost = 8;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 64136;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> boxes = {1000000};
    int teleport_cost = 10000;
    int loader_cost = 4000;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> boxes = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
    int teleport_cost = 10;
    int loader_cost = 1;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> boxes = {100, 110, 120, 120, 110, 100, 100, 120};
    int teleport_cost = 30;
    int loader_cost = 1;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> boxes = {1, 2, 3, 10, 11, 12, 19, 20, 21, 22, 23, 49, 50, 51, 52, 53, 54, 55, 99, 100, 101, 102, 110, 10000};
    int teleport_cost = 200;
    int loader_cost = 10;
    TeleportAndLoader* pObj = new TeleportAndLoader();
    clock_t start = clock();
    int result = pObj->cheapTransportation(boxes, teleport_cost, loader_cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1390;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5863&pm=3004
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
VI a; 
i64 b, c; 
i64 memo[100]; 
i64 doit(int x) { 
  if( x == a.size() ) return 0; 
  i64 &ret = memo[x]; 
  if( ret ) return ret; 
  ret = a[x]*c + doit(x+1); 
  for( int y = x+1; y <= a.size(); y++ ) { 
    int z = (x+y)/2; 
    i64 v = b; 
    for( int i = x; i < y; i++ ) v += abs(a[i]-a[z])*c; 
    ret <?= v + doit(y); 
  } 
  return ret; 
} 
 
class TeleportAndLoader { 
public: 
int cheapTransportation(vector <int> A, int B, int C) { 
  a = A; b = B; c = C; 
  sort(a.begin(), a.end()); 
  return doit(0); 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/