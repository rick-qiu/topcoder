/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4705
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

class MissileTarget {
public:
    vector<int> bestFit(vector<int> x, vector<int> y);
};

vector<int> MissileTarget::bestFit(vector<int> x, vector<int> y) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> x = {750, -500, -250};
    vector<int> y = {-1000, 500, 500};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {765};
    vector<int> y = {834};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {765, 834};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {100, 200};
    vector<int> y = {200, 400};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {150, 300};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {123456, -987654, 97531, -86420};
    vector<int> y = {14703, 25814, 36924, -47036};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-213272, 7601};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0};
    vector<int> y = {0};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {28335, -162923, -142494, 831252, 679913, -800762, 320337, 294813, 233078, -791802, 788088, -92327, 846158, -486021, -64314, 770053, -156508, 268559, 932200, 499749, 996687, 282119, 972087, 638389, 305865, -320708};
    vector<int> y = {-693555, 557676, 280913, -944584, -225735, -134357, 722736, -867220, -166324, -687101, 4501, 916879, 93198, 198884, 852894, 352657, 342992, 278114, 629365, -519236, 86111, 166434, 111379, 93804, -430254, 247266};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {256532, 48748};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {-107419, -683519, 77861, 569480, -857646, 155540, 295549, 211825, -170914, -245964, -976013, -45266, -684309, -351776, 779411, 874500, 498289, 774751, -123118, 650933, 462448, -498099, 336544, -151393, -360556, 160853, 289866, 698114, -537494, 76922, 885896, 377310, 523063, -899183, -302491, 792567, -773001, -360112, 627661, 860023, 950902, -810627, 315632, -713170, -301691};
    vector<int> y = {-636349, -956716, -147591, 255967, -572505, 141305, -810307, 850071, 327314, -104538, -933616, 302519, -777590, -47151, -833804, -312835, 516227, 228139, 370111, 486064, -612405, 309833, 537627, -754275, -178010, -633490, 788005, 733361, -857224, 553078, 281524, -406866, -957542, -82978, -499272, 502416, -886070, -195346, 31678, 828026, 881731, 767369, 845197, -217512, 333285};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50937, -34292};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {-921874, 80281, 950160, 86495, -685427, 94085, -760686, 727333, -632841, 511034, 764347, 324598, 558272, -511036, 676747, 548825, 501316, 312667, 747144, -786878, 381958, -449866, 896558, -320571, 739384};
    vector<int> y = {-291188, -772349, 764763, -252456, 391852, 555975, -852533, -3596, -45646, -558779, 273465, -226805, -340375, -281526, -237492, 843665, 335424, 529457, -685576, 733325, -469788, 853783, -884628, -491296, -830595};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {153281, -77717};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {744087, -941403, -288379, -162124, 578130, 875313, 804932, -572425, -299855, 335927, 443110, 952982, 304102, -516471, 621884, 51913, 601548, 308477, -504815, -112424, 227859, 529643, 31397, -820180, 148489, -124337, -830395, 736386, -934780, 866192, -524149, 484151, 322413, 93147, -700622, -999614, -686744, 1965, -571118};
    vector<int> y = {-455996, -613984, -827156, 248762, 586806, 250288, -897998, -604629, 844733, 883245, -517081, -86736, 809120, 935886, -12407, 911451, 777939, 639292, 547786, 719643, -612946, -789131, 136276, 544505, 641473, -239396, 48107, 625905, -553413, 697309, -318161, 893166, -360564, -365124, 820798, 121309, 519945, -201475, 414323};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12159, 157997};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {-117818, 931054, -140978, -773637, -454396, 699089, 780017, 288088, -613690, 599333, -687807, 492825, -131710, 364819, 881458};
    vector<int> y = {-312135, -925327, 871158, -514023, 3701, 238980, -457213, -522564, 510281, -223628, 259224, -157714, 373251, -185099, -238687};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {141110, -85320};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {-109044, 553657, 544436, -989547, -827664, -618121, 542678, 66998, -651104, -686375, -136838, -741625, 816266, 287005, -683442, 277581, 120465};
    vector<int> y = {-211043, -932949, 757061, -10844, 761498, 913591, -575037, -137110, 7971, -928859, -238609, 926360, -900699, -548064, 154651, -360353, -219762};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-131451, -90717};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {557501, -230523, -124388, 206012, -356598, 920464, -303421, -578668, 462771, -433639, 946876, 606480};
    vector<int> y = {599225, 581315, 129064, 878762, 825836, -728888, 450787, -759746, 261378, -95572, 231013, -640952};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {139406, 144352};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {744082, -193710, 850500, -599633, -421720, 936996, -941519, 476129, -248128, 713583, -663370, -682049, 697598, -37166, -170400, -383127, 967336, 154109, 754311, 847139, -236644, 805597, 181195, 922443, 969572, -609436};
    vector<int> y = {315453, -647814, -317217, -256395, 278303, 897721, -756067, 966894, -611777, -271398, 769355, 836429, 942214, 78840, -817979, -291708, 497035, -596855, -257202, 924889, 650467, 33183, -918312, -278795, 322552, -666179};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {185911, 31755};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {631056, 536850, 359382, -852965, -606671, 701688, -990111, 260454, -641752, -608596, -312679, 488414, 393609, -372393, -548143, 275371, 291038, 660418, 678133, 122425, 672240, 249724, 211483, -881436, -604755, -553571, -975801, -28080, -539335, -126297, 371774, 541013, 417940, -491772, 449154, -133998, 271584, 961457, -453013, 699942, -112558, 260854, -292121, 540023};
    vector<int> y = {-101062, 131151, 882633, -841173, 113323, -224405, -413493, 635582, -582076, -842802, 55466, -112602, 186402, -220010, -97578, -299469, -815012, -29736, 273496, 261628, 978750, 657830, 504257, -811027, -162174, -342739, -724020, 63746, 143687, 449152, 271893, -538740, -704620, -538645, 333427, 482227, -884217, -149755, 116464, 783993, -242152, -218042, -752407, -888203};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20909, -95706};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-786351, -19647, 330022, 706676, -825265, -648513, 953435, -874015, -451847, -162808, -821551, -95444, -648399, 509367, -585635, 939483, -481204, 691865, -685373, 395436, 180719, 116740, -691934, 110919, 446867, -419497, 630157, -495489};
    vector<int> y = {686504, 100365, -145737, -18882, -690095, 570491, -77110, -161775, 49618, -81752, -321067, -327853, -258301, -239541, -103072, 284275, 606977, -440352, -185698, -912672, -967712, 280293, 162623, -988395, 851744, 545074, 698848, -88769};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-95760, -41856};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {-708876, 236576, 470411, 433333};
    vector<int> y = {926282, -822705, 609677, -368741};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {107861, 86128};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {541638, 392139, -842591, 286279, -499378, -570266, 800969, -413441, -593089, 789482, -14114, 739325, 326056, -600275, 552129, 349679, 67748, 956388, 36928, -69074, -282930, -670781, -543970, 560827, -334252, 468050, -415052, 37842, 143395, 809037, -259789, 537387, 248765, 180915, -939389, 768079, -518996, -788753, 288460, 627991, -229102, -767323, 50832, 360895, 12125, 689173, -359183, 212521, -907499, 42283};
    vector<int> y = {298773, 586799, -574765, -822618, 993571, 702112, 980175, -690073, 703849, -252453, -184940, -608303, -800740, 539145, -893230, -982946, 321724, -323852, 682577, -170813, -233326, 197254, -948611, -573639, -635688, 736861, -64989, -231828, -139148, -818680, -700617, 81792, 199777, 825191, 885841, 268222, -696917, -972522, 242355, 808543, 352534, 367897, -745209, -829842, -429093, 303111, -821846, 713058, -496754, -677013};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25162, -90586};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {-122479, 82975, 239442, 826559, -229347, -802964, -983115, 635342, 420964, -483877, -250433, -132528, 934046, -151538, -362196, 46998, -637248, 160484, 407306, -878205, 488459, 233072, 340419, -630183};
    vector<int> y = {102301, 817814, 807385, -194652, -213567, -706751, -702419, -914754, 195274, -178878, 950780, 915201, 836758, 2628, 588392, -44022, 353585, 34666, -755282, 229674, -695529, 366090, -801798, 25960};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-35335, 42452};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {-146047, -497323, -691663, -489138, 419767, 18615, -379614, -504873, 205742, -55618, 492013, -566529};
    vector<int> y = {-768957, 847482, 345702, 683437, -451961, 195809, -97232, -293915, -101448, -611098, 89603, 347241};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-182889, 15389};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {289187, 443926, 618745, 552174, 253230, 21035, -20296, 692443, -337011, 800056, -882261, -646956, -42935, -409808, 230239, 66815, 161945, 436978, -194394, -506456, -76740, -471479, -95490, -423774, -962970, 601762, -58864, 197307, -519084, 848717, 964433, 334936, -54529, -677271, 439367, -280784, 865386, -155276, -471831, 988453, -49256, 409450, 871588, 345403, 218269, -908263, 870136};
    vector<int> y = {713532, 522576, 452744, 465339, -606748, 587418, 446204, 420994, 218183, 536943, -175318, -895592, 211395, 926935, 45818, 767659, 741663, -723929, -321417, 328836, -820286, -902830, -690475, 653296, -945520, -571561, 949020, 334910, 709345, 864727, -62479, -22683, 458393, 88772, -648190, 975170, 242667, 902455, 911250, 795387, -213592, -241954, 384027, 758404, -746686, -210543, -506592};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {90984, 151227};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {402785, -656512, 323988, -150348, 246171, -988916, 227941, -82419, -796972, -841424, -768735, -929796, -242632, -41062, -59958, 114283, -386101, -76965, -53322, 897598, -645712, 930871, 736160, -409810, 593404, -237159, -907703, 465622, 635567, 130983, -996014, 182217, -369200};
    vector<int> y = {-789778, 71444, 564317, 231084, 669627, 412469, -116473, -253404, 203654, 68687, 639971, 801973, -436597, 911803, -156465, 492550, -912137, -950153, -204877, 40618, 735165, -266568, -632096, 951669, -386172, 761995, -211437, -329350, 14013, 390053, 918550, 738211, -61228};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-113732, 118519};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {35329, 446954, 135298, -324390, -886367, 997684, -373826, 273784, 606711, -844340, -259377, 665301, -272428, -593155, 645760, -526184, -769754, -385847, 377839};
    vector<int> y = {-284433, 691029, -826297, 373506, 205617, 289727, -328934, -498954, -535893, -909084, 37516, 591639, 122508, -174811, 206280, -529402, -170135, 170400, -731210};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-55316, -121102};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {659057, 532923, 130930, 553097, -986964, 328895, 669285, -340779, 31086, 765468, -612604, -78609, 495067, 122063, -427993, -895626, 235666, -468388, -50686, 654585, 38650, -738182, -158785, 231321, 51115, -503604, 821565, 738028, 687734, -383673, 872417, -146463, 37006, -18892, -959720, 63324, -232489, 210002};
    vector<int> y = {592369, -809250, -465843, -36713, 672847, -571678, -115571, 223507, 459081, 868936, -335360, -923279, -182106, -462874, -73818, -6244, 461810, -79680, 331774, 611452, -394695, 86, 61715, 13914, 121062, 783382, -779870, 513766, -803786, 333805, 741225, -66606, -511402, 302845, 795529, 386203, 783004, 961133};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50680, 89491};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {0, 5, 5, 6, 8, 8};
    vector<int> y = {0, 0, 0, 0, 0, 0};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {93510, 93552, 93596, 93617, 93555, 93641, 93620, 93549, 93571, 93602, 93618, 93547, 93611, 93529, 93562, 93617, 93513, 93573, 93606, 93514, 93548, 93512, 93533, 93642, 93625, 93594, 93641, 93542, 93630, 93618, 93565, 93626, 93526, 93586, 93543, 93546, 93524};
    vector<int> y = {588840, 588769, 588756, 588748, 588820, 588724, 588740, 588753, 588830, 588762, 588774, 588780, 588733, 588842, 588753, 588769, 588842, 588724, 588814, 588776, 588824, 588805, 588815, 588785, 588778, 588750, 588712, 588734, 588844, 588729, 588753, 588727, 588751, 588834, 588750, 588802, 588756};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {93576, 588776};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {-137642, -137690, -137633, -137572, -137778, -137691, -137737, -137744, -137828, -137421, -137748, -137468, -137451, -137550, -137599, -137726, -137643, -137889, -137751, -137838, -137620, -137865, -137736, -137921, -137729, -137550, -137458, -137638, -137608, -137890, -137680, -137846};
    vector<int> y = {141644, 141365, 141589, 141407, 141692, 141659, 141414, 141207, 141670, 141336, 141651, 141504, 141130, 141633, 141368, 141550, 141422, 141196, 141552, 141498, 141445, 141249, 141574, 141266, 141130, 141186, 141185, 141165, 141674, 141171, 141377, 141443};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-137686, 141417};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-56115, -56366, -56677, -56346, -56216, -56511, -56188, -56475, -56734, -56307, -56682, -56426, -56563, -56361, -56145, -56210, -56363, -56688, -56138, -56176, -56207, -56539, -56728, -56428, -56595, -56439, -56557, -56564, -56316, -56219, -56138, -56727, -56502, -56348, -56284, -56486, -56681};
    vector<int> y = {-103341, -103173, -102872, -103473, -103471, -103103, -103179, -103393, -103094, -103256, -103125, -103150, -103430, -103073, -102855, -103464, -102932, -103231, -102978, -102911, -102961, -103412, -103018, -103058, -102861, -103473, -102893, -102894, -103116, -103148, -102875, -102924, -103376, -103488, -102894, -103480, -103252};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-56417, -103152};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {387791, 387816, 387785, 387785, 387807, 387818, 387826, 387821, 387790, 387792, 387805, 387817, 387795, 387794, 387797, 387816, 387795, 387787, 387807, 387804, 387799, 387821, 387810, 387815, 387808, 387788, 387819, 387810, 387795};
    vector<int> y = {219818, 219842, 219859, 219857, 219842, 219848, 219855, 219834, 219818, 219833, 219847, 219821, 219817, 219836, 219842, 219832, 219852, 219824, 219848, 219828, 219840, 219857, 219837, 219843, 219854, 219837, 219846, 219855, 219834};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {387804, 219840};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-141636, -141337, -141330, -141503, -141280, -141432, -141417};
    vector<int> y = {150101, 150395, 150292, 150139, 150333, 150488, 150065};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-141419, 150259};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {313308, 313056, 313488, 313519, 313237, 313383, 313154, 313534, 313077, 313203, 313661, 313271, 313670, 313750, 313749, 313230, 313102, 313181, 313117, 313708, 313647, 313042, 313200, 313086, 313735, 313741};
    vector<int> y = {84586, 84718, 84464, 84826, 85035, 84816, 85130, 84920, 85110, 84634, 84675, 85152, 84874, 84518, 84450, 84493, 85124, 85039, 84823, 85061, 84818, 84888, 84522, 84908, 84994, 85120};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {313379, 84835};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {415237, 415382, 415169, 415188, 415151, 415298, 415147, 415390, 415369, 415181, 415405, 415414, 414980, 415129, 415083, 414986, 414931, 414994, 415235, 415369, 415469, 414958, 415239, 415152, 415480, 415341, 415514, 415019, 415289, 415080, 415512, 415416, 415025, 414914, 415281, 415338, 415334, 415452, 415415, 415353, 415521, 415523, 415289, 415142, 415558, 415048, 415057};
    vector<int> y = {-22995, -23189, -23073, -23157, -23275, -23047, -23216, -23320, -22811, -22968, -23307, -23209, -22818, -23237, -22880, -23239, -23385, -23226, -23065, -23322, -23278, -23309, -23088, -23222, -23223, -22967, -22856, -22854, -22807, -23300, -23166, -22849, -22835, -22792, -23211, -22793, -22835, -23246, -23082, -22859, -23140, -23118, -22998, -23019, -22897, -23004, -23273};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {415250, -23080};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {-51449, -51510, -51561, -51661, -51407, -51348, -51320, -51688, -51592, -51670, -51309, -51592, -51304};
    vector<int> y = {-102685, -103015, -102757, -102779, -102847, -102939, -102607, -102716, -102928, -102920, -103005, -102634, -102829};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-51493, -102820};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {7757, 7718, 8252, 8320, 8298, 7884, 8339, 7923, 8164, 8340, 8184, 7790, 8138, 7961, 7800, 8344, 8222, 8247, 8206};
    vector<int> y = {-12830, -12829, -12602, -12675, -12940, -12682, -13101, -12576, -13143, -12862, -12999, -12772, -12828, -12651, -12745, -12911, -13148, -12985, -12918};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8099, -12852};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {346470, 346340, 346370, 346343, 346426, 346359, 346424, 346351, 346440, 346471, 346281, 346339, 346417, 346362, 346404, 346338, 346304, 346452, 346420, 346463, 346289, 346360, 346295, 346438, 346374, 346320, 346313, 346482, 346494, 346360, 346473, 346411, 346395, 346413, 346484};
    vector<int> y = {238416, 238304, 238299, 238423, 238244, 238274, 238417, 238346, 238328, 238318, 238239, 238401, 238333, 238259, 238297, 238227, 238423, 238283, 238415, 238308, 238396, 238282, 238325, 238395, 238287, 238297, 238218, 238412, 238311, 238285, 238275, 238279, 238286, 238371, 238258};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {346391, 238321};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {400338, 400269, 400946, 400458, 400356, 400283, 400924, 400772, 400527, 400806, 400243, 400568, 400276, 400362, 400744, 400439, 400885, 400057, 400881, 400529, 400139, 400982, 400424, 400285, 400544, 400955, 400940, 400658, 400804, 400844, 400306, 400184, 400112, 400925, 400532, 400534, 400976, 400582, 400422, 400121, 400864, 400716, 400799, 400128, 400226, 400091};
    vector<int> y = {92155, 92684, 92950, 92561, 92334, 92928, 92866, 92595, 92280, 92482, 92077, 92296, 93003, 92762, 92112, 92502, 92237, 92088, 92875, 92467, 92261, 92654, 92178, 92796, 92401, 92433, 92567, 92708, 92787, 92504, 92749, 92684, 92929, 92121, 92177, 92047, 92920, 92359, 92395, 92552, 92737, 92862, 92788, 92232, 92440, 92721};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {400538, 92527};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {353962, 353970, 354473, 354070};
    vector<int> y = {95293, 94918, 95149, 95341};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {354119, 95175};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {64400, 64677, 64492, 64435, 64506, 64560, 64374, 64473};
    vector<int> y = {420321, 420591, 420339, 420424, 420177, 420577, 420341, 420285};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {64490, 420382};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {-58377, -58305, -57962, -58205, -58543, -57939, -58650, -58627, -58158, -58040, -58586, -58170, -58065, -57919, -58093, -58412, -58036, -58410, -57918, -58586, -57893, -58328, -58320, -57852, -58552, -58120, -57987, -58558, -58143, -58379, -58430, -58662, -58616, -58569, -58246, -58618, -58507, -58607};
    vector<int> y = {439655, 439773, 440371, 439702, 439877, 440376, 440036, 440163, 439989, 440031, 440066, 440300, 440102, 440137, 439677, 440331, 439824, 440402, 440012, 440278, 439932, 440402, 440361, 439955, 440061, 439931, 440082, 440429, 439674, 440200, 439942, 440259, 440031, 440377, 440260, 440003, 439930, 440351};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-58300, 440086};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {404667, 405033, 404644, 404866, 405038, 404972, 404343, 404335, 404751, 405030, 404902, 405040, 404931, 404810, 404480, 404416, 404894, 404507, 404857, 404405, 404834, 404959};
    vector<int> y = {434599, 434270, 434132, 434085, 434607, 434213, 433887, 434521, 434347, 434333, 434524, 434302, 434083, 434104, 434294, 434191, 433999, 434193, 434242, 434532, 434167, 433851};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {404760, 434249};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {-174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174334, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333, -174333};
    vector<int> y = {115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115347, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348, 115348};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-174333, 115348};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489466, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467, 489467};
    vector<int> y = {471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471555, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556, 471556};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {489467, 471556};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {-119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119150, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149, -119149};
    vector<int> y = {197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197826, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827, 197827};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-119150, 197827};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269082, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083, 269083};
    vector<int> y = {482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482717, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718, 482718};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {269082, 482718};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464768, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769, 464769};
    vector<int> y = {-33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33044, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043, -33043};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {464769, -33043};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275159, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160, 275160};
    vector<int> y = {-148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148641, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640, -148640};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {275160, -148640};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163352, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351, -163351};
    vector<int> y = {410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410112, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113, 410113};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-163352, 410113};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292798, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799, 292799};
    vector<int> y = {-114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114560, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559, -114559};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {292798, -114559};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270714, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715, 270715};
    vector<int> y = {393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393271, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272, 393272};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {270715, 393271};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200916, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917, 200917};
    vector<int> y = {28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28581, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582, 28582};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {200917, 28581};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285253, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254, 285254};
    vector<int> y = {98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98280, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281, 98281};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {285253, 98280};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291465, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466, 291466};
    vector<int> y = {361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361119, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120, 361120};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {291465, 361119};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95293, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294, 95294};
    vector<int> y = {-23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23151, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150, -23150};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {95294, -23151};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286561, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562, 286562};
    vector<int> y = {246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246670, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671, 246671};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {286562, 246670};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {-127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127125, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124, -127124};
    vector<int> y = {275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275436, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437, 275437};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-127125, 275436};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379458, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459, 379459};
    vector<int> y = {-198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198145, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144, -198144};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {379458, -198145};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {750, -500, -250};
    vector<int> y = {-1000, 500, 500};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {123456, -987654, 97531, -86420};
    vector<int> y = {14703, 25814, 36924, -47036};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-213272, 7601};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {123456, -987654, 97351, -86240};
    vector<int> y = {14703, 25814, 36924, -470};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-213272, 19243};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {0, 0, 0};
    vector<int> y = {1, 2, 2};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {1, 2, 2};
    vector<int> y = {0, 0, 0};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {123456, -987654, 97531, -86420, 654564, 45645, 46464, -984506, 564566};
    vector<int> y = {14703, 25814, 36924, -47036, 654564, 124, 54564, -845645, 751512};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-58484, 71725};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {1, 3, 4};
    vector<int> y = {0, 0, 0};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {0, 5, 5, 6, 8, 8};
    vector<int> y = {0, 0, 0, 0, 0, 0};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {499, 2344, 235236, -34633, -345345, 345, 887345};
    vector<int> y = {35434, 34536, 78068, -284778, 468978, 7675, -45345};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {106542, 42081};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {100, -100, 14656, 43543, 435435, 4545, 345345, 435345, 345435, 23, 23, 234, 3423, 234, 234, 4, 23, 53454, 35, 5, 3, 5, 43, 5, 3, 5, 3, 3, 534534, 43, 3, 43, 3454, 435, 457657, 657, 657, 345, 345, 345, 345, 346, 345, 345, 345, 567, 678, 0};
    vector<int> y = {456, 56, 56, 6, 56, 5, 6546, 565, 5656, 5656, 5656, 454, 2323, 2323, 232, 989, 989, 8989, 87787, 787, 787, 5656, 545, 3434, 4545, 676, 878, 5656, 4545, 3434, 454, 5656, 687, 98, 54, 454, 565, 65, 5465, 454, 76, 78, 676, 454, 343, 435, 54, 4545};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {55907, 3757};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {100, 101, 104};
    vector<int> y = {100, 101, 104};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {102, 102};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {-1000000, -104320, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -100123, -1000000, -1000000, -1000000, -1000000, -1000000, -107650, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -100876, -1000000, -1000000, -1000000, -1000000, -1000000, -105432, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -105432, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000, -1000000, -1000000};
    vector<int> y = {1000000, 1000000, 1000000, 1000000, 1000000, 100052, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 122220, 1000000, 1000000, 1000000, 100004, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 100432, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1432, 1000000, 1000000, 1000, 1000000, 1000000, 1000000, 100, 1000000, 432000, 1000000};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-872497, 857145};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {-1, -1, 0};
    vector<int> y = {0, 0, 0};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {-1, -1, 0};
    vector<int> y = {0, 0, 0};
    MissileTarget* pObj = new MissileTarget();
    clock_t start = clock();
    vector<int> result = pObj->bestFit(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13381746&rd=7993&pm=4705
********************************************************************************
#define MAX(a,b) a>b?a:b
#define MIN(a,b) a<b?a:b
 
#define iter_vec(i,v) for(int i=0;i<v.size();i++)
 
#include <string>
#include <vector>
#include<algorithm>
#include<sstream>
#include<iostream>
#include<cmath>
 
using namespace std;
class MissileTarget {
  public:
  vector <int> bestFit(vector <int> x, vector <int> y) {
    double meanX=0;
    double meanY=0;
    
    for (int i=0;i<x.size();i++){
      meanX+=x[i];
      meanY+= y[i];
    }
    meanX /= x.size();
    meanY /= y.size();
    cout<<meanX<<"  "<<meanY<<endl;  
    vector <int> ans;
    //cout<<(int)meanX<<endl;
    ans.push_back(int(round(meanX)));
    ans.push_back(int(round(meanY)));
    return ans;  
  }
 
};
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/