/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11476
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

class MagicalGirlLevelOneDivOne {
public:
    string isReachable(vector<int> jumpTypes, int x, int y);
};

string MagicalGirlLevelOneDivOne::isReachable(vector<int> jumpTypes, int x, int y) {
    string ret;
    return ret;
}


int test0() {
    vector<int> jumpTypes = {2};
    int x = 5;
    int y = 4;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> jumpTypes = {3};
    int x = 5;
    int y = 4;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> jumpTypes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 1000000000;
    int y = -999999999;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> jumpTypes = {999999999};
    int x = 999999999;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> jumpTypes = {763829405, 204573737, 912557271, 586200617, 116009837, 383693699, 85201693, 150307641, 176862787, 681790087, 112704509, 42370477, 700440969, 457606137, 82420091, 350831113, 205641533, 93275369, 256974597, 647430443, 32346817};
    int x = 207303341;
    int y = -975372680;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> jumpTypes = {551333611, 959119755, 31515777, 565193391, 394619407, 777360249, 918557711, 719104735, 689495307, 298328071, 696380733, 859611035, 592796591, 127134397, 983928579, 406905993, 856505677, 680042293, 231156003, 500405785, 623362181, 153923007, 796770255, 985638777, 839908861, 642531419, 680890651, 825669699, 410321869, 712721111, 844322503, 331262221, 734881867, 486112857, 289294959, 566038185};
    int x = -671225154;
    int y = -791416665;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> jumpTypes = {898792925, 809762527, 628106349, 266751149, 22507123, 965480895, 351098197, 258175427, 476023579, 6647769, 868425481, 400204515, 855011015, 70571455, 392979405, 259385783, 391943361, 593898513, 277811083, 386107479, 181448887, 538372171, 896335777};
    int x = -243065014;
    int y = 212181309;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> jumpTypes = {34375383, 913805841, 305113157};
    int x = -74933603;
    int y = 221525335;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> jumpTypes = {249237761, 129167211, 817127403, 343110737, 729472481, 423250477, 871998315};
    int x = -768330542;
    int y = 448831318;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> jumpTypes = {589392777, 964641191, 340725041, 339929965, 465425953, 908635345, 390148069, 8413811, 268659269, 981514411, 65035207, 613262345, 288475261, 78726279, 141367197, 741813083, 691136783, 514942387, 479242971, 631377853, 998922789, 967939505, 623766061};
    int x = -572532556;
    int y = -666770885;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> jumpTypes = {92812737, 987421113, 842750841, 674008765, 954486967, 220480015, 594796455, 545598547, 941813837, 938187971, 807692269, 839749785, 761420923, 714290021, 794323673, 317367699, 949816037, 419138451, 276900699, 955368989, 78392859, 376011997, 599503783, 476467439, 950745301, 464121409, 133054599, 983592241, 583387945, 223056511, 111668177, 811409413, 927344387, 14004977};
    int x = 882225792;
    int y = -774181377;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> jumpTypes = {849639647, 644093369, 784901571, 434651477};
    int x = 766655336;
    int y = -581588764;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> jumpTypes = {8119415, 674720881, 281211839, 19536753, 423823043, 963163449, 223720405, 494030927, 102889675, 316543487, 33695281, 613278003, 598074233, 930077233, 543451419, 735929251, 475307337, 277199863, 529570709, 424892971};
    int x = -521830960;
    int y = -658042798;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> jumpTypes = {409622257, 694912943, 710528265, 276073207, 328951617, 368014441, 709343437, 516439703, 236213415, 591788805, 597397823, 388952341, 623972579, 701789361, 655910205, 716181727, 472015557, 625890369, 263699693, 617097441, 43305641, 740868901, 908465397, 888276683, 770166559, 175345201, 592539543, 355695251, 235579897, 72194273, 602970811, 679738047, 868468361, 439052105};
    int x = -430370590;
    int y = 114997068;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> jumpTypes = {223111417, 398227955, 119786007, 946412137, 397864017, 297676339, 140623239, 190254833, 796790793, 287303793, 615289975, 407523441, 537864817, 562135519, 142364537, 989537817, 774885601, 829393915, 250555205, 929128045, 305873239, 818989299, 891538223, 867908515, 742060039, 447929343, 376294035, 740981489, 104136601, 440151641, 35919981, 602525881, 462022087, 563403287, 450689037, 121912229, 296367353, 721487035, 687123901, 775848097, 733569717, 174711749, 750682369, 141194237, 561748623, 960642535, 942341379, 486536061, 167632307, 163919981};
    int x = 891665503;
    int y = 496300083;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> jumpTypes = {409158929, 159127185, 907888017, 745508391, 621707489, 784938893, 743200645, 238969963};
    int x = 652032649;
    int y = 276932294;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> jumpTypes = {430226567, 677810953, 63160457, 510019931, 612104935, 9660713, 825895877, 589168873, 225595685, 740042283, 393660521, 408409991, 778301467, 892825475, 51258795, 556305573, 41819703, 38852153, 435836569, 411116987, 573670105, 752965007, 523667337, 328667223, 188852319, 248021445, 720518961, 92910155, 751196299, 761766831, 671790617, 423908247, 463351261, 406040031, 833474179, 913443277};
    int x = -845900265;
    int y = -975186174;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> jumpTypes = {749969279, 88977495, 67518387, 963287635, 853401077, 69293949, 798711221, 542693, 150368103, 107365967, 542943411, 580320095, 246184929, 146161053, 176475987, 355106205, 309808897, 986726691, 746428827, 412364633, 469294867, 539408853, 212169437, 10171131, 488207403, 102491657, 606192771, 610657363, 619462067, 107072673, 917084037, 398021141, 304987687, 286346197, 748538971, 217279583, 543645665};
    int x = 737229786;
    int y = -325845497;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> jumpTypes = {318193845, 405876225, 754974311, 442455523, 485755709, 891233209, 614619977, 31227263, 923694455, 956663353, 399831633, 798129269, 858080817, 548369893, 477387463, 490270737, 452482643, 994324261, 783970803, 613100553, 19134161, 741511469, 757557761};
    int x = 483874150;
    int y = -681730637;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> jumpTypes = {664918843, 562353865, 333376849, 793155753, 967787439, 17096389, 817859701, 902384205, 355097597, 657826761, 176106621, 660558949, 110757337, 411265649, 681857397, 263147787, 508802137, 39137357, 228071589, 818096653, 628239191, 694824253, 255860771, 309588363, 133368551, 388632363, 469096047, 143352955, 990246021, 371205557, 359383939, 99658251, 981557261, 197748575, 670062137, 129020237, 321015281, 304296639, 398291275, 727948137, 921781881, 920150199, 191366329, 48581509, 168507033, 312186689};
    int x = 86493510;
    int y = -101159263;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> jumpTypes = {418822049, 645992667, 781306789, 429403125, 340720297, 141988077, 421234689, 47666067, 344927029, 464237423, 868258685, 876883159, 779343765, 315440001, 425924449, 967640763, 900562433, 292137755, 653083279, 278477031, 708978129, 506160719, 411679343, 349090363, 698443953, 21158789, 723196449, 770354835, 943946109, 224340569, 468805507, 178984875, 931875293, 174783221, 499834481, 873758121, 102372049, 678486785, 215027747, 815463061};
    int x = 76318946;
    int y = 385247459;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> jumpTypes = {306852043, 658995627, 352896817, 477258285, 152806273, 328789093, 797697269, 266399919, 111981567, 325416651, 668089901};
    int x = -871714396;
    int y = -214568860;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> jumpTypes = {394387281, 382681787, 552714035, 54324933, 898632705, 634976337, 701426905, 163042649, 475955773, 490531735, 821220817, 862194897, 862216239, 344377009, 310260559, 350277797, 81878197, 733711261};
    int x = -726024364;
    int y = -865033977;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> jumpTypes = {193411905, 714709119, 535674631, 20570409, 324732299, 527795563, 5321381, 599028939, 352990731, 502511095, 100501203, 88074943, 709458619, 904341527, 753611213, 628739699, 378869983, 168045231, 444059393, 789865993, 231781419, 230643039, 127444393, 310851601, 141824951, 556629943, 812365861, 160143129, 290990701, 304336759, 999777469, 963842379, 156136205, 125369877, 93283831, 423259091, 561824347, 993052225};
    int x = -432136704;
    int y = 76559849;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> jumpTypes = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int x = 29;
    int y = 30;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> jumpTypes = {21, 23, 25, 27, 29};
    int x = -30;
    int y = 29;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> jumpTypes = {1};
    int x = 1;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> jumpTypes = {1, 9, 11, 19};
    int x = 6;
    int y = 7;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> jumpTypes = {7};
    int x = 7;
    int y = 8;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> jumpTypes = {9};
    int x = 9;
    int y = 10;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> jumpTypes = {13};
    int x = 13;
    int y = 14;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> jumpTypes = {1, 3, 9, 7, 5};
    int x = -30;
    int y = -29;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> jumpTypes = {29};
    int x = -7;
    int y = -16;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> jumpTypes = {23};
    int x = -4;
    int y = 9;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> jumpTypes = {3};
    int x = 16;
    int y = -17;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> jumpTypes = {1};
    int x = 7;
    int y = -30;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> jumpTypes = {7, 3, 1, 5};
    int x = 17;
    int y = -6;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> jumpTypes = {1, 29};
    int x = 30;
    int y = 29;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> jumpTypes = {1, 29};
    int x = 30;
    int y = 30;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> jumpTypes = {29, 1};
    int x = -30;
    int y = -30;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> jumpTypes = {224587517, 702928966, 498297750, 892427691, 529744320, 837084343, 747987724, 787308442, 351999210, 292377893, 774812046, 533119613, 866370837, 198644176, 344045491, 745242090, 750798859, 311321346, 570842548, 14848366, 309985093, 962654159, 172536691, 29054325, 130940187};
    int x = -263421337;
    int y = 876823353;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> jumpTypes = {628559996, 70272071, 725989490, 750120940, 457852490, 629082384, 171940745, 106156525, 518481399, 950980814, 362608493, 561938033, 47033443, 567733746, 383964520, 893988602, 665677612, 443227746, 122928293, 486191111, 920360167, 666937921, 719199545, 929067450, 398802941, 413581417};
    int x = 947049420;
    int y = 656445361;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> jumpTypes = {231406087, 644108983, 531097154, 853657602, 602765804, 30078908, 946604339, 556712011, 272906587, 896605650, 225411997, 199993598, 125729320, 656119773, 997403497, 109902234, 231512816, 110616830};
    int x = -43222566;
    int y = 648565404;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> jumpTypes = {181072567, 327332406, 686000874, 678223726, 552044771, 199509895, 694776147, 177958031, 865328268, 462865695, 154929555, 263335291, 57088128, 189930896, 637712003, 464996967, 567984456, 820828904, 923184850, 679380293, 25665388, 735265824, 710988704, 652030469, 843207014, 447394255, 492996467, 778008131};
    int x = -693008114;
    int y = 607510730;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> jumpTypes = {756645219, 156352161, 844587553, 527792558, 835466561, 221864330, 337137740, 250012539, 174426337, 229237098, 585996617, 265195791, 54031550, 25407447};
    int x = 33912063;
    int y = -986138992;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> jumpTypes = {252687024, 811821701, 315650441, 620344996, 943405148, 53554699, 872345194, 468091425, 63546508, 409773882, 999698003, 541794792, 21363412, 683412202, 334840805, 679374574, 821856032, 32616097, 344110925, 560955182, 619773026, 107022913, 83777076, 812458888, 111235735, 487710369, 623926677, 721498386, 723140655, 787858875, 700907102, 748592818, 886178395, 380674441, 293515392, 572013825, 910354455, 802733642, 347537633, 255446924, 554231427, 275523054};
    int x = -66862664;
    int y = -579622982;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> jumpTypes = {545362557, 54382230, 534081413, 990351002, 87547458, 111078863, 443285508, 44666482, 141818332, 806602188, 147485514, 628474620, 940134617, 926240270, 946893685, 949078060, 493158115, 992383139, 592788335, 258129990, 623787978, 480668047, 222647235, 294778222, 262596597, 352959313, 108884637, 174235236, 913617787, 962620263, 736680133, 143411829, 301613195, 612759930, 692769422, 77106547, 646036485, 702071479, 247178275, 70550878, 34365979, 517131351, 339025470, 279057998, 170431974, 431341812, 436555036};
    int x = -354558902;
    int y = -582470185;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> jumpTypes = {548097606, 383655898, 195246752, 263293053};
    int x = -40159698;
    int y = 36069875;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> jumpTypes = {648707656};
    int x = 330994866;
    int y = 19542632;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> jumpTypes = {774208886, 482953580, 264417340, 3935158, 913839626, 30147920, 497873558, 602329882, 823680997, 617706965, 599530086, 632129104, 63673156, 648380576, 110906746, 473677682, 116025432, 134446475, 46656103, 249096107, 319745154, 588786268, 558040227, 751818730, 975313467, 975202834, 476808062, 419530402, 676803776, 262045083, 54180869, 928078908, 608254409, 953553969, 491841042, 14619757, 911791573, 311808781, 137423057, 241118017, 815444808, 525989125, 998058157, 663982952, 229453289, 797512236};
    int x = 442872400;
    int y = 236459563;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> jumpTypes = {719571315, 712678499, 773983707, 400546797, 50973619, 380079383, 157008933, 909905531, 824343187, 922621360, 853630468, 943984021, 938282073, 339508477, 472377649, 893140108, 733675703, 17705221, 315210262, 505539077, 19828650, 649955465, 704222587, 436553391, 765020638, 956181936, 440528777, 885909686, 193567930, 769552102, 976941875, 540869640, 631100428, 613365735, 569334058, 302107168, 694086687, 514838486, 74420697, 982047647, 647534119, 961928149, 425429039, 361589942, 262522696};
    int x = 750584385;
    int y = -227697822;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> jumpTypes = {307912690, 240644317, 915165342, 685758122, 867307588, 657037273, 410460196, 291843225, 462095142, 914659400, 600018809, 908212137};
    int x = 288358179;
    int y = 215186216;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> jumpTypes = {751387750, 975363436, 480135024, 266649393, 922529102, 897389584, 365967932, 885620220, 16237519, 860917138, 964865856};
    int x = -626146730;
    int y = -473985700;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> jumpTypes = {842561687, 354209095};
    int x = 657435297;
    int y = 767130512;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> jumpTypes = {152375642, 387308159, 754371558, 363167172, 352717992, 197856349, 502361967, 435402843, 487075285, 960995701, 151838502, 211500918, 883805147, 148220628, 835102062, 678122868, 62386620, 267431980, 651675656, 517895351, 862369005, 602110622, 302168330, 194275057, 93528884, 752714238, 475542999, 397637624, 302030563, 118362028, 775387461, 409155410, 288644016, 327153808};
    int x = -8814623;
    int y = -169073198;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> jumpTypes = {996526831, 139800338, 686136025, 205262445, 402801464, 544113265, 583470397, 423464520, 188243045, 481096832, 895528028, 116791905, 303700856, 31524308, 944374607, 891484817, 292398223, 725794804, 160075763, 116691605, 420007363, 174311547, 295637783, 107468811, 624188986, 686451648, 896903391, 368580937, 550848949, 587349072, 958947104, 746341336, 33078056, 550284049, 140478733, 494266067, 771386623, 94391474, 541842342, 89180934, 958614103, 101284999, 998668408, 87546710, 959490790, 404429275, 556488034};
    int x = 672595506;
    int y = -257998693;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> jumpTypes = {117936185, 684994772, 375750059, 67521571, 706122836, 450901955, 438708793, 635983446, 129030116, 384396691, 226662350, 945094270, 776649439, 204313944, 652033326, 566685097, 451430888, 509642318, 707182982, 550987354};
    int x = 686150546;
    int y = 412473248;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> jumpTypes = {723030069, 809764273, 276283415, 726565875, 629548651, 415738376, 720168540, 650893645, 981534125, 568929340, 258975292, 789724391, 430648672, 13551412, 947499577, 964377086, 44057052, 228758935, 683973185, 457297599, 491517548, 915935940, 577271529, 830931051, 941280617, 449364963, 126245450, 466457853, 34668489, 681282863, 633380075, 306985047, 463208762, 692320223, 726697269, 407026886, 797722981, 606590429};
    int x = 757026547;
    int y = 219772073;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> jumpTypes = {463904472, 890729149, 774554426, 504143181, 933044645, 650299027, 743638704, 231932995, 396010953, 441592995, 965721207, 478365723, 275881406, 827151846, 175272544, 452848751, 804792556, 550529271, 321926664, 716606615, 834250333, 806816890, 531820276, 998579211, 286852992, 284651719, 559006760, 852318537, 786448753, 264865225, 235618313, 85380367, 253755011};
    int x = 228822887;
    int y = 592237070;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> jumpTypes = {522560109, 428861622, 830405906, 617351664, 741452476, 148655048, 517692974, 398897543, 330841955, 420267892, 16410131, 344750045, 771244641, 438499896, 462471477, 677175885, 163635374, 387406437, 859065246};
    int x = -904472018;
    int y = 690754879;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> jumpTypes = {469657190, 207420269, 8052089, 313895481, 303258574, 223138939, 664531236, 928953338, 84430983, 594061526, 115325151, 9474946, 297169199, 454553847, 815840764, 868094926, 997248378, 942677706, 122558343, 537509609, 680705534, 563193528, 509301652, 140011245, 110489982, 102120521, 662741449, 493808543, 875052962, 853834676, 133216784, 241151541, 35184795, 507553532, 462280148, 765484001, 430809420, 342470345, 809672337, 111851541, 383258193, 240454, 7417933, 697962367, 66920495, 380275604, 225051869, 575256230, 904642532};
    int x = 120794140;
    int y = 475370592;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> jumpTypes = {582982285, 450192116, 343291376, 347153492, 190120429, 919761857, 42389659, 762675093, 732122044, 28192982, 149762962, 616337214, 629395610, 409965063, 182065898};
    int x = -153616601;
    int y = -78984977;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> jumpTypes = {938318000, 476514051, 180610334, 722385864, 595473510, 68977367};
    int x = -852525290;
    int y = -916311720;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> jumpTypes = {274627070, 676191174, 66643181, 557507186, 965854688, 732816850};
    int x = 260132452;
    int y = 810849130;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> jumpTypes = {890894671, 870775866, 468920556, 336260523, 249655710, 42172242, 489105318, 749142427, 202793730, 364399562, 29708266, 192752363, 309122578, 511550084, 91018079};
    int x = 191846635;
    int y = -597339349;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> jumpTypes = {597520666, 908767337, 325607951, 301838844, 386870593, 507988127, 78233516, 914362210, 472796619, 973682437, 259232893, 236254003, 751288650, 284232111, 59952096, 591523686, 849042067, 43258579, 186904061, 939750853, 953919435, 90291090, 503164585, 122011856, 386651388, 12358496, 338637481, 594423104, 451931118, 560243074, 6039111, 799778267, 433317239, 224423355, 607698625, 588679049, 79492848, 395859966, 399941276, 805179939};
    int x = -544097502;
    int y = 774779833;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> jumpTypes = {902489725, 87251831, 934072648, 390174393, 132439477, 880880838, 198015198, 580507012, 812003069, 759903649, 740605870, 373667757, 822762085, 281011351, 334055000, 778073818, 330771353, 98464376, 345831195, 463435406, 765988155};
    int x = -630040677;
    int y = -469340999;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> jumpTypes = {649136857, 658754397, 693475422, 905467490, 688645865, 78259668, 761032944, 812419859, 849333382, 189062409, 307921154, 710422324, 485931290, 451198295, 138965823, 567723181, 973330886, 389281441, 518436821, 868426460};
    int x = -980746054;
    int y = -741719334;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> jumpTypes = {844005255, 483247187, 862112452, 10863659, 19483975, 688469756, 26033024, 391505289, 379845750, 955552839, 522381366, 828178465, 633403396, 764318542, 444197697, 124459465, 547481947, 809850384, 704719527, 559094132, 921551795, 313350151, 381506693, 590716761, 277178381, 91918819, 245856573, 245248878, 740167511, 878079918, 48852675, 837157191, 708702553};
    int x = -584557920;
    int y = 678796520;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> jumpTypes = {575977060, 304838572, 838386942, 787501961, 282938881, 128125441};
    int x = 931287728;
    int y = 458473578;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> jumpTypes = {999999999};
    int x = 0;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> jumpTypes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 1000000000;
    int y = -999999999;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> jumpTypes = {1};
    int x = -1;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> jumpTypes = {1};
    int x = 1;
    int y = -1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> jumpTypes = {1};
    int x = 1;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> jumpTypes = {1};
    int x = 2;
    int y = 2;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> jumpTypes = {3};
    int x = 1;
    int y = -1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> jumpTypes = {1};
    int x = -1;
    int y = -1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> jumpTypes = {3, 1, 11111111, 555, 789, 999999, 1234567, 9876543, 123, 345, 13, 5589, 991, 911, 511, 87, 7, 54321, 101, 791, 43, 373721, 865, 133, 9709, 8083, 200005, 10000003, 55666603, 13579, 97531, 4545223, 113355, 94755, 1881, 1991, 2003, 20055, 4667801, 110011001, 886531, 4567, 8755303, 876541, 10203, 43901, 5520141, 77899, 5471, 55431081};
    int x = 1000000000;
    int y = -999999999;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> jumpTypes = {3};
    int x = 1;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> jumpTypes = {1};
    int x = 3;
    int y = 5;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> jumpTypes = {3, 2};
    int x = 1000000;
    int y = 11231247;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> jumpTypes = {4};
    int x = 1;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> jumpTypes = {10};
    int x = 5;
    int y = 5;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> jumpTypes = {2};
    int x = 1;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> jumpTypes = {1};
    int x = 1;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> jumpTypes = {3};
    int x = 1;
    int y = 3;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> jumpTypes = {4};
    int x = 3;
    int y = 3;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> jumpTypes = {1};
    int x = 0;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> jumpTypes = {1, 3};
    int x = 0;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> jumpTypes = {2};
    int x = 3;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> jumpTypes = {3, 6};
    int x = 3;
    int y = 2;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> jumpTypes = {100};
    int x = 5;
    int y = 4;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> jumpTypes = {4};
    int x = 1;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> jumpTypes = {1};
    int x = 13;
    int y = -13;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> jumpTypes = {1};
    int x = 1;
    int y = 2;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> jumpTypes = {5, 7};
    int x = 0;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> jumpTypes = {8};
    int x = 2;
    int y = 3;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> jumpTypes = {2};
    int x = 4;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> jumpTypes = {1, 3};
    int x = 1;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> jumpTypes = {1};
    int x = 1;
    int y = 3;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> jumpTypes = {3};
    int x = -10001;
    int y = 10001;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> jumpTypes = {2};
    int x = -11;
    int y = -11;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> jumpTypes = {7, 8, 11};
    int x = 92;
    int y = 4;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> jumpTypes = {3};
    int x = -1;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> jumpTypes = {1};
    int x = 5;
    int y = -5;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> jumpTypes = {3};
    int x = -5;
    int y = 5;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> jumpTypes = {9};
    int x = 5;
    int y = 5;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> jumpTypes = {2};
    int x = 343;
    int y = 529;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> jumpTypes = {1, 3};
    int x = 4;
    int y = 5;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> jumpTypes = {1};
    int x = -5;
    int y = 5;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> jumpTypes = {6, 9};
    int x = 0;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> jumpTypes = {2};
    int x = 2;
    int y = 2;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> jumpTypes = {1};
    int x = 100;
    int y = 100;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> jumpTypes = {1};
    int x = 0;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> jumpTypes = {5};
    int x = 1;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> jumpTypes = {7};
    int x = 1;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> jumpTypes = {999999999, 999999998, 999999997, 999999996, 999999995, 999999994, 999999993, 999999992, 999999991, 999999990, 999999989, 999999988, 999999987, 999999986, 999999985, 999999984, 999999983, 999999982, 999999981, 999999980, 999999979, 999999978, 999999977, 999999976, 999999975, 999999974, 999999973, 999999971, 999999970};
    int x = 116123612;
    int y = 616123612;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> jumpTypes = {1, 3};
    int x = 1;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> jumpTypes = {1, 3};
    int x = 2;
    int y = 2;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> jumpTypes = {5};
    int x = 1;
    int y = 5;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> jumpTypes = {1, 3};
    int x = 1;
    int y = 2;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> jumpTypes = {2};
    int x = 999999999;
    int y = 975313579;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> jumpTypes = {3};
    int x = -2;
    int y = -3;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> jumpTypes = {1};
    int x = 0;
    int y = 2;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> jumpTypes = {3};
    int x = -3;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> jumpTypes = {1};
    int x = 2;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> jumpTypes = {2};
    int x = 3;
    int y = 11;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> jumpTypes = {4};
    int x = 1;
    int y = 3;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> jumpTypes = {2};
    int x = 15;
    int y = 15;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> jumpTypes = {999};
    int x = 2;
    int y = 2;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> jumpTypes = {3, 5};
    int x = -2;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> jumpTypes = {999};
    int x = 1;
    int y = -1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> jumpTypes = {2};
    int x = 0;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> jumpTypes = {11};
    int x = -7;
    int y = 3;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> jumpTypes = {7};
    int x = -1;
    int y = -1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> jumpTypes = {100};
    int x = 777;
    int y = 888;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> jumpTypes = {2};
    int x = 3;
    int y = 3;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> jumpTypes = {3};
    int x = 2;
    int y = 2;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> jumpTypes = {3};
    int x = -1;
    int y = -2;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> jumpTypes = {1000001, 1000011, 1000003};
    int x = 123;
    int y = 143;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> jumpTypes = {234563434};
    int x = 1;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> jumpTypes = {10};
    int x = 1;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> jumpTypes = {5};
    int x = 5;
    int y = 4;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> jumpTypes = {1, 3, 5, 7};
    int x = 1000000000;
    int y = 1000000000;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> jumpTypes = {1, 5, 9, 13, 17, 21, 25, 29, 33, 37, 41, 45, 49, 53, 57, 61, 65, 69, 73, 77, 81, 85, 66, 93, 97, 101, 105, 109, 113, 117, 121, 125, 129, 133, 137, 141, 145, 149, 153, 157, 161, 165, 169, 173, 177, 181, 185, 189, 193, 197};
    int x = 999999999;
    int y = 975313578;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> jumpTypes = {1000000000, 1};
    int x = 1000000000;
    int y = 1000000000;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> jumpTypes = {3, 5};
    int x = 1;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> jumpTypes = {1};
    int x = 3;
    int y = 3;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> jumpTypes = {7};
    int x = -1;
    int y = 2;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> jumpTypes = {1};
    int x = -1;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> jumpTypes = {3};
    int x = -3;
    int y = -4;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> jumpTypes = {3};
    int x = 10;
    int y = 10;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> jumpTypes = {2};
    int x = 0;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> jumpTypes = {51};
    int x = 1;
    int y = 51;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> jumpTypes = {3};
    int x = 4;
    int y = 3;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> jumpTypes = {34};
    int x = 68;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> jumpTypes = {1, 3, 5, 7, 9, 100000009};
    int x = 1000000000;
    int y = 999999999;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> jumpTypes = {4};
    int x = 39;
    int y = 1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> jumpTypes = {999999999};
    int x = 555555555;
    int y = 0;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> jumpTypes = {1};
    int x = -2;
    int y = -1;
    MagicalGirlLevelOneDivOne* pObj = new MagicalGirlLevelOneDivOne();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22675302&rd=14539&pm=11476
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
 
class MagicalGirlLevelOneDivOne { 
public: 
string isReachable(vector <int> jumpTypes, int x, int y) { 
  int i; 
 
  if( (x+y)%2==0 ) return "YES"; 
  rep(i,jumpTypes.size()) if(jumpTypes[i]%2==0) return "YES"; 
 
  return "NO"; 
} 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/