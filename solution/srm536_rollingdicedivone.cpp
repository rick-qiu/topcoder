/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11797
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

class RollingDiceDivOne {
public:
    long mostLikely(vector<int> dice);
};

long RollingDiceDivOne::mostLikely(vector<int> dice) {
    long ret;
    return ret;
}


int test0() {
    vector<int> dice = {6, 6, 8};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> dice = {10};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> dice = {2, 3, 4, 5};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> dice = {1, 10, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> dice = {382828264, 942663792, 291832707, 887961277, 546603677, 545185615, 146267547, 6938117, 167567032, 84232402, 700781193, 452172304, 816532384, 951089120, 448136091, 280899512, 256093435, 39595226, 631504901, 154772240};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 4366828428;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> dice = {3, 1, 8, 1, 1, 3};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> dice = {8434477, 3643302, 7333514, 1881060, 8496626, 7162470, 1991420, 109224, 9112133, 2730336, 737834, 1980326, 9325661, 660889, 5497958, 7237794, 5801384, 568748, 1292605, 3072591, 4579712, 1695225, 3920841, 7703497, 7585676, 3293817, 3236499, 9695036, 1388854, 3415474, 6167458, 862242, 7883204, 2092229, 8034980, 158625062};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 158625097;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> dice = {7035704, 8492338, 7943035, 6968290, 3149526, 8777974, 1630767, 5627683, 9158620, 51011, 3796725, 6403123, 8681654, 5230820, 8771917, 8459186, 2384424, 4548511, 2795347, 1391980, 8647611, 8826584, 1401780, 427718, 3156546, 133758850};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 133758875;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> dice = {10, 16, 8, 5, 2, 1, 6, 2, 2, 1, 9, 13, 13, 10, 14, 9, 9, 1, 7, 15, 3, 2, 2, 14, 2, 12, 4, 10, 9, 13, 5, 16, 10, 11, 10, 7, 5, 8, 7};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 171;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> dice = {1507343, 631083, 7538859, 98296, 9892695, 4103193, 6825281, 8611108, 9569651, 1345594, 6090929, 6748442, 1903974, 5747325, 5280508, 4742705, 9306346, 2896264, 8739346, 6457664, 5735812, 8686801, 4161782, 903422, 8756675, 1105868, 9723277, 8194313, 5579668, 3543486, 6634249, 3105922, 6346949, 7593393, 8003308, 6640085, 202751580};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 202751616;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> dice = {9591318, 2177523, 2742162, 2696002, 1480455, 4762843, 7628323, 6529534, 3523766, 237642, 1798974, 850218, 9772483, 9951579, 4943559, 9612649, 9887424, 2601088, 1110580, 9181324, 37937, 192734, 9917020, 9949313, 5621298, 9257796, 916328, 6296793, 2985144, 9936841, 5146854, 4108532, 914927, 6935682, 594044, 9262028, 3688515, 1277789, 1525945, 3307482, 3139963, 2487966, 330503, 5455912, 3681023, 208047770};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 208047815;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> dice = {1, 1, 3, 7, 8, 5, 8, 8, 3, 8, 5, 4, 5, 7, 1, 7, 2, 1, 6, 1, 1, 1, 3, 3, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 62;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> dice = {600023, 2364769, 5021623, 4544332, 3092497, 1135927, 16759166};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 16759172;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> dice = {762681672, 279100644, 354373797, 112997939};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 746472381;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> dice = {3197, 3243, 1465, 2394, 1564, 3573, 1709, 3974, 172, 2779, 2265, 1501, 2775, 3653, 2840, 2928, 532, 3106, 594, 974, 389, 1510, 957, 3542, 3594, 331, 1812, 1901, 2368, 3539, 209, 3976, 2837, 1885, 308, 3035};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 38733;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> dice = {4, 15, 5, 6, 13, 1, 10, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> dice = {163350384, 45915387, 40766987, 16787655, 728703, 696857, 69988, 75435, 8556, 3956, 4985, 325, 206, 374, 62, 36, 22, 1, 2, 2, 1, 1, 268409904, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 268409947;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> dice = {851857, 619043, 83936, 320044, 997291, 622725, 583397, 340654, 846748, 465214, 690687, 916962, 885808, 674853, 463622, 559267603, 173556, 192097, 709003, 722812, 346890, 840492, 648817, 994842, 207245, 502458, 659942, 947485};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 16308481;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> dice = {25797199, 17802965, 1164027, 79371, 41209, 14343, 6476, 745, 30, 222, 899, 85, 18, 5, 1, 1, 1, 44907581, 1, 1, 1, 1, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 44907603;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> dice = {4816509, 4292316, 8859095, 8870045, 3551529, 2132211, 6048361, 3543614, 1569375, 8066805, 3887117, 4437682, 5190355, 5014635, 9575653, 9704382, 6538219, 2258732, 7666198, 463091, 7312714, 7106848, 4957795, 497600, 3174521, 2045599, 8617447, 1500705, 141699127};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 141699154;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> dice = {154223884, 548163314, 7381068, 161805, 158022, 710193397, 103384, 1852, 25};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 710193355;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> dice = {7235518, 2730738, 838580, 7453598, 4701657, 4775792, 1362049, 6260693, 7597158, 6526021, 7937072, 3227867, 9403716, 359062, 8579441, 5359536, 8988272, 5468299, 6628605, 9630422, 226522, 6833590, 122124186};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 122124208;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> dice = {622671180, 105054, 233447, 625958, 885091, 562228, 288384, 62942, 907920, 151449, 277000, 625957, 329242, 643003, 877137, 739002, 120764, 31176, 409900, 177695, 491905, 65317, 142871, 520361, 479176, 300936, 997076, 434598, 813671, 786867, 503509, 564138, 648748, 300238, 141842, 228024, 477887, 464351};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 16414865;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> dice = {796072, 26512845, 308030, 417115, 402781, 622391, 332061, 534505, 952768, 913532, 37064, 69105, 618203, 451803, 520641, 364733, 795737, 110630, 451027, 99546, 190018, 844274, 557599, 420575, 32338, 394664, 164229, 972493, 800564, 282872, 494443, 862226, 803616, 287022, 422445, 775784, 491150, 793180, 208481, 115483, 847765, 15095, 425989, 652007, 172581, 650110, 820936};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 22295684;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> dice = {536213, 2499697, 8246442, 1851530, 7771440, 8257456, 7777672, 8151357, 4701354, 3603456, 6689331, 4066184, 5017654, 6350453, 143233, 3682005, 1075628, 6857319, 4708709, 7660450, 3055109, 613243, 9853237, 3850909, 3025890, 5215051, 9437446, 9039191, 2027078, 8306097, 154070804};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 154070834;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> dice = {706477088, 202587452, 41434996, 36696012, 9337, 101641, 13120, 19898, 28, 5, 5, 2, 1, 1, 1, 1, 1, 1, 1, 1, 987339573, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 987339594;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> dice = {123270, 615763767, 877873, 659964, 244110, 641561, 182546, 65717, 451223, 185889, 691764, 831887, 276381};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5232186;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> dice = {608, 872, 945, 153, 476, 225, 164, 129, 676, 965, 197, 883, 778, 923, 596, 862, 926, 228, 280, 604, 852, 828, 50, 599, 171, 96, 799, 41, 947, 779, 407, 819, 902, 370, 741, 184, 570, 470, 555, 369, 230, 401, 328, 654, 852};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 12274;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> dice = {388329, 957024, 792902, 415072, 405142074, 166273, 915559, 601449, 349113, 715206, 397335, 508127, 427276, 597648, 907848, 442688, 583511, 63378, 897602, 970886, 578202, 513964, 217233, 694346, 672870, 134616, 718540};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 14626998;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> dice = {43976, 72924, 9750, 235735, 228447, 109317, 70170, 204435, 90339, 192947, 124998, 218758, 117518, 259897, 44302, 130226, 190989, 124556, 140152, 230881, 68069, 8603, 9964, 52134};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 1489555;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> dice = {756358086, 3349876, 14266538, 32842585, 1791640, 4057731, 1071472, 73964, 814609048, 10613, 461713, 9330, 274410, 30396, 9868, 817, 9, 7, 5, 4, 3};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 814609068;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> dice = {8, 110, 443, 518, 479, 970, 199, 526, 450, 146, 608, 177};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 2323;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> dice = {453745503, 57268701, 10468709, 529155003, 3337401, 1698269, 1402834, 415559, 381343, 317121, 26351, 69666, 19748, 3226, 381};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 529154813;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> dice = {373671830, 145718657, 847123763, 195886231, 58105329, 38998721, 20517833, 388781, 3454699, 2156040};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 838898122;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> dice = {30, 46, 32, 61, 20, 56, 10, 45, 36, 60, 24};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 215;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> dice = {356526993};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> dice = {1948, 90, 319, 263, 1113, 691, 613, 1798, 735, 1037, 1840, 1315, 1671, 2023};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 7735;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> dice = {332989, 457513, 931032, 507231, 338347, 55418, 105808, 939772879, 74343, 860358, 427568, 429412, 825074, 515206, 46742, 957784, 867574, 965123, 141706, 566624, 535472, 625328, 115896, 328218, 314616, 1203, 322376, 358754, 138734, 795396, 175836, 823427, 441475, 316846, 608357, 7818, 769377, 644659, 776546, 967991};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 18474178;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> dice = {302861, 50982, 719886, 63078, 295497, 59074, 120616, 822636, 971119, 468102, 848265, 938938, 799551, 269718, 509279, 169166, 803207, 777905, 17337, 430702, 282002, 602739, 250903310, 800321};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 11122982;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> dice = {6800278, 6448778, 8634603, 9804385, 9125398, 2834433, 1991823, 9619525, 3416313, 8556048, 9427495, 8674547, 7064538, 8243239, 5824648, 6369955, 4849695, 7203644, 5555028, 2913222, 5377727, 4320866, 4024583, 1700408, 560931, 2372741, 1891505, 5475202, 1853098, 9569088, 7305534, 3706952, 7766855, 189283053};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 189283086;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> dice = {775204, 133679, 483777, 681499435, 208296, 398520, 889917, 950459, 420047, 180336, 543611, 95316, 931345, 3163, 116476};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 6130147;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> dice = {648573014, 15169618, 16440902, 21652537, 152432, 128526, 312, 808, 978, 4965, 12, 533, 353, 60, 49, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 702125096, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 702125142;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> dice = {278772524, 106387404, 646959, 13975719, 416100725, 16007587, 128779};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 415918973;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> dice = {11414395, 691176, 14828624, 3858065, 11160209, 97841, 526486, 348740, 5392595, 12865376, 3151752, 5781446, 13591661, 10030765, 14198212, 4370183, 8657902, 7263124, 11511853, 15607334, 8181704, 3246948, 16181062, 1998391, 1612312, 4067342, 10039234, 15012127, 11751285, 5762178, 2976084, 14901377, 10073338};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 130575577;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> dice = {431630, 913198, 182109, 304352, 756863, 583316, 155048, 345616, 850165, 646119, 363085, 182341, 350764, 213525, 229102, 344426, 830194, 890250, 530987, 593089, 325802, 131434, 848703, 656053, 699132220, 959418, 377849, 973964};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 13969403;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> dice = {5432340, 3481963, 4635686, 5848349, 6658664, 23669, 2770327, 6319467, 7428337, 5925419, 2923326, 2464489, 6785589, 3781353, 2769149, 8005505, 3586749, 1786477, 341218, 411379};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 40689737;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> dice = {959603, 228324, 102856, 824811, 857627, 720592, 433019, 632941, 546400, 997492, 227930, 395289, 787083, 607393, 84414, 834, 292086, 349549, 157178, 520307, 837063, 129566, 131430, 365997, 183221834, 8834, 351047, 704011, 447338, 987356, 784156, 151751, 318988, 720761};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 15664027;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> dice = {1074057, 4169760, 9594646, 121133, 8524294, 3787303, 6318510, 6538406, 1781553, 2894114, 1161747, 3138046, 1501721, 768759, 1439382, 5215862, 8520490, 4325197, 70874964};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 70874981;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> dice = {194, 90, 116, 87, 114, 252, 220, 79, 165, 32};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 679;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> dice = {304486692, 113925193};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 113925194;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> dice = {2001, 710, 669, 1454, 973, 39, 1371, 1952, 1301, 1821, 1942, 1957, 625, 433, 1612, 1761, 1343, 441, 712, 429, 839, 1541, 1564, 595, 2000, 48, 1551, 1252, 488, 153, 171, 648, 686, 438, 1927, 1915, 2008, 1148, 1151, 1554, 1222, 463, 735, 750, 403, 1592, 134, 664, 121, 1839};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 26598;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> dice = {7579326, 1097992, 8039808, 2733066, 9320030, 5916346, 6883172, 1905335, 4940250, 8445752, 5599700, 5320284, 8215564, 9796887, 227099, 7347825, 292516, 5546609, 3518658, 2449956, 3424795, 6219345, 42900, 1951641, 8893906, 5374024, 7582667, 1460306, 4000583, 6960412, 4109017, 5718186, 1337842, 4761760, 4021460, 7201148, 8912834, 6260767, 9047038, 2041185, 204497952};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 204497992;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> dice = {1, 3, 2, 3, 3, 2, 1, 2, 1, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> dice = {4468644, 4684344, 8607611, 9911514, 8516230, 534494, 2241626, 8511326, 9386864, 4387891, 6378783, 9501466, 6649493, 6686051, 1614298, 5818223, 5824002, 8624056, 6188225, 3070452, 5259615, 7900492, 7675898, 5447410, 7258565, 2208984, 2323334, 5175048, 8595894, 9826986, 183277791};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 183277820;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> dice = {37, 168, 61, 77, 168, 129, 1, 66, 79, 139, 119, 107, 121, 63, 43, 120, 176, 181, 117, 244, 46, 84, 193, 193, 60, 128, 208, 184, 144, 101, 253, 208, 57, 32, 55, 169, 114, 22, 225, 255, 67, 8, 102, 219, 48};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 2718;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> dice = {144888112, 86703353, 541930872, 198408782, 71228343, 14338780, 23158865, 2880163, 51174, 265877, 1606, 4416, 777, 451, 74, 18, 81, 7, 9};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 541930889;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> dice = {1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> dice = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 25000000025;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> dice = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> dice = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> dice = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 1226;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> dice = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000000, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000049;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> dice = {1, 1, 1, 65293, 90522, 37892, 1, 18705, 812833957, 1, 90151, 11757, 24098, 16011, 89242, 79490, 63239, 1, 13767, 73858, 8315, 773998465, 26574, 1, 7141, 65376, 13116, 7997, 53510, 83628, 73837, 1, 1, 45603, 1159, 96112, 62744, 66258, 55594, 37627, 66599, 14667, 61381, 1, 45059, 1, 1, 27147, 87426, 29433};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 775708806;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> dice = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> dice = {888, 3, 4, 5, 6};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> dice = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 536870912;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> dice = {1, 1, 2, 2, 2, 2, 8, 10, 12, 80};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 41;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> dice = {1, 1, 2, 2, 6, 6, 6, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> dice = {1, 1, 3, 6, 4, 3, 4, 3, 20};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> dice = {3, 10, 23};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> dice = {2, 4};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> dice = {100000000, 90000000, 10000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 90010001;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> dice = {6, 6, 8};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> dice = {2, 10, 100};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> dice = {3, 10, 1, 4, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> dice = {1, 2, 100, 3};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> dice = {2, 2, 10};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> dice = {1, 1, 2, 100, 1000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 105;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> dice = {2, 10, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> dice = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 100000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 49000001;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> dice = {1000, 1000000, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 1001001;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> dice = {123, 1234, 2345};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 1358;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> dice = {2, 3, 4, 5, 6, 7, 8, 33};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> dice = {50, 2, 2, 2, 2, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> dice = {2, 8, 32};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> dice = {2, 8};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> dice = {382828264, 942663792, 291832707, 887961277, 546603677, 545185615, 146267547, 6938117, 167567032, 84232402, 700781193, 452172304, 816532384, 951089120, 448136091, 280899512, 256093435, 39595226, 631504901, 154772240};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 4366828428;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> dice = {1, 2, 7};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> dice = {12, 1, 3, 3, 5, 6, 7, 8, 21, 22, 23, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 25, 23, 21, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 216;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> dice = {1, 1, 1, 2, 10, 100, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 116;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> dice = {1, 2, 3, 4, 9};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> dice = {5, 2, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> dice = {2, 2, 100};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> dice = {2, 100, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> dice = {2, 2, 5};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> dice = {4, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> dice = {10, 100};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> dice = {2, 5, 8};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> dice = {2, 10};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> dice = {2, 3, 9};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> dice = {1, 1, 2, 2, 5, 5, 100};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> dice = {10, 2, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> dice = {5, 1, 9, 1, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> dice = {2, 5};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> dice = {2, 9};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> dice = {2, 100};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> dice = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 1226;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> dice = {2, 2, 2, 2, 10};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> dice = {4, 100};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> dice = {2, 2, 3, 10};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> dice = {10000, 3, 1, 4, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> dice = {1, 2, 100};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> dice = {2, 2, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> dice = {2, 2, 2, 100};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> dice = {2, 3, 7};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> dice = {2, 4, 47, 2, 3, 4, 5, 8, 4, 5, 8, 5, 4};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 55;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> dice = {10, 4, 4};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> dice = {1, 1, 1, 2, 2, 10000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> dice = {10, 2, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> dice = {9, 5};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> dice = {100, 10, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> dice = {6, 3};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> dice = {1, 1, 1, 1, 1, 1, 1, 1, 2, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> dice = {10, 5};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> dice = {2, 11, 23};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> dice = {3, 3, 100};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> dice = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 13, 19};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 62;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> dice = {21, 21, 21, 10000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> dice = {2, 7};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> dice = {3, 5};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> dice = {6, 6, 100000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> dice = {1, 1, 2, 10};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> dice = {1000000000, 99999, 99993, 99996, 100000, 99991, 99996, 99992, 99992, 99998, 99996, 99995, 99995, 99999, 99993, 99999, 99999, 99995, 99998, 99993, 99994, 99999, 99996, 99998, 99997, 99998, 99998, 99999, 99994, 99992, 99995, 99993, 99994, 99999, 99992, 99991, 99998, 99993, 99991, 99995, 99996, 99997, 99999, 99998, 99997, 99997, 99996, 99999, 99999, 99997};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 4899801;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> dice = {1000, 30, 30};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 61;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> dice = {2, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> dice = {6, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> dice = {2, 2, 2, 8};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> dice = {3, 6, 15, 1, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> dice = {2, 2, 2, 2, 2, 2, 2, 1000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> dice = {1, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> dice = {2, 6, 1, 3, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> dice = {2, 2, 1, 2, 2, 8, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> dice = {1, 1, 4, 4};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> dice = {3, 15};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> dice = {3, 5, 100};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> dice = {1, 2, 10};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> dice = {1, 2, 9, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> dice = {2, 2, 2, 2, 2, 2, 2, 1000, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> dice = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1000000000, 1000000000, 1000000000, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000063;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> dice = {1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> dice = {10, 10, 10, 10, 10};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> dice = {10, 2};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> dice = {6, 9, 1};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> dice = {1, 1, 1, 1, 1, 1, 5};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> dice = {2, 2, 2, 2, 2, 9};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> dice = {4, 1000000000};
    RollingDiceDivOne* pObj = new RollingDiceDivOne();
    clock_t start = clock();
    long result = pObj->mostLikely(dice);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22675302&rd=14728&pm=11797
********************************************************************************
#include<vector> 
#include<string> 
#include<algorithm> 
#include<cmath> 
#include<utility> 
#include<set> 
#include<queue> 
#include<map> 
#include<cstdlib> 
#include<cstdio> 
#include<cstring> 
#include<iostream> 
#include<sstream> 
#include<climits> 
#include<sys/time.h> 
using namespace std; 
 
#define REP(i,a,b) for(i=a;i<b;i++) 
#define rep(i,n) REP(i,0,n) 
 
#define ll long long 
 
class RollingDiceDivOne { 
public: 
ll mostLikely(vector <int> dice) { 
  int i,j,k,n; 
  ll in[100]; 
  ll res, tmp; 
 
  n = dice.size(); 
  rep(i,n) in[i] = dice[i]; 
  sort(in, in+n); 
 
  res = 0; 
  rep(i,n-1) res += in[i]; 
  res += 1; 
 
  tmp = 0; 
  rep(i,n) tmp += in[i]+1; 
  tmp /= 2; 
  if(res > tmp) res = tmp; 
 
  return res; 
} 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/