/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10341
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

class BestView {
public:
    int numberOfBuildings(vector<int> heights);
};

int BestView::numberOfBuildings(vector<int> heights) {
    int ret;
    return ret;
}


int test0() {
    vector<int> heights = {10};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> heights = {5, 5, 5, 5};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
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
    vector<int> heights = {1, 2, 7, 3, 2};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> heights = {1, 5, 3, 2, 6, 3, 2, 6, 4, 2, 5, 7, 3, 1, 5};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
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
    vector<int> heights = {351, 239, 157, 185, 452, 129, 101, 173, 78, 81};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> heights = {58, 68, 102, 188, 75, 69, 129, 92, 37, 15, 175, 136, 87, 98, 112, 9, 164, 52, 64};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> heights = {120, 370, 255, 465, 123, 273, 187, 393, 381, 453, 169, 551, 225, 560, 118, 255, 116, 488, 15};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> heights = {240, 509, 387, 35, 69, 46, 152, 299, 169, 623, 276, 12, 545, 371, 174};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> heights = {413, 246, 392, 655, 210, 671, 617, 496, 184, 703, 280, 49, 438, 695, 788, 223, 524, 151};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> heights = {321, 425, 238, 134, 93, 370, 312, 469, 355, 89, 24, 488};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
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
    vector<int> heights = {398, 435, 491, 292, 563, 532, 140, 167, 557, 111, 286, 157, 25, 210};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> heights = {102, 192, 111, 208, 203, 172, 170, 183, 120, 114, 43, 133, 151, 27, 158, 10};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> heights = {493, 541, 568, 304, 345, 167, 667, 208, 81, 441, 509, 167};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> heights = {363, 552, 187, 484, 134, 55, 113, 85, 98, 483, 572, 127, 438, 60, 172};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> heights = {52800, 21817, 29982, 26719, 42682, 15974, 21687, 30901, 24653, 876, 40328, 25457, 68356, 34701, 51628, 70123, 16595, 46972, 38153, 21588, 38281, 70265};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> heights = {440823, 253132, 63761, 117325, 591525, 161566, 694549, 133680, 46800, 98058, 128043, 500634, 218075, 10542, 270334, 431461, 151896, 505971, 655092, 958, 206161};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> heights = {76095, 188646, 59244, 14523, 336482, 328074, 251336, 211298, 78169, 103508, 254380, 196297, 34228, 4925, 186575, 285097, 43432, 318049, 239858, 266020, 260119, 238845, 266224, 98594, 300047};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> heights = {559466, 442202, 527252, 826299, 728059, 177285, 73114, 477740, 370619, 912153, 989281, 194647, 240602, 89758, 598902, 662071, 320904, 285672, 773576, 825793, 579796, 177364, 386036, 674817, 834954, 979909, 656597};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> heights = {317881, 474754, 76229, 284965, 201601, 390833, 426293, 69982, 160184, 467712, 202797, 444257, 275840, 282828, 85723, 421802, 250395, 170881, 294539, 180181, 18456, 159570, 39090, 177450, 288084, 145658, 360275, 135888, 191657};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> heights = {74549, 342785, 99457, 596120, 732545, 763536, 122989, 819715, 499776, 237763, 629527, 860194, 702605, 56504, 471980, 859591, 643602, 770472, 415693, 399918, 617223, 292826, 600413, 25330, 735503, 276028, 751513, 279961};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> heights = {216494, 193395, 80968, 197747, 228852, 262418, 196504, 207027, 87760, 311087, 296440, 239113, 312450, 17151, 214270, 67962, 349497, 66920, 12916, 320723};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> heights = {8966, 342347, 536672, 231142, 133490, 541598, 547603, 6959, 13308, 502845, 479082, 306747, 18804, 312582, 224775, 84752, 384711, 218547, 481424, 184410, 95111, 348943};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> heights = {175203, 534038, 76636, 350677, 735693, 73268, 30990, 401301, 714965, 43365, 82626, 461366, 733251, 434516, 330590, 723291, 47968, 637101, 360806, 338773, 210076, 589244, 384065, 590449, 22805};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> heights = {233206, 56769, 163975, 168748, 631705, 55007, 556007, 241261, 27164, 686423, 374802, 516149, 102430, 563155, 386539, 153100, 533680, 641169, 151569, 724270, 766158};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> heights = {21956488, 5722117, 21222592, 23878453, 25994160, 26078678, 3972552, 14144947, 29487993, 15040739, 9586355, 29021260, 21987552, 13933292, 20485589, 30151110, 24048048, 27181830, 2598731, 16328669, 1919515, 17080056, 16289038, 18723933};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> heights = {128203618, 147258112, 18104905, 22919614, 17979631, 334706883, 26451159, 87655196, 54327412, 16296815, 198207637, 38511049, 107693713, 52103967, 20583636, 300375055, 75752802, 330962327, 28163037, 243322337, 65497211, 232586037};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> heights = {229788028, 107338299, 37324646, 144024005, 203040040, 23530410, 49848749, 5089050, 14388726, 189452521, 220236081, 256717950, 105040285, 108710448, 20258459, 41496890, 113793359, 29166058, 51634806, 245018661, 179003869, 242756913, 1475710, 839312, 130271359, 227870952, 561316, 94194369, 285493614, 284423718, 171416227, 239877371, 142543004, 228843961, 69768887, 19509203, 22309318, 52338145, 248654724, 235911678, 147442262, 180345655, 88050725, 124735037, 159584264};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> heights = {571421045, 66110082, 246289382, 42095717, 336499262, 51410432, 53297855, 62084031, 519341860, 437647039, 244293892, 250034270, 264531293, 537713517, 81154564, 477509894, 253347018, 82956739, 116505937, 238659532, 78110586, 404357526, 20508483, 383929356, 244051440, 139276215, 127564259, 43448017, 204992286, 233532645, 86631657, 234777132, 60062053, 344543930, 135817515, 362230508, 193487534, 454582198, 390011010, 167346307, 52994865, 111727645, 17502194, 107885244, 571503359, 95491412, 296146509};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> heights = {1618663, 28765181, 48897534, 4327850, 21093349, 36156998, 25886868, 59340139, 55134624, 12933447, 37414460, 1241604, 9401450, 22002067, 44525150, 6290245, 43254477, 37833687, 58201042, 57071801, 47079419, 1938611, 9680765, 9392942, 17286965, 7664294, 48207610, 10569412, 5154631, 19207617, 9535093, 36388370, 40215371, 818680, 47466823, 31073480, 56298907, 16422777, 25877927, 29638880, 7166221, 16018312, 7727355, 45171563, 45013223};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> heights = {51056550, 207191881, 165657806, 101006928, 51309745, 82535576, 240133962, 38713678, 74546326, 64494899, 243764367, 552758, 207225873, 16566756, 85601495, 214302124, 61366739, 145886717, 216523138, 400875, 240641833, 230404589, 44334910, 69390559, 244294389, 214891975};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> heights = {4666410, 19862164, 10026441, 2592718, 26569355, 30405936, 15307783, 12613036, 20728447, 17909061, 3821812, 24137472, 2986176, 4546166, 27028060, 14579071, 18382475, 4659345, 7257074, 14379742, 30538231, 31435699, 18341272};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> heights = {60079972, 83630817, 27542787, 25873698, 46295991, 55260949, 29663314, 31982911, 22420838, 214963, 7380877, 156692, 79100203, 18298558, 35941158, 40674032, 15229527, 2286331, 81046523, 51038671, 52848038, 25969132, 36463625, 98207208, 102557235, 54322063, 21654366, 101989871, 45266029, 84458268, 43910168, 7335333, 87887810, 39584873, 102075058, 33092823, 82863742};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> heights = {52104021, 202398822, 31328045, 454508148, 200596837, 474684941, 94726576, 219066114, 27587524, 104674510, 178536056, 89209594, 453652482, 225916333, 260260221, 226266275, 228960250, 55214882, 369185799, 145219114, 306994343, 139051502, 160120342, 227701504, 440472926, 13567979, 219586358, 345518642, 84191632, 253376372, 90827480, 91782823, 260691217};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> heights = {41799518, 13414355, 18458981, 9744018, 22338269, 21951106, 22716096, 39228097, 24426199, 16142594, 31917577, 24395151, 39242696, 13811589, 8504545, 34399376, 26939815, 5256, 18220019, 1505077};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> heights = {1423512, 20180336, 1988615, 5075392, 20684454, 19012633, 16041407, 1526262, 4973901, 13543947, 2735832, 14586220, 21987373, 7096401, 18747633, 20513406, 15798070, 1580898, 774075, 7178088, 9666447, 4013966, 16336421, 5758536, 13194609, 9920266, 11615048, 16727735, 20567866, 1698740, 16938372, 21074335, 2538855, 13683866, 519153, 8287430, 13587232, 16524916};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> heights = {87624565, 45991288, 22877131, 29822604, 141987580, 15270723, 46389924, 142842850, 91735921, 80846999, 6740316, 122317119, 60292876, 21103592, 38721200, 72821427, 57387613, 63138282, 33703032, 7430771, 45189863, 20723715, 43202563, 38807339, 31447436, 41637058, 123243393, 12073043, 71149543, 75723892, 125083857};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> heights = {87270948, 2627538, 12126490, 461699, 80973753, 62827834, 5982303, 23348966, 5238952, 77096433, 32202795, 54144784, 7733699, 6861259, 25710749, 51490599, 9247519, 70383305, 80652476, 58233184, 6520544, 81000550, 55625531, 21833357, 2146162, 34173924, 61435343, 70941328, 82516862, 34443322, 20258344, 55096100, 75856106, 14788923};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> heights = {2385903, 5918644, 12736661, 8232515, 3362235, 27582605, 8423166, 15538889, 21883760, 16442082, 30547899, 20746760, 3106568, 1300421, 34041401, 11231118, 15083005, 15826924, 19444753, 20966406, 30909216, 30835735, 4969396, 15206612, 26391956, 16697461, 19288227, 11712832, 27841208, 10421995, 6781397, 15274423, 21684778, 31088275, 5958989, 29084936, 29284875};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> heights = {3600080, 4510641, 22791720, 18874987, 27654147, 2089081, 2865547, 6232626, 5898986, 12237963, 21778553, 13775041, 10868822, 1480711, 28954407, 6899664, 9986728, 11257568, 17887560, 27439148, 27656404, 21576641, 29387679, 12323762, 19628342, 11463658, 24143537, 16206596};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> heights = {455803599, 270342584, 305363766, 78651152, 230755782, 167239052, 3326462, 282725116, 22186550, 59446834, 159540268, 294666665, 1211360, 165447581, 96101598, 237552925, 143322823, 3248946, 313379841, 235447795, 448561502, 426880602, 431327208, 420887682, 27521252, 240182643, 277228803, 309087213, 159351577, 69823275, 1379215, 94597193, 245938201, 309274357, 17389634, 26338683, 27436416, 433564004, 103941798};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> heights = {300335780, 341957261, 31764272, 129809541, 343254569, 206862013, 12859896, 152950001, 492095485, 15510148, 45826813, 204409504, 53461998, 357315551, 400644, 512345876, 92644996, 182434433, 88153304, 223223399, 491519949, 410811951, 143132197, 193122505, 223060626, 360562449, 148218210, 627906, 110131494, 132938833, 321102876, 282580548, 19854419, 223588248, 14968178, 445416768, 165647104, 331742831, 303110056, 31802838, 357219890, 201258098, 13003186, 25761763, 500211902, 16901187, 168589637, 167249619};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> heights = {18194269, 23908136, 114868484, 132605737, 52752438, 101284819, 31366401, 136808469, 4787479, 52598008, 40093950, 153172601, 140842763, 25490432, 75336039, 52485724, 27229926, 21009034, 134828614, 15388656};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> heights = {199575775, 144096275, 21956438, 131959615, 83774131, 110365828, 138734725, 198469076, 104881667, 2455830, 57551744, 3736139, 6108144, 155948670, 17218294, 31401766, 6420472, 211791621, 78660523, 4977905, 109500745, 157270078, 170157559, 205279568, 208540714, 19685726, 14621466, 67176230, 15924765, 61362223, 170398465, 6379821, 28812587, 214691089, 189973572};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> heights = {112820007, 9321495, 33788856, 13048452, 27613756, 30672490, 187077396, 138371510, 191757992, 31770222, 34557874, 130013755, 7167643, 103227444, 176680412, 110493771, 137884559, 174444764, 21175156, 161209883, 32907737, 175868249, 1468358, 210214536, 75434468, 3838598, 11820399, 94215099, 26226612, 53188356, 10149137, 208375719, 116376602, 16441068, 112893622, 68191245, 157453895, 190392639};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> heights = {65268645, 251703796, 379721039, 13270291, 179918785, 86952152, 14863128, 40379996, 147778676, 4551640, 194361678, 35909626, 177189737, 146091706, 120749885, 268731970, 319582601, 137542406, 71209618, 21315802, 38897533, 629545614, 201561486, 112156883, 29092814, 464013685, 332180598, 24729295, 19371941, 33856597, 37364155, 22499901, 246927032, 128311210, 56301029, 256521166, 85654185, 580652358, 198903627, 238350150, 63437154, 90885839, 16075745, 113698830, 85513092, 66172187, 141987457, 378212144};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> heights = {72168228, 485018718, 148395653, 148931715, 144336641, 105057754, 134370153, 185383049, 50481461, 465072194, 198232070, 77619399, 296645172, 600400149, 7276528, 120349185, 48552714, 516970489, 13557159, 657937726, 318673066, 277577760, 16075966, 353360363, 50413855, 55811127, 64335659, 246683178, 357516311, 350126258, 95164328, 589177132, 436784044, 176057498, 597034764, 416310290, 130245095, 29459200, 29100334, 2514534, 384898822, 609270368, 247613417, 83579665, 280818300, 37596989, 73252650, 379751018, 164823050, 150458968};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> heights = {17678643, 51820133, 123578546, 58579199, 70142347, 204421186, 187462344, 8762280, 70617481, 90718782, 6776586, 19775784, 182181915, 186687609, 21126380, 11094197, 119290656, 42918631, 94116797, 34203445, 66320717, 69155021, 113437903, 48299143, 93770221, 183358221, 23680780, 145805339, 71510397, 72807663, 99444026, 11516429, 39691533, 174946745, 70249937, 97372383, 3287262, 8608151, 27621095, 173325645, 198337784, 4021505, 96504038, 28966657, 4054095, 48436641, 179972282, 19175382, 132001945, 112228138};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> heights = {28245910, 24373808, 24227271, 177661840, 89752077, 7034502, 14048463, 47728590, 162154837, 117649003, 17118127, 49050164, 38094014, 115654962, 2809921, 3643075, 154611592, 186705144, 20184302, 18629682, 181259776, 15584493, 92508680, 9206447, 30830417, 207727851, 117996845, 69304158, 42505775, 68503901, 2211738, 16177170, 2758269, 83082946, 30914114, 182454573, 73942300, 57261444, 98527746, 18637564, 14790782, 7602301, 108545391, 15387349, 64632831, 8690880, 218034287, 148358518, 3931713, 72424424};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> heights = {42238479, 12889588, 24133272, 174771159, 11817548, 173815108, 110891672, 217194579, 101195543, 210939403, 144275287, 110407345, 22125337, 230444421, 34569370, 73399913, 60220002, 36204483, 148655892, 76966018, 114363808, 75706784, 106393658, 235166670, 118554747, 149447817, 197306053, 59293389, 95671224, 199089347, 6942617, 36166556, 78835431, 134977419, 103391075, 21877918, 110328647, 128105815, 93986993, 94511643, 38751139, 218147380, 7919451, 191755399, 84439982, 199860630};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> heights = {9319136, 87960903, 5470437, 83427324, 166877021, 117976042, 206506318, 103003140, 135211704, 75010223, 190821777, 194197108, 239934584, 22505166, 30007926, 30930205, 39015997, 21814600, 201387344, 9554265, 253269023, 228186613, 111746076, 73977856, 21026727, 249707869, 147806824, 95768966, 55209289, 269373343, 33295529, 227544135, 44347896, 19306087, 2973746, 285282766, 222439884, 152588909, 22368689, 67883339, 1895819, 130716119, 154904597, 111189062, 215523313, 835778, 91948813, 205194268, 110046799, 149570206};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> heights = {167583751, 152198262, 100282013, 168166950, 8622900, 105196996, 100041940, 130111508, 79783062, 11660749, 112886299, 67526335, 43065833, 4846443, 51037488, 88598886, 80960541, 181192131, 91500390, 48584555, 81120566, 51982055, 27897473, 656233, 19022247, 20358300, 85216535, 73819698, 106647678, 179907765, 75217708, 55804767, 34375434, 27665215, 7830509, 29073154, 149489866, 25624566, 87232257, 11818119, 29470691, 87946992, 66395862, 108785650, 113770954, 65239371, 65957355, 98395033, 65479450, 51772337};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> heights = {243550361, 84631531, 308992856, 40718337, 222146170, 70313849, 240136196, 285614316, 229735032, 246163371, 168590536, 100114381, 142003040, 78874042, 227835590, 145412112, 150680410, 5781503, 4226297, 10434996, 197600168, 16836411, 142495554, 51342120, 115217569, 58211710, 120922662, 65874997, 18970313, 191147073, 103664188, 121299017, 85698809, 138847019, 155066480, 45336767, 221588947, 254292006, 98285618, 5973574, 76111853, 42884972, 103898451, 179799110, 56417996, 165312740, 246749673, 12203687, 280676691, 77323435};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> heights = {539185012, 546954079, 54357899, 27731387, 335446502, 19832454, 328751387, 78322530, 135998637, 17388091, 79614752, 178281561, 297479039, 9673098, 421744879, 191547967, 446255840, 145646680, 69107247, 316476972, 494240647, 345452350, 282887936, 434761103, 302083991, 248008710, 281033538, 98955, 467400829, 291113183, 212052097, 89961181, 175827793, 123916525, 64160388, 53319869, 156355167, 467848932, 272740067, 408710858, 144073905};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> heights = {16454866, 19464932, 68022060, 64825360, 36263968, 73198731, 69768719, 37616833, 54013459, 1469654, 52660279, 49224573, 63711656, 69857658, 31006857, 70896720, 33996458, 68082973, 46120531, 54754204, 5414203, 61375911, 60989589, 33898197, 31939635, 33161274, 42984328, 61684155, 31841380, 33174079, 42281277, 38398801, 38294744, 18009099, 51159761, 25531104, 71181283, 27203640, 65497717, 13265178, 41042033, 20889675, 7972891, 33490319, 20470561, 25790097, 336938, 46420552, 53071236, 9832961};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> heights = {90441778, 21452840, 70391622, 6167625, 50161082, 101666586, 18391675, 12040220, 29083874, 16262786, 24221960, 100211839, 24645717, 22960039, 77719644, 49930949, 97440623, 19366144, 40662888, 39280586, 17475830, 39254310, 18754523, 102586189, 74672743, 102547742, 77455403, 102655753, 56301492, 62938328, 80284067, 19845275, 56399634, 98644672, 49549822, 28226940, 91690452, 84789582, 49682010, 17930996, 109209084, 70163689, 78593325, 82353221, 98561306, 87535392, 62709917};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> heights = {177637985, 159333232, 153559657, 76101519, 266374720, 365994177, 14140589, 81475844, 331379318, 167735337, 173678185, 406632390, 108909217, 47733957, 76683520, 12261996, 60179593, 239960199, 160005420, 45481417, 335001715, 232748283, 88796484, 7930905, 112337659, 237826025, 190252662, 1315308, 153232940, 135958619, 329785704, 325607422, 99213842, 371735041, 169616455, 4357199, 48834304, 144803168, 139851664, 41496713, 252924276, 395311200, 198414653, 391621503, 289679735, 24558001, 146381967, 122679487};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> heights = {51625274, 151403520, 52205708, 95587450, 15080017, 80809393, 122513423, 32936838, 173768225, 325801664, 3178864, 233430991, 218704022, 206941980, 201387851, 14217290, 26986936, 297226135, 12721493, 65328121, 25116752, 31150129, 147858084, 103085953, 75751279, 67899966, 115878108, 8196751, 30285288, 111168973, 92382694, 94182686, 325743656, 75137184, 123856033, 154615881, 10419525, 149461440, 111045502, 33324870, 37251317, 20381510, 127966833, 232137524, 94752685, 99832356, 83844441, 168136470, 83046051, 75849343};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> heights = {6597737, 29204069, 7269155, 4626083, 9882076, 30118601, 25810380, 1680184, 21841786, 20241826, 3020831, 3806930, 23812662, 35134554, 6855861, 31261392, 33859356, 2923296, 31850817, 30808699, 14898247, 9939999, 18124297, 23478393, 5933473, 30893590, 25924910, 6242628, 2808020, 4466883, 427734, 25929408, 25642683, 12426324, 22306736, 22685661, 23824121, 35137937, 32695854, 7709855};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> heights = {1743989, 23256174, 15425843, 84600539, 3681639, 42626666, 76097484, 151391648, 11515051, 137703882, 126363714, 173386665, 56568762, 31487965, 516326, 158029889, 57215035, 159315543, 146169355, 33951795, 80321741, 40824096, 153326859, 90303898, 7771889, 39929172, 70209209, 70443316, 26624941, 27724166, 30401499, 84379347, 25467607, 82257690, 36914071, 102522563, 35779953, 168700913, 101627366, 76627427, 140816789};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> heights = {11591663, 42999055, 121125945, 4307828, 147720848, 29639856, 43594, 54507250, 42809061, 13731836, 25998597, 303828680, 177965021, 74249428, 8241753, 40347178, 61488565, 112633723, 99996833, 109395829, 114734626, 22576723, 197700824, 140509814, 356508236, 366379529, 25148292, 380724201, 28969832, 180788656, 13216639, 23841408, 223234747, 92349054, 42622171, 41472623, 263078608, 42353280, 305759797, 104148890, 66287457, 184528239, 173956759, 34299539, 63716803, 49963312, 395120261, 324480281, 336010280, 34627943};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> heights = {682783, 114244124, 245973115, 278700732, 244956126, 76409555, 162654501, 197318697, 299655945, 165934208, 111403081, 17821274, 68735310, 172400300, 7420801, 214075231, 145807742, 37082992, 101730086, 48387564, 125677319, 291610863, 204307492, 40615321, 47983600, 180232771, 107636867, 256324340, 232848322, 26880042, 288602793, 130920, 256367120, 231189276, 57958870, 298736056, 25295779, 115774285, 208873775, 125624522, 165799617, 262445017, 133022388, 209460255, 265571979, 29538711, 225083424, 242301637, 195201255, 56540780};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> heights = {352211048, 209314846, 224909937, 82996936, 119388826, 77974074, 110162305, 18879812, 43780664, 18272193, 110142697, 359773819, 177104257, 321402120, 25219962, 104965521, 337233241, 234259972, 32341636, 252498743, 118051972, 225945480, 68686478, 69417571, 81459152, 101846507, 418181410, 136534914, 196864765, 18074544, 119725455, 80859868, 144877094, 106833854, 264288163, 408426684, 23554082, 259098619, 304143100, 37524522, 338998095, 871197, 23085567, 236969536, 128457109, 20419348, 5264204, 274304995, 5714433, 334639690};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> heights = {2412627, 1333940, 11311522, 4650198, 196478, 7473982, 8991852, 4791887, 2885005, 11591248, 6808946, 8615074, 2146683, 11685176, 6175639, 7596884, 8384417, 8433980, 891101, 10936644, 12186154, 13479668, 8744332, 1940145, 10294227, 6899449, 5875154, 12889138, 11614531, 7766419, 302095, 12207553, 8280077, 3182962, 5440439, 5469521, 6578240, 1503670, 8887226, 1052193, 3294284, 9351609, 5309427, 9065298, 2552936, 1683308, 9686160, 11909673, 13526260, 1071051};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> heights = {213283378, 198779656, 11670688, 178819645, 234889477, 98795863, 57451766, 178636197, 162775217, 138373259, 195772044, 127700822, 11148726, 14625530, 87792839, 210950610, 17951877, 97781541, 102891136, 137182373, 86924833, 106042195, 200874332, 28106159, 214347496, 74900273, 16192503, 183630519, 185350157, 23013401, 306916690, 235083119, 294351343, 178089788, 238002761, 17142524, 87304980, 223922701, 73504820, 22505781, 42993488, 67349249, 21800559, 114179477, 4358770, 91609450, 161601822, 113222877, 13418756, 104914890};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> heights = {1000000000, 999999999, 999999998, 999999997, 999999996, 1, 2, 3, 4, 5};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> heights = {244645169, 956664793, 752259473, 577152868, 605440232, 569378507, 111664772, 653430457, 454612157, 397154317};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> heights = {9, 2, 1, 8, 1, 8, 10, 7, 4, 8, 9, 9, 4, 4, 5, 6, 9, 10, 2, 8, 5, 8, 1, 2, 1, 7, 7, 9, 8, 9, 9, 1, 6, 9, 2, 3, 1, 1, 3, 3, 7, 5, 7, 4, 7, 4};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> heights = {7, 3, 5, 2, 9, 6, 9, 3, 5, 1, 9, 9, 4, 2, 2, 7, 7, 2, 5, 9, 9, 10, 5, 3, 3, 2, 9, 2, 10, 2, 4, 9, 10, 1, 4, 10, 4, 4};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> heights = {6, 9, 1, 3, 2, 7, 4, 6, 5, 9, 9, 4, 3, 1, 1, 1, 8, 7, 7, 5, 5, 4, 8, 9, 7, 8, 3, 8, 9, 3, 10, 2, 1, 5, 7, 2, 4, 2, 7};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> heights = {1, 5, 1, 4, 8, 8, 9, 9, 6, 9, 2, 8, 3, 7, 4, 6, 8, 9, 7, 5, 5, 1, 8, 1, 7, 1, 4, 1, 10, 1};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> heights = {5, 5, 10, 3, 3, 1, 5, 4, 2, 9, 1, 8, 2, 1, 4, 6, 4, 9, 3, 6, 7, 8, 3, 2, 2, 5, 2, 9, 5, 7, 8, 1, 3, 9, 7, 2, 9, 9, 5, 10};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> heights = {6, 9, 9, 3, 4, 9, 7, 1, 5, 4, 9, 4, 1, 9, 1, 6, 8, 3, 3, 4, 5, 6, 5, 3, 5, 7, 6, 4, 9, 9, 5, 5, 5, 4, 1, 5, 6, 8, 4, 6, 10, 6, 4, 8, 3, 6, 4, 9, 10, 5};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> heights = {5, 6, 7, 10, 4, 7, 10, 1, 6, 3, 8, 6, 1, 7, 9, 3, 8, 1, 5, 3, 8, 1, 2, 1, 7, 3, 9, 9, 2, 8, 6, 2, 6, 7, 2, 2, 9, 8, 3, 9, 8, 5, 6, 9, 9, 7, 1, 10, 6, 3};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> heights = {10, 5, 4, 3, 9, 5, 9, 7, 4, 1, 4, 3, 3, 7, 2, 6, 8, 8, 1, 9, 9, 7, 2, 3, 3, 8, 5, 8, 3, 1, 3, 3, 9, 7, 4, 3, 6, 9, 9, 2, 1, 9, 3, 5, 9, 9, 8, 10, 3, 10};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> heights = {9, 9, 3, 9, 9, 8, 3, 1, 3, 3, 3, 7, 2, 5, 6, 8, 1, 2, 3, 7, 3, 4, 5, 6, 2, 6, 2, 3, 1, 6, 3, 3, 3, 3, 1, 8, 8, 8, 9, 5, 10, 3, 6, 1, 1, 5, 1, 1, 6, 5};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> heights = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> heights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> heights = {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> heights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> heights = {2, 2, 2, 2, 2, 2, 1811060, 1811060, 1811060, 1811060, 1811060, 1811060, 1811060, 1811060, 1811060, 1811060, 1811060, 1811060, 1811060, 1811060, 10262664};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> heights = {10627693, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 1814519, 42, 42, 42, 42, 42, 42, 42};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> heights = {48, 48, 48, 48, 48, 48, 48, 48, 48, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 4052712, 19813072};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> heights = {40214627, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 6865931, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> heights = {10251325, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 904608, 87, 87, 87, 87, 87};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> heights = {20314647, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 3502575, 60, 60, 60, 60, 60, 60};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> heights = {2847121, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 490921, 46, 46, 46, 46, 46, 46, 46, 46};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> heights = {7, 7, 7, 7, 7, 7, 7, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 491137, 5566147};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> heights = {18, 18, 18, 18, 18, 18, 18, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 1963063, 12058723};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> heights = {22, 22, 22, 22, 22, 22, 22, 22, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 3529852, 20473036};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> heights = {17, 17, 17, 17, 17, 17, 17, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 1991006, 12230378};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> heights = {60, 60, 60, 60, 60, 60, 60, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 3867861, 23759409};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> heights = {12804157, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 4115647, 37, 37, 37, 37, 37, 37, 37, 37, 37};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> heights = {40, 40, 40, 40, 40, 40, 40, 40, 40, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 7969396, 38961336};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> heights = {24950676, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 4061820, 98, 98, 98, 98, 98, 98, 98};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> heights = {5599132, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 965404, 44, 44, 44, 44, 44, 44, 44, 44};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> heights = {13, 13, 13, 13, 13, 13, 13, 13, 13, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 3725686, 22886290};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> heights = {91, 91, 91, 91, 91, 91, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 4099166, 23774726};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> heights = {21, 21, 21, 21, 21, 21, 21, 21, 21, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 1759881, 5475141};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> heights = {24414595, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 3974551, 98, 98, 98, 98, 98, 98, 98};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> heights = {2705094, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 466446, 61, 61, 61, 61, 61, 61, 61, 61, 61};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> heights = {3, 3, 3, 3, 3, 3, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 490656, 5560737};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> heights = {20566533, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 3629445, 69, 69, 69, 69, 69, 69, 69, 69};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> heights = {66, 66, 66, 66, 66, 66, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 4122966, 23363166};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> heights = {25397253, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 3864807, 9, 9, 9, 9, 9, 9, 9};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> heights = {40, 40, 40, 40, 40, 40, 40, 40, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 1864938, 12255084};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> heights = {244645169, 956664793, 752259473, 577152868, 605440232, 569378507, 111664772, 653430457, 454612157, 397154317};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> heights = {244645169, 956664793, 752259473, 577152868, 605440132, 569278507, 111664772, 653430457, 454612157, 397154317};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> heights = {1, 5, 3, 2, 6, 3, 2, 6, 4, 2, 5, 7, 3, 1, 5};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> heights = {999999990, 999999995, 999999991, 999999998, 999999995, 999999994, 999999993, 999999998, 999999998, 999999997, 999999991, 999999998, 999999997, 999999995, 999999993, 999999990, 999999990, 999999993, 999999991, 999999991, 999999999, 999999994, 999999991, 999999990, 999999990, 999999993, 999999995, 999999995, 999999996, 999999996, 999999991, 999999996, 999999994, 999999993, 999999990, 999999996, 999999997, 999999998, 999999995, 999999993, 999999998, 999999997, 999999999, 999999999, 999999995, 999999991, 999999994, 999999992, 999999998, 999999992};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> heights = {1000000000, 1, 999999999, 999999998, 999999997, 1000000000};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> heights = {5, 5, 5, 5};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> heights = {999996999, 999994999, 299999999, 999989999, 100000009, 992299999, 999955999, 999889999, 999319999, 99869999, 99967999, 999999999, 924899999, 999131399, 99918999, 999999999, 999915999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999991899, 999999999, 999996666, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999199999, 999982999, 999999999, 999999999, 999994399, 999999999, 999999999, 991729999, 999919399, 988999999};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> heights = {12, 1, 1, 11, 1, 1, 10, 1, 1, 9};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> heights = {4, 3, 3, 1};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> heights = {2, 4, 5, 3, 8, 4, 7, 3, 2, 99, 1, 2, 23, 4, 34, 343, 4, 34, 5, 4, 5, 5, 7, 57, 5, 6, 4, 3, 45, 352, 122, 1, 124, 2, 35, 3, 34, 53, 45, 23, 53, 53, 53, 45, 345, 1, 1, 1, 2};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> heights = {51596470, 1, 1, 153958578, 1, 1, 256320686, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> heights = {999956436, 999769430, 999344763, 999294066, 999875863, 999547097, 999614596, 999110928, 999666781, 999648445, 999338311, 999573316, 999842738, 999932785, 999426139, 999355222, 999779477, 999607093, 999803786, 999746592, 999209213, 999971806, 999787921, 999647249, 999124751, 999601430, 999441700, 999446637, 999004457, 999730586, 999750375, 999137674, 999807451, 999874362, 999904054, 999385877, 999158568, 999657948, 999429342, 999086859, 999107082, 999077242, 999661602, 999518657, 999468203, 999899295, 999352951, 999445149, 999119788, 999075566};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> heights = {1, 2, 3, 4, 1};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> heights = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> heights = {1, 3, 4, 3, 1};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> heights = {5, 20, 3};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> heights = {1, 2, 3, 1000000000, 1, 1, 1, 1, 100, 500000000, 499999999, 1, 1, 1, 1, 1, 1};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> heights = {1000000000, 999999999, 999999998, 999999997, 999999996, 1, 2, 3, 4, 999563466, 5, 543634645};
    BestView* pObj = new BestView();
    clock_t start = clock();
    int result = pObj->numberOfBuildings(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13698&pm=10341
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define SIZE(X) ((int)(X.size())) 
typedef long long int64; 
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;} 
 
class BestView 
{ 
public: 
  vector<int> solve(vector<int> A) 
  { 
    vector<int> R(SIZE(A),0); 
    for (int i=0;i<SIZE(A);i++) 
    { 
      int64 x1=0,y1=-1; 
      for (int k=i+1;k<SIZE(A);k++) 
      { 
        int64 x2=k-i,y2=A[k]-A[i]; 
        if (y2*x1>x2*y1) 
        { 
          R[i]++; 
          x1=x2; 
          y1=y2; 
        } 
      } 
    } 
    return R; 
  } 
  int numberOfBuildings(vector <int> A) 
  { 
    vector<int> B=solve(A); 
    reverse(A.begin(),A.end()); 
    vector<int> C=solve(A); 
    reverse(C.begin(),C.end()); 
    int R=0; 
    for (int i=0;i<SIZE(A);i++) checkmax(R,B[i]+C[i]); 
    return R; 
  } 
};

********************************************************************************
*******************************************************************************/