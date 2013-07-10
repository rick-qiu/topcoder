/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11777
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

class BuildingReorganization {
public:
    long theMin(vector<int> heights, int A, int B, int cost);
};

long BuildingReorganization::theMin(vector<int> heights, int A, int B, int cost) {
    long ret;
    return ret;
}


int test0() {
    vector<int> heights = {5, 5, 5};
    int A = 0;
    int B = 2;
    int cost = 10;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 215;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> heights = {440730690, 320662314, 299883498};
    int A = 0;
    int B = 2;
    int cost = 1267;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 653829511396618764;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> heights = {324571, 159897, 167677, 374535};
    int A = 0;
    int B = 2;
    int cost = 2;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 247327644616;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> heights = {494767902, 34, 494551341, 494760285, 70343387};
    int A = 0;
    int B = 3;
    int cost = 9993264;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 532820915143893602;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> heights = {201091792, 50805105, 194422998, 135796080, 26696634, 33080111};
    int A = 0;
    int B = 1;
    int cost = 105;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 44757380421437558;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> heights = {491832731, 490920340, 457120273, 488914077, 491832704, 491832731, 457122596};
    int A = 4;
    int B = 5;
    int cost = 9278750;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 829098432024377667;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> heights = {494180017, 469292438, 469301477, 492201683, 488951322, 462311638, 458190459, 477828817};
    int A = 3;
    int B = 6;
    int cost = 7988692;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 766276430061900512;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> heights = {61956308, 997, 3253, 238499864, 8288110, 238499887, 238499833, 238499886, 238429482};
    int A = 3;
    int B = 5;
    int cost = 5765309;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 97888268880287762;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> heights = {157, 10, 157, 97, 152, 156, 4, 77, 157, 79};
    int A = 3;
    int B = 4;
    int cost = 9892243;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 2463239712;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> heights = {499999939, 492261673, 492261966, 499985007, 499999939, 498820482, 499999932, 499999938, 492261689, 492271437, 499952934};
    int A = 0;
    int B = 9;
    int cost = 9999257;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 817085283924635801;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> heights = {362030117, 374970002, 375399887, 49680547, 138983928, 144083214, 190786765, 408118191, 475862250, 429228675, 108418329, 348455502};
    int A = 3;
    int B = 7;
    int cost = 9999914;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 185676247429999818;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> heights = {3240, 259414, 3133, 264457, 290003, 289950, 290002, 19589, 289999, 243032, 3135, 289999, 8770};
    int A = 0;
    int B = 5;
    int cost = 8797224;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 2727248287080;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> heights = {296554576, 294308441, 72158865, 206970570, 255739794, 260057257, 248989673, 78094540, 92782505, 210856126, 327421168, 457386360, 191382228, 251678436};
    int A = 8;
    int B = 12;
    int cost = 1921;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 64110049314692351;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> heights = {499999957, 482973979, 499999735, 333646, 499809366, 36, 135087093, 66, 484116168, 53953766, 499994025, 499706887, 38, 499999984, 499999984};
    int A = 2;
    int B = 7;
    int cost = 7034761;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 178494035125717396;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> heights = {37151, 47499, 76311, 46182, 37447, 51620, 22577, 3459, 29952, 46567, 73670, 53477, 28594, 14779, 56323, 13181};
    int A = 5;
    int B = 7;
    int cost = 6780306;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 377060396259;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> heights = {1682, 690, 3925, 1288, 681, 911, 727, 684, 5323, 2829, 1438, 944, 5266, 685, 679, 2000, 726};
    int A = 4;
    int B = 7;
    int cost = 9999912;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 13651904687;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> heights = {499421077, 401329841, 141337291, 345141189, 105255951, 124451491, 379670459, 93603898, 440211196, 412884391, 245725649, 106730522, 497132035, 315109821, 475863646, 247454307, 441452712, 168982985};
    int A = 6;
    int B = 16;
    int cost = 9996112;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 353424919938351359;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> heights = {467413647, 226931639, 321322516, 87486171, 241335240, 245147350, 100067814, 399826470, 184728902, 20465069, 11238152, 4555421, 302442379, 136464488, 436555020, 395991568, 322861117, 111041957, 326411500};
    int A = 0;
    int B = 12;
    int cost = 9999964;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 278861592335048611;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> heights = {499241, 208462, 499382294, 498651113, 499382910, 13, 1156, 114653, 29, 499382918, 499382918, 476, 4, 441499, 66370, 117, 499382188, 1, 499382901, 499382613};
    int A = 15;
    int B = 19;
    int cost = 422784;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 138267122600347898;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> heights = {499877116, 499997216, 499929270, 499827775, 499827927, 499999534, 499996486, 499999992, 499990643, 499956161, 499999166, 499850006, 499827775, 499996591, 499965884, 499827778, 499881250, 499827827, 499999643, 499999989, 499999939};
    int A = 1;
    int B = 13;
    int cost = 1622518;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 782278482583303220;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> heights = {224289002, 166085367, 424888530, 58800229, 54577018, 24292859, 410464540, 66253226, 109546517, 398207726, 250073570, 193082950, 492439543, 257499222, 109407437, 234360275, 162178453, 326394522, 332591126, 349575287, 216408852, 47272693};
    int A = 3;
    int B = 6;
    int cost = 9999993;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 147515844838581428;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> heights = {18530, 138476, 96776, 48213, 134049, 125103, 17767, 77689, 99009, 20868, 132852, 194469, 510, 75440, 135209, 136454, 28374, 6679, 189081, 173951, 88642, 183125, 97936};
    int A = 9;
    int B = 11;
    int cost = 1;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 26585979450;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> heights = {494996860, 494997975, 494995164, 1968, 4600216, 218501323, 494997457, 1390402, 3383332, 494623728, 373, 37502, 494970651, 211548, 266912406, 225355245, 4, 783, 480692165, 494798369, 488830429, 1, 494997980, 494997970};
    int A = 11;
    int B = 12;
    int cost = 1;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 136626121478555052;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> heights = {14734, 11, 125044822, 494414026, 489040260, 1758, 494409157, 494379836, 1882, 3111, 492055142, 373429150, 494414025, 25214471, 4653, 19756509, 494405367, 7, 417, 494413987, 494411147, 494414075, 494389904, 494057853, 15};
    int A = 8;
    int B = 15;
    int cost = 9967891;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 563384047421850;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> heights = {498800151, 499997026, 601006, 499965563, 499951886, 499999971, 542769, 541056, 582928, 499999438, 547595, 8750466, 499999946, 499996866, 497686632, 499981351, 10003719, 499700160, 540882, 499948238, 604149, 499232373, 499999919, 3297395, 21314115, 540889};
    int A = 8;
    int B = 11;
    int cost = 320725;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 65241066894470;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> heights = {228756321, 148053852, 127681787, 282033054, 485524226, 125885137, 103478829, 5672709, 94562990, 12001073, 253700220, 412199757, 82425046, 143878792, 37776894, 26269123, 418067028, 494306798, 111287595, 379230805, 494862451, 487046679, 162762091, 372314511, 375473805, 441646138, 430758854};
    int A = 18;
    int B = 20;
    int cost = 33763;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 181330616523835485;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> heights = {225269207, 61897580, 81274539, 87865861, 220871802, 339478695, 19544274, 99508712, 466875041, 498830979, 97590016, 275044812, 388612647, 99156362, 94601833, 104247838, 364479257, 365061379, 460576013, 258105639, 251245446, 91690510, 416438558, 488937587, 279847425, 100985322, 236040605, 497982438};
    int A = 16;
    int B = 23;
    int cost = 9999919;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 354701925399532366;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> heights = {440383933, 1343543, 431739191, 251531666, 222030492, 5809558, 440898587, 438396460, 438861257, 436773935, 1346885, 198487407, 1342132, 387867762, 440902873, 440855777, 440901475, 1372266, 1344479, 436730799, 440902856, 440901377, 2708161, 351978012, 2934093, 440875514, 1342139, 440205167, 42614518};
    int A = 14;
    int B = 20;
    int cost = 10000000;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 277554299175441724;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> heights = {4335295, 7642763, 30675087, 5982209, 3734314, 3735967, 12320414, 3734283, 3734277, 499990682, 499998387, 498514735, 3734277, 499998271, 499998230, 5818455, 3862516, 499994114, 499925678, 8868573, 499998366, 499998163, 3734563, 3756791, 499997976, 499998387, 12600538, 3734482, 499998352, 499992869};
    int A = 16;
    int B = 28;
    int cost = 9481450;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 173145888230910985;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> heights = {3, 9, 14, 8, 5, 3, 3, 3, 5, 10, 2, 14, 3, 2, 8, 14, 11, 5, 3, 3, 2, 2, 13, 11, 9, 7, 4, 11, 11, 4, 4};
    int A = 13;
    int B = 21;
    int cost = 13810;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 55254;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> heights = {39753, 48125, 10032, 29049, 5869, 70525, 69725, 31931, 7592, 69419, 73396, 15047, 41887, 74821, 15987, 17284, 18312, 33916, 35386, 29309, 17726, 77326, 72265, 64462, 43665, 68581, 67934, 45475, 27292, 42723, 14671, 40006};
    int A = 14;
    int B = 24;
    int cost = 207;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 2166535843;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> heights = {499767462, 108794, 16591164, 3585868, 1826, 1795, 499752059, 499755931, 499745099, 1791, 85063, 1812, 14864, 1806, 499771389, 499771384, 1789, 1350311, 499771118, 498826780, 499765364, 499771323, 1786, 499768696, 485490747, 91238719, 1799, 499771396, 499771301, 499771190, 499673300, 499771386, 30657};
    int A = 21;
    int B = 24;
    int cost = 9999844;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 353887194792992824;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> heights = {499999997, 499999995, 499999997, 499999997, 499999995, 499999995, 499999995, 499999995, 499999996, 499999995, 499999997, 499999995, 499999997, 499999997, 499999997, 499999997, 499999996, 499999997, 499999995, 499999997, 499999997, 499999997, 499999997, 499999997, 499999996, 499999995, 499999997, 499999995, 499999996, 499999997, 499999995, 499999996, 499999997, 499999996};
    int A = 3;
    int B = 10;
    int cost = 9538707;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 806907118758078797;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> heights = {129908068, 472759917, 301490100, 495006591, 384082878, 490797259, 256393075, 474517414, 386663220, 63320380, 498238791, 70991019, 218568863, 120370039, 240103340, 85398452, 469803967, 242255033, 61935083, 472796929, 246432811, 66189615, 268973561, 494638639, 490324225, 165922908, 135328604, 446366985, 430589775, 147212364, 16529891, 492942526, 320378961, 66046226, 305075351};
    int A = 6;
    int B = 29;
    int cost = 146350;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 79181995505986249;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> heights = {499999994, 499999992, 499999997, 499999995, 499999990, 499999990, 499999994, 499999999, 499999997, 499999991, 499999990, 499999990, 499999992, 500000000, 499999993, 500000000, 499999991, 499999990, 500000000, 500000000, 499999998, 499999992, 499999991, 499999994, 499999998, 499999994, 499999990, 499999991, 499999994, 499999998, 500000000, 499999993, 499999996, 499999994, 499999990, 499999998};
    int A = 0;
    int B = 22;
    int cost = 283;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 764707974475835396;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> heights = {443042579, 445105615, 1006040, 444743275, 1006514, 445105826, 443038290, 383586569, 1477967, 1008528, 444909123, 1054178, 437338802, 445105825, 445095607, 1006136, 444855932, 1006096, 1006052, 1006061, 1035343, 1067707, 1007659, 12892903, 443403809, 445105826, 445054554, 1006046, 1023155, 1008239, 445105822, 159240287, 1012831, 445098557, 445105815, 445105323, 443324452};
    int A = 26;
    int B = 30;
    int cost = 9880879;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 272397993893782077;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> heights = {499997468, 499998094, 499831075, 499936161, 499849947, 499546761, 499606905, 499997725, 499549564, 499998477, 499546862, 499595024, 499998506, 499995890, 499998465, 499546773, 499546764, 499998506, 499645152, 499553871, 499998506, 499998499, 499546771, 499893118, 499998261, 499980293, 499695539, 499998503, 499998484, 499549738, 499998445, 499998502, 499998505, 499998505, 499546767, 499547088, 499550498, 499546947};
    int A = 1;
    int B = 10;
    int cost = 24873;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 763568700388479171;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> heights = {135591319, 86917895, 12185690, 343209803, 250730030, 263076663, 103000274, 433507335, 286843639, 337358799, 292492498, 85022362, 422187750, 132777901, 452192785, 428657941, 447723588, 362259974, 395640731, 443270583, 129655993, 267681748, 211013859, 435439746, 163969980, 340920917, 178726419, 406808250, 352261670, 358520275, 51335823, 464664397, 260011043, 207240652, 226514843, 291289439, 159997167, 137362624, 268625305};
    int A = 19;
    int B = 25;
    int cost = 22;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 258740982569735511;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> heights = {499808588, 498789378, 499687883, 495782252, 495910309, 497497253, 495053663, 495106523, 499283229, 496183940, 498566395, 499901033, 497900111, 495998614, 495063997, 498958462, 498331926, 495886028, 495783167, 499034582, 499627412, 497134697, 495326705, 498191136, 499945479, 496593097, 498135823, 496545565, 495962428, 498754225, 495788963, 496566531, 497465298, 497874450, 495150436, 496173145, 495327273, 497332991, 499904204, 494836258};
    int A = 14;
    int B = 30;
    int cost = 6187084;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 777998214166425429;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> heights = {1063654, 1088115, 114, 109, 108, 286, 1058099, 1088165, 1088122, 1086547, 1627, 35504, 842248, 928, 107, 104326, 111, 117, 121, 1087837, 396483, 35828, 347, 1086125, 1844, 844887, 1087947, 108, 1706, 107, 107, 1088125, 1081270, 832961, 143, 354449, 1086999, 24724, 1088168, 91950, 124};
    int A = 9;
    int B = 10;
    int cost = 9988187;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 13231824802444;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> heights = {499996393, 15811449, 499727778, 499996384, 499936676, 15815397, 499996370, 15811817, 28875144, 15811344, 139639951, 15811426, 499993879, 15830923, 15811359, 499746936, 15811398, 253173448, 498179096, 499996377, 498984599, 499996381, 497709236, 15833940, 499988543, 466181750, 499939319, 15812384, 499995934, 499996389, 31000659, 499996194, 15811339, 15811648, 61483735, 15811390, 499996393, 499994535, 15811591, 499996393, 497578596, 15811342};
    int A = 26;
    int B = 40;
    int cost = 9838387;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 358789755828391265;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> heights = {374732621, 345011003, 258953259, 195307811, 373503607, 339517751, 371453017, 137263968, 416148303, 297461750, 197817621, 297787314, 78125752, 131490410, 62216593, 51542009, 124366667, 218190376, 117896147, 332287223, 41207004, 185118250, 109627685, 140540182, 70514146, 103897687, 130194926, 291481877, 289214437, 255959619, 134102904, 267806684, 188906331, 57000815, 153692592, 11673638, 200434693, 127247230, 88565135, 296946110, 383266259, 110773354, 410209559};
    int A = 37;
    int B = 41;
    int cost = 16154;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 29545904125359039;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> heights = {495647009, 14832, 6202, 81, 393, 495727983, 494910637, 495745579, 495732911, 495745568, 495736327, 354015537, 86, 393592029, 495421142, 120847839, 495743841, 81, 81, 495745578, 495745575, 435971601, 495745579, 5839, 372350715, 494790756, 495744998, 3597770, 684331, 378001496, 495745569, 495745547, 495745579, 89, 45578502, 495745560, 529656, 494827438, 495745579, 495745579, 44893, 495744763, 493392875, 493595962};
    int A = 5;
    int B = 15;
    int cost = 8;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 145020469017546276;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> heights = {499932084, 499927572, 499927709, 499977775, 499945898, 499922225, 499976567, 499946853, 499915457, 499939794, 499946395, 499914553, 499949360, 499925357, 499950580, 499933657, 499944158, 499951486, 499938050, 499931931, 499949602, 499964859, 499935237, 499981398, 499971404, 499937234, 499916170, 499925259, 499976547, 499968113, 499971134, 499963478, 499950068, 499935957, 499928673, 499914637, 499941051, 499928052, 499950077, 499957619, 499934871, 499927107, 499940364, 499962101, 499951021};
    int A = 4;
    int B = 34;
    int cost = 9999989;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 802636733352430725;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> heights = {18092, 1048, 6149, 1593, 15332, 12742, 16746, 1251, 6516, 2727, 16404, 18380, 5024, 23361, 10728, 3388, 10026, 11658, 22459, 11546, 15766, 16447, 20520, 2579, 11076, 11368, 4194, 21641, 23065, 3544, 9187, 10560, 20270, 21361, 23146, 2023, 21328, 18417, 391, 3364, 15183, 17635, 21900, 18183, 5634, 1365};
    int A = 23;
    int B = 33;
    int cost = 8158522;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 196154064970;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> heights = {493233020, 493396490, 493161394, 493852069, 493114673, 493352807, 493076822, 494089142, 493266996, 493814954, 493233953, 493905454, 493393593, 493552991, 493808051, 493444330, 493915263, 493272437, 493169359, 493254710, 493604843, 494249496, 494169937, 493133048, 493445221, 493258720, 494153891, 493078224, 493306288, 493881362, 493813027, 493066859, 493792718, 494029990, 493571939, 493043718, 493199622, 493458771, 493093474, 493472847, 493189503, 493098160, 493212099, 493254659, 493898414, 494167085, 493525496};
    int A = 10;
    int B = 42;
    int cost = 34844;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 741151948674794000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> heights = {488593221, 290166061, 339459381, 425859252, 416962069, 496183065, 324457152, 69654125, 392340160, 134099018, 360163970, 348625082, 220130300, 191473172, 116099924, 240420735, 124977976, 24339797, 41676017, 377255157, 268937764, 6862094, 73568875, 89434420, 223419182, 418656166, 316108946, 316460347, 361939539, 385088716, 365231355, 481536480, 61613453, 213121612, 220240835, 375414167, 233223094, 221999901, 265309200, 44047269, 184256400, 196778032, 3272795, 397445418, 126265586, 409368857, 486306291, 63478969};
    int A = 11;
    int B = 26;
    int cost = 10000000;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 206816552798333467;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> heights = {132209486, 214905002, 420721971, 83795087, 372188006, 125166611, 244969379, 234231474, 403822135, 156431615, 426725092, 305604212, 178239213, 192718384, 47444182, 401588226, 413839146, 75384369, 325687760, 326841239, 495209258, 135070296, 259801516, 258104006, 221456840, 178039816, 465318034, 424075671, 147920969, 221141383, 109954867, 391879404, 74644198, 15594284, 204624462, 275709560, 419070642, 430651593, 418478812, 407246709, 166017900, 148210784, 40830582, 257849354, 471781604, 377285439, 87371164, 329297176, 84475083};
    int A = 5;
    int B = 18;
    int cost = 44358;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 100178301214411191;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> heights = {396440, 394218, 395725, 393576, 393605, 538334, 499988130, 393835, 499936870, 9629654, 395872, 499735022, 272965690, 3626896, 393803, 400669, 499999984, 499998879, 49242814, 477913800, 1413567, 477480444, 52021689, 499999997, 499199527, 393580, 499999995, 480265146, 498514160, 499999987, 499981289, 394896, 398236093, 305290023, 424809, 393582, 14405898, 85968836, 362198974, 2748260, 393576, 499864380, 495725188, 2888555, 499294287, 499997188, 394458, 499999929, 476396745, 393633};
    int A = 12;
    int B = 16;
    int cost = 1;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 176512273708644841;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> heights = {7752, 231, 457284, 1, 7, 1, 488149, 472521, 487946, 134, 488190, 488186, 488141, 241553, 42524, 487423, 478510, 488173, 4, 488184, 90, 12509, 488167, 199148, 31416, 487398, 66773, 173278, 5, 1, 4405, 463474, 252, 19, 486532, 488184, 486840, 121, 7290, 488155, 488161, 139424, 488183, 377206, 89167, 1704, 1, 485481, 3, 148301};
    int A = 37;
    int B = 46;
    int cost = 4916;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 1498066;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> heights = {277, 499858674, 45628348, 53485136, 499997944, 479088628, 499999877, 403379234, 907894, 499999904, 1849214, 9, 62, 499999881, 5660918, 240, 499999905, 483796694, 499999893, 18734091, 499994274, 139625, 2297, 499763300, 5785240, 499999909, 502, 499999829, 61102887, 8, 214872775, 499999834, 1017, 499997707, 499983819, 499999868, 499999680, 499997690, 676, 499999888, 2418834, 499999894, 726, 307176115, 13389, 57776406, 378815712, 499999907, 499999895, 245521434};
    int A = 1;
    int B = 16;
    int cost = 598;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 279429611845963995;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> heights = {499998295, 499998401, 499999994, 761, 499999997, 499751190, 499999932, 499994751, 499998355, 152925354, 499999631, 759, 570623, 775484, 98506787, 499999813, 2297, 420056039, 499992892, 499999859, 1034560, 6898031, 499999998, 2238222, 403877731, 478858621, 499999661, 122774, 499846409, 499999968, 173864442, 499999753, 35692846, 499789512, 16869, 499937590, 498797619, 757, 499936626, 499999089, 766, 765, 112462630, 754, 499999991, 499980414, 107260, 755, 225230317, 499999997};
    int A = 16;
    int B = 24;
    int cost = 57867;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 87587693861688105;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> heights = {365983303, 25147189, 191310619, 42414402, 416949917, 264401157, 328467178, 314208217, 59720429, 457900656, 336536664, 81777469, 67853285, 274938276, 210453724, 156063549, 60757872, 400690787, 211765780, 11329085, 365622853, 443281454, 333240001, 434638191, 247902, 170056202, 25868170, 318371000, 440623885, 19062152, 100089587, 49274549, 283571009, 389193344, 170616367, 427516003, 211888160, 154193343, 187312609, 398119663, 390584596, 87655266, 225672874, 417551991, 333039581, 136446937, 455267770, 416542168, 171266590, 183955174};
    int A = 0;
    int B = 27;
    int cost = 8;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 163080778466338333;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> heights = {499161545, 499260111, 321439946, 479175, 498, 14378857, 499259262, 450599298, 11, 391, 497952318, 67, 499260851, 752, 247155, 255, 498411089, 499222422, 499146503, 499260850, 3516761, 499153946, 253, 634, 499260784, 2203, 492246591, 7, 568584, 821, 499260813, 499251897, 6, 913, 8, 490526453, 499174685, 106, 516372, 122974, 91, 7086, 1002115, 499260768, 65635, 20561, 120214, 499260518, 468902, 499260844};
    int A = 14;
    int B = 29;
    int cost = 2489599;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 663766611462;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> heights = {101365, 61043, 9714739, 15618723, 17329291, 4483, 18049, 17328837, 4461, 7051, 1014853, 17329292, 4459, 1751600, 97905, 17329270, 121597, 17329285, 12002, 17178598, 17329217, 17080294, 62607, 16014188, 17307783, 17329063, 8493726, 17329292, 354990, 4468, 4743, 12448001, 17292717, 4459, 189157, 780260, 36694, 6298, 17326875, 17329288, 14613, 4461, 4565, 4499, 17329000, 101025, 16286539, 17329292, 16956838, 17327406};
    int A = 6;
    int B = 35;
    int cost = 35150;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 448575650771;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> heights = {499980681, 499940661, 499940639, 499998136, 499999999, 499940772, 499999958, 499945412, 499953037, 499940639, 499994332, 499940646, 499941894, 499992628, 499941743, 499999999, 499999991, 499999997, 499940709, 499983693, 499999998, 499999986, 499942209, 499998416, 499940639, 499940640, 499940877, 499941570, 499940642, 499999927, 499999995, 499982122, 499974214, 499940725, 499940639, 499999199, 499940640, 499943971, 499999999, 499977182, 499999563, 499999997, 499977666, 499956493, 500000000, 499999997, 499940646, 499954610, 499940640, 499940642};
    int A = 22;
    int B = 48;
    int cost = 98725;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 761331091738332646;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> heights = {480144837, 389143473, 426068437, 454349206, 290329629, 290309342, 480145264, 480068683, 290256305, 290256315, 477268262, 290256349, 335497238, 290263252, 290318753, 290256316, 290256302, 480145269, 480144890, 290256307, 292099418, 480145263, 480143717, 290983826, 480145287, 446128302, 479992647, 292737182, 290258573, 455313506, 480145287, 480141264, 292091609, 291029030, 480145227, 360074123, 440935138, 290266432, 471913878, 349912709, 292271039, 480145251, 480144391, 291177084, 290688146, 479041689, 319575718, 480145285, 327830205, 301844932};
    int A = 8;
    int B = 46;
    int cost = 9211992;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 308469544431955027;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> heights = {61300307, 376856941, 241899213, 349921942, 466543526, 200172506, 277929226, 90669273, 197134013, 62473832, 153293173, 151140845, 40907354, 295412055, 264462772, 26385219, 391381126, 45505799, 99004707, 67042069, 27426859, 34267222, 89080748, 163611764, 152756342, 62807124, 13743536, 15425812, 299021685, 326814517, 341869861, 417695483, 76918629, 159811042, 233981258, 259197719, 8268227, 35301348, 308343423, 437800822, 413387577, 203074469, 330539957, 401644933, 477721733, 27198100, 53722602, 236032715, 175361067, 300393791};
    int A = 5;
    int B = 14;
    int cost = 9999928;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 108208201238788657;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> heights = {1541, 33253, 30826, 29498, 33200, 7674, 3850, 32477, 21063, 9950, 13727, 179, 39803, 8426, 32744, 29778, 15743, 35213, 22927, 5203, 3065, 3871, 31651, 33243, 29933, 33533, 28521, 8934, 24871, 37648, 4976, 720, 3438, 28925, 24398, 2460, 26698, 34034, 5607, 11384, 17438, 27836, 30266, 17100, 23722, 10330, 39797, 874, 2929, 15202};
    int A = 2;
    int B = 49;
    int cost = 10000000;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 462231919298;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> heights = {497312709, 499995821, 499999952, 480603612, 499999988, 475428446, 499999550, 455067526, 490077509, 499998339, 455102521, 455067535, 455070937, 455067566, 497728202, 499947910, 456023961, 499942625, 497156654, 495474386, 455067733, 455093682, 455067616, 455067530, 455084753, 499979646, 499999876, 455067547, 487110346, 455068429, 499999990, 455080716, 455260181, 455067576, 495689041, 499999975, 499860762, 455069158, 455067527, 455069488, 499998648, 499999927, 458166608, 477257739, 455250333, 496962218, 455067529, 455067574, 455106378, 455068513};
    int A = 12;
    int B = 49;
    int cost = 9940039;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 685097889878261077;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> heights = {668836, 43118, 185716, 51196, 667475, 668833, 38087, 668810, 668765, 668744, 58373, 596759, 668787, 665354, 467953, 668837, 665501, 665505, 43335, 38780, 668824, 668758, 47260, 534443, 668837, 668375, 662981, 38069, 38532, 38070, 38161, 38148, 244816, 51103, 38080, 668806, 38091, 38068, 38068, 592807, 38068, 38507, 668837, 208005, 117504, 606254, 650619, 38091, 661658, 668834};
    int A = 12;
    int B = 31;
    int cost = 936;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 277148846970;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> heights = {129255136, 444767248, 417986858, 208924457, 302563928, 3033530, 128461701, 459447130, 259514592, 2025406, 240775894, 128876216, 95506986, 395255609, 285716055, 203115955, 469312178, 498818593, 350187990, 16845425, 487911100, 256251105, 72486987, 407621863, 6605377, 239417766, 332673524, 371388337, 451565420, 965350, 111200381, 173651886, 144271957, 149591447, 148520074, 297852530, 25351206, 54840629, 286515358, 159794923, 44395676, 98250071, 245978866, 57892752, 95469783, 312171074, 482575992, 241398262, 368100340, 381150444};
    int A = 1;
    int B = 6;
    int cost = 3;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 136655832206690159;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> heights = {376822384, 333310895, 462079461, 343601048, 401869689, 424278784, 397981518, 378616507, 400922343, 395760442, 480136826, 388446390, 453814700, 359939850, 460538720, 477239046, 439675121, 441229244, 404244797, 337986336, 494463921, 348962424, 439581314, 358998558, 485868943, 399366524, 456002324, 358946130, 410863067, 383350577, 363771456, 435839574, 400427578, 484105074, 469920160, 334875808, 453377176, 467025146, 356626495, 359669440, 429277790, 498846081, 439025397, 354823826, 338918490, 427366706, 479543299, 421928558, 350373920, 346119613};
    int A = 4;
    int B = 27;
    int cost = 122910;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 431177590083535577;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> heights = {7, 998, 216121, 6323, 3474662, 64, 3474721, 429946, 24, 150, 3474693, 14776, 3474726, 3474726, 164980, 1525, 3474716, 3474724, 16, 3474711, 3474504, 3474238, 9135, 3474533, 3473864, 3224421, 6, 1930617, 3474727, 122, 3511, 637877, 3474727, 3474065, 3474398, 982796, 3474723, 3474192, 31771, 3474632, 3474725, 3461060, 3286278, 3474500, 9, 3472286, 3474727, 3430941, 3474726, 179};
    int A = 13;
    int B = 23;
    int cost = 8031956;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 80560407439241;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> heights = {441826712, 473487334, 443530938, 285448991, 70475417, 256357173, 374191866, 460080482, 269132971, 338189663, 220712657, 167168073, 129679964, 353507816, 219992193, 174457011, 101739050, 370677325, 370585728, 40795230, 63072933, 4052378, 179714528, 82720172, 293642330, 118798252, 312208206, 346165492, 414526438, 76480089, 390373783, 317650249, 421342002, 383021556, 366732172, 89981030, 290723088, 409728272, 32925643, 384001695, 340642205, 181694737, 121914544, 3990281, 145281502, 306560438, 495611193, 433789549, 367989180, 483145162};
    int A = 36;
    int B = 41;
    int cost = 9657183;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 118001188123040755;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> heights = {6125674, 499874782, 499988267, 13870, 499988264, 499988253, 499497603, 499988229, 13636, 14380, 499988233, 435192706, 499987984, 499986922, 499987868, 421615264, 656357, 497682479, 477160480, 125326260, 499988266, 15992, 499986227, 499817823, 432966587, 499988267, 16369, 103352, 486166764, 117406571, 13844, 499603268, 13662, 14299, 13980, 499988244, 499988096, 13626, 15149, 497238115, 499988254, 499988260, 452713200, 499988262, 359334654, 128522, 499988261, 223492829, 281454637, 499988265};
    int A = 24;
    int B = 49;
    int cost = 8481453;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 322389611282219316;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> heights = {499953889, 499987364, 499992024, 499949020, 499958797, 499973646, 499989494, 499990414, 499975934, 499945699, 499990988, 499993552, 499993475, 499995910, 499982427, 499962108, 499981378, 499941870, 499980576, 499983517, 499976273, 499979904, 499952386, 499988435, 499972427, 499977187, 499950318, 499949759, 499996613, 499985509, 499951855, 499976617, 499936902, 499995804, 499992644, 499953489, 499945725, 499962647, 499943042, 499988748, 499957083, 499940192, 499993909, 499952021, 499958303, 499973319, 499954150, 499969776, 499993432, 499974281};
    int A = 42;
    int B = 46;
    int cost = 2300;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 760382080855633588;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> heights = {105549004, 98587291, 141996947, 171182469, 408511367, 417066203, 455681961, 467775516, 360370885, 236692798, 227195073, 150572794, 74488701, 112975615, 253881612, 38243717, 192116917, 203374362, 402423713, 219920368, 147148231, 174683490, 448180023, 195373296, 416814995, 199956295, 440753010, 28084104, 365894169, 10387390, 219744504, 323631094, 46158165, 121680224, 69350413, 386927689, 109900712, 101057053, 263482122, 166157562, 191445547, 392105576, 375433618, 239454694, 472986139, 475133185, 103845578, 470549676, 240772354, 79902432};
    int A = 18;
    int B = 35;
    int cost = 3201;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 231993980455649514;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> heights = {16693754, 21922838, 9422247};
    int A = 0;
    int B = 1;
    int cost = 9910462;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 2037272824886096;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> heights = {621, 1071, 27423793};
    int A = 0;
    int B = 2;
    int cost = 9882931;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 1023144388468357;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> heights = {3440682, 3395078, 3322137};
    int A = 1;
    int B = 2;
    int cost = 1354623;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 70553394262250;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> heights = {546, 44033096, 499996401, 457907487};
    int A = 0;
    int B = 1;
    int cost = 9998369;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 22947147163239178;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> heights = {12885, 12005, 232811911, 167617749};
    int A = 0;
    int B = 2;
    int cost = 176;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 53143840471038985;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> heights = {457628489, 496019432, 457710219, 457628441};
    int A = 0;
    int B = 3;
    int cost = 9999616;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 864253319014125873;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> heights = {464506570, 341338014, 496511187, 341338018};
    int A = 1;
    int B = 2;
    int cost = 13414;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 690822271936776312;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> heights = {493312389, 493323971, 495131594, 493320417};
    int A = 1;
    int B = 3;
    int cost = 49212;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 974402741839029633;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> heights = {314862355, 411047536, 334148888, 199150025};
    int A = 2;
    int B = 3;
    int cost = 5;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 338010623901093534;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> heights = {1, 1, 1};
    int A = 0;
    int B = 2;
    int cost = 1;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> heights = {500000000, 500000000, 500000000};
    int A = 0;
    int B = 1;
    int cost = 10000000;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 1264999999000000000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> heights = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int A = 0;
    int B = 1;
    int cost = 10000000;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 854339284714285716;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> heights = {369719538, 283919556, 382165955, 162085816, 274091894, 429525317, 81921316, 141208960, 66304818, 377872049, 369998628, 43199715, 278895990, 231047558, 17182932, 40063272, 185161877, 324608920, 67390681, 134491153, 255919540, 424276898, 312163471, 205908615, 204394431, 32831383, 58097764, 252693926, 296922085, 249731433, 16763973, 197834468, 412502252, 264543991, 275613093, 219551891, 105995721, 113697626, 177753780, 326755750, 316204319, 104750134, 71385009, 324074896, 222645821, 213887708, 306764796, 147831294, 349471395, 73843019};
    int A = 0;
    int B = 1;
    int cost = 9184830;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 240451208714518487;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> heights = {303756648, 426940900, 420483888, 389010412, 257946535, 445120009, 244491870, 412676400, 209970930, 337066582, 221130486, 468471305, 231251574, 164420629, 23823270, 351435058, 402605025, 42120654, 294366264, 60268894, 44202471, 422720732, 401187928, 427855897, 136429294, 125299741, 37992084, 177831212, 459701230, 161786138, 193793150, 263336725, 342142665, 370834686, 22030307, 80311032, 19806358, 254333726, 468227300, 11285740, 378535066, 464769205, 55346544, 78771072, 71290587, 213625009, 354582938, 83985512, 142657329, 75737501};
    int A = 0;
    int B = 49;
    int cost = 511;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 69210730041103777;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> heights = {499916762, 499893157, 499965639, 499891093, 499930911, 499972927, 499891425, 499938178, 499879957, 499870546, 499880383, 499931576, 499964387, 499980792, 499936064, 499980454, 499923994, 499899701, 499989689, 499893365, 499961367, 499894132, 499911627, 499966688, 499970266, 499925188, 499915891, 499934157, 499977075, 499980649, 499994167, 499878548, 499975925, 499882398, 499949721, 499971382, 499973500, 499974493, 499970806, 499930335, 499894057, 499903773, 499894560, 499985743, 499906097, 499879517, 499965715, 499912764, 499916089, 499979120};
    int A = 48;
    int B = 49;
    int cost = 9999997;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 854146077985497473;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> heights = {5, 5, 5, 5};
    int A = 0;
    int B = 3;
    int cost = 10;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 190;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> heights = {5, 50, 1, 50, 5};
    int A = 0;
    int B = 4;
    int cost = 10;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 275;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> heights = {5, 50, 1, 50, 5};
    int A = 0;
    int B = 4;
    int cost = 1000;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 10540;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> heights = {5, 50, 1, 50, 5};
    int A = 1;
    int B = 3;
    int cost = 1000;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 104428;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> heights = {4, 1, 1, 1000, 1, 1};
    int A = 0;
    int B = 4;
    int cost = 1;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> heights = {157, 10, 157, 979797, 152152152, 156, 4, 77, 157, 79};
    int A = 3;
    int B = 4;
    int cost = 123;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 13041277280686205;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> heights = {346455317, 453638062, 491871419, 297060164, 426458223, 53746370, 422461742, 231053793, 309679268, 297959075, 76653026, 277375296, 411684823, 427164497, 257399925, 224643292, 114988354, 457289888, 51199847, 199807287, 110648220, 303379857, 435712111, 245040291, 401790144, 260999362, 6953083, 385721020, 438059362, 434000869, 481788278, 70215282, 135651128, 68577856, 448298562, 11191117, 408997160, 407134756, 10781024, 267655550, 183460325, 284786399, 222774818, 193425138, 51658225, 117130718, 352764522, 342521474, 147243649, 265160879};
    int A = 2;
    int B = 44;
    int cost = 9986066;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 234928185619577559;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> heights = {7, 3, 3, 6, 7, 6, 3, 2, 5, 1, 3, 3, 6, 8, 8, 4, 1, 5, 7, 6, 5, 8, 1, 4, 5, 4, 6, 5, 1, 3, 5, 8, 3};
    int A = 22;
    int B = 31;
    int cost = 15;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 210;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> heights = {391176358, 391176547, 289, 39649, 417, 285, 27956, 391172141, 290, 357, 1842, 390692256, 391176498, 6884874, 390153448, 24315552, 391174211, 282, 390971631, 282, 391176492, 285, 20759, 282, 91902, 2520, 391122044, 53652482};
    int A = 10;
    int B = 14;
    int cost = 9999941;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 102971044475995512;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> heights = {65573, 65506, 65582, 10685, 64925, 1666, 65527, 65170, 65585, 63020, 8, 65254, 13, 65585, 65583, 37, 65585, 65584, 22205, 2202, 65585, 5, 19};
    int A = 7;
    int B = 14;
    int cost = 9319838;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 1230357833769;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> heights = {499999923, 499999919, 499999904, 499999915, 499999903, 499999920, 499999902, 499999908};
    int A = 1;
    int B = 6;
    int cost = 5;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 833333042333358683;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> heights = {323, 188, 246, 153, 462, 17, 295, 266, 366, 25, 358, 327, 163, 359, 303, 423, 322, 187, 385, 442};
    int A = 13;
    int B = 15;
    int cost = 9746891;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 7622521672;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> heights = {158252, 108502, 2392622, 1739036, 757334, 3714360, 2140478, 4421745, 2853868, 3194548, 3782805, 4127468, 878803, 2205332, 93864, 1249838, 1348444, 4408044, 2056861, 4231359, 2850352, 80940, 4544070, 3154096, 4470180, 4670396, 3053844, 3378920, 4574460, 370750, 3638480, 2909656, 2284168, 61992, 2179678, 4328572, 2926805, 1894844, 1508992, 209750, 1164117, 2803552, 1828264, 3080619, 4899620, 2212315, 429102, 4920345, 628616, 2115640};
    int A = 26;
    int B = 43;
    int cost = 9969543;
    BuildingReorganization* pObj = new BuildingReorganization();
    clock_t start = clock();
    long result = pObj->theMin(heights, A, B, cost);
    clock_t end = clock();
    delete pObj;
    long expected = 95148335816691;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653720&rd=14724&pm=11777
********************************************************************************
#include <stdio.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
using namespace std;
 
class BuildingReorganization
{
  public:
  long long real_calc(vector<long long> G, int remain) {
    G.push_back(99999999999LL);
    long long res = 0;
    int n = G.size();
    sort(G.begin(), G.end());
    for (int i=0; i<n; i++) {
      if (!remain) break;
      int now_cover = min((long long)remain, (i+1)*(long long)(G[i+1]-G[i]));
      remain -= now_cover;
      int same_cover = now_cover / (i+1);
      int partial_cover = now_cover % (i+1);
      res += (G[i]*(long long)same_cover+same_cover*(long long)(same_cover-1)/2)*(i+1);
      res += (G[i]+same_cover) * (long long)partial_cover;
    }
    return res;
  }
  
  long long calc(vector<int> H, int target, int ll, int rr, int A, int B, int cost) {
    vector<long long> G;
    for (int i=ll; i<=rr; i++)
      if (i != A && i != B) G.push_back(abs(target-i)*cost + H[i]);
    return real_calc(G, H[target]);
  }
  
  long long theMin(vector <int> H, int A, int B, int cost)
  {
    int n = H.size();
    long long def = H[A]*(long long)(H[A]-1)/2 + H[B]*(long long)(H[B]-1)/2;
    long long res = -1;
    for (int i=0; i<n; i++) {
      if ((i==A) || (i==B)) continue;
      int p1_idx = 0;
      int p4_idx = H[A];
      if (i==0 || (A==0 && i==1) || (A==0 && B==1 && i==2)) p1_idx = H[A];
      while (p1_idx+100 < p4_idx) {
        int p2_idx = (p1_idx * 29LL + p4_idx) / 30;
        int p3_idx = (p1_idx + p4_idx * 29LL) / 30;
        H[A] -= p2_idx; long long s2 = calc(H, A, 0, i-1, A, B, cost); s2 += p2_idx*(long long)abs(i-A)*cost + H[i]*(long long)p2_idx + p2_idx*(long long)(p2_idx-1)/2; H[i] += p2_idx;
        s2 += calc(H, B, i, n-1, A, B, cost); H[i] -= p2_idx; H[A] += p2_idx;
        H[A] -= p3_idx; long long s3 = calc(H, A, 0, i-1, A, B, cost); s3 += p3_idx*(long long)abs(i-A)*cost + H[i]*(long long)p3_idx + p3_idx*(long long)(p3_idx-1)/2; H[i] += p3_idx;
        s3 += calc(H, B, i, n-1, A, B, cost); H[i] -= p3_idx; H[A] += p3_idx;
//        printf("%d [%d] [%d] %d : %lld %lld\n", p1_idx, p2_idx, p3_idx, p4_idx, s2, s3);
        if (s2 > s3) p1_idx = p2_idx; else p4_idx = p3_idx;
      }
      for (int j=p1_idx; j<=p4_idx; j++) {
        H[A] -= j; long long s2 = calc(H, A, 0, i-1, A, B, cost);
//        printf("i = %d j = %d s2 = %lld\n", i, j, s2);
        s2 += j*(long long)abs(i-A)*cost + H[i]*(long long)j + j*(long long)(j-1)/2; H[i] += j;
//        printf("i = %d j = %d s2 = %lld\n", i, j, s2);
        s2 += calc(H, B, i, n-1, A, B, cost); H[i] -= j; H[A] += j;
//        printf("i = %d j = %d s2 = %lld\n", i, j, s2);
        if (res == -1 || res > s2) res = s2;
      }
    }
    return def + res;
  };
};

********************************************************************************
*******************************************************************************/