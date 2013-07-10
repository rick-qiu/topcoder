/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1685
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

class Sets {
public:
    vector<int> operate(vector<int> A, vector<int> B, string operation);
};

vector<int> Sets::operate(vector<int> A, vector<int> B, string operation) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {3, 4, 5, 6};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {3, 4, 5, 6};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {432, 756, 123};
    vector<int> B = {534, 76, 1209};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {6, 5, 7, 4};
    vector<int> B = {7, 6, 4, 10};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {342, 654, 897, 312, 76, 23, 78};
    vector<int> B = {21, 43, 87, 98, 23, 756, 897, 234, 645, 876, 123};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 43, 76, 78, 87, 98, 123, 234, 312, 342, 645, 654, 756, 876};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {};
    vector<int> B = {};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {};
    vector<int> B = {};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {};
    vector<int> B = {};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {-466719, -244027, -862196, 643531, -39291, 243096, -826803, -95873, 331987, 808483, -638570, 271226, 730732, -671848, 535948, 163231, -239133, 149077, -543551, 864301, 695924, -873674, 14355, 264947, -367384, 801789, -193466, -237645, 252191, -537796, 989441, -397021, 370805, -398819, 592359, 107395, -749452, 519852, 570249, -615550, 212357, -120019, 514511, -82354};
    vector<int> B = {};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-873674, -862196, -826803, -749452, -671848, -638570, -615550, -543551, -537796, -466719, -398819, -397021, -367384, -244027, -239133, -237645, -193466, -120019, -95873, -82354, -39291, 14355, 107395, 149077, 163231, 212357, 243096, 252191, 264947, 271226, 331987, 370805, 514511, 519852, 535948, 570249, 592359, 643531, 695924, 730732, 801789, 808483, 864301, 989441};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {145186, 9267, -777091, -825634, -542613, -500323, 548187, 186207, 512978, 913361, -355415, -925247, -677806, -346872, -861783, -831498, -140756, 407376, -219930, -918261, 773195, -508173, -923837, 818781, 784739, -321889, 556070, 227064, 232725, 758092, 566778, 142067, 69762, 276793, 178352};
    vector<int> B = {773195, -150591, 917224, -409618, 432461, 512978, 694024};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-925247, -923837, -918261, -861783, -831498, -825634, -777091, -677806, -542613, -508173, -500323, -409618, -355415, -346872, -321889, -219930, -150591, -140756, 9267, 69762, 142067, 145186, 178352, 186207, 227064, 232725, 276793, 407376, 432461, 548187, 556070, 566778, 694024, 758092, 784739, 818781, 913361, 917224};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {-474306, 769779, -103516, -66209, 3352, 590596, 260379, -874536, -344281, 406376, 383047, 547124, 383659, -814258, -411908, 41784, -499484, -56582, -776121, 179630, -454269, 239280, -554846, 710552, 927934, 901096, -81746, -56179, -254539, -444163, 777090, -245395, -918965, 805573, -43681, 36752, -777258, 966558, -84502, -977531, -957458, -838379, 856441};
    vector<int> B = {385194, 124941, 239280, 772474, 777090, -928865, 590596, -81746, 451364, 733645, -329799, -84502, -43681, -439197, -56179, 804986, -423900, -814258, -444163, -776121, -109695, 435627, 805573, -344281, -110350, -777258, -454269, 63417, -489943, 651393, 406376, -554846, 856441, -838379, -608072, -106124, 260379, -66209, -252412, -254539, -56582, 682485, 36752, 769779, 725119};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-977531, -957458, -928865, -918965, -874536, -838379, -814258, -777258, -776121, -608072, -554846, -499484, -489943, -474306, -454269, -444163, -439197, -423900, -411908, -344281, -329799, -254539, -252412, -245395, -110350, -109695, -106124, -103516, -84502, -81746, -66209, -56582, -56179, -43681, 3352, 36752, 41784, 63417, 124941, 179630, 239280, 260379, 383047, 383659, 385194, 406376, 435627, 451364, 547124, 590596, 651393, 682485, 710552, 725119, 733645, 769779, 772474, 777090, 804986, 805573, 856441, 901096, 927934, 966558};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {-439155, 573655, -15394, -336734, -304309, -460071, -572703, 590440, 894386, 817539, -768263, 828686, 414650, 846134, 3386, -505120, 476080, -238161, -885242, -627942, -570924, -679395, -72184, 186479, 751396, 993488, -457139, 413343, 640063, -832377, -681996, 618517, 125644, 863169, 530900, -128832, 250622, -849019, -399702, -525209, 794707, 64813, 857748, 21363, 706661, -418727};
    vector<int> B = {21363, -525209, 848614, 268856, 573655, -203546, -928008, -205040, 836796, 530900, -505120, 476080, 941054, -399702, 817539, -457139, 706661, 973761, -641792, 359213, -819526, 186479, 990398, 414650, -936473};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-936473, -928008, -885242, -849019, -832377, -819526, -768263, -681996, -679395, -641792, -627942, -572703, -570924, -460071, -439155, -418727, -336734, -304309, -238161, -205040, -203546, -128832, -72184, -15394, 3386, 64813, 125644, 250622, 268856, 359213, 413343, 590440, 618517, 640063, 751396, 794707, 828686, 836796, 846134, 848614, 857748, 863169, 894386, 941054, 973761, 990398, 993488};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {};
    vector<int> B = {-283577, -546518, -394669, -467009, -550763, 220857, -252988, 269975, 857469, 677017, -640114, 61024, 539975, 96067, 869935, 899164, -692177, 299612, 16849, -337010, -505417, -312061, -38791, 66437, 571145, 361198, 771617, -52356, 584252, -830741};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-830741, -692177, -640114, -550763, -546518, -505417, -467009, -394669, -337010, -312061, -283577, -252988, -52356, -38791, 16849, 61024, 66437, 96067, 220857, 269975, 299612, 361198, 539975, 571145, 584252, 677017, 771617, 857469, 869935, 899164};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {-948849};
    vector<int> B = {451218, -982833, -17447, -158162, -399214, -51361, -159082, 539164, -363587, 452444, 656625, 478232, 865710, 122137, -191310, 50158, -42931, -751366, 362875, 958066, -237831, -341269, -814180, -394337, 511465, -230778, 292734, -950095, -730051, -955039, -639158, -719092, 47801, -560815, -353579, -104189, 67852, -750194, 630154, 738127, 713935, -670050, -226654, -848311, 143132, 327827, -648307, 306471};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-982833, -955039, -950095, -948849, -848311, -814180, -751366, -750194, -730051, -719092, -670050, -648307, -639158, -560815, -399214, -394337, -363587, -353579, -341269, -237831, -230778, -226654, -191310, -159082, -158162, -104189, -51361, -42931, -17447, 47801, 50158, 67852, 122137, 143132, 292734, 306471, 327827, 362875, 451218, 452444, 478232, 511465, 539164, 630154, 656625, 713935, 738127, 865710, 958066};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {-778930, 524981, -132596, -444590, 339453};
    vector<int> B = {294034, -886534, -705346, 824456, -148314, -793418, -296412, 513199, 768798, -820615, 961283, 795107, -886973, -138469, 656093, -355015, 530355};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {577071, 332964, -671616, 83117, -829195, 41959, 185992, 769894, -643599, 956488, 337191, -422656, 228167, -308179, 238126, -76767, -330130, -64290, -1380, 243097, -446395, -295432, 375621, 465772, -891284, 320516, 732661, -757113, 305869, -803392, 271477, -55593, 459188, -370946, -214456, 543567, 488028, 343255, -352520, -167416, -748208};
    vector<int> B = {235825, -335184, 956488, 185937, -76767, -757113, -566176, 285468, -891284, 147544, -392817, -938953, -829195, -214456, 337191, 154209, -370946, 577071, -630188, -36513, -640159, -295432, 543567, 41959, 83117, 320516, -590063, 736884, 895907, 228167, 271477, -9142, -289524, 185992, -156930, 375621, 490197, 552410, -446395, -689515, 684936, -330130, 581464, 317156, 128175, 343255};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-891284, -829195, -757113, -446395, -370946, -330130, -295432, -214456, -76767, 41959, 83117, 185992, 228167, 271477, 320516, 337191, 343255, 375621, 543567, 577071, 956488};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {124654, 660584, -239430, 238626, 937802, -830732, 841772};
    vector<int> B = {213407, 326031, -334712, -384588, 504284, 755795, -937439, 723600, 128060, 551658, -70256, -468661, 296373, -995827, 63608, 389429, -627305, -830732, 667004, 937802, 999145, 203321, -457657, 660584, -195430, 674491, -189936, -108445, -410055, 35896, -981979};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-995827, -981979, -937439, -830732, -627305, -468661, -457657, -410055, -384588, -334712, -239430, -195430, -189936, -108445, -70256, 35896, 63608, 124654, 128060, 203321, 213407, 238626, 296373, 326031, 389429, 504284, 551658, 660584, 667004, 674491, 723600, 755795, 841772, 937802, 999145};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {-828539, -984406, -380504, -738476, -12432, 964299, 256839, 696444, -671949, 614487, -608779, 249548, 400024, 237495, 429953, -661653, -577656, -336721, -845834, 451008, -331852, 35976, 745753, 739737, -900875, 107642, 327662, -521554, -751175, 521018, 507913, -813139, 599819, -655832, -211757, -328872};
    vector<int> B = {-691775, 696444, 604141, 378402, 376315, -404262, 244001, 62385, 634465, -557496, -984406, -813139, 739737, 249548, 521018, 438461, -829334, 712101, -608779, -695562, -153771, -703263, -577656, 745753, 599819, 614487, 703757, -53020, 107642, -139972, -697742, 400024, 156768, 907277};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-984406, -813139, -608779, -577656, 107642, 249548, 400024, 521018, 599819, 614487, 696444, 739737, 745753};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {910566, 507631, 762276, -250117, 891687, -925869, -732161, 613264, -889961};
    vector<int> B = {372972, 966061, 322094, -908716, -649979, -324188, -31002, 684506, -250117, 417555, 495557, 232101, -533233, 476449, 762276, -7810};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-250117, 762276};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {519656, 438881, -889656, 172085, -323317, -202493, 264534, 829218, -463136, 565060, 514187, 681847, -92055, 676400, 186879, 641135, -978822, -865252, -133893, 883722, 603982, -241693, -457384, -737247, -856431, -400409, -839362, 204664, -356483, 879477, -861662, 804173, -715578, 562602, -740539, 904283, -523487, -967881, 822083, -102650, -689080, -39561};
    vector<int> B = {-202493, -967881, 390446, 445304, -241693, 217591, 782510, -715578, -164561, -273095, 810273, -978822, -75652, 665197, 375544, 879477, 562602, -121078, -515384, -309069};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-889656, -865252, -861662, -856431, -839362, -740539, -737247, -689080, -523487, -515384, -463136, -457384, -400409, -356483, -323317, -309069, -273095, -164561, -133893, -121078, -102650, -92055, -75652, -39561, 172085, 186879, 204664, 217591, 264534, 375544, 390446, 438881, 445304, 514187, 519656, 565060, 603982, 641135, 665197, 676400, 681847, 782510, 804173, 810273, 822083, 829218, 883722, 904283};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {-264727, -704486, 520974, -820662};
    vector<int> B = {933260, -782656, 848045, -156928, 203531, 436746, 741036, 520974, -527550, 398393, -678616, 819428, -49877, -418865, -794283, -981022, -402501, -487777, -729692, 767227, 681798, -316651, 602873, -330861, -274849, 380643, 308065, -546875, -803581, -692343, 473760, -441317, 232721, -483193, 942574, -528436, -590423, -451752, 978855, 6204, -467793, 188262, -4220, -637257, 601815, -150437, 786931, -548963};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {520974};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {-810368, 320001, 910750, 495977, 117898, 712622, 517296, 339395, -530241, -888808, -618590, 680837, 672209, 491028, -965392, -357764, 729907, 755215, 175398, -346303, -827108, -943886, 802228, 133619, -173912, -38050, -826866, -716680, -77735, -454186, 81575, -995012, 17538, 901642, 566493, -368030, 811967, 695979, 857204};
    vector<int> B = {117898, -995012, -20529, -466162, -826866, 808498};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-995012, -965392, -943886, -888808, -827108, -826866, -810368, -716680, -618590, -530241, -466162, -454186, -368030, -357764, -346303, -173912, -77735, -38050, -20529, 17538, 81575, 117898, 133619, 175398, 320001, 339395, 491028, 495977, 517296, 566493, 672209, 680837, 695979, 712622, 729907, 755215, 802228, 808498, 811967, 857204, 901642, 910750};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {-693891, -985636, 912155, -118733, 827678, 898597, 593566, -830605, 361184, -524717, -703730, 120474, 434376, 108115, 783940, 699507, 250079, -779133, -713405, -717520, -139209, -279818, -441858, 240989, 324733, -415905};
    vector<int> B = {-139209, -344456, -156204, 324733, -824751, 864958, -822393, 593122, 854530, -415905, -241363, 546529, -879452, -736879, 108722, 417506, 429084, 593180, 401015};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-415905, -139209, 324733};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {430767, -779735, -29904, 90617, 350566, -741658, -203476, -773429, 645684, -99610, 805801, 81352, -441888, -363765, -231280, -718925, 532769};
    vector<int> B = {-515327, -448413, -648408, -683820, 670902, -249093, 902094, -203476, -937145, 338001, -975473, 700221, -294720, -373268, -631538, 52671, -637255, -779735, -29904, 790144, -822206, -521929, -1887};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-975473, -937145, -822206, -773429, -741658, -718925, -683820, -648408, -637255, -631538, -521929, -515327, -448413, -441888, -373268, -363765, -294720, -249093, -231280, -99610, -1887, 52671, 81352, 90617, 338001, 350566, 430767, 532769, 645684, 670902, 700221, 790144, 805801, 902094};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {-301662, -631381, 660332, 664101, -357662, 629750, 481793, 744836, 824484, -756627, 989553, -907983, 227512, 641503, 300561, -748037, -647213, 311461, 843428, -148842, 576602, 674120, 958189, 887297, 853022, -846990, 188897, 249512, -33788, 565944, -433819, -679858, -687868, 196500, -650286};
    vector<int> B = {-394273, -9043, 300561, 196500, -995501, 641496, 111920, -534829, -403693, 674120, -650286, 697339, 188897, -631381, 989553, 887297, -33788, -31159, 100221, -243643, 311461, -846990, 660332, -713724, 204608, 576602, 958189, -385921, 885253, 102641, 664101, 227512, -410836, -756627, -353833, 481793, 334012, -645827, -342927, 292510, 79698, 565944, -611101};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-995501, -907983, -748037, -713724, -687868, -679858, -647213, -645827, -611101, -534829, -433819, -410836, -403693, -394273, -385921, -357662, -353833, -342927, -301662, -243643, -148842, -31159, -9043, 79698, 100221, 102641, 111920, 204608, 249512, 292510, 334012, 629750, 641496, 641503, 697339, 744836, 824484, 843428, 853022, 885253};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {43666, -902271, 525061, -976617, -765544, 916792, -962785, -492116, 635888, 223455, -47067, -764212, -590743, 245688, -79040, -805592, -181913, 701270, -68889, -520829, -341852, -267876, -728361, -936391, 883909, -938643, 413937, -671085, -564994, -212134, -817728, 714411, 517895, 60282, 976960, 97234, 982526};
    vector<int> B = {-237712, 752674, 701270, -902271, -174944, 982526, 865852, 883909, -492116, 60282, 635888, 213449, 705095, -590743, -564994, 517895, 602149, -606489, 776315, -47067, -659518, -728361};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-902271, -728361, -590743, -564994, -492116, -47067, 60282, 517895, 635888, 701270, 883909, 982526};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {-640330, 321724, -77856, 859484, -75769, 122509, -54466, -870026, -932996, 117881, -441575, -519404, -197338, -325234, -778916, 604412, 382059, -864405, -729068, 584367, 507629, 533559, -523278, 826340, -419413, 20346, -296174, -218007, -1071, 898359, -722489, 700859, 123379, -407545, -71731, 934782, -441517, 711985, 994253, 904312, -653355, 577362, 896047, -707008};
    vector<int> B = {122509, -330793, 352656, 859484, -93741, -707008, 20346, -54466, -197338, -640330, 801122, -682835, -932996, 604412, -507210, -71731, 154295, 374997, 159786, -382070, -369430, 809821, 898359, 904312, -729068, -117415, 507629, 929273, 123379, 934782, -296174, -838097, -870026};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-932996, -870026, -864405, -838097, -778916, -729068, -722489, -707008, -682835, -653355, -640330, -523278, -519404, -507210, -441575, -441517, -419413, -407545, -382070, -369430, -330793, -325234, -296174, -218007, -197338, -117415, -93741, -77856, -75769, -71731, -54466, -1071, 20346, 117881, 122509, 123379, 154295, 159786, 321724, 352656, 374997, 382059, 507629, 533559, 577362, 584367, 604412, 700859, 711985, 801122, 809821, 826340, 859484, 896047, 898359, 904312, 929273, 934782, 994253};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {-90144, -611688, -123057, -953, -438018, -961008, -108835, 108244, -269952, -185409, 61298, -630996, 928264, -40075, -245170, -549569, -687982, 441039, 872195, -227771, -302564, -44151, 250728, -19455, -460124, 466657, -630749, -937573, -45085, 248891, -956545, 623433, 39345, 534738, 226552, -160724, 55270, 135322, -133337, 423741, -260017, 278138, -114795, -812203, -244351, -530254, -136853, -725568, -189251, 408303};
    vector<int> B = {-123057, -890774, -814158, 383494, 108244, -185409};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-961008, -956545, -937573, -890774, -814158, -812203, -725568, -687982, -630996, -630749, -611688, -549569, -530254, -460124, -438018, -302564, -269952, -260017, -245170, -244351, -227771, -189251, -185409, -160724, -136853, -133337, -123057, -114795, -108835, -90144, -45085, -44151, -40075, -19455, -953, 39345, 55270, 61298, 108244, 135322, 226552, 248891, 250728, 278138, 383494, 408303, 423741, 441039, 466657, 534738, 623433, 872195, 928264};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {418076, 153797, -188942, -266572, -929254, 256518, -84370, 295233, -889911, 241334, -479786, 538300};
    vector<int> B = {190308, 5579, 448973, 216521, -607041, -263760, 512376, 611304, -266572, 646034, -363365, -977400, 238810, 830285, -44511, -168099, -212338, 538300, -385474, -710638, -84370, 291551, 885968, 524763, -709649, -464930, 461821, -966554, 829585, -32284, 418076, -132975, 183087, -479786, 450593, 154091, -827908, 733870, -924682, -657303, 332080, 295233, 839072, 153797, -601112, 409151};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-977400, -966554, -929254, -924682, -889911, -827908, -710638, -709649, -657303, -607041, -601112, -464930, -385474, -363365, -263760, -212338, -188942, -168099, -132975, -44511, -32284, 5579, 154091, 183087, 190308, 216521, 238810, 241334, 256518, 291551, 332080, 409151, 448973, 450593, 461821, 512376, 524763, 611304, 646034, 733870, 829585, 830285, 839072, 885968};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {-806389, -711694, -458134, 28549, -397342, 801635, 702054, -57819, -413642, 530084, 474933, 984729, 399414, -496318, -934967, -473064, 277987, -242501, -828800, 58524, -977211, 576893, -281528, 9604, 195493, 291604, 321940, -890301, -698201, -446420, 62925};
    vector<int> B = {551051, -460673, -235422, -281528, -413642, 421400, -934967, -233979, -397342, 976615, 997008, -88448, -711694, -816711, 28549, -389044, -83547, 291604, -954358, 399414, -759595};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-977211, -954358, -890301, -828800, -816711, -806389, -759595, -698201, -496318, -473064, -460673, -458134, -446420, -389044, -242501, -235422, -233979, -88448, -83547, -57819, 9604, 58524, 62925, 195493, 277987, 321940, 421400, 474933, 530084, 551051, 576893, 702054, 801635, 976615, 984729, 997008};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {-455462, 930477, -799818, 914282, 509759, 615841, 192162, 147692, -780361, 273941, 192696, 373025, 353316};
    vector<int> B = {-720665, 373025, 585912, -89442, 120256, 980110, -461653, 147692, -573331, -64401, 97878, -776687, 8545, 269751, -909127, 225345, 526805, 179131, -307671, 592025, 488408};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-909127, -799818, -780361, -776687, -720665, -573331, -461653, -455462, -307671, -89442, -64401, 8545, 97878, 120256, 179131, 192162, 192696, 225345, 269751, 273941, 353316, 488408, 509759, 526805, 585912, 592025, 615841, 914282, 930477, 980110};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {-186878, -255579};
    vector<int> B = {847582, -838105, -733864, -805971, 595317, 477657, 783651, 265004, -211021, -531905, 885219, 294688, -781629, 628739, 899941, -188433, 340046, -956106, 679322, -235928, 216668};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-956106, -838105, -805971, -781629, -733864, -531905, -255579, -235928, -211021, -188433, -186878, 216668, 265004, 294688, 340046, 477657, 595317, 628739, 679322, 783651, 847582, 885219, 899941};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {-970795, 194891, -44137, 173030, 661747, 493257, -10010, -969486, 745739, 846465, -152250, -816576, 653642, -944590, 218856, -513311, -715278, -961461, 627979, -281563, 486477, 354497, 725505, -278744, -136732, -98604, -869802, -394935, 765223, -109130, 816446, 563699, -994277, -554053, -91560, 57049, 86545, -739875, 96119, 469757, 524637, -602070, -702972, 703825, 704013, -738074, 228170};
    vector<int> B = {-961461, 120157, 725505, -174788, -777056, -994277, 765223, 838971, -602070, 228170, 524637, -832312, 986523, -896271, -738074, -10010, -278744, 12078};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-994277, -961461, -738074, -602070, -278744, -10010, 228170, 524637, 725505, 765223};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {306508, -601562, -611257, 631642, -989204, 608363, 939299, -971809, 716271, -146047, -706121, 521038, 589632, -493322, 248078, 581559, -965362, 682634, -910247, 942124, -103070, -398073, -981855, -289848, 399864, 83175, 190281, 186270, -858115, 285262, -193420, 830343, 301035, 40721, 806398};
    vector<int> B = {-414525, -597204, -556925, 682634, 942124, 423076, 597001, 830343, -910247, 589632, -981855, -282199, -706121, 645248, 285262, -610868, 190281, 39314, -193420, 992328, 124633, 30596, 396320, -103070, 226865, 83175, -974898, -987125, -756358, 939299, -611257, 866921, 199174, 716271};
    string operation = "SYMMETRIC DIFFERENCE";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-989204, -987125, -974898, -971809, -965362, -858115, -756358, -610868, -601562, -597204, -556925, -493322, -414525, -398073, -289848, -282199, -146047, 30596, 39314, 40721, 124633, 186270, 199174, 226865, 248078, 301035, 306508, 396320, 399864, 423076, 521038, 581559, 597001, 608363, 631642, 645248, 806398, 866921, 992328};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {-440563, 931846, 506953, 671010, 687969};
    vector<int> B = {-375584, -856085, 792185, -389227, -587705, -93407, -294159, -728581, 303540, 506953, -938845, 785097, -323960, 14600, 673432, -483696, 608269, -635624, 476989, 467246};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-938845, -856085, -728581, -635624, -587705, -483696, -440563, -389227, -375584, -323960, -294159, -93407, 14600, 303540, 467246, 476989, 506953, 608269, 671010, 673432, 687969, 785097, 792185, 931846};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {2, 1, 5, 4, 3};
    vector<int> B = {0};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {2, 4, 6};
    vector<int> B = {1, 3, 5, 2, 4, 6};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 6};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {1, 2, 3, 8, 9};
    vector<int> B = {7, 6};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {2, 3, 5};
    vector<int> B = {1, 3, 5};
    string operation = "UNION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {0, 1};
    vector<int> B = {2, 0};
    string operation = "INTERSECTION";
    Sets* pObj = new Sets();
    clock_t start = clock();
    vector<int> result = pObj->operate(A, B, operation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7281980&rd=4600&pm=1685
********************************************************************************
using namespace std;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <algorithm>
 
typedef long long lint;
 
const int infty = 999999999;
 
int gcd(int a, int b) { return a==0 ? b : gcd(b%a,a); }
lint gcd(lint a, lint b) { return a==0 ? b : gcd(b%a,a); }
 
class Sets {
public:
  vector <int> operate(vector <int> A, vector <int> B, string operation) {
    vector <int> res;
    int i,j,k;
 
    if ( operation=="UNION" ) {
      res = A;
      for(i=0; i<B.size(); i++) {
  for(j=0; j<A.size(); j++) if ( B[i]==A[j] ) break;
  if ( j>=A.size() ) res.push_back(B[i]);
      }
    }
    if ( operation=="INTERSECTION" ) {
      for(i=0; i<A.size(); i++)
  for(j=0; j<B.size(); j++)
    if ( A[i]==B[j] ) res.push_back(A[i]);
    }
    if ( operation=="SYMMETRIC DIFFERENCE" ) {
      for(i=0; i<A.size(); i++) {
  for(j=0; j<B.size(); j++)
    if ( A[i]==B[j] ) break;
  if ( j>=B.size() ) res.push_back(A[i]);
      }
      for(i=0; i<B.size(); i++) {
  for(j=0; j<A.size(); j++)
    if ( B[i]==A[j] ) break;
  if ( j>=A.size() ) res.push_back(B[i]);
      }
    }
 
    for(i=res.size()-1; i>=0; i--)
      for(j=0; j<i; j++)
  if ( res[j]>res[j+1] ) {
    k = res[j];
    res[j] = res[j+1];
    res[j+1] = k;
  }
    
    return res;
  }
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003], modified by eldering [9-Aug-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/