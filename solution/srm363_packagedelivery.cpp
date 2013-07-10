/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7927
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

class PackageDelivery {
public:
    long minimalCost(vector<int> packages, int walkCost, int fuelCost, int parkingCost, int truckCapacity);
};

long PackageDelivery::minimalCost(vector<int> packages, int walkCost, int fuelCost, int parkingCost, int truckCapacity) {
    long ret;
    return ret;
}


int test0() {
    vector<int> packages = {1, 2, 3};
    int walkCost = 3;
    int fuelCost = 2;
    int parkingCost = 3;
    int truckCapacity = 3;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> packages = {1, 2, 3, 4, 5};
    int walkCost = 3;
    int fuelCost = 2;
    int parkingCost = 3;
    int truckCapacity = 5;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 23;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> packages = {1, 2, 3, 4, 5};
    int walkCost = 11;
    int fuelCost = 5;
    int parkingCost = 9;
    int truckCapacity = 2;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 91;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> packages = {5, 5, 5};
    int walkCost = 1;
    int fuelCost = 1;
    int parkingCost = 1;
    int truckCapacity = 3;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> packages = {52345, 745521, 75853, 758632, 968654, 86578, 3658, 86784, 867845, 968, 74567, 6457, 25896, 67869, 47756, 856785, 87575, 36658, 47756, 4567};
    int walkCost = 645746;
    int fuelCost = 88575;
    int parkingCost = 479887;
    int truckCapacity = 11;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 95080562653;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> packages = {123, 123, 123, 123, 123};
    int walkCost = 10;
    int fuelCost = 8;
    int parkingCost = 1;
    int truckCapacity = 5;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 985;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> packages = {1, 2, 3, 4, 5};
    int walkCost = 13;
    int fuelCost = 4;
    int parkingCost = 1;
    int truckCapacity = 1;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 105;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> packages = {43645, 64536, 7567, 8997, 79034, 967895, 869456, 89684, 869, 358667, 95785};
    int walkCost = 0;
    int fuelCost = 123;
    int parkingCost = 33;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> packages = {10, 11, 12, 13, 14, 15, 16};
    int walkCost = 1;
    int fuelCost = 0;
    int parkingCost = 100;
    int truckCapacity = 1;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 91;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> packages = {10, 11, 12, 13, 14, 15, 16};
    int walkCost = 1;
    int fuelCost = 0;
    int parkingCost = 0;
    int truckCapacity = 1;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> packages = {451, 8765, 86754, 96734, 5637, 85674, 785684, 234578};
    int walkCost = 1000000;
    int fuelCost = 1000000;
    int parkingCost = 1000000;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 785691000000;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> packages = {404517, 156377, 276605, 13660, 573214, 622737, 311328, 778049, 453617, 763204, 177209, 66144, 165327, 884767, 534202, 359500, 990283, 834073, 977952, 441677, 131426, 337343, 797226, 585682, 79437, 242068, 859221, 669323, 940281, 721828, 600837, 482757, 828615, 201034, 471617, 570297, 93691, 63290, 813949, 521023, 269608, 372490, 11613, 379107, 153183, 977985, 929986, 486635, 343002, 635818};
    int walkCost = 658714;
    int fuelCost = 127249;
    int parkingCost = 98240;
    int truckCapacity = 35;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 196412852757;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> packages = {65186, 519298, 458969, 924087, 913259, 272583, 201261, 658953, 905113, 927421, 518283, 345726, 958254, 9922, 867273, 70695, 79097, 994271, 472108, 457343, 817204, 522663, 420417, 101359, 78624, 458986, 318696, 656346, 471335, 146862, 738385, 702689, 485810, 513711, 513912, 540298, 342029, 991392, 438962, 167521, 735473, 335699, 383128, 365598, 44977, 579557, 587221};
    int walkCost = 20206;
    int fuelCost = 11726;
    int parkingCost = 8296;
    int truckCapacity = 22;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 24471078152;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> packages = {139224, 743300, 427748, 523794, 287719, 480718, 540242, 917191, 789019, 66032, 904895, 936752, 38610, 773077, 596199, 21254, 565401, 967029, 327375, 263389, 67223, 265186, 216314, 70666, 290550, 483850, 899423, 922457, 725935, 446945, 537739, 352636, 628574, 717188, 40773, 252228, 205424, 478653, 528579, 497012, 637270, 838390, 916302, 897375, 76845, 993931, 165266, 666721};
    int walkCost = 695892;
    int fuelCost = 315868;
    int parkingCost = 4691;
    int truckCapacity = 31;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 520765795276;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> packages = {949675, 54760, 938495, 587630, 274970, 957021, 738646, 619696, 78861, 110305, 361369, 579514, 6096, 931541, 695640, 245784, 373704, 686901, 142580, 613571, 78053, 289881, 733927, 260792, 314436, 286770, 899005, 262173, 633281, 264898, 541480, 695730, 712450, 834366, 261914, 1743, 873994, 950414, 148222, 638712, 357412, 251407, 636577, 612778, 202432, 461164, 515202, 431205};
    int walkCost = 964896;
    int fuelCost = 756523;
    int parkingCost = 288045;
    int truckCapacity = 9;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 3740863964792;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> packages = {878008, 979996, 43301, 773662, 831481, 787692, 605707, 675700, 830796, 896290, 109052, 250722, 70836, 836737, 645697, 122015, 793819, 1606, 37094, 506796, 531164, 91064, 128308, 743010, 612234, 852611, 629323, 26903, 893489, 443614, 207350, 182640, 133830, 199437, 359086, 35852, 826085, 317301, 179395, 830, 962509, 61733, 678020, 176812};
    int walkCost = 709154;
    int fuelCost = 694039;
    int parkingCost = 548220;
    int truckCapacity = 31;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 862196477716;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> packages = {785206, 389981, 114288, 53999, 894902, 721380, 352573, 307190, 131149, 270937, 776668, 640849, 15818, 260581, 376662, 233450, 784754, 677766, 826896, 23082, 196143, 759996, 876384, 655755, 9209, 452694, 151252, 986851, 219830, 256707, 226799, 328855, 563799, 684585, 654938, 501301, 507467, 684877, 601539, 661562, 6080, 412520, 562794, 782962, 994096, 884455, 108774, 714504, 409869, 987681};
    int walkCost = 825686;
    int fuelCost = 210071;
    int parkingCost = 501007;
    int truckCapacity = 5;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 2043688169590;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> packages = {81237, 359477, 867805, 18031, 970722, 605936, 296500, 819805, 794828, 495357, 866273, 805771, 30867, 59709, 609499, 838893, 794465, 559433, 525328, 965438, 229740, 184612, 950054, 262120, 179528, 232390, 610996, 235079, 895259, 375164, 839310, 944634, 13723, 813810, 242098, 721679, 56096, 966427, 400028, 341692, 509082, 901885, 555199, 811190, 804284, 885451, 130144, 614219, 337739};
    int walkCost = 870774;
    int fuelCost = 447337;
    int parkingCost = 101184;
    int truckCapacity = 24;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 946603221806;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> packages = {258976, 543136, 687014, 51432, 454099, 997667, 207796, 987990, 668730, 840283, 400967, 286395, 21300, 675383, 88849, 234425, 504505, 855192, 607281, 435866, 277982, 123779, 764351, 37569, 867255, 664783, 118122, 429527, 350458, 775523, 108373, 715109, 885973, 287350, 786022, 478575, 816330, 955042, 819479, 427412, 24474, 917181, 990859, 203601, 258217, 582362, 584249, 603610};
    int walkCost = 233811;
    int fuelCost = 221674;
    int parkingCost = 126790;
    int truckCapacity = 14;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 766260461082;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> packages = {286221, 693232, 698390, 56368, 248151, 561352, 779938, 360790, 748898, 283013, 908570, 82929, 722521, 2260, 995040, 138523, 434284, 474539, 229134, 94515, 67737, 751195, 990653, 600481, 490679, 813823, 509744, 703178, 492298, 514368, 427007, 925094, 278517, 432935, 727592, 432665, 785284, 33079, 604737, 194491, 840093, 595635, 415382, 14960, 394535, 28024, 100659, 814421};
    int walkCost = 152851;
    int fuelCost = 59960;
    int parkingCost = 34949;
    int truckCapacity = 26;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 111581841152;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> packages = {370968, 433312, 575471, 157709, 123342, 663428, 513631, 716099, 253707, 389474, 818813, 999730, 853787, 405487, 382255, 631557, 220995, 638609, 544226, 110585, 93630, 988463, 636384, 351551, 534863, 761226, 113434, 185093, 889715, 330598, 235486, 742575, 947549, 120638, 183902, 837960, 364103, 710385, 169936, 769042, 454090, 380339, 681711, 923438};
    int walkCost = 897536;
    int fuelCost = 13063;
    int parkingCost = 14581;
    int truckCapacity = 20;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 30185733680;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> packages = {766997, 688719, 350847, 253829, 498220, 522824, 299383, 241120, 579539, 593699, 61793, 848080, 607642, 377593, 774037, 767034, 752159, 567418, 570850, 270399, 171677, 880665, 342502, 732045, 953386, 724085, 56119, 297300, 584457, 586673, 696986, 774842, 486531, 233832, 216289, 61987, 906966, 853267, 761218, 668208, 396545, 351582, 57679, 196101, 972348, 825777, 451077, 485863, 222636};
    int walkCost = 845571;
    int fuelCost = 889105;
    int parkingCost = 188315;
    int truckCapacity = 24;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1876411087098;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> packages = {201668, 69732, 159749, 705443, 984704, 939420, 739544, 245178, 257816, 956035, 964137, 328606, 832019, 566978, 234628, 574163, 736121, 340191, 760564, 183839, 461765, 769038, 20880, 138471, 402940, 49941, 988384, 933476, 547663, 613875, 350373, 778786, 55015, 694795, 247347, 853298, 626910, 49145, 132372, 622188, 562184, 706123, 298305, 932563, 491235};
    int walkCost = 167842;
    int fuelCost = 876120;
    int parkingCost = 43511;
    int truckCapacity = 37;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 958927209882;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> packages = {496090, 954413, 449692, 849576, 252885, 779595, 209080, 189556, 117865, 993809, 398901, 131056, 345148, 786649, 108069, 463439, 515475, 952454, 365760, 144274, 834562, 118859, 600721, 804178, 472179, 514868, 279630, 471216, 208275, 800663, 219950, 298800, 885621, 686533, 969265, 659937, 45863, 858987, 161725, 877799, 265231, 72619, 620992, 676647, 712439, 99398, 45420, 470183, 790059, 482079};
    int walkCost = 137030;
    int fuelCost = 404069;
    int parkingCost = 1902;
    int truckCapacity = 29;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 657042012121;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> packages = {392785, 676490, 431555, 525701, 539691, 483007, 248348, 510533, 65751, 953596, 32940, 549882, 207145, 512842, 559009, 172012, 641890, 884041, 711802, 963308, 692044, 4060, 796477, 143763, 200949, 133324, 132983, 627596, 523012, 253528, 34020, 460953, 812584, 789769, 665417, 257322, 730046, 162888, 618484, 30128, 222210, 588629, 908166, 859286, 800913, 971947, 491077, 301202, 39330, 904901};
    int walkCost = 895084;
    int fuelCost = 913849;
    int parkingCost = 466502;
    int truckCapacity = 39;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1193231665752;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> packages = {483009, 200926, 809662, 696588, 13493, 71571, 384670, 948663, 598734, 431163, 258631, 866350, 963039, 658034, 585858, 893244, 867191, 145037, 524835, 664633, 751068, 644520, 529945, 326622, 734166, 365980, 860864, 905881, 949353, 748412, 705423, 997108, 294655, 842836, 121002, 373854, 586004, 204294, 853878, 647443, 846761, 496989, 695481, 740405, 401540, 674935, 904747};
    int walkCost = 494316;
    int fuelCost = 963630;
    int parkingCost = 228717;
    int truckCapacity = 27;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 2019284875737;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> packages = {871941, 754018, 475117, 134016, 752211, 566084, 72023, 271433, 908911, 705070, 981285, 535164, 401753, 552404, 654507, 380562, 846727, 354494, 434904, 216824, 355812, 997952, 870020, 859739, 286443, 979005, 41272, 508547, 318459, 461037, 927766, 926524, 601877, 310370, 458781, 172406, 490735, 649386, 957104, 419792, 627456, 145037, 95355, 584591, 563082, 274909, 385474, 128560, 579180};
    int walkCost = 531550;
    int fuelCost = 302185;
    int parkingCost = 151407;
    int truckCapacity = 39;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 467467022666;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> packages = {826921, 596411, 421852, 467638, 758463, 592256, 706659, 849533, 144501, 803307, 227354, 964725, 86552, 130883, 717185, 982079, 713911, 836920, 265894, 582363, 859547, 100388, 75014, 361118, 170062, 336519, 490472, 938966, 115235, 814211, 835902, 192537, 698509, 891765, 606866, 585963, 516073, 916250, 254494, 672039, 577902, 207713, 407628, 348005, 253886};
    int walkCost = 664473;
    int fuelCost = 380039;
    int parkingCost = 72281;
    int truckCapacity = 41;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 459399642340;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> packages = {231700, 322238, 785022, 263894, 983138, 165630, 478314, 889642, 149348, 738374, 321833, 929617, 538512, 995378, 141881, 596793, 214008, 718492, 260348, 527664, 84160, 165820, 130688, 47937, 761224, 666043, 676882, 754163, 885242, 943255, 408003, 859812, 683135, 727632, 53692, 747538, 877463, 998386, 743673, 324899, 831206, 680174, 425352, 177898, 902098, 926419, 275407, 338494, 95640, 57176};
    int walkCost = 401357;
    int fuelCost = 222058;
    int parkingCost = 305082;
    int truckCapacity = 42;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 287723102321;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> packages = {52028, 390497, 622978, 983364, 775211, 781058, 32300, 106093, 723027, 856291, 603598, 946912, 59258, 323662, 102727, 300183, 260542, 377942, 264188, 766307, 313018, 493395, 488813, 536580, 700017, 748893, 136635, 482535, 916852, 916739, 732108, 620577, 309249, 572792, 618555, 738945, 181052, 925954, 655396, 663581, 691541, 656545, 700925, 737527, 93395, 151772, 136435};
    int walkCost = 220462;
    int fuelCost = 170119;
    int parkingCost = 165935;
    int truckCapacity = 23;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 376094446859;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> packages = {834956, 564334, 591477, 218940, 519014, 774050, 12960, 795675, 383315, 183608, 389126, 874917, 48305, 83783, 564316, 187796, 351463, 174318, 739611, 227667, 806515, 91036, 462112, 824992, 140156, 808164, 18993, 945900, 284032, 483063, 410508, 166444, 718163, 342008, 609111, 505529, 778589, 906495, 653628, 796086, 985695, 932381, 852295, 171757, 274842, 321555, 737709, 858817};
    int walkCost = 486598;
    int fuelCost = 308456;
    int parkingCost = 88309;
    int truckCapacity = 44;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 351111145447;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> packages = {118210, 317212, 708749, 680339, 569628, 860352, 526038, 537144, 827797, 152612, 751344, 201238, 343528, 544822, 815822, 232248, 939265, 401520, 97618, 653666, 659452, 463939, 981436, 632085, 215519, 352122, 39399, 725580, 599591, 432037, 31278, 349443, 898535, 837539, 468569, 291415, 899400, 501457, 506591, 840429, 220209, 984240, 202962, 408443, 143581};
    int walkCost = 381659;
    int fuelCost = 199173;
    int parkingCost = 191035;
    int truckCapacity = 37;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 276862771524;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> packages = {679758, 156325, 223016, 379188, 708423, 810531, 311236, 410374, 934016, 889733, 496216, 487241, 874996, 537526, 800453, 129267, 865572, 102640, 595945, 714816, 172035, 14473, 143210, 19515, 925943, 611215, 986019, 745299, 106691, 11085, 288059, 754107, 864483, 435677, 877427, 170649, 561194, 944571, 237230, 778653, 472804, 732650, 664262, 31364, 646066};
    int walkCost = 89877;
    int fuelCost = 82633;
    int parkingCost = 22369;
    int truckCapacity = 28;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 146948480393;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> packages = {680843, 262350, 700758, 637556, 272636, 255231, 187879, 48302, 704816, 519157, 296093, 417490, 741262, 555720, 287617, 126838, 353300, 314267, 20877, 544435, 315357, 937450, 68873, 319698, 307262, 786811, 388011, 248403, 749243, 517872, 841754, 82883, 676586, 636312, 975687, 307587, 514442, 7076, 981304, 483179, 419716, 868195, 741335, 678523, 485874, 973490, 51834, 850624, 930721, 49614};
    int walkCost = 355611;
    int fuelCost = 253454;
    int parkingCost = 104890;
    int truckCapacity = 40;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 365480931922;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> packages = {715118, 931941, 115915, 958010, 962216, 60378, 225038, 65999, 97868, 998631, 532533, 608366, 21469, 901814, 669371, 763939, 861872, 175397, 756674, 865127, 750447, 924382, 303772, 471570, 827130, 81352, 440906, 553078, 938331, 144911, 399059, 776567, 895858, 161506, 109710, 375833, 739521, 690468, 760344, 652039, 684028, 927032, 844760, 326940, 146744, 595293, 847315, 930923, 101332};
    int walkCost = 507985;
    int fuelCost = 503688;
    int parkingCost = 391109;
    int truckCapacity = 47;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 544409768069;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> packages = {285742, 374498, 914483, 774793, 687485, 155168, 413394, 185039, 975162, 383034, 70281, 597716, 58563, 704948, 632780, 175993, 307921, 940154, 174124, 67474, 932854, 507980, 274440, 191992, 21266, 355210, 520013, 330240, 294392, 12264, 505803, 512461, 854158, 851307, 695365, 173496, 250538, 219214, 661260, 254145, 201303, 450818, 61384, 938019, 56919, 949753, 350055};
    int walkCost = 953044;
    int fuelCost = 733607;
    int parkingCost = 299552;
    int truckCapacity = 43;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 800478606728;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> packages = {189279, 128670, 505432, 545210, 461240, 223801, 214456, 413450, 478907, 6787, 633825, 850258, 914831, 478151, 412176, 607858, 811056, 977702, 261765, 178073, 607881, 489261, 899845, 394299, 306896, 65335, 785573, 151850, 862458, 579832, 983576, 60832, 958358, 717876, 570631, 801191, 5342, 54490, 785558, 518135, 720208, 395181, 205774, 62625, 746127, 3504, 708073, 236547, 231518, 875083};
    int walkCost = 980306;
    int fuelCost = 926984;
    int parkingCost = 796401;
    int truckCapacity = 38;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1278885594975;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> packages = {849408, 581071, 977575, 14494, 608342, 381994, 806041, 757269, 442990, 374200, 48276, 387129, 644133, 101807, 902069, 537879, 513542, 285299, 310010, 620876, 749881, 828475, 278957, 796798, 652502, 38229, 992132, 161928, 90916, 92390, 287896, 458786, 949026, 636182, 162375, 562440, 368399, 243649, 767710, 226669, 289065, 86406, 532922, 9225, 84016, 417157, 90068, 135366, 807858, 549286};
    int walkCost = 527386;
    int fuelCost = 421816;
    int parkingCost = 188302;
    int truckCapacity = 25;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 760937137846;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> packages = {848236, 186549, 979159, 807836, 753820, 590689, 20321, 266792, 255948, 218408, 188779, 166101, 920814, 142303, 311035, 948849, 640191, 924232, 841472, 193036, 307153, 506420, 251757, 856695, 367320, 927074, 556902, 730159, 987572, 91421, 262008, 630265, 452744, 160742, 216059, 799465, 4159, 220257, 310550, 293090, 885776, 615892, 916780, 598712, 21320, 687283, 746160, 548864, 965276, 47843};
    int walkCost = 421341;
    int fuelCost = 366402;
    int parkingCost = 95000;
    int truckCapacity = 35;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 536530463072;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> packages = {913912, 580925, 529906, 69929, 266728, 392164, 9652, 665798, 163325, 99799, 640236, 584964, 496255, 246520, 566151, 558718, 74374, 14947, 164530, 335416, 312270, 191863, 776905, 705424, 345787, 477355, 784011, 446219, 944703, 223202, 987523, 668746, 54976, 418743, 524031, 310534, 218777, 753892, 793054, 331138, 154163, 655625, 205179, 957388, 895346, 597898, 983223, 416931, 840012, 105323};
    int walkCost = 513165;
    int fuelCost = 452903;
    int parkingCost = 131451;
    int truckCapacity = 29;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 756402429879;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> packages = {398610, 612227, 366263, 750095, 323679, 860829, 928183, 211545, 474506, 690916, 428085, 989252, 808070, 999763, 677034, 466725, 414367, 784023, 344577, 718460, 747392, 666029, 918208, 83277, 533003, 512166, 518704, 763090, 567963, 25413, 179476, 271876, 990318, 508296, 232335, 397607, 866295, 208102, 492356, 109913, 739569, 158455, 354644, 89377, 713901, 944552, 655983, 979150, 877990, 627012};
    int walkCost = 582300;
    int fuelCost = 526882;
    int parkingCost = 225391;
    int truckCapacity = 28;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1054877063109;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> packages = {498811, 36113, 770382, 972482, 155345, 500610, 430241, 396493, 231799, 277128, 639877, 108214, 624755, 3546, 810408, 200843, 541128, 224144, 472131, 79122, 322096, 664629, 300796, 765832, 575775, 581499, 195638, 688852, 756887, 371402, 587932, 762451, 320523, 994893, 796346, 410559, 973274, 599120, 210491, 524177, 625123, 879966, 989614, 82369, 27003, 110140, 641476, 829314, 369552, 479005};
    int walkCost = 811115;
    int fuelCost = 701662;
    int parkingCost = 13624;
    int truckCapacity = 44;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 834632941473;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> packages = {639128, 580050, 19973, 152221, 913224, 165963, 800328, 976650, 908852, 840909, 524284, 159249, 560641, 88189, 965882, 104237, 323222, 473848, 246972, 250378, 259701, 183913, 205817, 289523, 155558, 667437, 285467, 415945, 613257, 860757, 125972, 690000, 609659, 80244, 551785, 626236, 208100, 735934, 303263, 878194, 915562, 222209, 131053, 628995, 61749, 506617, 916679, 789911, 728766, 453750};
    int walkCost = 742014;
    int fuelCost = 578825;
    int parkingCost = 18175;
    int truckCapacity = 47;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 650517605605;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> packages = {989139, 938797, 22117, 154580, 275345, 595315, 180007, 558822, 176479, 942224, 378191, 871118, 285664, 95471, 716234, 15192, 332455, 581629, 6888, 747244, 171405, 595165, 85217, 869952, 100453, 593162, 171327, 504672, 60426, 974464, 294883, 365030, 260134, 4637, 919677, 373863, 744240, 498121, 751033, 922451, 402023, 111457, 334820, 690058, 688677, 747148, 397265, 734109, 294141, 931475};
    int walkCost = 469659;
    int fuelCost = 354512;
    int parkingCost = 391653;
    int truckCapacity = 30;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 577405988305;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> packages = {862325, 719833, 510173, 873932, 202021, 95309, 640230, 461181, 662536, 478491, 975425, 251288, 404105, 365943, 656229, 355420, 590323, 474607, 188971, 461003, 731582, 923579, 345514, 549890, 486018, 816670, 984920, 500973, 240584, 860968, 26565, 584445, 438645, 781073, 973252, 816865, 332182, 958755, 401462, 775562, 746790, 687793, 422660, 92250, 372799, 536744, 661239, 629896, 269436, 361438};
    int walkCost = 818788;
    int fuelCost = 679870;
    int parkingCost = 440390;
    int truckCapacity = 38;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1157845396494;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> packages = {532055, 41755, 504945, 663488, 785802, 260014, 733181, 507102, 140010, 354256, 59977, 168464, 520345, 329356, 106202, 802081, 175092, 526816, 763464, 202619, 821589, 44012, 62525, 346063, 423143, 837227, 788890, 990681, 381955, 420850, 156477, 835605, 849861, 648237, 90044, 121802, 807587, 97501, 925970, 650943, 346356, 974767, 661692, 179459, 148304, 864199, 401665, 817465, 374569, 793474};
    int walkCost = 483257;
    int fuelCost = 367527;
    int parkingCost = 304155;
    int truckCapacity = 46;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 409434592076;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> packages = {518182, 576022, 142523, 135307, 882706, 849546, 730615, 436236, 636307, 810910, 25485, 32838, 900743, 848702, 313668, 700499, 20247, 45705, 271079, 810917, 657988, 156436, 154915, 372642, 561037, 552293, 310381, 86018, 938197, 583892, 451975, 213074, 210754, 922317, 748490, 665405, 591641, 282277, 55083, 760940, 401865, 81859, 794018, 56290, 810783, 180761, 820950, 736987, 604674, 710787};
    int walkCost = 309526;
    int fuelCost = 282295;
    int parkingCost = 286133;
    int truckCapacity = 46;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 287385020094;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> packages = {928097, 260707, 477699, 215228, 585031, 872956, 303581, 785255, 901712, 775906, 260728, 95701, 678441, 369326, 931602, 118597, 855876, 571907, 280464, 907043, 489213, 217484, 391613, 660803, 908987, 437043, 4943, 25296, 994558, 859996, 406411, 615169, 367165, 888083, 129051, 642163, 154313, 61882, 892947, 867790, 976519, 252550, 833725, 991687, 757662, 489181, 187274, 81232, 229376, 17032};
    int walkCost = 288102;
    int fuelCost = 269461;
    int parkingCost = 203780;
    int truckCapacity = 41;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 344831034204;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> packages = {736803, 853473, 100499, 148791, 941321, 576268, 756446, 98838, 657124, 46758, 188823, 259915, 864997, 628532, 492276, 345157, 944565, 938087, 815662, 220062, 683117, 189879, 393654, 918316, 249976, 863731, 942310, 844590, 813713, 739641, 345651, 543236, 490999, 192847, 28900, 186433, 690790, 689504, 31474, 488153, 89296, 111304, 296012, 673348, 981534, 963430, 334275, 208719, 580983, 790651};
    int walkCost = 960089;
    int fuelCost = 846526;
    int parkingCost = 451519;
    int truckCapacity = 33;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1305622118528;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> packages = {745072, 164983, 381744, 732766, 695131, 738565, 705429, 422350, 85282, 428443, 57937, 753272, 292980, 139207, 24597, 89993, 378576, 935087, 549961, 908089, 721264, 117106, 702242, 834478, 509992, 217665, 583140, 381932, 608363, 427914, 133111, 259065, 451180, 801856, 602180, 138634, 419501, 602722, 196612, 588870, 702120, 774349, 925029, 945625, 288385, 143586, 191934, 990374, 782439, 514177};
    int walkCost = 789724;
    int fuelCost = 753960;
    int parkingCost = 437690;
    int truckCapacity = 34;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1185214118830;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> packages = {505435, 50418, 44318, 673143, 472046, 897634, 234721, 494509, 129455, 89564, 840195, 717930, 858066, 521659, 491465, 777212, 645926, 767773, 993373, 156356, 79025, 326723, 860531, 102547, 480044, 609879, 950951, 966561, 935396, 77811, 670305, 86564, 511716, 416864, 630498, 365642, 539067, 675009, 710379, 463112, 826083, 966792, 239929, 490412, 61269, 909186, 594492, 468072, 399707, 656471};
    int walkCost = 495342;
    int fuelCost = 476127;
    int parkingCost = 108664;
    int truckCapacity = 47;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 526362729121;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> packages = {106050, 914019, 945527, 487267, 337900, 691330, 419205, 335456, 56691, 898793, 223050, 625918, 14248, 811335, 622269, 971663, 285676, 287441, 436854, 30410, 589221, 284016, 840424, 68498, 378988, 759148, 808728, 43384, 525177, 589015, 380571, 954621, 510217, 528056, 265165, 37494, 297300, 534375, 940526, 704997, 833844, 555548, 607886, 520374, 10866, 907721, 862370, 338868, 810716, 994037};
    int walkCost = 751775;
    int fuelCost = 689431;
    int parkingCost = 701531;
    int truckCapacity = 42;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 808034242042;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> packages = {754344, 963091, 199773, 1484, 958317, 326446, 397400, 763271, 788058, 14324, 955436, 683498, 180925, 265799, 60272, 718097, 710267, 774709, 74832, 865378, 290774, 754473, 318671, 613838, 464404, 72865, 6370, 269000, 165612, 127968, 748753, 653392, 136444, 836923, 217842, 916092, 276450, 49963, 607389, 843287, 262552, 646935, 799135, 540474, 777144, 235457, 666875, 106232, 90371, 15691};
    int walkCost = 198891;
    int fuelCost = 149378;
    int parkingCost = 20470;
    int truckCapacity = 37;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 190430326780;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> packages = {919065, 456551, 457848, 551582, 952758, 694339, 699069, 248049, 226757, 92188, 716633, 743660, 240000, 671389, 445211, 193447, 645030, 742221, 119749, 873575, 370433, 765491, 911375, 193277, 703379, 105070, 424661, 896507, 431417, 426865, 109149, 223682, 499724, 41017, 490527, 64599, 125020, 930516, 276479, 432236, 580911, 302921, 51818, 962886, 440606, 94725, 987387, 27986, 198784, 497295};
    int walkCost = 73102;
    int fuelCost = 66823;
    int parkingCost = 53646;
    int truckCapacity = 35;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 96101783377;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> packages = {635186, 432143, 390852, 379587, 471332, 897487, 981165, 253068, 46859, 354197, 96642, 374615, 262095, 626457, 127162, 22323, 576888, 784479, 464878, 528809, 844125, 928665, 791386, 128108, 739179, 618488, 357794, 97829, 386247, 813398, 265319, 516569, 585924, 827667, 546077, 764942, 151664, 283663, 238469, 207450, 394696, 883028, 306328, 413878, 583797, 835123, 861862, 969382, 64503, 895594};
    int walkCost = 477916;
    int fuelCost = 438182;
    int parkingCost = 306243;
    int truckCapacity = 46;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 501831697353;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> packages = {597168, 600998, 561271, 333416, 492313, 871299, 305922, 449678, 666060, 62612, 410954, 991328, 849921, 455826, 500157, 193097, 939105, 586804, 635610, 241038, 972558, 994982, 805156, 603528, 407571, 563736, 430476, 519595, 364749, 893577, 192711, 599933, 28330, 899562, 382236, 599935, 744712, 932223, 341427, 668975, 222686, 500951, 935430, 27286, 132041, 422773, 862580, 507627, 744994, 626831};
    int walkCost = 107270;
    int fuelCost = 87766;
    int parkingCost = 79795;
    int truckCapacity = 28;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 175208231071;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> packages = {844636, 443153, 814836, 812947, 231105, 958540, 832123, 867516, 856436, 335615, 647826, 810549, 723314, 312654, 163324, 630975, 185440, 89411, 477435, 270529, 800267, 894611, 21821, 94992, 764880, 577729, 486969, 9746, 891390, 841256, 834916, 960336, 952666, 869530, 491643, 847929, 597686, 805524, 814874, 430333, 418639, 185151, 529983, 202345, 154505, 457744, 112645, 300977, 567536, 368281};
    int walkCost = 909273;
    int fuelCost = 900717;
    int parkingCost = 642798;
    int truckCapacity = 39;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1255684312224;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> packages = {721077, 351460, 564618, 186836, 320195, 376783, 705049, 168043, 180842, 664513, 237166, 579985, 337572, 799516, 863402, 659404, 128535, 871425, 107062, 55717, 797872, 693672, 230356, 417475, 8362, 972985, 626013, 227278, 395733, 914772, 417923, 64912, 354565, 7457, 26584, 145956, 285028, 144569, 416419, 746541, 885623, 683254, 981734, 757942, 897515, 460683, 470145, 54347, 964997, 839323};
    int walkCost = 762855;
    int fuelCost = 708043;
    int parkingCost = 228176;
    int truckCapacity = 30;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1183746580618;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> packages = {454342, 346793, 796268, 355155, 50199, 318711, 274454, 362330, 854351, 70222, 872805, 613767, 259715, 95415, 618588, 71832, 252278, 958219, 234438, 644316, 342094, 783623, 546716, 773903, 556156, 735747, 20232, 566734, 469518, 114146, 63978, 517806, 301727, 456974, 75553, 933123, 579367, 138019, 89675, 234476, 430987, 230057, 518709, 459723, 193983, 386049, 754284, 986368, 838185, 21380};
    int walkCost = 363997;
    int fuelCost = 327861;
    int parkingCost = 296234;
    int truckCapacity = 28;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 549435098085;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> packages = {199925, 257064, 809875, 970619, 80609, 41028, 810883, 996447, 660845, 622583, 664290, 301959, 952001, 229262, 72885, 114931, 516968, 882759, 956196, 84830, 129074, 634327, 626867, 394184, 761582, 526240, 657234, 3861, 771986, 190945, 35207, 605116, 37896, 592431, 805398, 653542, 486798, 308406, 84246, 886811, 214083, 622469, 710326, 420942, 447585, 853359, 256267, 422586, 70465, 795145};
    int walkCost = 444611;
    int fuelCost = 437686;
    int parkingCost = 441218;
    int truckCapacity = 36;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 617456070962;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> packages = {791606, 111044, 232133, 854972, 165729, 183164, 980763, 243667, 170905, 785331, 560546, 829765, 344553, 739412, 138206, 550281, 550462, 80159, 153855, 809950, 411108, 585219, 878762, 798216, 138964, 522132, 962833, 101050, 703457, 808478, 462741, 950447, 916529, 845661, 312281, 760330, 759723, 768971, 711365, 788877, 189612, 387119, 939519, 172156, 560935, 41595, 662637, 766277, 306088, 139609};
    int walkCost = 761926;
    int fuelCost = 656395;
    int parkingCost = 683500;
    int truckCapacity = 48;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 727789835199;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> packages = {487835, 320348, 210718, 241718, 460171, 208548, 682498, 785892, 279448, 895279, 724189, 171371, 219840, 550325, 228549, 686661, 893703, 475006, 103819, 903043, 748409, 968916, 844417, 634439, 22705, 171458, 281312, 916161, 39012, 701336, 877273, 650642, 921517, 303665, 971789, 886401, 49666, 739455, 369179, 452323, 745298, 227295, 152025, 745577, 901107, 762179, 984194, 561742, 805577, 935652};
    int walkCost = 940225;
    int fuelCost = 940023;
    int parkingCost = 707063;
    int truckCapacity = 34;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1475095992326;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> packages = {248075, 114778, 774167, 526776, 899210, 902921, 343206, 14358, 290219, 852259, 317892, 544710, 878644, 773392, 857872, 531364, 138225, 361615, 971489, 333945, 389527, 914304, 240044, 646138, 983202, 532601, 660307, 569709, 990285, 523303, 435673, 624467, 201624, 937813, 32712, 122499, 881682, 842931, 510784, 679441, 149261, 145495, 105061, 535762, 111445, 367949, 219415, 829512, 334105, 890787};
    int walkCost = 430408;
    int fuelCost = 377875;
    int parkingCost = 77732;
    int truckCapacity = 27;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 735795998281;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> packages = {80284, 681711, 16128, 626602, 578987, 239670, 109983, 464960, 546622, 633000, 965702, 580838, 556305, 769193, 744322, 670233, 674421, 572148, 89206, 893377, 850626, 911109, 945474, 594813, 684436, 823231, 821947, 408348, 485771, 409042, 224808, 639791, 525371, 580912, 885178, 12622, 250446, 919949, 504605, 596617, 449346, 738358, 112280, 439428, 832462, 717247, 237915, 824889, 526905, 537356};
    int walkCost = 182132;
    int fuelCost = 147302;
    int parkingCost = 63539;
    int truckCapacity = 41;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 212663301735;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> packages = {515218, 636118, 376910, 54754, 954821, 664025, 37340, 150445, 312401, 673202, 404678, 220291, 789343, 988676, 576866, 782529, 268376, 920688, 111339, 96581, 79790, 455074, 549630, 967114, 309677, 758144, 618352, 980746, 174597, 17005, 203488, 453647, 392445, 428371, 833927, 643369, 551578, 304322, 175876, 827368, 561996, 225620, 568556, 39768, 869645, 355792, 610899, 644418, 780290, 82608};
    int walkCost = 874923;
    int fuelCost = 656932;
    int parkingCost = 545322;
    int truckCapacity = 44;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 756818364384;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> packages = {293710, 624885, 174887, 644137, 614058, 288205, 269940, 372798, 567948, 557942, 927506, 869266, 12982, 758455, 267110, 606860, 898365, 354883, 222673, 984182, 686905, 934046, 811730, 292744, 884569, 146031, 553078, 342693, 342091, 513868, 750034, 133284, 432722, 465197, 559978, 601067, 736097, 392483, 104992, 573325, 976378, 74799, 314753, 292386, 998805, 387194, 78531, 886582, 911092, 487798};
    int walkCost = 803279;
    int fuelCost = 995086;
    int parkingCost = 783891;
    int truckCapacity = 41;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1451650421421;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> packages = {399670, 200361, 928009, 903511, 848520, 590846, 911242, 913492, 420174, 678663, 211205, 248415, 79177, 733967, 674664, 98947, 912247, 29306, 422044, 242111, 235842, 520076, 931822, 882496, 971525, 443113, 350822, 975874, 954536, 52813, 697040, 392885, 646203, 905632, 760981, 803919, 650589, 289830, 91692, 333023, 963601, 475420, 382241, 451667, 691640, 959865, 402828, 336622, 445844, 600801};
    int walkCost = 965632;
    int fuelCost = 988109;
    int parkingCost = 63250;
    int truckCapacity = 43;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1366044465693;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> packages = {599681, 425491, 357191, 745276, 824524, 18053, 798733, 339511, 230774, 169582, 642316, 104775, 99728, 294606, 660931, 574762, 741274, 327048, 710171, 294096, 679578, 51882, 205141, 579229, 959745, 877433, 841947, 224016, 504208, 6492, 927460, 315669, 385826, 605630, 38504, 992279, 982053, 854298, 80201, 758691, 61298, 979810, 634763, 65150, 453903, 859525, 199437, 503426, 250417, 139983};
    int walkCost = 770389;
    int fuelCost = 831112;
    int parkingCost = 188340;
    int truckCapacity = 40;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1024753320380;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> packages = {59804, 149334, 25957, 274276, 562806, 429980, 302100, 252889, 7554, 414639, 399437, 915067, 422286, 166432, 856179, 169415, 957720, 747563, 426807, 373962, 285629, 407675, 600667, 580774, 197972, 457912, 343703, 396949, 226857, 103514, 788111, 771018, 582457, 732753, 925494, 201371, 146109, 933057, 253669, 470367, 41430, 512705, 359097, 507185, 645812, 40340, 858470, 50447, 637083, 760686};
    int walkCost = 692201;
    int fuelCost = 829658;
    int parkingCost = 530229;
    int truckCapacity = 25;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1459025449430;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> packages = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int walkCost = 1000000;
    int fuelCost = 1000000;
    int parkingCost = 1000000;
    int truckCapacity = 1;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000000;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> packages = {10, 59, 60, 61};
    int walkCost = 10;
    int fuelCost = 0;
    int parkingCost = 100;
    int truckCapacity = 4;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 220;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> packages = {10, 59, 60, 61, 62, 63};
    int walkCost = 10;
    int fuelCost = 0;
    int parkingCost = 100;
    int truckCapacity = 6;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 260;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> packages = {1, 2, 3, 4, 5, 999999, 999998, 999997, 999996, 999995};
    int walkCost = 1;
    int fuelCost = 3;
    int parkingCost = 10;
    int truckCapacity = 5;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 3000020;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> packages = {987654, 987653, 987652, 987651, 987650};
    int walkCost = 1;
    int fuelCost = 3;
    int parkingCost = 0;
    int truckCapacity = 5;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 2962959;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> packages = {1234, 346, 3474, 9787, 34568, 9786, 35, 674, 746, 857454};
    int walkCost = 97978;
    int fuelCost = 89695;
    int parkingCost = 7575;
    int truckCapacity = 5;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 77091042909;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> packages = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int walkCost = 1;
    int fuelCost = 3;
    int parkingCost = 10;
    int truckCapacity = 5;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 53;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> packages = {376317, 16594, 836949, 205620, 808593, 254979, 164016, 475473, 441045, 681960, 246221, 519935, 534712, 810661, 853974, 166388, 751308, 525614, 870037, 702452, 560999, 883017, 600034, 540835, 697903, 641524, 663736, 706250, 661824, 452173, 466123, 950266, 160885, 358249, 231536, 22077, 372540, 424158, 343056, 82484, 494250, 447587, 618410, 940076, 112856, 416543, 348592, 599535, 52251, 603263};
    int walkCost = 2321;
    int fuelCost = 2686;
    int parkingCost = 1881;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 2548787295;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> packages = {137807, 566837, 251358, 17194, 202719, 970249, 979045, 793365, 262604, 660060, 583737, 547004, 315429, 822639, 709649, 483675, 772135, 986406, 812094, 291379, 249102, 310254, 783462, 872623, 367689, 644449, 52038, 22287, 650298, 180723, 354957, 147606, 134171, 863766, 276852, 231733, 27624, 589144, 844467, 926009, 594625, 4854, 244677, 516742, 640729, 809312, 116677, 848080, 903870, 420421};
    int walkCost = 854180;
    int fuelCost = 969784;
    int parkingCost = 73646;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 955753403914;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> packages = {374567, 441064, 511009, 497043, 792925, 345789, 863079, 363186, 396999, 324162, 234382, 987903, 191623, 845754, 901061, 329474, 442220, 667209, 484836, 449003, 251607, 881584, 950091, 423184, 499870, 883666, 840777, 168057, 496341, 170312, 108700, 437094, 177098, 890579, 371922, 619241, 689055, 347991, 91355, 463735, 113127, 586702, 432532, 73622, 763666, 303249, 351913, 585281, 474364, 532707};
    int walkCost = 161612;
    int fuelCost = 202470;
    int parkingCost = 75765;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 198479510199;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> packages = {405511, 906413, 915607, 764923, 265305, 43071, 707276, 318508, 334024, 184781, 682187, 636640, 177155, 466043, 69754, 718488, 929672, 397623, 538121, 615778, 535578, 59806, 695008, 424601, 341667, 860928, 460584, 681792, 758893, 640552, 389516, 614770, 155062, 704431, 332688, 223474, 505639, 199420, 519733, 97510, 112685, 552128, 606917, 764079, 149088, 54356, 147651, 178035, 731638, 184211};
    int walkCost = 431128;
    int fuelCost = 556204;
    int parkingCost = 305741;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 515343072457;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> packages = {480304, 234621, 294674, 694662, 769807, 361370, 908326, 939683, 910195, 798384, 934694, 610758, 660704, 972402, 781008, 734415, 974889, 263895, 871138, 842403, 605065, 694695, 915476, 474092, 175886, 827602, 488418, 166567, 129121, 779590, 280643, 625521, 773217, 368278, 42434, 28101, 103216, 684465, 704286, 192670, 122682};
    int walkCost = 311621;
    int fuelCost = 322895;
    int parkingCost = 109700;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 314763133217;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> packages = {789313, 908065, 406504, 907315, 818865, 56002, 872828, 312628, 273271, 67764, 270321, 231113, 426874, 11152, 979866, 571591, 162865, 620338, 367256, 756277, 789188, 40636, 300565, 970790, 616915, 581024, 505548, 448289, 953808, 55552, 986746, 492981, 245890, 193967, 541892, 159673, 194263, 394224, 638254, 158442, 140167, 844819, 329960};
    int walkCost = 367211;
    int fuelCost = 389576;
    int parkingCost = 311608;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 384271776032;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> packages = {619286, 476043, 222182, 25242, 880211, 937096, 726301, 172672, 45082, 176117, 29798, 2083, 669331, 336792, 6118, 566114, 229309, 442256, 53076, 720858, 329866, 802303, 99984, 76845, 404082, 891318, 483265, 159517, 918896, 512288, 80268, 176408, 599491, 161746, 365202, 914422, 557796, 150412, 263577, 392851};
    int walkCost = 209481;
    int fuelCost = 233939;
    int parkingCost = 44989;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 218779920115;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> packages = {134466, 963880, 302719, 102216, 308670, 91189, 560372, 415068, 398063, 34753, 63355, 606596, 444486, 672696, 160248, 681510, 267356, 138981, 838958, 625107, 153031, 727725, 228480, 132636, 944831, 202254, 507781, 790844, 780149, 210697, 26378, 777558, 942106, 849851, 300427, 299224, 682426, 512711, 14264, 122992, 199361, 315352, 454615};
    int walkCost = 753732;
    int fuelCost = 881953;
    int parkingCost = 852354;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 847690174679;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> packages = {29331, 680278, 158595, 777452, 773752, 694281, 461432, 587557, 629101, 447840, 164074, 653122, 800475, 817343, 400130, 935055, 42515, 869730, 655128, 105034, 947368, 309371, 539177, 642145, 846614, 420654, 624765, 77787, 122492, 448650, 866493, 879651, 501182, 470524, 572926, 298996, 39330, 505254, 588918, 256467};
    int walkCost = 708482;
    int fuelCost = 823800;
    int parkingCost = 160243;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 779028097343;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> packages = {141010, 210145, 140990, 460089, 800442, 141000, 123170, 264296, 278709, 728670, 800422, 220397, 278718, 278736, 728676, 140980, 61502, 460093, 61488, 123174, 61495, 61481, 210163, 460085, 800402, 210154, 220417, 728682, 264282, 210181, 123176, 460097, 210172, 61474, 220407, 278727, 264310, 278700, 264303, 460081, 220427, 123172, 220387, 800432, 728688, 123168, 800412, 264289, 728664, 140970};
    int walkCost = 174767;
    int fuelCost = 365920;
    int parkingCost = 168058;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 292903728034;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> packages = {820857, 652305, 652329, 324371, 540889, 71613, 71619, 416805, 685209, 70468, 397378, 397358, 539911, 71617, 70473, 416820, 539932, 324373, 397388, 416825, 652311, 685225, 820864, 540907, 397348, 685221, 397368, 70458, 71621, 416810, 539918, 540916, 652317, 70463, 324375, 324369, 540880, 539904, 820850, 652323, 70478, 71615, 324367, 685213, 540898, 820871, 416815, 820843, 685217, 539925};
    int walkCost = 97417;
    int fuelCost = 439530;
    int parkingCost = 19131;
    int truckCapacity = 50;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 360792823006;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> packages = {747182, 747192, 711195, 413957, 574416, 118513, 574415, 711193, 711191, 828396, 679065, 679092, 344114, 581317, 413960, 581319, 679083, 766495, 828401, 581316, 711189, 581320, 574417, 344116, 344113, 118489, 344115, 344112, 679056, 574418, 118481, 711187, 766501, 747222, 766492, 828386, 413966, 747202, 828406, 413963, 581318, 413969, 118497, 766498, 828391, 747212, 118505, 574419, 679074, 766489};
    int walkCost = 348913;
    int fuelCost = 887221;
    int parkingCost = 90324;
    int truckCapacity = 25;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 1766288398276;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> packages = {605426, 605450, 298667, 352806, 88021, 98642, 587619, 352818, 350606, 350576, 526996, 703953, 88027, 258964, 298655, 526993, 298658, 258957, 298664, 258971, 350596, 703954, 352810, 605458, 350586, 526984, 352822, 605442, 258985, 98634, 352814, 88025, 526990, 605434, 587622, 703955, 703956, 587621, 88023, 98626, 587620, 350616, 98650, 298661, 258978, 526987, 587618, 88019, 98658, 703957};
    int walkCost = 66428;
    int fuelCost = 247121;
    int parkingCost = 156200;
    int truckCapacity = 28;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 327316315231;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> packages = {894507, 628769, 894519, 398203, 210245, 210249, 628790, 113530, 113522, 113538, 210241, 398233, 821560, 278579, 113546, 251538, 251522, 587777, 643038, 278581, 821550, 398213, 894501, 643046, 210237, 278573, 398223, 894513, 210253, 113514, 628762, 251546, 643054, 251530, 278575, 251514, 628776, 643042, 587804, 821590, 398193, 587795, 628783, 643050, 821570, 587768, 587786, 278577, 821580, 894495};
    int walkCost = 230315;
    int fuelCost = 593089;
    int parkingCost = 46422;
    int truckCapacity = 28;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 916072646559;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> packages = {100084, 469972, 143395, 3324, 38033, 231976, 68700, 29751, 23010, 1240, 303012, 46060, 81216, 221291, 11176, 170040, 127459, 434478, 97200, 623360, 272728, 163724, 3408, 393498, 252582, 92926, 372834, 277500, 162711, 83325, 355936, 859460, 788568, 255312, 389367, 344076, 422840, 377055, 61476, 789537, 341110, 61480, 49530, 3404, 80518, 307840, 165409, 637632, 117124, 483072};
    int walkCost = 1235;
    int fuelCost = 15632;
    int parkingCost = 18964;
    int truckCapacity = 49;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 8540962393;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> packages = {1000000, 1000000, 999999};
    int walkCost = 1000000;
    int fuelCost = 1000000;
    int parkingCost = 1000000;
    int truckCapacity = 1;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 2999999000000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> packages = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int walkCost = 1000000;
    int fuelCost = 1000000;
    int parkingCost = 1000000;
    int truckCapacity = 1;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000000;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> packages = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int walkCost = 1000000;
    int fuelCost = 400000;
    int parkingCost = 100000;
    int truckCapacity = 1;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 39600005000000;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> packages = {3, 3, 5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 11, 5, 5, 5, 5, 5, 5, 5};
    int walkCost = 20000;
    int fuelCost = 1000;
    int parkingCost = 2000;
    int truckCapacity = 5;
    PackageDelivery* pObj = new PackageDelivery();
    clock_t start = clock();
    long result = pObj->minimalCost(packages, walkCost, fuelCost, parkingCost, truckCapacity);
    clock_t end = clock();
    delete pObj;
    long expected = 113000;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20867024&rd=10777&pm=7927
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
#include <ctime>
 
#define FOR(i,a,b) for(int i=(int)(a); i<(int)(b); ++i)
#define FORD(i,a,b) for(int i=(int)(a-1); i>=(int)(b); --i)
#define MP make_pair
#define PB push_back
#define FI first
#define SE second
#define SI(a) (int)(a.size())
#define LEN(a) (int)(a.length())
 
typedef long long LL;
typedef long double LD;
 
using namespace std;
 
class PackageDelivery {
public:
  long long minimalCost(vector <int>, int, int, int, int);
  vector<int> tab;
  int N;
  LL walk, fuel, park, cap;
  LL dp[52][52][52];
  LL go(int, int, int);
};
 
const LL INF = 4000000000000000000LL;
 
LL PackageDelivery::go(int pos, int last, int truck) {
  LL &res = dp[pos][last][truck];
  if(res>=0)
    return res;
  if(last==N)
    return res = 0;
  //cout << pos << " " << last << " " << truck << "\n";
    
  res = INF;
  if(truck!=cap)
    res <?= go(0,last,cap) + tab[pos]*fuel;
  if(truck>0) {
    res <?= go(pos,last+1,truck-1) + abs(tab[last]-tab[pos])*walk;
    FOR(i,pos+1,N)
      res <?= go(i,last,truck) + abs(tab[i]-tab[pos])*fuel + park;
  }
  return res;
}
 
long long PackageDelivery::minimalCost(vector <int> pack, int walkCost, int fuelCost, int parkingCost, int truckCapacity) {
 
  tab = pack;
  tab.PB(0);
  sort(tab.begin(), tab.end());
  N = SI(tab);
  walk=walkCost; fuel=fuelCost; park=parkingCost; cap=truckCapacity;
  memset(dp,-1,sizeof(dp));
  
  return go(0,0,cap);
  
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/