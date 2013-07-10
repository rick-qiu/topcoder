/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12346
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

class DefectiveAddition {
public:
    int count(vector<int> cards, int n);
};

int DefectiveAddition::count(vector<int> cards, int n) {
    int ret;
    return ret;
}


int test0() {
    vector<int> cards = {1, 2, 3};
    int n = 1;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 15;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1965600;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 16;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cards = {4, 5, 7, 11};
    int n = 6;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cards = {2, 3};
    int n = 2;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cards = {270216263, 191391530, 812669701, 553475509, 445349753, 344887257, 730417257, 812158120, 147699712, 880268352, 889772844, 686078706, 105754109, 182546394, 949118331, 220137367, 979932170, 89957933, 873226918, 715669848, 486937973, 196032869, 777206981, 68706224, 843638550, 212567593, 883488165, 964776170, 928126552, 301950428, 992516191, 426542625, 849040636, 941604921};
    int n = 85377744;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 883998283;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cards = {38269863, 659998485, 280937364, 681643302, 725914711, 729267237, 23351877, 142750432, 840579930, 98560398, 910500676, 170970492, 856224191, 983059345, 718458135, 876268426, 764841630, 398844031, 185252728, 370429127, 502141744, 993687335, 15934105, 363674761, 904629750, 47965621, 451230257, 84670933, 561035573, 840531614, 248402491, 518954510, 614127120, 683337406, 382875696, 843654050, 436430328, 951656720, 120033498, 669566825, 277092597, 219218650, 643287357, 41654185, 429623094};
    int n = 994719311;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 865173708;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cards = {505099307, 807426510, 317442755, 853580353, 292425666, 944216784, 589638739, 401170802, 86979691, 225161331, 444887338, 339228196, 131636657, 182095964, 211082012, 152299428, 223840043, 287487107, 593400969, 735206213, 589759002, 69834511, 668882481, 808284659, 201886572, 14983332, 86000815, 361784848, 761170565, 801013198, 730103626, 5748439, 576460932, 267998019, 287998488, 883570152, 659169188, 28409914, 145324180, 148026996, 783671751, 994411751, 6364914, 968295563, 559931135, 653962274};
    int n = 888581008;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 831601686;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> cards = {699304831, 261159141, 968925558, 891777679, 928854727, 542938504, 135550598, 59320409, 521884894, 873213989, 71339239, 965117086, 525440094, 212677189, 484742721, 852483212, 533958747, 583332388, 80815711, 217079210, 913595888, 931858669, 2583104, 237123474, 963071901, 825207675, 700375106, 196796184, 706140953, 9984371, 976151788, 319159303, 442727411, 232021906, 578512111, 303305401, 117157997, 269950143, 471898586, 343191861, 114797048, 152143925, 338685732, 762321159, 749675387, 634535220, 114316401, 68043416};
    int n = 241418522;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 795097378;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cards = {54969875, 580643062, 957115007, 948283603, 553189269, 23689366};
    int n = 659481683;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 592875316;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cards = {6724, 6090, 9107, 4320, 3131, 7656, 8733, 3994, 9975, 7596, 8811, 3674, 5056, 8731, 6096, 8246, 706, 7695, 2949, 9874, 8354};
    int n = 6519;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 729584454;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cards = {742, 6757, 5645, 3144, 1641, 3738, 4680, 6136, 1150, 1530, 7211, 6608, 4418, 5256, 3788, 9374, 7627, 7446, 4113, 9173, 3596, 7154, 5054, 5184, 1718};
    int n = 761;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 829202447;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cards = {9177, 3078, 8777, 5400, 655, 2729};
    int n = 6018;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 610884202;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cards = {5456, 8871, 8317};
    int n = 2162;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 44789424;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cards = {7931, 7481, 6605, 3387, 1360, 6208, 1955, 6080, 3703, 1366, 4454, 3733, 9837, 8433, 4564, 3018, 5108, 3584, 4911, 8468, 8117, 1547, 1720, 5529, 8072, 108, 8257, 8521, 2354, 6529, 8155, 6431, 3478, 5049, 6521, 1205, 3415, 811, 5720, 7926, 8299, 2132, 1702, 6710, 752};
    int n = 9382;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 638123402;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cards = {8653, 3925, 4696, 472, 1154, 4626, 979, 5617, 1143, 6598, 7089, 274341733, 475831918, 33644405, 860692744, 441680396, 153542750, 333654408, 383555937, 399374303, 178883768, 827166046, 499751564};
    int n = 512818;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 112611775;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cards = {4897, 3052, 7808, 1768, 4998, 8979, 651, 7810, 2331, 2361, 717, 5162, 2294, 3210, 3754, 6099, 5131, 9635, 4544, 1890, 941574089, 234179032, 62300693, 324920402, 691968675, 612172295, 731415694, 346491166, 81471950, 541238766, 604257738, 411582459, 360400842, 970817049, 53465944, 414036230, 170490216, 21467390, 28707210, 309610389, 14059755};
    int n = 33399;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 409569316;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cards = {2272, 6517, 7565, 278, 6913, 6, 612, 7213, 2783, 3093, 3124, 9202, 8325, 4005, 1438, 2603, 8805, 3364, 1392, 4274, 6576, 9907, 557511760, 861506627, 110751897, 934278860, 418587764, 112026359, 510083578, 54150485, 296877748, 91507157, 695475949, 106023606, 857575455, 853016195, 394623360, 73113431, 408884324, 362645884, 600221025, 311361448, 331020203, 789630848};
    int n = 213502;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 211835809;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cards = {1793, 9589, 9305, 9134, 1559, 4843, 6415, 4568, 1729, 8507, 8392, 7001, 8993, 97051119, 82953399, 251951719, 760329869, 966331976, 725640580, 877082120, 917831364, 699274597, 942525380, 432507917, 362431467, 141343841, 665564233};
    int n = 206050;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 129340903;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cards = {3156, 4572, 312, 6180, 797, 5301, 4217, 904, 1994, 1056, 3729, 2482, 5906, 6030, 1038, 393479898, 470441287, 484908658, 265491378, 494070683, 685789555, 846206507, 66110758, 481376530, 18269581, 333824642, 524643867, 117104853, 739141934, 605540661, 454008491};
    int n = 677415;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 969114858;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cards = {1607, 8115, 1186, 6648, 1228, 9436, 59, 9184, 899971111, 98551743, 37649375, 564730605, 384404672, 710498873, 279314606, 860610481, 885352672};
    int n = 874733;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 936298824;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cards = {5482, 8681, 3792, 1776, 3001, 5047, 1833, 8469, 4859, 227, 8179, 8667, 9469, 6255, 3704, 518763464, 196150923, 138392512, 862720894, 354043649, 546965958, 466668832, 916382920, 322111513, 164897093, 258046233, 478762221, 254320224, 715848039, 696058610};
    int n = 88718;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 417265532;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cards = {1729, 382741977, 584975153};
    int n = 788523;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 143617306;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cards = {1403, 8705, 1937, 9351, 1036, 7826, 1129, 3965, 3427, 110844166, 339394776, 588783405, 455244165, 308476874, 38297259, 938993625, 48555822, 930358830};
    int n = 641424;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 854241980;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cards = {227, 7605, 8452, 5038, 4839, 6626, 1380, 420, 8576, 8689, 9898, 6821, 7079, 7967, 885118798, 841827056, 537716675, 60528229, 432220403, 885642677, 39294280, 906580383, 152334977, 970631262, 751486328, 163311492, 51113283, 27170075};
    int n = 992225;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 46372808;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cards = {8698, 7034, 9806, 2319, 1876, 8939, 216482321, 947260758, 790613440, 619313289, 801874772, 241424528};
    int n = 597343;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 348234264;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cards = {8065, 2571, 4480, 250486268, 203774339, 185251412, 108323207};
    int n = 799869;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 89032792;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cards = {2971, 7811, 5885, 5143, 4597, 7209, 7072, 7169, 9377, 5008, 3313, 8949, 6718, 8358, 6219, 9855, 991, 9854, 5240, 8450, 8985, 2712, 3975, 791618822, 566314637, 598476329, 121455786, 60356494, 409982268, 748704244, 875677532, 713526955, 117009140, 207248984, 278464284, 850951685, 689179016, 85406597, 278706089, 518225535, 277281652, 556727423, 277164214, 59527890, 853102626, 770433886, 36761398};
    int n = 733279;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 836732968;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cards = {9850, 9841, 514, 8889, 6423, 7280, 5583, 1941, 867, 5547, 7801, 7164, 1923, 162436279, 685673046, 853477237, 335928758, 496677900, 296635186, 886027272, 996606818, 601537993, 64630433, 566849099, 128623132, 605919246, 568066185};
    int n = 780716;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 820754868;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cards = {3803, 9705, 1851, 1578, 1188, 2096, 293, 6779, 7338, 3288, 4620, 4516, 888, 4058, 4454, 554, 9889, 8584, 799204786, 409247176, 622912090, 489252810, 807062354, 367555596, 917129098, 37007570, 456590271, 19815169, 974817239, 488226199, 871902484, 421877145, 282858592, 778927101, 483314943, 121797354, 131959586};
    int n = 162636;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 586973320;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cards = {6263, 1530, 9701, 5509, 9753, 7257, 7257, 8120, 9712, 8352, 2844, 8706, 4109, 6394, 8331, 7367, 2170, 7933, 6918, 9848, 7973, 2869, 6981, 6224, 8550, 7593, 8165, 6170, 6552, 428, 6191, 2625, 636, 4921};
    int n = 85377744;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cards = {9863, 8485, 7364, 3302, 4711, 7237, 1877, 432, 9930, 398, 676, 492, 4191, 9345, 8135, 8426, 1630, 4031, 2728, 9127, 1744, 7335, 4105, 4761, 9750, 5621, 257, 933, 5573, 1614, 2491, 4510, 7120, 7406, 5696, 4050, 328, 6720, 3498, 6825, 2597, 8650, 7357, 4185, 3094};
    int n = 994719311;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cards = {9307, 6510, 2755, 353, 5666, 6784, 8739, 802, 9691, 1331, 7338, 8196, 6657, 5964, 2012, 9428, 43, 7107, 969, 6213, 9002, 4511, 2481, 4659, 6572, 3332, 815, 4848, 565, 3198, 3626, 8439, 932, 8019, 8488, 152, 9188, 9914, 4180, 6996, 1751, 1751, 4914, 5563, 1135, 2274};
    int n = 888581008;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cards = {4831, 9141, 5558, 7679, 4727, 8504, 598, 409, 4894, 3989, 9239, 7086, 94, 7189, 2721, 3212, 8747, 2388, 5711, 9210, 5888, 8669, 3104, 3474, 1901, 7675, 5106, 6184, 953, 4371, 1788, 9303, 7411, 1906, 2111, 5401, 7997, 143, 8586, 1861, 7048, 3925, 5732, 1159, 5387, 5220, 6401, 3416};
    int n = 241418522;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cards = {9875, 3062, 5007, 3603, 9269, 9366};
    int n = 659481683;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cards = {8, 536870912, 67108864, 536870912, 1048576, 33554432, 4096, 8388608, 16777216, 32, 1024, 8388608, 33554432, 1024, 33554432, 32768, 32768, 16, 262144, 8388608, 8};
    int n = 587136519;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 527418386;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cards = {2048, 65536, 16777216, 8, 1024, 134217728, 536870912, 33554432, 524288, 536870912, 1048576, 134217728, 134217728, 32768, 128, 8192, 64, 32, 4096, 4, 32768, 8, 8192, 8, 134217728};
    int n = 377520761;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 274971703;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cards = {64, 131072, 67108864, 536870912, 16384, 256};
    int n = 226846018;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 814705443;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cards = {32768, 1, 64};
    int n = 957482162;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cards = {1, 1, 16, 64, 524288, 134217728, 16, 536870912, 4194304, 32768, 8192, 4194304, 65536, 4096, 8, 128, 134217728, 8388608, 1, 128, 67108864, 65536, 524288, 262144, 2048, 128, 67108864, 1024, 8192, 268435456, 16777216, 1, 131072, 262144, 1, 16, 16, 1048576, 512, 32768, 262144, 2097152, 2048, 524288, 2048};
    int n = 130019382;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 96760314;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cards = {8, 33, 8197, 268435462, 4103, 262146, 132, 8197, 536870919, 67108866, 133, 8388608, 268435462, 2097159, 134217735, 262144, 524288, 1030, 2097155, 524291, 268435456, 16777219, 520};
    int n = 517512818;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 664937040;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cards = {2052, 19, 33554441, 32775, 257, 259, 536870917, 521, 260, 9, 2097158, 16777223, 4101, 4, 6, 8193, 16388, 130, 16387, 2051, 32774, 518, 67108873, 8388616, 134217732, 134, 262149, 16388, 512, 8388611, 16391, 11};
    int n = 62300693;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 102114118;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cards = {4194312, 16777219, 262146, 16391, 268435462, 2048, 4104, 264, 268435461, 524297, 14, 536870918, 64, 4194304, 21, 2097153, 536870918, 1030, 11, 40, 7, 524295, 134217734, 135, 4194308, 67108871, 512};
    int n = 64206050;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 554721734;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cards = {4099, 1048576, 66, 68, 32775, 133, 259, 1026, 20, 2050, 33554432, 11, 131073, 2, 32, 67108866, 268435464, 72, 67108872, 16387, 8194, 2051, 268435463, 11, 4194306, 4096, 8388616, 536870914, 12, 66, 131075, 8, 65536, 33554437, 268435460, 65541, 32772, 16777219, 260, 2097161, 132, 68};
    int n = 524643867;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 603955493;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cards = {261, 524297};
    int n = 562105038;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
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
    vector<int> cards = {131072, 262, 134217733, 24, 4194310, 536870914, 67108865, 129, 8, 4, 131075, 33554440, 32776, 1031, 524296, 9, 67108872, 16777216, 536870919, 268435457, 67108870, 256, 1048580, 4194310, 268435457, 268435462};
    int n = 8689;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 45337384;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cards = {268435463, 131080, 16777216, 8201, 524292, 2052, 8, 268435461};
    int n = 3313;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 689779058;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cards = {8193, 16777225, 8388611, 16389, 72, 16385, 4194307, 536870917, 33554439, 65541, 512, 16, 4194313, 4194304, 70, 4, 4194312, 32774, 131081, 33554433, 131074, 4104, 2097157, 16390, 32770, 16777216, 135, 32770, 268435463, 131081, 33554439, 131, 8200, 13, 32777, 515, 39, 536870912, 262152, 268435459, 16777217, 3, 13, 13};
    int n = 2268;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 89627732;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cards = {1048580, 524290, 1048583, 8, 33554435, 256, 8196, 1033, 70, 6, 65544, 131080, 67108869, 4194308, 65542, 33554436, 8197, 32777, 524291, 514, 134217737, 65539, 262149, 134217731, 265, 16389, 7, 16, 1033, 9, 2097156, 16777219, 67, 35, 134217729, 257, 4194305, 67108867, 516, 1048578, 4101, 4194310, 8199, 16777224, 2057, 8199};
    int n = 7520;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 517560626;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cards = {1048579, 524295, 11, 37, 520, 514, 2048, 1029, 2097152, 20, 134217736, 8198, 16387, 65543, 268435460, 65539, 1033, 32770};
    int n = 214;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 285788049;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cards = {17, 12, 536870916, 7, 9, 536870919, 536870918};
    int n = 50;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 338073470;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    int n = 97;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 82151814;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    int n = 1826;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9845550;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    int n = 125;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 82151814;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cards = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    int n = 2021;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cards = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int n = 1000000000;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 211657237;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cards = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 1;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 949480669;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515325951;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 274604464;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515325952;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 926267495;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515325953;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 926267495;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515341279;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 784432293;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515341280;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 388543346;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515341281;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 388543346;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515899391;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 233079467;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515899392;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 69864305;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515899393;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 69864305;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515341311;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 388543346;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515341312;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 843103801;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 515341313;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 843103801;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 536870911;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 418619086;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 536870912;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 520072943;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cards = {101886204, 452529170, 5471075, 266575351, 312275885, 674545447, 647776722, 867717535, 956069693, 357994180, 737701848, 421700883, 769986776, 72177789, 726627322, 25313682, 351836334, 533533199, 688517481, 552818997, 753476314, 345899712, 115709927, 456940822, 113370094, 13144087, 712026626, 828646127, 753094442, 51831799, 461615018, 122587732, 922809531, 702873880, 176208314, 84290976, 60842784, 595168807, 758216184, 872906489, 738710892, 20375268, 485243273, 107070176, 544419943, 62531517, 369106988, 863315589, 544570927, 248037003};
    int n = 536870913;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 520072943;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> cards = {257, 17, 4098, 3, 1026, 513, 128, 513, 512, 2097154, 6, 8388608, 4097, 1048577, 536870912, 33554432, 8388609, 2, 513, 134217728, 4194306, 524289, 512, 4098, 65536, 8388610, 256, 8194, 67108865, 1025, 258, 65537, 32770, 64, 514, 8192, 258, 1026, 2097153, 33554432, 1048577, 8192, 1048578, 524289, 134217730, 128, 5, 134217730, 9, 134217729};
    int n = 618135551;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 360005702;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cards = {257, 17, 4098, 3, 1026, 513, 128, 513, 512, 2097154, 6, 8388608, 4097, 1048577, 536870912, 33554432, 8388609, 2, 513, 134217728, 4194306, 524289, 512, 4098, 65536, 8388610, 256, 8194, 67108865, 1025, 258, 65537, 32770, 64, 514, 8192, 258, 1026, 2097153, 33554432, 1048577, 8192, 1048578, 524289, 134217730, 128, 5, 134217730, 9, 134217729};
    int n = 618135552;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 30441083;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> cards = {257, 17, 4098, 3, 1026, 513, 128, 513, 512, 2097154, 6, 8388608, 4097, 1048577, 536870912, 33554432, 8388609, 2, 513, 134217728, 4194306, 524289, 512, 4098, 65536, 8388610, 256, 8194, 67108865, 1025, 258, 65537, 32770, 64, 514, 8192, 258, 1026, 2097153, 33554432, 1048577, 8192, 1048578, 524289, 134217730, 128, 5, 134217730, 9, 134217729};
    int n = 618135553;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 30441083;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> cards = {257, 17, 4098, 3, 1026, 513, 128, 513, 512, 2097154, 6, 8388608, 4097, 1048577, 536870912, 33554432, 8388609, 2, 513, 134217728, 4194306, 524289, 512, 4098, 65536, 8388610, 256, 8194, 67108865, 1025, 258, 65537, 32770, 64, 514, 8192, 258, 1026, 2097153, 33554432, 1048577, 8192, 1048578, 524289, 134217730, 128, 5, 134217730, 9, 134217729};
    int n = 617657423;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 119925216;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cards = {257, 17, 4098, 3, 1026, 513, 128, 513, 512, 2097154, 6, 8388608, 4097, 1048577, 536870912, 33554432, 8388609, 2, 513, 134217728, 4194306, 524289, 512, 4098, 65536, 8388610, 256, 8194, 67108865, 1025, 258, 65537, 32770, 64, 514, 8192, 258, 1026, 2097153, 33554432, 1048577, 8192, 1048578, 524289, 134217730, 128, 5, 134217730, 9, 134217729};
    int n = 617657424;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 275385286;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> cards = {257, 17, 4098, 3, 1026, 513, 128, 513, 512, 2097154, 6, 8388608, 4097, 1048577, 536870912, 33554432, 8388609, 2, 513, 134217728, 4194306, 524289, 512, 4098, 65536, 8388610, 256, 8194, 67108865, 1025, 258, 65537, 32770, 64, 514, 8192, 258, 1026, 2097153, 33554432, 1048577, 8192, 1048578, 524289, 134217730, 128, 5, 134217730, 9, 134217729};
    int n = 617657425;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 275385286;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cards = {257, 17, 4098, 3, 1026, 513, 128, 513, 512, 2097154, 6, 8388608, 4097, 1048577, 536870912, 33554432, 8388609, 2, 513, 134217728, 4194306, 524289, 512, 4098, 65536, 8388610, 256, 8194, 67108865, 1025, 258, 65537, 32770, 64, 514, 8192, 258, 1026, 2097153, 33554432, 1048577, 8192, 1048578, 524289, 134217730, 128, 5, 134217730, 9, 134217729};
    int n = 617656319;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 905075339;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cards = {257, 17, 4098, 3, 1026, 513, 128, 513, 512, 2097154, 6, 8388608, 4097, 1048577, 536870912, 33554432, 8388609, 2, 513, 134217728, 4194306, 524289, 512, 4098, 65536, 8388610, 256, 8194, 67108865, 1025, 258, 65537, 32770, 64, 514, 8192, 258, 1026, 2097153, 33554432, 1048577, 8192, 1048578, 524289, 134217730, 128, 5, 134217730, 9, 134217729};
    int n = 617656320;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 260847757;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> cards = {257, 17, 4098, 3, 1026, 513, 128, 513, 512, 2097154, 6, 8388608, 4097, 1048577, 536870912, 33554432, 8388609, 2, 513, 134217728, 4194306, 524289, 512, 4098, 65536, 8388610, 256, 8194, 67108865, 1025, 258, 65537, 32770, 64, 514, 8192, 258, 1026, 2097153, 33554432, 1048577, 8192, 1048578, 524289, 134217730, 128, 5, 134217730, 9, 134217729};
    int n = 617656321;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 260847757;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> cards = {129, 8191, 511, 131073, 32, 1048575, 4097, 129, 33554433, 1, 4096, 1024, 65, 536870913, 3, 134217727, 1025, 131073, 1048577, 31, 134217728, 3, 131073, 8191, 8192, 536870912, 5, 1, 262143, 2097153, 256, 129, 16777215, 65535, 536870911, 131071, 3, 16, 17, 16383, 131072, 65535, 262143, 2097151, 16777216, 67108863, 63, 2049, 65535, 4};
    int n = 10000;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 209630900;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> cards = {2097154, 67108865, 268435458, 10, 510, 5, 16777214, 5, 1025, 262146, 31, 131073, 64, 257, 16777214, 17, 4098, 16777215, 8, 65, 8388606, 4096, 131074, 4194302, 268435458, 62, 524287, 4194306, 18, 33554432, 6, 8388606, 3, 4097, 262145, 262145, 8192, 32768, 16777215, 258, 16382, 65538, 2, 4095, 268435457, 524290, 4194306, 1023, 268435457, 1};
    int n = 1;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 658384319;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> cards = {2097154, 67108865, 268435458, 10, 510, 5, 16777214, 5, 1025, 262146, 31, 131073, 64, 257, 16777214, 17, 4098, 16777215, 8, 65, 8388606, 4096, 131074, 4194302, 268435458, 62, 524287, 4194306, 18, 33554432, 6, 8388606, 3, 4097, 262145, 262145, 8192, 32768, 16777215, 258, 16382, 65538, 2, 4095, 268435457, 524290, 4194306, 1023, 268435457, 1};
    int n = 2;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 658384319;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> cards = {2097154, 67108865, 268435458, 10, 510, 5, 16777214, 5, 1025, 262146, 31, 131073, 64, 257, 16777214, 17, 4098, 16777215, 8, 65, 8388606, 4096, 131074, 4194302, 268435458, 62, 524287, 4194306, 18, 33554432, 6, 8388606, 3, 4097, 262145, 262145, 8192, 32768, 16777215, 258, 16382, 65538, 2, 4095, 268435457, 524290, 4194306, 1023, 268435457, 1};
    int n = 67108863;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 658384319;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> cards = {2097154, 67108865, 268435458, 10, 510, 5, 16777214, 5, 1025, 262146, 31, 131073, 64, 257, 16777214, 17, 4098, 16777215, 8, 65, 8388606, 4096, 131074, 4194302, 268435458, 62, 524287, 4194306, 18, 33554432, 6, 8388606, 3, 4097, 262145, 262145, 8192, 32768, 16777215, 258, 16382, 65538, 2, 4095, 268435457, 524290, 4194306, 1023, 268435457, 1};
    int n = 67108864;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 975261648;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> cards = {2097154, 67108865, 268435458, 10, 510, 5, 16777214, 5, 1025, 262146, 31, 131073, 64, 257, 16777214, 17, 4098, 16777215, 8, 65, 8388606, 4096, 131074, 4194302, 268435458, 62, 524287, 4194306, 18, 33554432, 6, 8388606, 3, 4097, 262145, 262145, 8192, 32768, 16777215, 258, 16382, 65538, 2, 4095, 268435457, 524290, 4194306, 1023, 268435457, 1};
    int n = 67108865;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 975261648;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> cards = {1};
    int n = 1;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> cards = {1};
    int n = 1000000000;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> cards = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 1;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 949480669;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> cards = {2, 3};
    int n = 2;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> cards = {4, 5, 7, 11};
    int n = 6;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> cards = {568009990, 542735597, 645908749, 752768536, 653764760, 833336658, 269071274, 995959114, 310052894, 836031447, 756808487, 270944827, 142281859, 245661296, 266491299, 55046012, 29849169, 940779440, 805171592, 550865647, 207200307, 52803613, 17263202, 459483495, 799825063, 651572789, 438353994, 674045338, 470144527, 603283731, 221424667, 767983253, 879504051, 219414107, 252219204, 65873916, 101717416, 214284432, 705984353, 172718243, 749873911, 219566331, 161695605, 766779452, 810328685, 396912548, 338193606, 521057834, 217798399, 381237629};
    int n = 12345678;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 31465681;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> cards = {46016589, 163620012, 268461354, 332016596, 183955406, 668530749, 192106820, 98879012, 349925101, 293216409, 859414974, 357815191, 288220876, 730216404, 85720621, 660510182, 916314965, 49337504, 93217192, 4780114, 185924032, 941711038, 298578400, 296665544, 113321974, 687127301, 144629234, 211505717, 230354997, 19448406, 980512979, 195018641, 260223769, 89119046, 141210624, 635527541, 81284635, 445321037, 436619737, 292727968, 724827570, 675619907, 217158126, 322104202, 213111953, 969429501, 72713435, 839016825, 97387310, 28448495};
    int n = 254411119;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 32867672;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> cards = {1, 1, 1};
    int n = 1;
    DefectiveAddition* pObj = new DefectiveAddition();
    clock_t start = clock();
    int result = pObj->count(cards, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22751095&rd=15186&pm=12346
********************************************************************************
#include <cstdio> 
#include <cstring> 
#include <cstdlib> 
#include <cmath> 
#include <string> 
#include <vector> 
#include <queue> 
#include <map> 
#include <set> 
#include <algorithm> 
#include <sstream> 
#include <iostream> 
#include <cassert> 
using namespace std; 
typedef long long ll; 
 
#define REP(i,n) for (int i=0; i<(int)(n); ++i) 
#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i) 
#define FOREQ(i,k,n) for (int i=(k); i<=(int)(n); ++i) 
#define FORIT(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i) 
#define SZ(v) (int)((v).size()) 
#define MEMSET(v,h) memset((v),(h),sizeof(v)) 
 
 
const ll MOD = 1000000007; 
ll mul(ll x, ll y) { 
  x%=MOD; 
  y%=MOD; 
  return (x*y)%MOD; 
} 
int N; 
 
int acc(ll x, int pos) { 
  return (x>>pos)&1; 
} 
ll solve(ll a[], ll K) { 
  sort(a, a+N); 
  reverse(a, a+N); 
 
  /* 
  cout<<"!"<<K<<" "; 
  REP(i, N) cout<<a[i]<<" "; 
  cout<<endl; 
  */ 
 
  if (a[0] == 0) { 
    // oh 
    if (K==0) return 1; 
    else return 0; 
  } 
 
  int bpos = 0; 
  for (; a[0] >= (1LL<<(bpos+1)); bpos++); 
 
  assert(a[0] < (1LL<<(bpos+1)) && a[0] >= (1LL<<bpos)); 
  if (K >= 1LL<<(bpos+1)) return 0LL; 
 
  ll ret = 0; 
 
  // when a[0][bpos] == 0; 
  // K=hogehoge 
  // -> 
  // K=ho****** 
  // we can choose freely 
  // the only constraint is that K[bpos]. 
 
  ll x[N], y[N]; // +1, +0 
  FOR(i, 1, N) { 
    if (acc(a[i], bpos)) { 
      x[i] = 1<<bpos; 
      y[i] = a[i]+1-(1<<bpos); 
      assert(y[i]>=0); 
    } else { 
      x[i] = a[i]+1; 
      y[i] = 0; 
    } 
  } 
  ll dp[2][N]; 
  MEMSET(dp, 0); 
  dp[0][0] = 1; 
 
  FOR(i, 1, N) { 
    dp[0][i] = (mul(dp[0][i-1],x[i]) + mul(dp[1][i-1],y[i])) % MOD; 
    dp[1][i] = (mul(dp[0][i-1],y[i]) + mul(dp[1][i-1],x[i])) % MOD; 
 
     //cout<<dp[0][i]<< " "<<dp[1][i]<<endl; 
  } 
 
  ret += dp[acc(K, bpos)][N-1]; 
 
  // when a[0][bpos] == 1; 
  ll b[N]; 
  REP(i, N) b[i] = a[i]; 
  b[0] ^= 1LL<<bpos; 
  K ^= 1LL<<bpos; 
 
  ret += solve(b, K); 
  // cout<<"#"<<ret<<endl; 
 
  return ret % MOD; 
} 
 
/* 
int main() { 
  ll K; 
  while (cin>>N>>K, N|K) { 
    ll a[N]; 
    REP(i, N) cin >> a[i]; 
    if (N==2) { 
      // int ho=0; 
      // FOREQ(x, 0, a[0]) FOREQ(y, 0, a[1]) if ((x^y)==K) ho++; 
      // cout<<"!"<<ho<<endl; 
    } 
    cout<<solve(a, K)<<endl; 
  } 
} 
*/ 
 
class DefectiveAddition { 
public: 
  int count(vector <int> v, int K) { 
    N=SZ(v); 
    ll a[N]; 
    REP(i, N) a[i] = v[i]; 
    return solve(a, K); 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003] : <cafelier&naoya_t>-custom
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/