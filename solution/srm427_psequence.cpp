/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8785
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

class PSequence {
public:
    int count(vector<int> S, int p);
};

int PSequence::count(vector<int> S, int p) {
    int ret;
    return ret;
}


int test0() {
    vector<int> S = {-1, 0, 1, 2, 3};
    int p = 10;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> S = {6, 2};
    int p = 4;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> S = {1, 2, 3, 4};
    int p = 3;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> S = {4, 6, 8, -3, 7};
    int p = 2;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> S = {0, -5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 213, 123, 122, 21, 2136, 4534, 2312, 12312, 34543, 2765, 56756, 462346, 46434, 4235, 2353, 352342, 23433};
    int p = 4;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 681816692;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> S = {796052, 191918, 480107, -830356, -895423, -515041, 591413, -107359, -433144, -199405, 641543, 926798, 579866};
    int p = 4;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 470634624;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> S = {807395, 227594, 972638, 777467, -103510, -71395, 247016, 250862, 214823, -410032, 357815};
    int p = 6;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 86400;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> S = {-252280, -368452, -303262, -374344, 441497, -359356, -210649, -267136, -213643, 740639, 653444, 951005, 329633, 929117, 69836, 903329, 685898, 219437, -612394, -20521, -67453, 940187, -93178, -90208, -280285, 282425, -659722, 479129, -509179};
    int p = 64;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 224458919;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> S = {-131224, -835102, -195724, 727175, -618208, -933280, -199303, 166328, -649837, -810067, -656524, 520925, -529534, 878546, 560873, 412826, -17371, -390262};
    int p = 4;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 965607765;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> S = {-220576, -546970};
    int p = 9;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> S = {935846, 307874};
    int p = 2;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> S = {-225805, 108893, -297289, -378832, -649054, -987451, 946373, 145268, 879800, 836174, 205970, -281833, -976081, 562139, 279278};
    int p = 450;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 266971431;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> S = {60875, 711167, 786086, 740843, -296986, -202264, -450232, 1280, 656498, -101014, 888056, -451798};
    int p = 4;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 10160640;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> S = {356048, -549295, 650300, 69389, -367054, -934147, 840023, 567719, 164588, 633239, -149836, -710620, -388705, 231293, -555004, -339886, -567820, 310628, 943397, -460231};
    int p = 5;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 10088554;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> S = {174539, 95375, -729121, 453926, -324496, 83600, -46240, -302272, 895631, -37600, -673405, 168968, -596572, -87658, -160654};
    int p = 2;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> S = {866570, 591971, -118828, 824093, 314495, -308128, 413843, 832694, 772121, -961372, 915728, 742880, -199069, -806224, 909650, 824795, -603160, 370331, -681574, 992786, 320339, 582509, -741553, 21278, 309980, -978769, 144269, 416462, 101444};
    int p = 240;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 194500727;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> S = {-4399, -355810, -25468, -19537, 406946, 318539, -90172, 493169, -862270, -562051, -743431, -993886, -308461, 259397, -78883, -631336, 347303, -100735, -117679, -823180, 612998, -24130, -606178, 195803, -384691, 471371, 811568, -449575, -883192, -734176};
    int p = 1;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> S = {181481, 576347, 202304, -378526, -74698, 282647, 776576, -246487, -240208, 329660, 509207, -288685, 476582, -231022, 355907, 754679, 300353, 520178, 421304, 130955, -965800, -219067, -459706, -212596, -431419, 528581, 624935, 773531, -1105};
    int p = 4;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 20947336;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> S = {415196, 234992, -82645};
    int p = 3;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> S = {542762, 967871, 692651, -360223, 828677, 134255, 600782, 183944, -839869, -280540, 470462, 281864, 953960, 150617, 135449, 920327, 551579, 66218, -828760, 727688, -596494, 254825, -307492, 744857, -56908};
    int p = 3;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> S = {-835693, -559921, -314092, -388306, -862930, -75367, -424033, -117853, 105128, 479021, -829540, -697141, 871886, -528046, 181295, -86497, -216775, -549826, 241859, 453632, 692300, -901396, -510553};
    int p = 9;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 48165572;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> S = {-318037, 520736, 409835, -611809, -451900, 831263, -972661, 40232, -466693, -660385, 568025, 738944, -96664, -319633, 897626, 491288, -275221, -251767, -346738, 884843, -482533, -979975, 233573};
    int p = 6;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> S = {-236275, -170533, 951341, 881867, 911969, 314765, -507226, 828635, 565226, -397075, 403328, 586451, -48382, -322762, 4949};
    int p = 6;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> S = {-849022};
    int p = 720;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> S = {68879, 9020, 949025, -210316, -112690, 697934, 144095, -655231, -32533, -809809, -446773, 650615, -162892, 116870, -579526, 142628, 826535, 113765, -289900, -627478, -97585, -440488, 16058, 159206, -998077, -18019, -312427, 383924, -305047};
    int p = 7;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 133068197;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> S = {941915, -967405, 964460, 407921, -400426, 74354, -28243, 26747};
    int p = 848;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 40320;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> S = {-522859, -43597, 148781, 689315, -700258, -429640, 416747, -108715, -233230, -415915, 295937, 976535, -496180};
    int p = 2;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
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
    vector<int> S = {-516682, -998515, -95038, -718645, -471073, 569426};
    int p = 317;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 720;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> S = {505847, 188978, 648062, -680311, 461450, -672691, 842465, 366989, 182816, -408082, 919886, 76772, 588725, -525229, -295960, -158836, -74023, -215098, -186445, -915157, 836804, -258592, 686015, -266839, -832651, 796910};
    int p = 5;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 122824684;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> S = {-40771, 864890, -169198, -33088, -400552, -632734, 978188, 684899, -243901, 652877, -230890, -141430, -109201, -674854, 37460};
    int p = 484;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 266971431;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> S = {-22621, -518914, -952639, 876017, -774244, -672391};
    int p = 874;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 720;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> S = {621245, -505465, 330074, -596077, -452671, 599798, -290455, -218221, -283546, -112915, 863849, -201565, 234326, -391537, 719609, 160958, -690001, -393148, -892441, 886034, -560776, 316385};
    int p = 535;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 781471490;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> S = {298187, -682615, 960419, 587753, 591524, 610790, -795952, 935081, 871985, 598952, -466615, -317902, 421187, 617231, -745543, 963503, -486388, -137299, -355399, 471461, 745202, -311311};
    int p = 7;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 334149367;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> S = {360986};
    int p = 7;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
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
    vector<int> S = {209426, -30286};
    int p = 5;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> S = {-866746, -61450, 913577, -470974, -303577, -142063, -42427};
    int p = 1;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> S = {-713977, 486746, -525952, -162820, -336223, -868915, 337970, 381416, -855649, -644374};
    int p = 2;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> S = {-438481, 136097, 842492, -52921, -175705, -834829, 2966, 213242, -44203, -204355, 291671, -677719};
    int p = 6;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> S = {150110, 909311, -125227};
    int p = 5;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> S = {342713, -716071, 830861, -276226, 489320, 775982, 991529, -352750, -281911, 681437, 708977, 400991, 709754, -571969, 170099, -630571, -216808, -925492, 457829};
    int p = 916;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 182701988;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> S = {-802567, -187021, 709586, -848086, 178673, 246965, -511531, 3140, -715066, 89774, 601055, 382634, 646199, 293465, -800614, 772838, 109913, 950564, -145174, -548377, 373367, -120319, -876445, -109411};
    int p = 1;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> S = {-520000, -951823, -925702, 612683, 208151, 909899, -158818, 312704, 212555, 862391, 473564, -405550};
    int p = 9;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 1900800;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> S = {652790, 233264, 791582, -511906, 279665, -624499, 905702, -663952, -401671, 992417, -607561, 815627, -242680, 552512, -221776, 337910, 425660};
    int p = 4;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 1160923153;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> S = {-281158, 526175, -400882, -389392, -862114, 122915, 962894, 762689, 393782, 825668, -846910, 111491, 186947, -654280, 66200, 784514};
    int p = 4;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 527847412;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> S = {300035, 354671, 866105};
    int p = 2;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
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
    vector<int> S = {934862, -166525, 395843, 105887, -880666, 203153, 195422, -903742, 419387, -55450};
    int p = 7;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 947520;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> S = {489179, 79955, 641582, 98039, 506447, -253462, 903155, -385795, 85460, 582197, -111484, 608630, 796832, -383254, -988273, -47485};
    int p = 137;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 1048107835;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> S = {615791, 316313, 751280, -393226, 765077, -967129, -439063, 965264, -984949, 701399, -410995};
    int p = 5;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 7871040;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> S = {667931, -131704, -481150, 400202, 91562, -317416, 862811, 163856, -426985, 458951, -29929, 470003, -579670, -951187, -594688, -276919, 600338, -688651, 611363, -818482, -451306, -406753, -860119};
    int p = 7;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 167016689;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> S = {651803, -638923, 341954, 643616, -201832, 831212, 264947, -171451, -771727, -928426, -578641, -509971, 852797, 348176, -344485};
    int p = 693;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 1219029553;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> S = {-376519, 45341, 965933, -278269, -404173, -762610, -51298, -972505, 725198, -760369, -903811, -729733, -694786, -864691, 423194, 737270, -62257, -91342};
    int p = 1;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> S = {-644074, -659701, -736357, 989750};
    int p = 8;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> S = {1, 2, 3};
    int p = 2;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> S = {-39687, -281936, -882818, 26407, -566116, -381732, -463021, 31625, 407388, 443584, 268996, 882876, -312395, -905282, 876727, 539349, 177195, 745574, -558322, -396565, 538984, -663682, -543516, -174447, 528229, 758347, 142477, 596116, 722187, 212599};
    int p = 9;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 53652803;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> S = {171317, -105894, -719045, 336427, -744666, 687127, -560935, -230358, 699209, -781040, -479805, 958797, 929564, -425375, 424731, 122937, -587136, 981475, -904134, 936173, -199634, 876557, 142145, -50860, 425576, 340477, -341213, 932327, 174451, 535960};
    int p = 10;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 379672316;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> S = {0, 1, 2, 3, 4, 185, 5, 186, 6, 187, 368, 7, 188, 369, 550, 8, 189, 370, 551, 732, 913, 9, 190, 371, 552, 733, 914, 1095, 1276, 1457};
    int p = 181;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 342434875;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> S = {0, 1, 2, 3, 4, 5, 6, 10, 11, 12, 13, 14, 15, 20, 21, 22, 23, 24, 30, 31, 32, 33, 40, 41, 42, 50, 51, 60, 61, 70};
    int p = 10;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 1215150421;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> S = {1, 11, 21, 2, 12, 22, 32, 3, 13, 23, 33, 43, 4, 14, 24, 34, 44, 54, 64, 5, 15, 25, 35, 45, 55, 65, 75, 85, 95, 105};
    int p = 10;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 823292257;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> S = {1, 21, 2, 22, 3, 23, 4, 24, 5, 25, 6, 26, 7, 27, 8, 28, 9, 29, 10, 30, 11, 31, 12, 32, 13, 33, 14, 34, 15, 35};
    int p = 20;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 761219535;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int p = 5;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 796532187;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> S = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 39, 42, -42, 1337, 666, 12835, 65, 71, 101, 102, 103, 104, 105, 106, 107, 108, 110};
    int p = 42;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 1154946839;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15};
    int p = 15;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 761219535;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int p = 30;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 767765455;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> S = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int p = 12;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 18950806;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> S = {8744, 6025, 7384, 3333, 27355, 31287, 30144, 22970, 28604, 22231, 6479, 20737, 14664, 27723, 493, 7796, 13385, 25984, 6888, 31738, 32658, 16462, 7108, 28631, 16879, 7071, 11730, 11237, 7260, 12500};
    int p = 298;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 305058461;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> S = {-15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int p = 15;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 761219535;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int p = 1000;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 767765455;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int p = 33;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 767765455;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> S = {1, -1};
    int p = 1000;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> S = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    int p = 1000;
    PSequence* pObj = new PSequence();
    clock_t start = clock();
    int result = pObj->count(S, p);
    clock_t end = clock();
    delete pObj;
    int expected = 767765455;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10597114&rd=13518&pm=8785
********************************************************************************
#include <cassert> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <vector> 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <map> 
#include <set> 
#include <list> 
#include <deque> 
#include <queue> 
using namespace std; 
 
#define FOR(i,a,b)  for(int i=(a);i<(b);++i) 
#define REP(i,a)    FOR(i,0,a) 
#define ZERO(m)     memset(m,0,sizeof(m)) 
#define ALL(x)      x.begin(),x.end() 
#define PB          push_back 
#define S           size() 
#define LL          long long 
#define LD          long double 
#define MP          make_pair 
#define X           first 
#define Y           second 
#define VC          vector 
#define VI          VC<int> 
#define VS          VC<string> 
 
 
#define MD 1234567891 
 
map< VI, int > mp; 
 
int go(VI &v) { 
  if (mp.count(v)) return mp[v]; 
  int tot = 0; 
  FOR(i, 1, v.S) tot += v[i]; 
  if (tot == 0) return mp[v] = 1; 
  LL rv = 0; 
  int t = v[0]; 
  FOR(i, 1, v.S) if (v[i]) { 
    v[i]--; 
    v[i - 1]++; 
    v[0] = i - 1; 
    rv += (LL)go(v) * i * (v[i] + 1 - (i == t ? 1 : 0)); 
    v[i]++; 
    v[i - 1]--; 
  } 
  rv %= MD; 
  //print(v); 
  //DB(rv); 
  v[0] = t; 
  return mp[v] = rv; 
} 
 
class PSequence {public:int count(vector <int> X, int p) { 
  mp.clear(); 
  REP(i, X.S) { 
    X[i] = ((X[i] % p) + p) % p; 
  } 
  VI v(100, 0); 
  REP(i, p) { 
    int t = 0; 
    REP(j, X.S) t += X[j] == i; 
    if (t) v[t]++; 
  } 
  v[0] = -1; 
  while (v[v.S - 1] == 0) v.pop_back(); 
  int rv = go(v); 
  cout << mp.S << endl; 
  return rv; 
} 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/