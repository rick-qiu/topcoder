/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11799
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

class MergersDivOne {
public:
    double findMaximum(vector<int> revenues);
};

double MergersDivOne::findMaximum(vector<int> revenues) {
    double ret;
    return ret;
}


int test0() {
    vector<int> revenues = {5, -7, 3};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> revenues = {10, -17};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -3.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> revenues = {12, 12, 12, 12, 12};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> revenues = {0, 0, 0, 0, 0, 100};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> revenues = {10, -10, 100, -100, 1000, -1000};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 491.25;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> revenues = {768, -918, -13, -627, -371, -18, -477, -841, -210, -889, -980, -941, -119, -90, -435, -207, -915, -570, -481, -983, -534, -491, -783, -847, -927, -113, -63, -439, -401, -813, -146, -20, -837, -402, -398};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 371.7478430605843;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> revenues = {629, -615, -167, -808, -997, -836, -913, -928, -231, -405, -659, -70, -253, -596, -758, -565, -518, -818, -742, -74, -272, -191, -328, -758};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 263.114745259285;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> revenues = {0, -303, -280, -195, -417, -70, -249, -73, -597, -138, -128, -732, -206, -212, -82, -138, -632, -731, -214, -849, -151, -170, -132, -904, -980, -312, -217, -135, -792, -223, -579, -452, -217, -155, -681, -670, -268, -417, -243};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -39.98993882029754;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> revenues = {666, -975, -852, -547, -711, -520, -557, -690, -159, -824, -206, -268, -759, -901, -416, -501, -715, -85, -644, -529, -502, -408, -26, -795, -378, -714, -860, -798, -609, -35, -913, -416};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 303.39946806710213;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> revenues = {976, -987, -18, -436, -365, -49, -542, -12, -151, -624, -87, -156, -263, -720, -181, -780, -29, -419, -204, -9, -119, -642, -261, -819, -620, -630, -959, -109, -925, -209, -470, -366, -442, -89, -434, -210, -396, -580, -679, -533, -131};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 479.95252511432045;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> revenues = {583, -583, -92, -290, -895, -973, -528, -50, -399, -162, -121, -244, -713, -751, -911, -174, -775, -187, -904, -335, -850, -161, -676, -427};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 249.14048671722412;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> revenues = {384, -145, -188, -106, -771, -702, -240, -142, -882, -802, -505, -114, -53, -251, -501, -987, -341, -762, -92, -990, -41, -321, -17, -853, -138, -535, -675};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 172.70534346997738;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> revenues = {767, -254, -819, -872, -895, -90, -456, -187, -786, -454, -914, -488, -534, -278, -627, -311, -510, -203, -791, -501};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 306.5642604827881;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> revenues = {884, -173, -949, -996, -241, -854, -109, -487, -988, -161, -591, -613, -150, -396, -453, -930, -588, -734, -613, -133, -328, -240, -614, -588, -268, -177, -163, -516, -40, -402, -958, -565, -195, -650, -802, -264, -304, -967, -946, -843, -952, -560, -621, -943, -345, -697, -359};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 400.12953003578025;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> revenues = {727, -262, -271, -594, -778, -625, -903, -925, -104, -592, -65, -868, -602, -755, -610, -493, 0, -507, -952, -592, -437, -596, -927, -391, -827, -645, -134, -276};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 335.6984081491828;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> revenues = {25, -918, -13, -627, -371, -18, -477, -841, -210, -889, -980, -941, -119, -90, -435, -207, -915, -570, -481, -983, -534, -491, -783, -847, -927, -113, -63, -439, -401, -813, -146, -20, -837, -402, -398};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2478430605842732;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> revenues = {36, -167, -808, -997, -836, -913, -928, -231, -405, -659, -70, -253, -596, -758, -565, -518, -818, -742, -74, -272, -191, -328, -758, -351, 0, -303, -280, -195, -417, -70, -249, -73, -597, -138, -128, -732, -206, -212, -82, -138, -632, -731, -214, -849, -151};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -0.2701685476446869;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> revenues = {72, -980, -312, -217, -135, -792, -223, -579, -452, -217, -155, -681, -670, -268, -417, -243, -871, -666, -975, -852, -547, -711, -520, -557, -690, -159, -824, -206, -268, -759, -901, -416, -501, -715, -85, -644, -529, -502, -408, -26, -795, -378};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -0.2494574217457739;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> revenues = {26, -609, -35, -913, -416, -173, -976, -987, -18, -436, -365, -49, -542, -12, -151, -624, -87, -156, -263, -720, -181};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03628826141357422;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> revenues = {54, -204, -9, -119, -642, -261, -819, -620, -630, -959, -109, -925, -209, -470, -366, -442, -89, -434, -210, -396, -580, -679, -533, -131, -481, -583, -583, -92, -290, -895, -973, -528};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -0.11879557836800814;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> revenues = {71, -121, -244, -713, -751, -911, -174, -775, -187, -904, -335, -850, -161, -676, -427, -64, -384, -145, -188, -106, -771, -702, -240, -142, -882, -802, -505, -114, -53, -251, -501, -987, -341};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -0.1883820933289826;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> revenues = {55, -41, -321, -17, -853, -138, -535, -675, -699, -767, -254, -819, -872, -895, -90, -456, -187, -786, -454, -914, -488};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.15306377410888672;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> revenues = {130, -311, -510, -203, -791, -501, -856, -884, -173, -949, -996, -241, -854, -109, -487, -988, -161, -591, -613, -150, -396, -453, -930, -588, -734, -613, -133};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02480575442314148;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> revenues = {112, -588, -268, -177, -163, -516, -40, -402, -958, -565, -195, -650, -802, -264, -304, -967, -946, -843, -952, -560, -621, -943, -345, -697, -359, -770, -727, -262};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -0.0718710795044899;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> revenues = {15, -778, -625, -903, -925, -104, -592, -65, -868, -602, -755, -610, -493, 0, -507, -952, -592, -437, -596, -927, -391, -827, -645, -134, -276, -638, -465, -12, -16, -789, -894, -724, -559, -477, -192, -563, -511, -57, -754, -145, -358, -642, -983};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07069007871336908;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> revenues = {768, 918, -986, -372, 371, -981, 477, 841, 210, 889, 980, -58, 119, -909, 435, 207, -84, -429, 481, -16, -465, 491, 783, -152, 927, 113, 63, 439, 401, 813, -853, -979, -162, -597, 398, 801};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 942.7967356526933;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> revenues = {615, -832, -191, -2, 836, -86, -71, 231, -594, -340, -929, -746, -403, 758, 565, 518, 818, -257, -925, -727, -808, 328, -241, -648, -999, 303};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 785.5180625319481;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> revenues = {195, -582, 70, 249, 73, -402, -861, -871, -267, -793, -787};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 161.263671875;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> revenues = {138, 632, 731, 214, 849, 151, 170, -867, -95, 980, -687, -782, -864, 792, -776, 579, -547, 217, 155, 681, -329, 268, 417, 243, -128, -333, -24, -147, -452, 711, -479, 557, -309, -840, -175, 206, -731, -240, 901, 416, 501, 715, -914, -355, 529, -497};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 915.4132161540664;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> revenues = {-973, 795, 378, -285, 860, -201, -390, -964, -86, -583, 173, 976, -12, -981, 436, -634, -950, 542, 12, -848, 624, -912, 156, 263, -279, 181, 780, 29, -580, -795, 9, -880, 642, 261, 819, -379, 630, -40, -890, 925, -790, 470, 366, 442, -910, 434};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 924.6311861052118;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> revenues = {396, 580, -320, -466, -868, 481, 583, -416, 92, 290, 895, 973, -471, 50, -600, -837, -878, -755, -286, 751, 911, 174, -224, 187, -95, 335, 850};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 919.5487457513809;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> revenues = {676, -572, -935, 384, -854, -811, -893, -228, -297, -759, -857, 882, 802, -494, 114, 53, -748, -498, 987, 341, -237, -907, 990, 41, 321, 17, -146, -861, -464, 675, 699, -232, 254, -180, 872, -104, -909, 456, 187, -213, 454, 914, 488, 534, -721, 627, -688, -489, -796};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 961.4225591447291;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> revenues = {-498, 856, 884, -826, -50};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 567.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> revenues = {241, 854, -890, 487, -11, -838, 591};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 623.34375;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> revenues = {-849, 396, -546, 930, -411, -265, 613, -866};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 616.4140625;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> revenues = {-759, -385, 588, 268, 177, -836, 516, -959, -597, 958, 565, 195, -349, 802, 264, -695, 967, -53, -156, 952, -439, -378, 943, -654, 697, 359, 770, 727, 262, -728, -405, 778, -374, 903, 925, 104, -407, -934, 868};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 956.7951147076928;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> revenues = {-397, -244, 610, 493, -999, -492, -47, 592, -562};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 487.91796875;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> revenues = {-72, -608, 827, -354, -865, -723, -361, -534, 12, 16, -210, -105, 724, 559, 477, 192, -436, -488, -942, 754, 145, 358, -357, 983, -725, 291, 136, -955, 566, -794, 737, -417, -222, -407, 977, -445, -274, 1, 822, -976, -240, 629, -773};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 935.7167685507495;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> revenues = {479, 132, 537, 336, -702, 350, -999, 876, -255, -971, 118, 653, 272, 546, 923, -218, 428, -866, -95, 815, -844, 229, 659, 156, -807, 667, 400, 287};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 862.9287402778864;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> revenues = {0, -856, -927, -531, 441, -378, 599, 710, 219, -845, -451, 396, -606, 688, -34, 268, 189, 940, 891, 957, 722, -299, 837, -775, -765, 196, -112, 226, 527, 233, -10, 720, -831, 235, 728, 815, -383, -950, 650, 6, -622, 478, -164, -975, 622, -28, 257, 305};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 925.1439663487079;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> revenues = {-519, 527, -50, -797, -187, 98, 925, -8, -149, -146, -285, 471, -565, 23, -316, -422, 627, 572, 574, 619, -22, 676, -417, 659, -365, -794, 908, 143, 916, 393, -923, -596, -362, 7, -376, -973, -555, -949, 488, -638, -783};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 886.7636689624815;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> revenues = {846, -748, -847, 107, 882};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 566.1875;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> revenues = {772, 468, -254};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 439.5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> revenues = {-634, -37, -748, 180, -19, 150, 652, -747, 105, 408, -420, -173, -109, -829, -419, 493, 857, 865, -498, 202, 903, 819, -760, -990, -199, 999, 674, -116, 692, 798};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 935.0751221422106;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> revenues = {292, -791, 131, -972, 978, 267, -791, 403, -53, -575, 995, -953, 253};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 820.986572265625;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> revenues = {1, 0, -2, 2, -5, 5, 1, 2, -4, -4, 0, -4, 3, 5, -5, 1, 2, -2, 3, 3, 2, -5, -3, -2, 0, -3, 0, 1, -5, -2, -5, 3, 0, -2, -4, 3, 2, -3, 5, -5, -1, 2, 4, -5, -3, -4};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 4.810514359674926;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> revenues = {-5, -1, 4, 5, -3, 4, 3, 2, -1, 4, -1, -3, 5, -1, -5, 5, 3, 5, 4, -2, 1, -1, 2, 0, -1, 5, 5, -3, -1, 3, 3, 5, -4, -5, -2, 4, 0, -2, -5, 3, 1, -3, 1, 5, 1, 2, 2};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 4.995967607912121;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> revenues = {-3, 1, -5};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -1.5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> revenues = {1, 5, -2, -3, 5, 2, -5, 3, 4, 1, 3, 1, 3, 0, 3, 5, -2, 5, 2, 4, 1, -3, 0, 1, -2, -1, -3, 1, 1, 4, 0};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9290760066360235;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> revenues = {-3, 1, -2, -1, -1, 4, 4, 2, 0, 3, 4, -1, -5, 4, 2, -5, -3, 2, 1, 5, 4, 1, 5, -1, -4};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 4.737698197364807;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> revenues = {3, -4, -1, 5, -2, 3, 5, 1, 0, 3, -4, -3, 3, 5, -5, 5, 1, 0, 2, -5, 3, -3, 1, 3, 0, 0, 0, 2, 4, -4};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 4.905623521655798;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> revenues = {-2, -1, -1, 0, 3, 2, 2, 1, -2, 0, 2, 1, 3, 4, -4, 0, 5, -4, -3, 0, 1, 4, 1, 5, -5, -2, 2, -5, 5, 4, -2, -4, -1, -5, -4, -1, 3, 4, -4, 0, 3, -5, 4, 4, -5};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 4.872916682535106;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> revenues = {0, 1, -3, -4, -2, 0, 0, -2, 4, -3, 5, 4, 0};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 4.053466796875;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> revenues = {-3, 3, -3, 1, -3, 1, -5, -2, -3, 1, 2, 2, 3, -3, 0, -4, -3, -5, -4, -1, -3, 4, 1, -4, 0, -5, -2, -5, 5, 2, -5, -3, 3, -3, 0, 3, -4, -1};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 4.232279775547795;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> revenues = {-3, 0, 2, -1, 0, 3, 0, -3, 1, 5, -3, -3, -1, -1, 2, 4, -4, 5, 4, -3, -2, 2, -1, 2, 4, 5, -3, 2, 1, 4, 2, -5, 2, 5, 2};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 4.931630827311892;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> revenues = {44, 49};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 46.5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> revenues = {-15, 35, -12, 31};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 21.875;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> revenues = {-36, -30, 23};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -5.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> revenues = {3, 41, 13, -13};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 22.5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> revenues = {0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999997615814209;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> revenues = {1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999962747097;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> revenues = {-1, 0, -1, -1, -1, 0, 0, 0, -1, -1, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, -1, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, -1, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -5.9604644775390625E-8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> revenues = {-1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, -1, 0, 0, -1, -1, 0, -1};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -7.450580596923828E-9;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> revenues = {34, 54, 16, -102, -32, 784, 4, -9, -41, 29, 44, 276, 25, -434, -13, -75, 304, -456, 31, -868, 666, -39, -32, -314, -47, 857, 792, 46, -126, 7, 85, -38, 46, 397, -11, 826, -352, 766, 957, 771, 10};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 891.8725374178612;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> revenues = {-24, 241, 175, -644, 108, 37, 405, 568, 6, -484, 729, 33, -179, 509, 114, 578, 278, -6, -5, -110, -47, 23, -654, -616, 14, 121, -50, -18, 566, -544, 688, 34, 105, 35, -31, -839, 321, 994, -16, -4, -34, 399};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 834.8496360371805;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> revenues = {855, 197, -46, -34, 0, -1, 10, -760, 6, -31, -5, -39, -26, 558, 404, 25, 908, -27, -3, -13, 28, -256, 792, 16, 374, 695};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 837.7186942100525;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> revenues = {-705, -472, 210, 37, -6, 660, -259, -5, -385, -32, 4};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 383.9619140625;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> revenues = {550, -633, -40, -31, 325, 30, -50, 38, 19, -30, -19, 7, 227};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 387.939697265625;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> revenues = {38, 46, 20, -49, -47, 27, 20, 278, 23, -13, 543, 586, -760, -15, -592, -283, -26, 36, -28, 7, -457, 39, -3, -755, 40, -35, 585, 21, -869, -42, 5, -27, -12, 13, -263, 1, -40, -28, 407, 616, 49, 37, -48, -918, 2, 47};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 579.356812966206;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> revenues = {40, -334, 22, -677, -271, -302, 17, -45, -17, 931, -1, -40, -250, -42, 189, -42, -13, -48, 113, -39, -432, -36, -17, -2, -255, -45, -30, 33, -49, -394, -286, 24, 40, 224, 7, -40, 36, -10, 107};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 556.7124765929148;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> revenues = {-30, 279, 181, 505, 47, -10, 580, -804, -936, 40, -694, 232, 214, -19, 198, 21, -5, -95, 30, 16, -388, 729, 29, 69, -659, -36, 56, 38, 25, 159, -39, -506, 386, 38, -634, -666, 368, -971, -2, -41, -47, 15, 3, -675, 11, 763, 685, -118, 458};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 713.9753470341445;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> revenues = {48, -17, 253, -185, 177, -829, 9, -574, 683, -657, -9, 98, 960, -313, -32, -214};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 696.9595336914062;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> revenues = {-48, 30, 767, 683, 888, -44, 284, -671, -37, 438, -571, -29, -950, -44, -24, -314, 12, 16, -29, -5, -881};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 757.9443044662476;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> revenues = {543, 44, 211, -844, -377, 4, -33, 14, -37, 20, 595, 41, -14, -32, -27, 370, 550, 22, 8, -19, 15, 17, -16};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 533.7538063526154;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> revenues = {43, -47, 342, -2, 22, 26, 15, -845, -44, -11, -42, 758, -647, -26};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 472.056396484375;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> revenues = {-761, 376, -21, -765, -639, 558, -969, -71, -409, 44, 759, -689, 179};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 573.3662109375;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> revenues = {-534, 15, 293, 677, -47, 587, -33, 43, 863, -13, -606, -44, -916, -800, 945, -36, -253, 967, 736, -34, 987, -47, 37, 30, -876, 23, 47, -37, -997, 10, -293, 17, -444};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 946.7843482864555;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> revenues = {19, -575, 434, 953, -855, -50, 17, 4, 252, 797, 16, 723, 207};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 804.23583984375;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> revenues = {563, 887, -156, 5, -92, -360, 653, 17, -48, -101, 886, -8, -5, -885, 661, 32, 782, 20, 650, -562, 27, 1, -6, 608, -348, 29, 4, 34, -359, 41, -28, -828, 37, -3};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 841.7209418885177;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> revenues = {444, -46, -314, -33, -317, -28, 2, 483, -379, 14, -27, -28, 35, -668, -31, 22, 13, 22, -14, 504, 0, -6, -698, 215, -9, -902, 0, -185, -3, -9, 13, -268, -28, 6, -16, -43, 40, 7, 38, -816, -354, 462, 23, -9, 18, -399, 45};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 466.2434704128491;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> revenues = {12, -249, -13, -722, 304, 892, -20, -729, -9, -72, 47, 0, 34, 723, 46, -761, 47, 530, -112, -41, -572, -364, 48, 443, -15, -48, -246, 27, 3, 1, 20, -176, -267, -25, 813, 46, -5, -24, 662, 576, -584, -695, -381, -478, -38};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 812.112431621378;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> revenues = {-442, 48, 29, 38, 21, -2, 38, 6, -25, -179, 32, 212, 205, 127, 42, -838, -20, -361, -35, 25, -250, -43, -11, 378, -242, -789, -33, -407, 247};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 295.3857683427632;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> revenues = {-122, 787, -17, -446, -287, -274, -16, -32, -133, -269, 11, -112, -12, -1, 12, -684, -49, 1, 981, -39, 46, 33, 43, -24, -15, 25, -20, -4, -555, -956, 97, 11};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 704.3817642116919;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> revenues = {-1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = -1000.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> revenues = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> revenues = {4, 4, 8};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> revenues = {109, 122, -51, -157, 59, -663, -704, 386, 254, 525, -199, -353, -332, 56, -794, 780, -11, -226, 445, -187, -48, 135, 339, 9, -43, 435, 24, 11, -826, -24, 841, -9, -341};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 732.6620609145612;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> revenues = {933, 743, 262, 529, 700, 508, 752, 256, 256, 119, 711, 351, 843, 705, 108, 393, 330, 366, 169, 932, 917, 847, 972, 868, 980, 223, 549, 592, 164, 169, 551, 427, 190, 624, 635, 920, 944, 310, 862, 484, 363, 301, 710, 236, 876, 431, 929, 397, 675, 491};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 967.1019344417859;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> revenues = {1, 2, 3, 4, 5, 6, 7};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 6.015625;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> revenues = {-959, -524, -663, -487, 178, 731, 483, 372, -25, -524, 707, -841, 292, -165, 965, -509, -4, 947, -171, 438, -593, -389, 903, -847, -708, -612, 429, -275, 727, 904, 449, 736, -222, 543, 869, 921, 679, -688, 43, 898, -283, 822, 337, -652, 681, -334, 148, 714, -733};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 945.9694893797687;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> revenues = {-845, -609, 280, 508, 115, -334, -812, -632, -274, -401, 1000, 461, -702, -697, -135, -339, 597, 504, -806, -268, -867, -766, 2, 332, -897, 38, 974, 829, 483, 425, -168, -463, 774, 177, -851, 789, 346, -820, 929, 982, -878, 889, -486, -792, -675, -176, 339, 52, -304, 319};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 977.3629588318029;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> revenues = {-5, -4, -3, -2, -1, 1, 2, 3, 4, 5};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 3.970703125;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> revenues = {2, 12, 12, 12, 12};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 11.375;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> revenues = {1, 2, 2, 2, 3};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4375;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> revenues = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> revenues = {1, 3, 3, 4};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 3.25;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> revenues = {-813, 182, 182, 182, -560, 182, -813, 864, -813, 182, -813, -896, 182, -83, 700, -973, 182, 496, 182, 182, 182, 182, 182, 101, 182, 182, 101, 182, 182, -813, 182, 182, 182, -813, 182, 55, 182, -973, -679, 182, 182, 227, -973, -813, 182, -813, -679, -454, 182, -594};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 694.562499743499;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> revenues = {1000, 1, 1};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 500.5;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> revenues = {324, 656, 121, -435, -989, 234, 122, -999, 0, 123};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 446.05859375;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> revenues = {10, 12, 12, 12, 12};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 11.875;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> revenues = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999925494194;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> revenues = {1, 2, 3};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 2.25;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> revenues = {1, 10, 10, 10};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 8.875;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> revenues = {1, 2, 2, 2, 2};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9375;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> revenues = {-5, -5, 10, 10};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 6.25;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> revenues = {10, 20, 25};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> revenues = {1, 1, 1000};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 500.5;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> revenues = {13, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> revenues = {10, 10, 30, 50};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 35.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> revenues = {-10, -10, 10, 10};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> revenues = {-3, -2, 4, 500, 1000};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 625.1875;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> revenues = {0, 100, 100};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> revenues = {-2, -2, -2, -3, -3, -3, 4, 4, -10, -999};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.509765625;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> revenues = {10, 20, 30};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 22.5;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> revenues = {10, 20, 30};
    MergersDivOne* pObj = new MergersDivOne();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues);
    clock_t end = clock();
    delete pObj;
    double expected = 22.5;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20463878&rd=14728&pm=11799
********************************************************************************
#include <algorithm>   
#include <string>   
#include <set>   
#include <map>   
#include <vector>   
#include <queue>    
#include <iostream>   
#include <iterator>   
#include <math.h>   
#include <cstdio>   
#include <cstdlib>   
#include <sstream>   
 
#pragma comment(linker, "/STACK:60777216")   
 
using namespace std;   
 
typedef pair<int,int> pii;   
typedef long long ll;   
typedef vector<int> vi;   
 
#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end())   
#define SORT(c) sort((c).begin(),(c).end())   
#define FOR(i,a,b) for (int  i=(a); i < (b); i++)    
#define REP(i,n) FOR(i,0,n)    
#define CL(a,b) memset(a,b,sizeof(a))   
#define pb push_back   
 
class MergersDivOne { 
public: 
 double findMaximum(vector <int> revenues) { 
   SORT(revenues); 
   double res = revenues[0]; 
   FOR(i,1,revenues.size()){ 
     res = (res + revenues[i])/2; 
   } 
   return res; 
 } 
  
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/