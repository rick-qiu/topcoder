/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2947
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

class LoadBalancing {
public:
    int minTime(vector<int> chunkSizes);
};

int LoadBalancing::minTime(vector<int> chunkSizes) {
    int ret;
    return ret;
}


int test0() {
    vector<int> chunkSizes = {3072, 3072, 7168, 3072, 1024};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 9216;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> chunkSizes = {2048};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 2048;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> chunkSizes = {2048, 1024, 1024, 2048};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3072;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> chunkSizes = {4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 104857600;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> chunkSizes = {};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> chunkSizes = {434176};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 434176;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> chunkSizes = {2869248, 3368960};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3368960;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> chunkSizes = {3189760, 1969152, 2827264};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 4796416;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> chunkSizes = {3892224, 2620416, 4001792, 1128448};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 6512640;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> chunkSizes = {2253824, 3233792, 668672, 3116032, 1232896};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 5369856;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> chunkSizes = {1908736, 2383872, 280576, 943104, 2446336, 3719168};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 5908480;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> chunkSizes = {2902016, 1619968, 2889728, 615424, 1824768, 372736, 3628032};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 6949888;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> chunkSizes = {1975296, 3416064, 1206272, 1199104, 4006912, 315392, 3771392, 1116160};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 8539136;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> chunkSizes = {3395584, 3946496, 36864, 2856960, 2195456, 1360896, 739328, 1778688, 1554432};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 8933376;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> chunkSizes = {1411072, 2110464, 1388544, 2362368, 1103872, 59392, 133120, 1184768, 1500160, 1332224};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 6295552;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> chunkSizes = {3050496, 947200, 1758208, 3763200, 630784, 3189760, 1256448, 2856960, 599040, 2598912, 202752, 1558528, 705536, 1774592, 3168256};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 14030848;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> chunkSizes = {3025920, 497664, 2781184, 2177024, 845824, 1563648, 2088960, 1811456, 3311616, 6144, 2838528, 2358272, 1030144, 3577856, 2316288, 249856, 2844672, 3380224, 3239936, 3140608};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 21542912;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> chunkSizes = {1160192, 3608576, 346112, 1018880, 3179520, 4111360, 13312, 3901440, 3415040, 1729536, 112640, 1935360, 4194304, 316416, 2263040, 3177472, 2910208, 2881536, 2677760, 607232, 763904, 3596288, 2754560, 4079616, 4132864};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 29444096;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> chunkSizes = {1108992, 818176, 278528, 3605504, 1881088, 594944, 1136640, 2747392, 4137984, 3846144, 3752960, 1255424, 1494016, 2325504, 707584, 2350080, 2283520, 3640320, 2700288, 81920, 3110912, 950272, 3286016, 3776512, 718848, 3619840, 1605632, 3132416, 362496, 263168};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 30786560;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> chunkSizes = {1981440, 1696768, 2514944, 3563520, 1326080, 2675712, 2722816, 1843200, 1269760, 3243008, 1122304, 2787328, 2188288, 1091584, 2243584, 1929216, 2001920, 3135488, 2984960, 3218432, 2497536, 1995776, 3871744, 3980288, 842752, 2403328, 3410944, 2215936, 3165184, 3249152, 3644416, 3939328, 925696, 3391488, 610304};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 42842112;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> chunkSizes = {1320960, 2312192, 3941376, 2969600, 868352, 608256, 517120, 3512320, 3555328, 2020352, 771072, 2491392, 974848, 2830336, 2910208, 2079744, 2255872, 1290240, 2580480, 3957760, 1782784, 2179072, 2264064, 1176576, 1979392, 57344, 3637248, 3868672, 702464, 694272, 2574336, 3723264, 4147200, 3992576, 2292736, 2887680, 246784, 296960, 3123200, 3852288};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 44623872;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> chunkSizes = {2023424, 2503680, 2306048, 1532928, 3194880, 131072, 510976, 708608, 668672, 636928, 3744768, 476160, 2391040, 1123328, 3174400, 3717120, 3489792, 3063808, 3000320, 3262464, 132096, 3506176, 1269760, 3656704, 4149248, 3570688, 3658752, 4133888, 1820672, 421888, 4084736, 3562496, 762880, 30720, 4108288, 2230272, 2248704, 2019328, 1429504, 3800064, 2387968, 2662400, 3368960, 201728, 2418688};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 51648512;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> chunkSizes = {4022272, 547840, 103424, 854016, 1501184, 3725312, 2119680, 2335744, 246784, 3732480, 677888, 1795072, 500736, 2571264, 3963904, 3433472, 4035584, 3927040, 3061760, 2991104, 2324480, 2880512, 4024320, 1625088, 1069056, 1837056, 2369536, 2156544, 1847296, 1064960, 1081344, 1546240, 3091456, 1165312, 1156096, 3151872, 2614272, 2677760, 2931712, 680960, 3372032, 1780736, 1751040, 3351552, 3255296, 2846720};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 51900416;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> chunkSizes = {505856, 301056, 2229248, 551936, 3828736, 3831808, 3883008, 695296, 39936, 1904640, 1337344, 227328, 3588096, 238592, 2157568, 2762752, 3348480, 32768, 1373184, 636928, 813056, 1734656, 1893376, 2849792, 1065984, 4168704, 1934336, 1249280, 1699840, 1549312, 3787776, 2822144, 2608128, 3854336, 2382848, 361472, 1014784, 405504, 468992, 354304, 3148800, 714752, 2638848, 2149376, 2984960, 2308096, 1763328};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 43101184;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> chunkSizes = {591872, 3399680, 3788800, 1694720, 3659776, 479232, 3633152, 2285568, 692224, 3364864, 954368, 663552, 1173504, 393216, 1774592, 919552, 3042304, 1576960, 3505152, 1256448, 1688576, 2438144, 3651584, 970752, 2738176, 803840, 244736, 1179648, 3703808, 1945600, 1848320, 4072448, 1316864, 3845120, 3125248, 3658752, 3824640, 64512, 2225152, 2433024, 2106368, 3881984, 1193984, 3750912, 3155968, 3706880, 2726912, 499712};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 52826112;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> chunkSizes = {1859584, 3296256, 3580928, 3575808, 3329024, 2813952, 473088, 3128320, 2411520, 28672, 64512, 2906112, 2679808, 537600, 1397760, 293888, 2081792, 3035136, 533504, 2237440, 678912, 2260992, 1430528, 90112, 1490944, 231424, 2496512, 3810304, 920576, 4041728, 2164736, 3045376, 615424, 2148352, 2388992, 811008, 3019776, 972800, 861184, 3750912, 2864128, 3108864, 845824, 2686976, 1682432, 273408, 4140032, 2902016, 2025472};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 49012736;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> chunkSizes = {2652160, 3392512, 138240, 3780608, 869376, 1323008, 2766848, 2604032, 2180096, 3702784, 745472, 3911680, 1994752, 3357696, 10240, 3311616, 1439744, 1430528, 805888, 3747840, 1383424, 792576, 702464, 2356224, 270336, 2482176, 3079168, 1796096, 657408, 2209792, 3291136, 4062208, 1709056, 1188864, 1135616, 2436096, 2647040, 3892224, 791552, 2192384, 446464, 304128, 2158592, 2108416, 3528704, 1880064, 140288, 2387968, 2719744, 607232};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 49761280;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> chunkSizes = {14336, 41984, 24576, 28672, 15360, 49152, 43008, 47104, 37888, 13312, 22528, 4096, 29696, 25600, 48128, 30720, 46080, 51200, 31744, 23552, 21504, 50176, 19456, 9216, 38912, 27648, 45056, 32768, 34816, 5120, 6144, 11264, 10240, 33792, 17408, 36864, 39936, 2048, 8192, 26624, 20480, 18432, 3072, 35840, 44032, 7168, 12288, 40960, 16384, 1024};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 653312;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> chunkSizes = {21504, 50176, 14336, 6144, 40960, 4096, 37888, 31744, 20480, 12288, 39936, 48128, 10240, 5120, 24576, 11264, 16384, 47104, 26624, 46080, 8192, 30720, 18432, 34816, 45056, 41984, 38912, 15360, 1024, 29696, 2048, 28672, 27648, 9216, 35840, 7168, 22528, 36864, 33792, 32768, 44032, 17408, 3072, 13312, 19456, 49152, 23552, 25600, 43008};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 627712;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> chunkSizes = {4157440, 4186112, 4158464, 4187136, 4185088, 4168704, 4169728, 4152320, 4156416, 4189184, 4148224, 4166656, 4161536, 4159488, 4192256, 4167680, 4194304, 4174848, 4190208, 4172800, 4171776, 4180992, 4149248, 4182016, 4145152, 4163584, 4144128, 4178944, 4147200, 4160512, 4162560, 4173824, 4151296, 4179968, 4176896, 4175872, 4177920, 4164608, 4154368, 4170752, 4146176, 4193280, 4150272, 4155392, 4188160, 4183040, 4153344, 4191232, 4184064, 4165632};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 104230912;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> chunkSizes = {1024, 26624, 103424, 24576, 1024, 26624, 103424, 24576, 1024, 26624, 103424, 24576, 1024, 26624, 103424, 24576, 1024, 26624, 103424, 24576, 1024, 26624, 103424, 24576, 1024, 26624, 103424, 24576, 1024, 26624, 103424, 24576, 1024, 26624, 103424, 24576, 1024, 26624, 103424, 24576, 1024, 26624, 1024, 24576, 1024, 26624, 1024, 24576, 1024, 26624};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 845824;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> chunkSizes = {1024, 26624, 1024, 26624, 1024, 26624, 1024, 26624, 1024, 26624, 1024, 26624, 1024, 26624, 1024, 26624, 1024, 26624, 1024, 26624, 1024, 26624, 1024, 26624, 1024, 26624, 1024, 1024, 24576, 103424, 24576, 103424, 24576, 103424, 24576, 103424, 24576, 103424, 24576, 103424, 24576, 103424, 24576, 103424, 24576, 103424, 24576, 103424, 24576, 24576};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 845824;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> chunkSizes = {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 24576, 24576, 24576, 24576, 24576, 24576, 24576, 24576, 24576, 24576, 24576, 24576, 103424, 103424, 103424, 103424, 103424, 103424, 103424, 103424, 103424, 103424};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 845824;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> chunkSizes = {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 26624, 103424, 103424, 103424, 103424, 103424, 103424, 103424, 103424, 103424, 103424, 24576, 24576, 24576, 24576, 24576, 24576, 24576, 24576, 24576, 24576, 24576, 24576};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 845824;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> chunkSizes = {26624, 103424, 26624, 103424, 1024, 103424, 1024, 24576, 1024, 26624, 26624, 1024, 1024, 24576, 1024, 103424, 24576, 26624, 26624, 24576, 24576, 24576, 24576, 24576, 1024, 1024, 26624, 24576, 1024, 26624, 1024, 103424, 1024, 103424, 26624, 24576, 26624, 1024, 24576, 103424, 1024, 1024, 26624, 26624, 1024, 24576, 103424, 26624, 103424, 103424};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 845824;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> chunkSizes = {4193280, 4167680, 4090880, 4169728, 4193280, 4167680, 4090880, 4169728, 4193280, 4167680, 4090880, 4169728, 4193280, 4167680, 4090880, 4169728, 4193280, 4167680, 4090880, 4169728, 4193280, 4167680, 4090880, 4169728, 4193280, 4167680, 4090880, 4169728, 4193280, 4167680, 4090880, 4169728, 4193280, 4167680, 4090880, 4169728, 4193280, 4167680, 4090880, 4169728, 4193280, 4167680, 4193280, 4169728, 4193280, 4167680, 4193280, 4169728, 4193280, 4167680};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 104012800;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> chunkSizes = {4167680, 4167680, 4167680, 4167680, 4090880, 4167680, 4169728, 4090880, 4193280, 4193280, 4193280, 4169728, 4090880, 4193280, 4169728, 4167680, 4167680, 4167680, 4193280, 4169728, 4167680, 4169728, 4090880, 4090880, 4193280, 4167680, 4169728, 4090880, 4090880, 4193280, 4167680, 4169728, 4167680, 4193280, 4169728, 4169728, 4193280, 4193280, 4193280, 4090880, 4169728, 4193280, 4167680, 4169728, 4090880, 4090880, 4193280, 4193280, 4169728, 4193280};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 104012800;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> chunkSizes = {3072, 3072, 7168, 3072, 1024};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 9216;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> chunkSizes = {10240, 10240, 8192, 8192, 8192};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 24576;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> chunkSizes = {8192, 7168, 6144, 4096, 4096};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 15360;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> chunkSizes = {1024, 3072, 6144, 7168, 8192, 12288, 13312};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 25600;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> chunkSizes = {48128, 45056, 63488, 58368, 37888, 60416, 23552, 41984};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 189440;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> chunkSizes = {1024, 2048, 3072, 4096, 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312, 14336, 15360};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 61440;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> chunkSizes = {30720, 19456, 13312, 10240, 10240, 4096};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 44032;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> chunkSizes = {10240, 11264, 12288, 13312, 14336};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 33792;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> chunkSizes = {5120, 4096, 4096, 3072, 2048};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 9216;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> chunkSizes = {4096, 4096, 4096, 5120, 7168};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 12288;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> chunkSizes = {4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304, 4194304};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 104857600;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> chunkSizes = {4194304, 4194304, 4194304, 4188160, 4188160, 4194304, 4194304, 4194304, 4194304, 4194304, 4096000, 4096000, 4096000, 1024000, 1024000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000, 4096000};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 90112000;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> chunkSizes = {5120, 5120, 3072, 3072, 3072, 3072};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 11264;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> chunkSizes = {10240, 8192, 7168, 6144, 5120};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 18432;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> chunkSizes = {2048, 4096, 4096, 3072, 3072};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 8192;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> chunkSizes = {3072, 3072, 5120, 3072, 4096};
    LoadBalancing* pObj = new LoadBalancing();
    clock_t start = clock();
    int result = pObj->minTime(chunkSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 9216;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10339697&rd=5855&pm=2947
********************************************************************************
#include <vector>
#include <cstring>
using namespace std;
 
class LoadBalancing {
public:
  int tag[204800];
  int minTime(vector<int> vec) {
    int i, j, n = 0;
 
    for(i=0; i<vec.size(); ++i)  n += (vec[i] /= 1024);
    memset(tag, 0, sizeof(tag[0]) * (n / 2 + 1));
 
    tag[0] = 1;
    for(i = 0; i < vec.size(); ++i) for(j =  n / 2 - vec[i]; j >= 0; --j) if(tag[j] && !tag[j + vec[i]]) {
      tag[j + vec[i]] = 1;
    }
    i = n / 2;
    while (i >= 0 && !tag[i])
      --i;
    return (n - i) * 1024;
  }
};

********************************************************************************
*******************************************************************************/