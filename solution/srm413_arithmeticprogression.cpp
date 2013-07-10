/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9839
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

class ArithmeticProgression {
public:
    double minCommonDifference(int a0, vector<int> seq);
};

double ArithmeticProgression::minCommonDifference(int a0, vector<int> seq) {
    double ret;
    return ret;
}


int test0() {
    int a0 = 0;
    vector<int> seq = {6, 13, 20, 27};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 6.75;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int a0 = 1;
    vector<int> seq = {2, 3, 4, 5, 6};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a0 = 3;
    vector<int> seq = {};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a0 = 3;
    vector<int> seq = {3, 3, 3, 3, 4};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a0 = 1;
    vector<int> seq = {-3};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a0 = 0;
    vector<int> seq = {6, 14};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a0 = -1000000;
    vector<int> seq = {1000000};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 2000000.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a0 = 691937;
    vector<int> seq = {692263, 692589, 692915, 693242, 693568, 693894, 694220, 694547, 694873, 695199, 695525, 695852, 696178, 696504, 696830, 697157, 697483, 697809, 698135, 698462, 698788, 699114, 699440, 699767, 700093, 700419, 700745, 701072, 701398, 701724, 702050, 702377, 702703, 703029, 703355, 703682, 704008, 704334, 704660, 704987, 705313};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 326.25;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a0 = 885027;
    vector<int> seq = {885116, 885206, 885296, 885385, 885475, 885565, 885654, 885744, 885834, 885924, 886013, 886103, 886193, 886282, 886372, 886462, 886552, 886641, 886731, 886821, 886910, 887000, 887090, 887179, 887269, 887359, 887449, 887538, 887628, 887718, 887807, 887897, 887987, 888077, 888166, 888256, 888346, 888435, 888525, 888615, 888704, 888794, 888884};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 89.70588235294117;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a0 = 201850;
    vector<int> seq = {202213, 202576, 202939, 203303, 203666, 204029, 204393, 204756, 205119, 205483, 205846, 206209, 206573, 206936, 207299, 207663, 208026, 208389, 208753, 209116, 209479, 209843, 210206, 210569, 210933, 211296, 211659, 212023};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 363.32142857142856;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a0 = -103259;
    vector<int> seq = {-97115, -90970, -84825, -78680, -72535, -66390, -60246, -54101, -47956, -41811, -35666, -29521, -23376, -17232, -11087, -4942, 1203, 7348, 13493, 19638, 25782, 31927, 38072, 44217, 50362, 56507, 62651};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 6144.85;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a0 = -910980;
    vector<int> seq = {-910928, -910875, -910822, -910770, -910717, -910664, -910612, -910559, -910506, -910454, -910401, -910348, -910296, -910243, -910190, -910138, -910085, -910032, -909980, -909927, -909874, -909821, -909769, -909716, -909663, -909611, -909558, -909505, -909453, -909400, -909347, -909295, -909242, -909189, -909137, -909084, -909031};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 52.68181818181818;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a0 = -297580;
    vector<int> seq = {-297580, -297579, -297578, -297577, -297576, -297575, -297574, -297573, -297572, -297571, -297570, -297569, -297568, -297567, -297566, -297565, -297564, -297563, -297562, -297561, -297560, -297559, -297558, -297557, -297556, -297555, -297554, -297553, -297552, -297551};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9666666666666667;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a0 = -277277;
    vector<int> seq = {-276973, -276669, -276365, -276061, -275756, -275452, -275148, -274844, -274539, -274235, -273931, -273627, -273322, -273018, -272714, -272410, -272106, -271801, -271497, -271193, -270889, -270584, -270280, -269976, -269672, -269367, -269063, -268759, -268455, -268150, -267846, -267542, -267238, -266934, -266629, -266325, -266021, -265717, -265412, -265108, -264804, -264500, -264195, -263891, -263587, -263283, -262978, -262674, -262370};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 304.2340425531915;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a0 = 513379;
    vector<int> seq = {513434, 513490, 513545, 513601, 513656, 513712, 513767, 513823, 513878, 513934, 513989, 514045, 514100, 514156, 514211, 514267, 514322, 514378, 514433, 514489, 514544, 514600, 514655, 514711, 514766, 514822, 514877, 514933};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 55.5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a0 = 132385;
    vector<int> seq = {132592, 132799, 133006, 133214, 133421, 133628, 133835, 134043, 134250, 134457, 134664, 134872, 135079, 135286, 135493, 135701, 135908, 136115, 136323, 136530, 136737, 136944, 137152, 137359, 137566, 137773, 137981, 138188, 138395, 138602, 138810, 139017, 139224, 139432, 139639, 139846, 140053, 140261, 140468, 140675, 140882, 141090, 141297};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 207.26470588235293;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a0 = -825303;
    vector<int> seq = {-825190, -825076, -824962, -824849, -824735, -824621, -824508, -824394, -824280, -824167, -824053, -823939, -823826, -823712, -823598, -823485, -823371, -823257, -823144, -823030, -822916, -822803, -822689, -822575, -822461, -822348, -822234, -822120, -822007, -821893, -821779, -821666, -821552, -821438, -821325, -821211, -821097, -820984, -820870, -820756, -820643, -820529, -820415};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 113.68;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a0 = 483992;
    vector<int> seq = {484015, 484039, 484063, 484087, 484111, 484135, 484159, 484183, 484207, 484230, 484254, 484278, 484302, 484326, 484350, 484374, 484398, 484422, 484446, 484469, 484493, 484517, 484541, 484565, 484589, 484613, 484637, 484661, 484685, 484708, 484732, 484756, 484780, 484804, 484828, 484852, 484876, 484900, 484924, 484947, 484971, 484995, 485019, 485043, 485067};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 23.897435897435898;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a0 = -425669;
    vector<int> seq = {-425621, -425573, -425524, -425476, -425427, -425379, -425330, -425282, -425233, -425185, -425136, -425088, -425039, -424991, -424943, -424894, -424846, -424797, -424749, -424700, -424652, -424603, -424555, -424506, -424458, -424409, -424361, -424313, -424264, -424216, -424167, -424119, -424070, -424022, -423973, -423925, -423876, -423828, -423779, -423731, -423682, -423634, -423586, -423537, -423489, -423440, -423392, -423343, -423295, -423246};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 48.46341463414634;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int a0 = 565849;
    vector<int> seq = {566031, 566214, 566396, 566579, 566762, 566944, 567127, 567310, 567492, 567675, 567858, 568040, 568223, 568405, 568588, 568771, 568953, 569136, 569319, 569501, 569684, 569867, 570049, 570232, 570414, 570597, 570780};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 182.63636363636363;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int a0 = 759001;
    vector<int> seq = {759087, 759173, 759260, 759346, 759433, 759519, 759605, 759692, 759778, 759865, 759951, 760037, 760124, 760210, 760297, 760383, 760470, 760556, 760642, 760729, 760815, 760902, 760988, 761074, 761161, 761247, 761334, 761420, 761507, 761593, 761679, 761766, 761852, 761939, 762025, 762111, 762198, 762284, 762371, 762457, 762544, 762630, 762716, 762803, 762889, 762976, 763062, 763148, 763235};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 86.41463414634147;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a0 = -93495;
    vector<int> seq = {-93408, -93320, -93232, -93144, -93056, -92968, -92880, -92792, -92704, -92616, -92528, -92440, -92352, -92264, -92176, -92088, -92000, -91912, -91824, -91736, -91648, -91560, -91472, -91384, -91296, -91208, -91120, -91032, -90944, -90856, -90768, -90680};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 87.96875;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a0 = 476116;
    vector<int> seq = {476874, 477632, 478391, 479149, 479908, 480666, 481425, 482183, 482941, 483700, 484458, 485217, 485975, 486734, 487492, 488250, 489009, 489767, 490526, 491284, 492043, 492801, 493559, 494318, 495076, 495835, 496593, 497352};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 758.4285714285714;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a0 = 750444;
    vector<int> seq = {750545, 750646, 750748, 750849, 750951, 751052, 751154, 751255, 751357, 751458, 751560, 751661, 751763, 751864, 751966, 752067, 752169, 752270, 752372, 752473, 752575, 752676, 752778, 752879, 752981, 753082, 753184, 753285, 753387, 753488};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 101.48275862068965;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a0 = 615554;
    vector<int> seq = {615666, 615779, 615892, 616005, 616118, 616231, 616344, 616457, 616570, 616682, 616795, 616908, 617021, 617134, 617247, 617360, 617473, 617586, 617698, 617811, 617924, 618037, 618150, 618263, 618376, 618489, 618602, 618714, 618827, 618940, 619053, 619166, 619279, 619392, 619505, 619618, 619730, 619843, 619956, 620069, 620182, 620295, 620408, 620521, 620634, 620746};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 112.88888888888889;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int a0 = -102185;
    vector<int> seq = {-100684, -99183, -97682, -96181, -94680, -93179, -91678, -90177, -88676, -87175, -85674, -84173, -82672, -81171, -79669, -78168, -76667, -75166, -73665, -72164, -70663, -69162, -67661, -66160, -64659, -63158, -61657, -60156, -58655, -57153, -55652, -54151, -52650, -51149, -49648, -48147, -46646, -45145, -43644, -42143, -40642, -39141, -37640};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1501.0666666666666;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a0 = -656644;
    vector<int> seq = {-655232, -653820, -652408, -650996, -649584, -648172, -646759, -645347, -643935, -642523, -641111, -639699, -638287, -636874, -635462, -634050, -632638, -631226, -629814, -628401, -626989, -625577, -624165, -622753, -621341, -619929};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1412.15;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a0 = 116804;
    vector<int> seq = {116829, 116854, 116879, 116904, 116929, 116954, 116979, 117005, 117030, 117055, 117080, 117105, 117130, 117155, 117180, 117206, 117231, 117256, 117281, 117306, 117331, 117356, 117381, 117407, 117432, 117457, 117482, 117507, 117532};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 25.125;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a0 = 705158;
    vector<int> seq = {705352, 705546, 705740, 705934, 706128, 706322, 706516, 706710, 706904, 707098, 707292, 707487, 707681, 707875, 708069, 708263, 708457, 708651, 708845, 709039, 709233, 709427, 709621, 709816, 710010, 710204, 710398};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 194.08333333333334;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int a0 = 998906;
    vector<int> seq = {999069, 999233, 999396, 999560, 999724, 999887};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 163.6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a0 = 947268;
    vector<int> seq = {947431, 947594, 947757, 947920, 948083, 948246, 948410, 948573, 948736, 948899, 949062, 949225, 949389, 949552, 949715, 949878, 950041, 950204, 950367, 950531, 950694, 950857, 951020, 951183, 951346, 951510, 951673, 951836, 951999, 952162, 952325, 952489, 952652, 952815, 952978, 953141, 953304, 953467};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 163.15625;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int a0 = 347360;
    vector<int> seq = {347434, 347508, 347582, 347656, 347730, 347804, 347878, 347952, 348026, 348100, 348175, 348249, 348323, 348397, 348471, 348545, 348619, 348693, 348767, 348841, 348915, 348990, 349064, 349138, 349212, 349286, 349360, 349434, 349508, 349582, 349656, 349730, 349805, 349879, 349953, 350027, 350101, 350175, 350249, 350323};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 74.0909090909091;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a0 = -349586;
    vector<int> seq = {-349340, -349093, -348847, -348600, -348354, -348107, -347860, -347614, -347367, -347121, -346874, -346628, -346381, -346134, -345888, -345641, -345395, -345148, -344902, -344655, -344408, -344162, -343915, -343669, -343422, -343175, -342929, -342682, -342436};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 246.57692307692307;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int a0 = -290591;
    vector<int> seq = {-290577, -290562, -290547, -290532, -290518, -290503, -290488, -290473, -290459, -290444, -290429, -290414, -290400, -290385, -290370, -290355, -290341, -290326, -290311, -290296, -290281, -290267, -290252, -290237, -290222, -290208, -290193, -290178};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 14.761904761904763;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int a0 = 925809;
    vector<int> seq = {926971, 928134, 929297, 930460, 931623, 932786, 933949, 935112, 936275, 937438, 938601, 939764, 940926, 942089, 943252, 944415, 945578, 946741, 947904, 949067, 950230, 951393, 952556, 953719, 954881, 956044, 957207, 958370, 959533, 960696, 961859, 963022};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1162.9166666666667;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int a0 = -275915;
    vector<int> seq = {-272366, -268817, -265268, -261719, -258170, -254621, -251072, -247523, -243973, -240424, -236875, -233326, -229777, -226228, -222679, -219130, -215581, -212031, -208482, -204933, -201384, -197835, -194286, -190737, -187188, -183638, -180089, -176540, -172991, -169442, -165893, -162344, -158795, -155246, -151696, -148147, -144598, -141049, -137500, -133951, -130402, -126853};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 3549.1153846153848;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int a0 = -771738;
    vector<int> seq = {-771640, -771542, -771443, -771345, -771246, -771148, -771049, -770951, -770853, -770754, -770656, -770557, -770459, -770360, -770262, -770163, -770065, -769967, -769868, -769770, -769671, -769573, -769474, -769376, -769278, -769179, -769081, -768982, -768884, -768785, -768687, -768588, -768490, -768392, -768293, -768195, -768096, -767998, -767899, -767801, -767703, -767604, -767506, -767407, -767309};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 98.4375;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a0 = 957500;
    vector<int> seq = {957618, 957736, 957854, 957972, 958090, 958208, 958326, 958444, 958562, 958680, 958798, 958916, 959034, 959152, 959270, 959389, 959507, 959625, 959743, 959861, 959979, 960097, 960215, 960333, 960451, 960569, 960687, 960805, 960923, 961041, 961159, 961278, 961396, 961514, 961632, 961750, 961868, 961986, 962104, 962222, 962340, 962458, 962576};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 118.0625;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int a0 = 833747;
    vector<int> seq = {833874, 834002, 834130, 834258, 834386, 834514, 834642, 834770, 834897, 835025, 835153, 835281, 835409, 835537, 835665, 835793, 835920, 836048, 836176, 836304, 836432, 836560, 836688, 836816, 836943, 837071};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 127.875;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a0 = 704252;
    vector<int> seq = {704265, 704279, 704292, 704306, 704319, 704333, 704346, 704360, 704373, 704387, 704400, 704414, 704427, 704441, 704454, 704468, 704481, 704495, 704508, 704522, 704535, 704549, 704562, 704576, 704590, 704603, 704617, 704630, 704644, 704657, 704671, 704684};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 13.52;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int a0 = 254423;
    vector<int> seq = {254499, 254575, 254651, 254728, 254804, 254880, 254956, 255033, 255109, 255185, 255261, 255338, 255414, 255490, 255566, 255643, 255719, 255795, 255871, 255948, 256024, 256100, 256176, 256253, 256329, 256405, 256481, 256558, 256634, 256710, 256786, 256863, 256939, 257015, 257091, 257168, 257244, 257320, 257396, 257473, 257549};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 76.25;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a0 = -593957;
    vector<int> seq = {-593860, -593763, -593666, -593569, -593471, -593374, -593277, -593180, -593083, -592985, -592888, -592791, -592694, -592597, -592499, -592402, -592305, -592208, -592111, -592013, -591916, -591819, -591722, -591625, -591527, -591430, -591333, -591236, -591139, -591041, -590944, -590847, -590750, -590653, -590555, -590458, -590361, -590264, -590167, -590069, -589972, -589875, -589778, -589680, -589583, -589486, -589389, -589292, -589194, -589097};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 97.20454545454545;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int a0 = -194324;
    vector<int> seq = {-194307, -194289, -194271, -194253, -194235, -194217, -194199, -194181, -194163, -194145, -194127, -194109, -194091, -194073, -194055, -194037, -194019, -194002, -193984, -193966, -193948, -193930, -193912, -193894, -193876, -193858, -193840, -193822, -193804, -193786};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 17.941176470588236;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int a0 = 257414;
    vector<int> seq = {277889, 298364, 318839, 339314, 359790, 380265, 400740, 421215, 441690, 462166, 482641, 503116, 523591, 544066, 564542, 585017, 605492, 625967, 646442, 666918, 687393, 707868, 728343, 748818, 769294, 789769, 810244, 830719, 851194, 871670, 892145, 912620, 933095, 953570, 974046, 994521};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 20475.2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int a0 = 225654;
    vector<int> seq = {225796, 225939, 226082, 226225, 226368, 226511, 226654, 226797, 226940, 227082, 227225, 227368, 227511, 227654, 227797, 227940, 228083, 228226, 228369, 228511, 228654, 228797, 228940, 229083, 229226, 229369, 229512, 229655, 229798, 229940, 230083, 230226, 230369, 230512, 230655, 230798, 230941, 231084, 231227, 231369, 231512, 231655, 231798, 231941, 232084, 232227, 232370, 232513, 232656, 232798};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 142.89795918367346;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int a0 = 142060;
    vector<int> seq = {143092, 144125, 145158, 146191, 147224, 148257, 149290, 150322, 151355, 152388, 153421, 154454, 155487, 156520, 157553, 158585, 159618, 160651, 161684, 162717, 163750, 164783, 165815, 166848, 167881, 168914, 169947, 170980, 172013, 173046, 174078, 175111, 176144, 177177, 178210, 179243, 180276, 181309, 182341, 183374, 184407, 185440, 186473, 187506, 188539, 189571};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1032.8684210526317;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int a0 = -107574;
    vector<int> seq = {-107539, -107503, -107468, -107432, -107397, -107361, -107325, -107290, -107254, -107219, -107183, -107147, -107112, -107076, -107041, -107005, -106970, -106934, -106898, -106863, -106827, -106792, -106756, -106720, -106685, -106649, -106614, -106578, -106542, -106507, -106471};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 35.58620689655172;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int a0 = 537709;
    vector<int> seq = {537734, 537760, 537786, 537811, 537837, 537863, 537888, 537914, 537940, 537965, 537991, 538017, 538042, 538068, 538094, 538120, 538145, 538171, 538197, 538222, 538248, 538274, 538299, 538325, 538351, 538376, 538402, 538428, 538453};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 25.6875;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int a0 = 164238;
    vector<int> seq = {164437, 164637, 164837, 165037, 165237, 165437, 165636, 165836, 166036, 166236, 166436, 166636, 166836, 167035, 167235, 167435, 167635, 167835, 168035, 168234, 168434, 168634, 168834, 169034, 169234, 169434};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 199.84615384615384;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a0 = 469190;
    vector<int> seq = {469287, 469384, 469482, 469579, 469677, 469774, 469872, 469969, 470067, 470164, 470262, 470359, 470457, 470554, 470652, 470749, 470847, 470944, 471042, 471139, 471237, 471334, 471432, 471529, 471627, 471724, 471822, 471919, 472017, 472114, 472212, 472309, 472407, 472504, 472602, 472699, 472797, 472894, 472992, 473089};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 97.48717948717949;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int a0 = 373106;
    vector<int> seq = {373265, 373425, 373585, 373745, 373905, 374065, 374225, 374385, 374545, 374705, 374865, 375025, 375185, 375345, 375505, 375665, 375825, 375985, 376145, 376305, 376465, 376625, 376785, 376945, 377105, 377265, 377425, 377585, 377745, 377905, 378065, 378225, 378385, 378545, 378705, 378865, 379025, 379185, 379345, 379505, 379665, 379825};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 159.97619047619048;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a0 = -291121;
    vector<int> seq = {-291083, -291044, -291006, -290967, -290929, -290890, -290852, -290813, -290775, -290736, -290698, -290659, -290621, -290582, -290544, -290505, -290467, -290428, -290390, -290351, -290313, -290274, -290236, -290197, -290159, -290120, -290082, -290043, -290005, -289966, -289927, -289889, -289850, -289812, -289773, -289735, -289696};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 38.516129032258064;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a0 = -684185;
    vector<int> seq = {-684126, -684067, -684007, -683948, -683889, -683829, -683770, -683711, -683651, -683592, -683533, -683473, -683414, -683355, -683295, -683236, -683177, -683117, -683058, -682999, -682939, -682880, -682821, -682761, -682702, -682643, -682583, -682524, -682465};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 59.333333333333336;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int a0 = 900905;
    vector<int> seq = {900933, 900961, 900990, 901018, 901046, 901075, 901103, 901131, 901160, 901188, 901216, 901245, 901273, 901301, 901330, 901358, 901386, 901415, 901443, 901471, 901500, 901528, 901556, 901585, 901613, 901641, 901670, 901698, 901726, 901755, 901783, 901811, 901840, 901868, 901896, 901925, 901953, 901982, 902010, 902038, 902067, 902095, 902123, 902152, 902180, 902208, 902237};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 28.342105263157894;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a0 = 35410;
    vector<int> seq = {35516, 35623, 35729, 35836, 35943, 36049, 36156, 36263, 36369, 36476, 36583, 36689, 36796, 36903, 37009, 37116, 37223, 37329, 37436, 37543, 37649, 37756, 37863, 37969, 38076, 38183, 38289, 38396, 38503, 38609, 38716, 38822, 38929, 39036, 39142, 39249, 39356, 39462};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 106.65517241379311;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int a0 = -934220;
    vector<int> seq = {-933981, -933742, -933502, -933263, -933024, -932784, -932545, -932305, -932066, -931827, -931587, -931348, -931108, -930869, -930630, -930390, -930151, -929912, -929672, -929433, -929193, -928954, -928715, -928475, -928236, -927996, -927757, -927518, -927278};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 239.3846153846154;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int a0 = 334991;
    vector<int> seq = {335352, 335714, 336076, 336438, 336800, 337161, 337523, 337885, 338247, 338609, 338970, 339332, 339694, 340056, 340418, 340779, 341141, 341503, 341865, 342227, 342588, 342950, 343312, 343674, 344036, 344397, 344759, 345121, 345483, 345845};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 361.8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a0 = 2;
    vector<int> seq = {2, 2, 3, 3, 4, 4, 5, 5, 5, 6, 6, 7, 7, 8, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 12, 13, 13, 14, 14, 15, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 19, 20, 20, 21, 21};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4358974358974359;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int a0 = 1000000;
    vector<int> seq = {1000000, 1000000, 1000000};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a0 = 1;
    vector<int> seq = {1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a0 = 0;
    vector<int> seq = {5, 11, 16};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a0 = 1;
    vector<int> seq = {2};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a0 = 1;
    vector<int> seq = {1, 2, 3, 4, 4};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int a0 = 0;
    vector<int> seq = {6, 13, 20, 27, 33};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 6.75;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a0 = 3;
    vector<int> seq = {3, 4, 5, 6, 7};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a0 = -1219;
    vector<int> seq = {629, 2478, 4327, 6176, 8025, 9874, 11723, 13572, 15421, 17269, 19118, 20967, 22816, 24665, 26514, 28363, 30212, 32061, 33910, 35758, 37607, 39456, 41305, 43154, 45003, 46852, 48701, 50550, 52399, 54247, 56096, 57945, 59794, 61643, 63492, 65341};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1848.896551724138;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a0 = -33;
    vector<int> seq = {-27, -20, -13};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 6.666666666666667;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a0 = -2;
    vector<int> seq = {-1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a0 = 0;
    vector<int> seq = {5, 10, 16, 22};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int a0 = -1000000;
    vector<int> seq = {-1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -999999};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int a0 = 0;
    vector<int> seq = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int a0 = -1;
    vector<int> seq = {-1, 0, 0, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int a0 = -10;
    vector<int> seq = {-8, -5, -3};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int a0 = 0;
    vector<int> seq = {5, 5, 100, 5, 5};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int a0 = 0;
    vector<int> seq = {6, 13, 20, 27};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 6.75;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int a0 = -10;
    vector<int> seq = {-9, -7};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int a0 = 0;
    vector<int> seq = {6, 13, 20, 28};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int a0 = 3;
    vector<int> seq = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int a0 = 3;
    vector<int> seq = {3, 3, 3, 4, 4, 4, 5};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2857142857142857;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int a0 = -1000000;
    vector<int> seq = {1000000};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 2000000.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int a0 = 3;
    vector<int> seq = {2, 2};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int a0 = 17;
    vector<int> seq = {26, 35, 44, 53, 62, 71, 80, 89, 99, 108, 117, 126, 135, 144, 153, 162, 172, 181, 190, 199, 208, 217, 226, 235, 244, 254, 263, 272, 281, 290, 299, 308, 317, 327, 336, 345, 354, 363, 372, 381, 390, 400, 409, 418, 427, 436, 445, 454, 463, 472};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 9.119047619047619;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int a0 = 3;
    vector<int> seq = {3, 4, 4};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int a0 = 3;
    vector<int> seq = {3, 3, 3, 3, 3, 3};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int a0 = -1000000;
    vector<int> seq = {0, 1000000};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1000000.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int a0 = 5;
    vector<int> seq = {};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int a0 = 0;
    vector<int> seq = {1, 1, 1, 1, 2, 3};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int a0 = 999909;
    vector<int> seq = {999910, 999911, 999912, 999913, 999914, 999915, 999916, 999917, 999918, 999919, 999920, 999921, 999922, 999923, 999924, 999925, 999926, 999927, 999928, 999929, 999930, 999931, 999932, 999933, 999934, 999935, 999936, 999937, 999938, 999939, 999940, 999941, 999942, 999943, 999944, 999945, 999946, 999947, 999948, 999949, 999950, 999951, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0232558139534884;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int a0 = -10;
    vector<int> seq = {-8, -7};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int a0 = 1;
    vector<int> seq = {2, 3, 4, 5, 6};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int a0 = 0;
    vector<int> seq = {1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int a0 = 0;
    vector<int> seq = {1, 3, 4, 6, 7, 9, 10, 12, 11};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int a0 = -1;
    vector<int> seq = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int a0 = 3;
    vector<int> seq = {3, 3, 3, 3, 3};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int a0 = 1790;
    vector<int> seq = {2913, 4037, 5160, 6284};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1123.5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int a0 = 1;
    vector<int> seq = {3, 2};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int a0 = 0;
    vector<int> seq = {0};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int a0 = -5;
    vector<int> seq = {-5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14634146341463414;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int a0 = -3;
    vector<int> seq = {-2};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int a0 = 0;
    vector<int> seq = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int a0 = 0;
    vector<int> seq = {3};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int a0 = 0;
    vector<int> seq = {6, 14, 22, 30};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int a0 = 0;
    vector<int> seq = {0, 1, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int a0 = -9;
    vector<int> seq = {-7, -5, -3, -1, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int a0 = -7;
    vector<int> seq = {-5};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int a0 = 0;
    vector<int> seq = {1, 3, 2};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int a0 = 5;
    vector<int> seq = {3, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int a0 = -10;
    vector<int> seq = {-7, -4, 0, 3, 7};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int a0 = 0;
    vector<int> seq = {1, 1, 1, 2, 2, 3};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int a0 = 13;
    vector<int> seq = {14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108, 110, 112};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.98;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int a0 = 1;
    vector<int> seq = {3};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int a0 = 0;
    vector<int> seq = {1, 1, 1, 1, 1, 1, 1, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int a0 = 0;
    vector<int> seq = {9, 10};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int a0 = 1;
    vector<int> seq = {2, 3, 4, 6, 7};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int a0 = 0;
    vector<int> seq = {0, 0, 1, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int a0 = -1;
    vector<int> seq = {-1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int a0 = 0;
    vector<int> seq = {1, 3, 4};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int a0 = -4;
    vector<int> seq = {-2};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int a0 = 0;
    vector<int> seq = {1, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int a0 = -100;
    vector<int> seq = {-99, -97, -96, -94, -93};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int a0 = 2;
    vector<int> seq = {3, 4, 6};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int a0 = 0;
    vector<int> seq = {0, 1, 2};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int a0 = 3;
    vector<int> seq = {};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int a0 = 0;
    vector<int> seq = {1, 3, 5, 7, 9, 10};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int a0 = 3;
    vector<int> seq = {3, 3, 3, 3, 4, 4};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int a0 = 1;
    vector<int> seq = {1, 1, 2, 2};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int a0 = 0;
    vector<int> seq = {1, 3, 4, 5, 6, 7};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int a0 = 0;
    vector<int> seq = {3, 7, 10};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int a0 = 8;
    vector<int> seq = {};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int a0 = 0;
    vector<int> seq = {1, 2, 4, 5};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int a0 = -100000;
    vector<int> seq = {3, 3, 3, 3, 3};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int a0 = 2;
    vector<int> seq = {3};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int a0 = -1;
    vector<int> seq = {-1, 0, 0};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int a0 = 0;
    vector<int> seq = {2, 5, 7};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int a0 = 1;
    vector<int> seq = {5};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int a0 = 0;
    vector<int> seq = {3, 5};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int a0 = 0;
    vector<int> seq = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 50};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0204081632653061;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int a0 = -100;
    vector<int> seq = {-94, -87};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int a0 = -100;
    vector<int> seq = {-94, -87, -80, -73};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 6.75;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int a0 = 0;
    vector<int> seq = {999999};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 999999.0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int a0 = 0;
    vector<int> seq = {1, 2, 3, 4, 5, 10000, 7, 8, 9, 10};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int a0 = 0;
    vector<int> seq = {1, 3, 4, 5};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int a0 = 3;
    vector<int> seq = {3, 3, 3, 4, 4};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int a0 = -999902;
    vector<int> seq = {-999902, -999902, -999901, -999901, -999901, -999900, -999900, -999900, -999899, -999899, -999899, -999898, -999898, -999897, -999897, -999897, -999896, -999896, -999896, -999895, -999895};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.35714285714285715;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int a0 = 0;
    vector<int> seq = {-1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int a0 = 0;
    vector<int> seq = {6, 13, 20, 26};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 6.666666666666667;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int a0 = 0;
    vector<int> seq = {2, 1};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int a0 = 0;
    vector<int> seq = {6, 12, 19, 25};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 6.333333333333333;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int a0 = 0;
    vector<int> seq = {6, 20};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int a0 = 0;
    vector<int> seq = {0, 0, 0, 0, 0, 2};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int a0 = 0;
    vector<int> seq = {1000000};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1000000.0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int a0 = 0;
    vector<int> seq = {1, 2, 3, 5, 6};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int a0 = 0;
    vector<int> seq = {6, 13, 20, 27, 30};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int a0 = 0;
    vector<int> seq = {7, 13, 20, 27};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int a0 = -1;
    vector<int> seq = {-1, -1, 0};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int a0 = 0;
    vector<int> seq = {6, 11, 17};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int a0 = -5;
    vector<int> seq = {-3, -2};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int a0 = -2;
    vector<int> seq = {3, 9, 15};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = 5.666666666666667;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int a0 = 0;
    vector<int> seq = {7, 13};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int a0 = 0;
    vector<int> seq = {1, 2, 2};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int a0 = 1;
    vector<int> seq = {3, 5, 4, 7};
    ArithmeticProgression* pObj = new ArithmeticProgression();
    clock_t start = clock();
    double result = pObj->minCommonDifference(a0, seq);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=13504&pm=9839
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
 
using namespace std;
 
class ArithmeticProgression
{
public:
    double minCommonDifference(int a0, vector <int> seq);
};
 
double ArithmeticProgression::minCommonDifference(int a0, vector <int> seq)
{
    int N = seq.size();
    if (N == 0) return 0.0;
    double high = HUGE_VAL;
    double low = 0.0;
    for (int i = 0; i < N; i++)
    {
        double l = (seq[i] - a0) / (double) (i + 1);
        double h = (seq[i] - a0 + 1) / (double) (i + 1);
        low = max(low, l);
        high = min(high, h);
    }
    if (high <= low) return -1.0;
    else return low;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/