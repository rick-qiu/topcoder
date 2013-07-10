/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10740
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

class BunnyPuzzle {
public:
    int theCount(vector<int> bunnies);
};

int BunnyPuzzle::theCount(vector<int> bunnies) {
    int ret;
    return ret;
}


int test0() {
    vector<int> bunnies = {5, 8};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> bunnies = {-1, 0, 1};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> bunnies = {0, 1, 3};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> bunnies = {-677, -45, -2, 3, 8, 29, 384, 867};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> bunnies = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> bunnies = {841607, 851764};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> bunnies = {-70850, 188438, 656310};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> bunnies = {-750339, -737904, -682537, -610306};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> bunnies = {-317956, -176306, 187111, 281088, 660579};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> bunnies = {-24305, -14673, 146059, 149877, 183615, 200167};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> bunnies = {949866, 950667, 953100, 953143, 953640, 955282, 963935, 964012, 967429, 967921, 971596};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> bunnies = {-200859, -185170, -81018, -52857, 8700, 97902, 135154, 187790, 188240, 196079, 197381, 208924, 276467, 321365, 370936, 408981, 460774, 569889, 578619, 594680, 660988, 854272, 879181};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> bunnies = {337609, 343274, 345079, 349169, 350275, 353468, 357389, 357570, 358340, 361155, 361648, 362709, 363946, 365113, 365834, 366617, 367719, 369680, 369841, 370407, 370936, 371151, 373949, 374184, 374635, 375922, 376785};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> bunnies = {839952, 842122, 842793, 843662, 843814, 849167, 851156, 854249, 856117, 856189, 856546, 857488, 858725, 858820, 860950, 862018, 862083, 864254, 865753, 866439, 866712, 870701, 872000, 876645, 876776, 878117, 878656, 880256, 881111, 882088, 883030, 885690, 887865, 887988, 888126, 889380, 890731, 891268, 891352, 892166, 894581, 899573, 900912};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> bunnies = {-235867, -233450, -227304, -198135, -197547, -179286, -165885, -126935, -125018, -122980, -106429, -98373, -75139, -72768, -59807, -47846, -38453, 18065, 39354, 65920, 85279, 88317, 97103, 99332, 140374, 188915, 214534, 225909, 232990, 269305, 272628, 287309, 307143, 314606, 325946, 333573, 388953, 435585, 444178, 448727};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> bunnies = {143091, 196864, 205578, 207594, 227677, 278039, 303640, 312155};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> bunnies = {-293987, -232876, -216009, -207133, -204053, -203360, -183096, -180112, -176281, -147648, -130982, -100028, -84884, -76749, -66404, -51043, -21988, -8683, -5724, 9558, 27093, 136613, 138118, 145874, 161108, 168774, 259812, 270556, 310713, 386013, 395836, 423195, 494683, 519940, 527591, 562734, 644820, 698375, 729841, 743733, 797596, 799067, 804485, 806942, 817059, 821539, 850149, 876080};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> bunnies = {748959, 750220, 751622, 760002, 761044, 769888, 770670, 779131, 784747, 786499, 792405, 796645, 800343, 800675, 827245, 829353, 831100, 831651, 834233, 839940, 841569, 841994, 848302, 865843, 866367, 866908, 876039, 895953, 903235, 925929, 935244, 945744, 952213, 954455, 959290, 960613, 968437, 979521, 982592, 983256, 984884};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> bunnies = {11839, 24469, 27075, 33293, 52047, 109664, 135259, 135668, 144076, 196191, 251108, 271066, 271561, 296891, 306186, 320417, 328679, 342927, 353226, 389251, 396145, 397764, 463314, 488050, 489710, 511344, 528425, 560838, 578805, 597695, 616144, 706256, 731623, 733769, 745564, 750742, 854557, 858032, 861349, 881675, 934200};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> bunnies = {326406, 366616, 404143, 425400, 473294, 478476, 483925, 501382, 515511, 519301, 526712};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> bunnies = {-509508, -509507};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> bunnies = {212750, 212751, 212752};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> bunnies = {-943839, -943835, -943832, -943831};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> bunnies = {112894, 112895, 112896, 112897, 112898};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> bunnies = {488941, 488942, 488958, 488963, 488969, 488971};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> bunnies = {815379, 815386, 815392, 815394, 815398, 815405, 815411, 815425, 815439, 815455};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> bunnies = {104294, 104295, 104296, 104297, 104298, 104299, 104300, 104301, 104302, 104303, 104304, 104305, 104306, 104307, 104308, 104309, 104310, 104311, 104312, 104313, 104314, 104315, 104316, 104317, 104318, 104320, 104321, 104322, 104323, 104324, 104326, 104327, 104328, 104329, 104330};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> bunnies = {312979, 312980, 312981, 312982, 312983, 312984, 312985, 312986, 312987, 312988, 312989, 312990, 312991, 312992, 312993, 312994, 312995, 312996, 312997, 312998, 312999, 313000};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> bunnies = {411759, 411760, 411761, 411765, 411767, 411773, 411778, 411787, 411790, 411794, 411798, 411803, 411811, 411817, 411818, 411822, 411826, 411829, 411834, 411840, 411846, 411857, 411868, 411870, 411874, 411879, 411882, 411885, 411902, 411910, 411913, 411915, 411917, 411922, 411924, 411926, 411929, 411937, 411938, 411945, 411948, 411949, 411955, 411959, 411962, 411965, 411968, 411971, 411972};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> bunnies = {-239199, -239198, -239197, -239196, -239195, -239194, -239193, -239192, -239191, -239190, -239189, -239188, -239187, -239186, -239185, -239184, -239183, -239182, -239181, -239180, -239179, -239178, -239177, -239176, -239175, -239174, -239173};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> bunnies = {-25928, -25927, -25926, -25925, -25924, -25923, -25922, -25921, -25920, -25919, -25918, -25917, -25916, -25915, -25914, -25913, -25912, -25911, -25910, -25909, -25908};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> bunnies = {-308874, -308873, -308872, -308871, -308870, -308869, -308868, -308867, -308866, -308865, -308864, -308863, -308862, -308861, -308860, -308859, -308858, -308857, -308856, -308855, -308854, -308853, -308852, -308851, -308850, -308849, -308848, -308847, -308846, -308845, -308844, -308843, -308842, -308841, -308840, -308839, -308838, -308837, -308836, -308835, -308834, -308833, -308832, -308831, -308830, -308829, -308828, -308827, -308826};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> bunnies = {748556, 748559, 748560, 748565, 748566, 748567, 748568, 748569, 748570, 748572, 748573};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> bunnies = {-587403, -587402, -587401, -587400, -587399, -587398, -587397, -587396, -587395, -587394, -587393, -587392, -587391, -587390, -587389, -587388, -587387, -587386, -587385, -587384, -587383, -587382, -587380, -587379, -587378, -587377, -587376, -587375, -587374, -587373, -587372, -587371, -587370, -587369, -587368, -587367, -587366, -587365, -587364, -587363, -587362, -587361, -587360, -587359};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> bunnies = {-323903, -323902, -323901, -323900, -323899, -323895, -323893, -323891, -323890, -323889, -323886, -323884, -323883, -323882, -323878, -323877, -323876, -323875, -323874, -323873, -323871, -323869, -323866, -323860, -323859, -323858, -323857, -323856, -323854};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> bunnies = {-677, -45, -2, 3, 8, 29, 384, 867};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> bunnies = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> bunnies = {0, 1, 3};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> bunnies = {-1000000, 1000000};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> bunnies = {3, 4, 7};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> bunnies = {2, 3, 5, 6, 7};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> bunnies = {5, 8};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> bunnies = {1, 4, 6};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> bunnies = {1, 2};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> bunnies = {3, 4, 5, 6, 7, 8};
    BunnyPuzzle* pObj = new BunnyPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(bunnies);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22717821&rd=14148&pm=10740
********************************************************************************
#include <sstream> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
class BunnyPuzzle 
{ 
public: 
int theCount(vector <int> bun) 
{ 
    int cnt=0,i; 
    for(i=0;i<bun.size()-1;++i) 
    { 
        if(i+2 >= bun.size() && bun[i+1]*2-bun[i]>bun[i+1] ) 
                ++cnt; 
        else if(bun[i+1]*2-bun[i]>bun[i+1] && (bun[i+1]*2-bun[i])<bun[i+2]) 
                ++cnt; 
 
    } 
 
    for(i=bun.size()-1;i>0;--i) 
    { 
        if(i-2<0 && bun[i-1]*2-bun[i]<bun[i-1] ) 
                ++cnt; 
        else if(bun[i-1]*2-bun[i]<bun[i-1] && (bun[i-1]*2-bun[i])>bun[i-2]) 
                ++cnt; 
    } 
 
    return cnt; 
 
} 
};

********************************************************************************
*******************************************************************************/