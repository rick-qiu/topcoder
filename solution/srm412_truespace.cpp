/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8477
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

class TrueSpace {
public:
    long calculateSpace(vector<int> sizes, int clusterSize);
};

long TrueSpace::calculateSpace(vector<int> sizes, int clusterSize) {
    long ret;
    return ret;
}


int test0() {
    vector<int> sizes = {600};
    int clusterSize = 512;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sizes = {16, 32, 128, 128, 0};
    int clusterSize = 32768;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 131072;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> sizes = {4096, 33792, 76800};
    int clusterSize = 1024;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 114688;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1048576;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 50017075200;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sizes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int clusterSize = 8;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sizes = {260844, 617641, 205960, 567972, 592354, 499766, 435409, 567914, 683671, 95617, 898318, 942144, 236648, 713334, 930102, 308390, 733928, 807120, 487516, 531978, 827868, 932072, 733863, 438663, 483441, 921054, 297557, 794280, 845828, 776964, 404638, 196631, 40792, 391314, 992076, 702782, 507926, 588927, 380611, 606595, 743208, 141150, 808570, 807098, 555953, 77029, 434842, 321403, 322303, 483226};
    int clusterSize = 435409;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 38751401;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sizes = {4, 0, 4, 7, 0, 1, 1, 6, 9, 0, 1, 0, 0, 0, 5, 5, 3, 2, 10, 6, 9, 7, 1, 10, 1, 9, 3, 3, 6, 7, 1, 0, 6, 1, 1, 5, 7, 1, 1, 10, 1, 2, 1, 0, 8};
    int clusterSize = 1761;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 65157;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sizes = {95184, 49591, 61566, 0, 1, 0, 14928, 98821, 0, 74699, 81899, 67145, 1, 1, 46183, 57592, 51105, 88657, 70568, 57145};
    int clusterSize = 989570;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 16822690;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sizes = {8264189, 1678304, 2546123, 3143781, 8383415, 6287561, 1047928, 3336081, 8046976, 1681698, 9519594, 1, 4177219, 2892781, 2095855, 7687489, 9725745, 507116, 8192860, 2398628, 3403116, 4775636, 9791200, 6688061, 1767458, 2095855, 1181096, 3406157, 2441259, 0, 5239635, 9431342, 6287561, 1243601, 2095853, 4590207, 3384120, 9962136};
    int clusterSize = 1047927;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 188626860;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sizes = {1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1};
    int clusterSize = 6071;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 139633;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sizes = {0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1};
    int clusterSize = 1048564;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 15728460;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sizes = {2, 1, 9, 8, 0, 1, 6, 5, 10, 1, 0, 0, 2, 5, 0, 1, 10};
    int clusterSize = 613289;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 7972757;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sizes = {2849, 2609, 7712, 6187, 9246, 292, 3933, 5490, 2279, 3134, 6839, 2279, 5310, 1031, 1813, 4274, 1426, 1194, 642, 5437, 6554, 689, 7189, 8111, 9975, 111, 3136, 9404, 7065, 3934, 1873, 9264, 3421};
    int clusterSize = 285;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 149055;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sizes = {75736, 21924, 71762, 46280, 55896, 69217, 0, 1, 37861, 16468, 10252, 79853, 28422, 55364, 54294, 62161, 1, 65414, 73523, 73607, 80129, 43535, 52307, 1, 86981, 36152, 0, 1, 55009, 0, 95196, 64312, 93191, 32720};
    int clusterSize = 1038883;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 32205373;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sizes = {0, 6436, 1, 3184, 0, 6019, 0, 9539, 4924, 5701, 3981, 3783, 6946, 814, 7864, 7302, 322, 6863, 7704, 6231, 6219, 1, 1, 2830, 808, 4412, 9277, 6209, 5447, 5111, 4893, 9041, 9772, 2664, 7422, 7295, 7161, 1065, 1, 9418, 3794, 2488, 4578, 7487};
    int clusterSize = 1020654;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 41846814;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sizes = {41552571, 2189023, 48750723, 89780775, 61941246, 64305865, 18075197, 56400150, 36580334, 90523447, 76624677, 41796371, 54209531, 26227734, 23177751, 40461598, 96790937};
    int clusterSize = 6386;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 869434742;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sizes = {170958, 641239, 725015, 125092, 311707, 795288, 702462, 721616, 368305, 268087, 649661, 249379, 77743, 964335, 448234, 163559, 60999, 67387, 608976, 183624, 483057, 160720, 798623, 69468, 223396, 532694, 709209, 823233, 644148, 120776, 107203, 207951, 387007, 245242, 868725, 335423, 881404, 385756};
    int clusterSize = 8;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 16287808;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sizes = {91, 270, 0, 891, 0, 1, 597, 1, 824, 367, 840, 540, 131, 872, 855, 346, 728, 1, 46, 544, 535, 848, 444, 543, 0, 454, 93, 677, 496, 818, 1, 1, 217, 925, 828, 630, 280, 0, 336, 104, 49};
    int clusterSize = 2251;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 83287;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sizes = {0, 1, 5, 4, 0, 0, 9, 0};
    int clusterSize = 12;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sizes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int clusterSize = 955335;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sizes = {25177490, 39391337, 1000579, 69787472, 59500353, 46934001, 27388514, 98574592, 15008671, 33019075, 1708468};
    int clusterSize = 1000578;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 424245072;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sizes = {465734, 271894, 627194, 411695, 77094, 16979, 708089};
    int clusterSize = 6;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 2578692;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sizes = {16154172, 26619659, 85419088, 24775197, 98515435, 8952758, 66597958, 20586534, 76953024, 40496276, 77111695, 16103793, 53334523, 96908130, 64031168, 40147364, 67921542, 86132223, 89520593, 83145238};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 1139426370;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sizes = {99, 29, 35, 77, 49, 2, 11, 62, 92, 32, 0};
    int clusterSize = 606460;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 6064600;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sizes = {7348968, 1837242, 9186211, 7957914, 5511727};
    int clusterSize = 918621;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 33988977;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sizes = {7, 4, 7, 9, 8, 0, 3, 5, 1, 0, 0, 3, 7, 5, 9, 9, 7, 7, 1, 6, 9, 9, 7, 1, 0, 0, 4, 2, 6, 1, 8, 7, 3, 3, 10, 0, 0};
    int clusterSize = 13;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 390;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sizes = {0, 0, 0, 0};
    int clusterSize = 1025388;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sizes = {84973, 98201, 98122, 31202, 10614, 1, 8125, 28855, 40976, 0};
    int clusterSize = 182426;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 1641834;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sizes = {402652800, 414015805, 888854904, 159383401, 397409926, 164016172, 772356727, 842256045, 493570471, 52571210, 664796550};
    int clusterSize = 1048575;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 5257555050;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sizes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int clusterSize = 46642;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sizes = {372361287, 933996130, 763061840, 851140573, 405763439, 758605145, 617122336, 110539089, 797820511, 405789569, 746695239};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 6762895158;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sizes = {282, 810, 249, 642, 850, 239, 610, 11, 374, 676, 35, 529, 10};
    int clusterSize = 3;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 5331;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sizes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int clusterSize = 1048576;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sizes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int clusterSize = 1048451;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sizes = {406, 582, 757, 327, 311, 556, 0, 479, 783, 413, 1, 533, 364, 267, 693, 1, 761};
    int clusterSize = 1048570;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 16777120;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sizes = {502003109, 436254592, 835254527, 81348026, 203738972, 825428224, 266279671, 982783589, 310705417, 370969856, 403092816, 278428800, 509728922, 761200522, 559179899, 492913152, 607601308, 105402853, 360189568, 185604993, 706324039, 300614758, 89822938, 302333959, 203798279, 67100874, 478872723, 825584767, 440827137, 572815488, 938943268, 874566416, 31173095};
    int clusterSize = 128;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 14910888320;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sizes = {64878, 93250, 70744, 31677, 37206, 48614, 17526, 27120, 5432, 86798, 40250, 1, 36866, 1, 83984, 15566, 69494, 42119, 12663, 21463, 21446, 1, 59258, 91652, 0, 14864, 8708, 96523, 40359, 8493, 34297, 43825};
    int clusterSize = 395224;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 12251944;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sizes = {144278069, 935432526, 414484048, 831920429, 333558805, 56277155, 817121147, 408398446, 255743118, 315491223, 729410903, 478769580, 385977412, 486192481, 704803166, 155116444, 744338920, 113854088, 441568231, 868667645, 821945948, 676509288, 374521969, 62177762, 674111779, 116504215, 348243085, 429260763, 732252990, 299334232, 878286789, 380643425, 51139663, 469632866, 574253160, 663621198, 409342774, 296281610, 365142854, 439213358, 118250533, 980730889, 317990156, 124372816};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 20225167958;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sizes = {0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    int clusterSize = 1041550;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 22914100;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sizes = {838, 1, 997, 70, 0, 630, 266, 1, 0, 0, 787, 871, 157, 630};
    int clusterSize = 1048574;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 11534314;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sizes = {93640, 62236};
    int clusterSize = 733228;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 1466456;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sizes = {35536678, 78818074, 2919768, 82895354, 28328186, 12939086, 6583811, 34304477, 11011915, 67205543, 93074925, 11815602, 17014247, 97666316, 60413401, 80038806, 10210529, 21477448, 42056090, 51297056, 69985438, 69841744};
    int clusterSize = 29;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 985434703;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sizes = {271664256, 877801168, 60315511, 664862549, 593296544, 458377441, 488419545, 171608010, 555699948, 357649042, 988684408, 263224671, 115277026, 447814752, 205903987, 57645857, 344347064, 812566367, 646672407, 362267872, 683920128, 588181307, 877433228, 787367114, 571644700, 449960297, 9658739, 468542048, 310334135, 374705080, 645390528, 137428459, 985797057};
    int clusterSize = 32;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 15634461632;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sizes = {0, 0, 0, 0, 0, 0};
    int clusterSize = 290829;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sizes = {6767, 8170, 6899, 4827, 1, 9019};
    int clusterSize = 92651;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 555906;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sizes = {6710, 118, 9480, 5236, 5441, 871, 9290, 2968, 6614, 6167, 1842, 1572, 7080, 8079};
    int clusterSize = 2;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 71472;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 40000000000;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 5000000000;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sizes = {1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 20000000000;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1048576;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 50017075200;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sizes = {100};
    int clusterSize = 40;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 120;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 2;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 7000000000;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sizes = {600};
    int clusterSize = 512;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 8000000000;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 16000000000;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sizes = {999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 42999999957;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 6000000000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> sizes = {0, 2};
    int clusterSize = 652;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 652;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 43000000000;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> sizes = {90};
    int clusterSize = 15;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 90;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 33000000000;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> sizes = {0, 128, 128, 32, 16};
    int clusterSize = 32768;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 131072;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> sizes = {0, 0};
    int clusterSize = 6;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 11000000000;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> sizes = {600, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 11000000600;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 3000000000;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> sizes = {5, 100000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 7100000005;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> sizes = {10};
    int clusterSize = 10;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 13000000000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> sizes = {999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 49999999950;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> sizes = {4096, 33792, 76800};
    int clusterSize = 1024;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 114688;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> sizes = {513};
    int clusterSize = 512;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 21000000000;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> sizes = {16, 32, 128, 128, 0};
    int clusterSize = 32768;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 131072;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 27000000000;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> sizes = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int clusterSize = 1000;
    TrueSpace* pObj = new TrueSpace();
    clock_t start = clock();
    long result = pObj->calculateSpace(sizes, clusterSize);
    clock_t end = clock();
    delete pObj;
    long expected = 5000000000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22712042&rd=13503&pm=8477
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
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
class TrueSpace {
public:
  long long calculateSpace(vector <int>, int);
};
 
long long TrueSpace::calculateSpace(vector <int> c, int cs) {
  long long t=0;
  int i;
  for(i=0;i<c.size();i++){
    t+=((long long)c[i])/cs;
    if(c[i]%cs!=0)  t++;
  }
  return t*cs;
  
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/