/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8284
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

class CommercialPlanner {
public:
    int bestMinute(vector<int> starts, vector<int> durations, int ourDuration, int secondsPerDay, int n);
};

int CommercialPlanner::bestMinute(vector<int> starts, vector<int> durations, int ourDuration, int secondsPerDay, int n) {
    int ret;
    return ret;
}


int test0() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 3600;
    int secondsPerDay = 3600;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
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
    vector<int> starts = {30, 5, 17, 45};
    vector<int> durations = {12, 6, 3, 4};
    int ourDuration = 4;
    int secondsPerDay = 50;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
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
    vector<int> starts = {30, 5, 17, 45};
    vector<int> durations = {12, 6, 3, 4};
    int ourDuration = 6;
    int secondsPerDay = 50;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> starts = {30, 5, 17};
    vector<int> durations = {12, 6, 3};
    int ourDuration = 63;
    int secondsPerDay = 100;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> starts = {30, 5, 17};
    vector<int> durations = {12, 6, 3};
    int ourDuration = 64;
    int secondsPerDay = 100;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> starts = {30, 5, 51, 17, 49};
    vector<int> durations = {12, 6, 10, 3, 1};
    int ourDuration = 1;
    int secondsPerDay = 60;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> starts = {30, 5, 51, 17, 49};
    vector<int> durations = {12, 6, 10, 3, 1};
    int ourDuration = 1;
    int secondsPerDay = 100;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> starts = {30, 5, 51, 17, 49};
    vector<int> durations = {12, 6, 10, 3, 1};
    int ourDuration = 64;
    int secondsPerDay = 100;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> starts = {0, 40000000, 80000000, 120000000, 160000000, 200000000, 240000000, 280000000, 320000000, 360000000, 400000000, 440000000, 480000000, 520000000, 560000000, 600000000, 640000000, 680000000, 720000000, 760000000, 800000000, 840000000, 880000000, 920000000, 960000000, 1000000000, 1040000000, 1080000000, 1120000000, 1160000000, 1200000000, 1240000000, 1280000000, 1320000000, 1360000000, 1400000000, 1440000000, 1480000000, 1520000000, 1560000000, 1600000000, 1640000000, 1680000000, 1720000000, 1760000000, 1800000000, 1840000000, 1880000000, 1920000000, 1960000000};
    vector<int> durations = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 50;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> starts = {23860197, 39405172, 756047370, 672494323, 723335463, 547253072, 8094368, 432288486, 243052675, 307404608, 727163363, 465093760, 176364909, 529799342, 211058071, 575567724, 379726015, 691063316, 485146033, 347484953, 513803885, 123916234, 807390700, 639954659, 111575350, 64406437, 229200991, 698691211, 360317317, 455950900, 783989873, 478723812, 285545354, 269644031, 607356399, 831987424, 648313429, 406027936, 600868597, 325999455, 385834409};
    vector<int> durations = {6441442, 19097261, 518642, 4285530, 2259090, 20186743, 11810702, 17763999, 19800259, 732524, 16997448, 12486064, 11551646, 10132324, 7982700, 12574332, 697071, 2167273, 4651505, 3403077, 10634541, 11256004, 16936779, 2729266, 2074457, 15603960, 13293590, 13625407, 3432609, 6951735, 15241995, 4300162, 8679312, 14363407, 18347283, 9293860, 16418156, 11828919, 5326247, 17225129, 7024581};
    int ourDuration = 10111224;
    int secondsPerDay = 838249485;
    int n = 21;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 744160811;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> starts = {1195097388, 1057774753, 823082957, 1562870470, 842494052, 362855186, 78886233, 62546902, 222263021, 190808422, 583742106, 1406240467, 149036910, 1360918291, 1523670443, 633113251, 303961891, 1467890685, 100386349, 675879735, 1034970724, 124650653, 1139620627, 311822745, 1650266452, 1629802476, 984563656, 598064861, 1012924227, 973969912, 942996917, 489199991, 27803353, 1164019567, 855269940, 332753951, 1297661398, 558039284, 478608750, 1257890541};
    vector<int> durations = {22071200, 21389320, 10228362, 40626587, 4666829, 22062775, 16711893, 4121493, 41188391, 7430770, 921346, 18034377, 11551008, 44572438, 33581669, 10382927, 1315299, 26612020, 22995160, 8404676, 9715848, 17457595, 23487121, 5802652, 24550873, 2266065, 6779466, 28529540, 18693086, 7324938, 2100393, 6788301, 1860074, 17160729, 38322779, 11702819, 29778552, 345237, 8645699, 10830240};
    int ourDuration = 7906534;
    int secondsPerDay = 1798709367;
    int n = 12;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1181180296;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> starts = {54353171, 84005396, 148310141, 98368492, 18686174, 94533650, 35689599, 77771474, 41754754, 67722134, 80907781, 171471768, 107477252, 112404390, 103714035, 56433658, 164045941, 43384230, 119380843, 158993489, 139087966, 47290568, 167061805, 131493689, 90032321, 10059925, 32519462, 62498495, 144054672, 155839879, 16302107, 128697432, 121694188};
    vector<int> durations = {1892877, 4447059, 3433818, 2050752, 1065114, 381512, 3892793, 2091144, 940776, 4325484, 785257, 314168, 1062337, 5021036, 3170775, 4476202, 2878414, 2340380, 1566029, 4012344, 4594097, 485053, 701900, 4638982, 2050547, 4261983, 2011911, 5007344, 1417323, 1151648, 1332491, 1061017, 1717790};
    int ourDuration = 191346;
    int secondsPerDay = 172539220;
    int n = 12;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 136132671;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> starts = {119035773, 26639053, 775792186, 160967551, 430292896, 251671135, 183395422, 345585317, 678247682, 517205490, 323174053, 744188216, 644958444, 449608739, 718916408, 830319120, 815675760, 583582781, 661186251, 580873244, 853979127, 705723475, 749488736, 886881742, 931487542, 506759263, 264455112, 102464427, 78666169, 751293440, 476694581, 396383393, 625137464, 572454309, 952617436, 471723124, 538976043, 49962519, 866235029};
    vector<int> durations = {17683339, 12319573, 11251287, 11870726, 7768063, 10353045, 15842199, 13515975, 8423950, 16218914, 10588250, 4703837, 11727906, 10043831, 6315669, 18215979, 2546959, 21122869, 7454738, 2071153, 8875311, 1086690, 205304, 23324402, 18458987, 3253663, 3508129, 4184005, 6237669, 15814239, 7339510, 1383827, 17810464, 4501926, 18815021, 2846783, 3060711, 10637599, 15862580};
    int ourDuration = 5681327;
    int secondsPerDay = 966582887;
    int n = 10;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 84903838;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> starts = {207832276, 71542406, 40366822, 168296795, 212061398, 199754531, 81614296, 217537979, 41649606, 158008130, 124374006, 15987430, 47995912, 121154027, 78520073, 214357211, 193383868, 181843127, 31028844, 24307785, 111500189, 7971286, 198654046, 144566065, 137164842, 131126220, 88046056, 60009956};
    vector<int> durations = {1213717, 2497030, 728503, 4551168, 155024, 4978337, 5251788, 4031372, 4535803, 6736319, 955977, 4011771, 5668408, 1539291, 540129, 2718525, 3831381, 7809321, 100530, 210408, 6713331, 5694496, 577172, 586401, 2863695, 4329914, 7157883, 6999303};
    int ourDuration = 6667456;
    int secondsPerDay = 224323013;
    int n = 16;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 31129374;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> starts = {1259877601, 1074911313, 864842931, 908673573, 1331370672, 1188620657, 352949569, 1060309323, 687960465, 103080285, 560255678, 265286376};
    vector<int> durations = {16105455, 12004301, 11525468, 106768756, 65605323, 36639548, 89072204, 6326122, 21793110, 41529526, 89437231, 30325606};
    int ourDuration = 39822671;
    int secondsPerDay = 1373335145;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 295611982;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> starts = {42511700, 30646549, 89175079, 34562115, 55580505, 92107045, 102204433, 96857469, 77479616, 5469417, 58331469, 8609327, 741989, 13912842, 7761596, 110823140, 37600210, 51255597, 96015707, 17660953, 104184199, 114529680, 20578887, 11161320, 98446095, 113488964, 24632512, 73997668, 86372217, 28124784, 46410944, 46717319, 47946336, 79770153, 64695524, 68264572, 16674771, 83561373, 32906330, 57328, 9591760, 118685199};
    vector<int> durations = {1431690, 1481816, 635198, 2473969, 2005248, 977082, 1177605, 561163, 358642, 1769179, 2341601, 566791, 2631368, 2282293, 754338, 2393203, 1849947, 232652, 756934, 1971107, 1546723, 2461375, 800232, 2673613, 2800846, 447376, 1366644, 171802, 2311817, 590084, 60342, 668745, 1510580, 1343851, 2512507, 839452, 686476, 2799956, 1588981, 512427, 1363003, 719048};
    int ourDuration = 2763641;
    int secondsPerDay = 119711294;
    int n = 17;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 51488249;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> starts = {20555952, 415566413, 84767672, 705589649, 546762883, 121429966, 746366700, 155888636, 101424232, 114484899, 33954262, 261650272, 479879108, 397358033, 390311121, 282074421, 596162732, 523435950, 94699381, 310111860, 570160269, 173101825, 690884812, 63358011, 652886218, 450615620, 467846550, 210656067, 42007631, 355428686, 329827011, 506305358};
    vector<int> durations = {8157851, 20065601, 3822362, 8877015, 11358352, 1273208, 21791183, 5260981, 3797176, 5818154, 4517521, 18621010, 8219456, 17119071, 1683648, 19679990, 7783983, 16787873, 6422593, 7475752, 21731061, 20090711, 3571319, 3900415, 14007550, 6690449, 973175, 8820750, 8168474, 18312080, 2089835, 2688252};
    int ourDuration = 5171798;
    int secondsPerDay = 747909974;
    int n = 10;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 488098564;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> starts = {1144718251, 1040587065, 454761432, 100098596, 63873653, 599664233, 671184159, 859791417, 182880044, 383393750, 227733071, 757676703, 771380976, 1080634645, 711429989, 497627653, 299525711, 1113619182, 552947473, 659183071, 467163200, 824422095, 796915926, 38722557, 978481826};
    vector<int> durations = {20542724, 38806203, 9269882, 26024494, 17014370, 23036359, 16372751, 30306558, 19088088, 11728560, 37448121, 6964403, 16140121, 26883802, 46220755, 43085882, 43255882, 17505455, 25215596, 583043, 11395426, 25604948, 5403000, 14031899, 16043750};
    int ourDuration = 283377;
    int secondsPerDay = 1156967896;
    int n = 12;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 890097975;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> starts = {756309062, 251755937, 795149686, 595690990, 488402230, 709620226, 332375866, 24731767, 548590036, 301806128, 729838880, 647955145, 425026327, 710914037, 90063952, 365923541, 139509038, 53936721, 587668507, 107936613, 432694119, 344575367, 122782318, 576343797, 454142172, 157822129, 200599633, 144762781, 508488177, 315738601, 768759715, 292340160, 255209140, 684871562, 70437858, 478475908, 443361251, 466765560, 651949415, 383960216, 73603393, 522365630, 229154623};
    vector<int> durations = {6173098, 76025, 11707539, 14388761, 6064590, 411553, 2230687, 4105969, 18215160, 13890206, 10220379, 535501, 6590699, 8237256, 10847492, 11850634, 2304100, 12375854, 7183112, 14076352, 4147033, 2691583, 12372803, 5125245, 8049207, 8566336, 12852745, 423999, 4262180, 1385788, 8365797, 3963747, 4654520, 13735385, 2870871, 6976951, 4317982, 1669017, 7548747, 8024823, 9765886, 915275, 18369779};
    int ourDuration = 14435245;
    int secondsPerDay = 798493027;
    int n = 31;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 610079751;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> starts = {30512158, 5737257, 46952712, 36009301, 27815192, 43620811, 21053044, 56733664, 79075262, 51633468, 61922592, 8911011, 88533751, 45768136, 16381291, 81315632, 31891378, 23782954, 70501623, 72820517, 49327837, 17365012, 94129708, 10834106, 12209320, 28757753, 25529952, 4095934, 90263825, 83985309, 14097730, 44879545, 91568795, 57856422};
    vector<int> durations = {607388, 1313781, 494165, 645914, 851313, 966568, 304220, 942512, 2156288, 1839220, 1205201, 611790, 1579078, 584132, 351169, 1974876, 274183, 529433, 1406074, 1692766, 1166692, 2501027, 1011206, 419278, 1703260, 114227, 672589, 113683, 1247647, 498958, 95053, 590224, 1949567, 2091689};
    int ourDuration = 711290;
    int secondsPerDay = 94890655;
    int n = 32;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 47446877;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> starts = {366245279, 992143955, 1319715726, 197943862, 458423191, 84977128, 284394997, 864887648, 602030471, 1126883869, 373971568, 739616713, 52728747, 958495836, 1359460129, 1189733484, 241960863, 331569888, 177508351, 558596081, 821715389, 453172274, 679995281, 1239272213, 1233767715};
    vector<int> durations = {1943449, 41891319, 29847755, 8693908, 34192033, 25780887, 388309, 47236397, 24647170, 44271641, 36519414, 52142245, 27865375, 910012, 38530399, 20245552, 1636954, 32691205, 10620356, 20736188, 27849861, 4726988, 52902570, 50154130, 5421341};
    int ourDuration = 1816957;
    int secondsPerDay = 1378073113;
    int n = 9;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 492615224;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> starts = {128317845, 354252589, 311895510, 143197024, 1236233, 180914966, 366851861, 157384991, 322543966, 76373633, 350249297, 298160992, 327517841, 222802189, 101992216, 73840422, 238594533, 136990433, 17165305, 252667230, 208128333, 34892406, 61460485, 316425843, 199680797, 330743647, 113342283, 271403087, 94589435, 115200072, 278362547, 289760744, 85689628};
    vector<int> durations = {5043034, 2266244, 2386612, 3963477, 3788599, 11454021, 8697482, 8828700, 4772146, 3377879, 1180445, 11435874, 3103464, 8369697, 1204676, 1535037, 8605088, 4796564, 4504849, 2705922, 5082950, 9698307, 5145817, 2100861, 923067, 9026408, 1261863, 3685572, 2410840, 862286, 8638138, 4018342, 7889206};
    int ourDuration = 1095722;
    int secondsPerDay = 378779222;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 356518833;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> starts = {165555362, 420019121, 327604193, 364721926, 259955989, 241555059, 216570884, 390860813, 295613440, 292025117, 116265066, 12534153, 395925534, 84351880, 46463351, 57177298, 107476931, 136366271, 35404886, 439252821, 314848187};
    vector<int> durations = {8234808, 18822045, 6024227, 1106159, 18476130, 6534636, 10167860, 706644, 17519203, 3142576, 12078637, 7487645, 4778460, 10237013, 7700643, 8549821, 3332703, 18052735, 8714275, 12379632, 11399837};
    int ourDuration = 9893090;
    int secondsPerDay = 440450037;
    int n = 12;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 20021798;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> starts = {91375836, 85072025, 283309972, 273062679, 666846730, 615210394, 333964186, 422930046, 694542537, 138050104, 489302216, 305042019, 378115306, 325232944, 510629733, 552375015, 468111544, 687243117, 20099046, 494395484, 258189366, 146017835, 348907415, 212923709, 243941652, 63693874, 520123919, 527634620, 39328480, 452404605, 405202906, 611407753, 427702530, 190376244, 164503914, 627047514};
    vector<int> durations = {14626415, 3541713, 17323156, 5420888, 18611739, 6238139, 6097761, 1183590, 14214490, 6271944, 4321677, 5944686, 846875, 8335797, 4030746, 7975533, 77377, 602629, 4145487, 4961787, 12796682, 6429956, 16106516, 3890550, 5026300, 8158176, 858972, 11775278, 4451408, 2561887, 11522344, 2983834, 2122258, 14849309, 3677574, 12056774};
    int ourDuration = 5442879;
    int secondsPerDay = 715409078;
    int n = 35;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 429824788;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> starts = {664897046, 446088193, 736496901, 485606961, 534928710, 105164633, 359773701, 198256001, 862287504, 771553928, 127997932, 302536747, 430892622, 58156216, 237763881, 806013931, 145700866, 633770697, 209108623};
    vector<int> durations = {40382725, 24658237, 14076037, 33470663, 17412332, 22035917, 30009357, 507294, 25915518, 7250623, 11367131, 10526968, 10669362, 36215141, 22787164, 31809590, 26368616, 12560131, 26406026};
    int ourDuration = 407829;
    int secondsPerDay = 864629338;
    int n = 19;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 198763295;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> starts = {154052642, 918364824, 848440260, 254087124, 1534625046, 488641747, 218889221, 28746661, 1425851995, 1314418175, 75175361, 574780054, 1202117032, 377407555, 1457081209, 1092713221, 817653554, 1662590583, 459952751, 364943683, 1387976503, 975254638, 615181729, 422334449, 1274932943, 1110341339, 1142121142, 1395606771};
    vector<int> durations = {49839822, 31569253, 27414418, 27242080, 36421786, 3444096, 6746663, 30100343, 26305348, 49757412, 3878671, 7517377, 16693627, 26411745, 26876903, 5016439, 14002268, 18721643, 25421442, 8382812, 6282541, 41541058, 38340737, 16281155, 14980604, 26754124, 29062177, 11412735};
    int ourDuration = 36594261;
    int secondsPerDay = 1731872795;
    int n = 15;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1483958112;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> starts = {466036631, 623320313, 225890354, 605931253, 351384260, 527029860, 37230953, 776145889, 32644361, 96023088, 828615019, 811382172, 445539399, 293823412, 181789364, 176219948, 398806761, 663228870, 383490178, 11207698, 640367847, 132243341, 588724439, 692496981, 75307323, 512186995, 802195050, 584511194, 281621306, 497808770, 437006134, 422389253};
    vector<int> durations = {23444546, 14838980, 24772383, 17350285, 19616188, 24224253, 2062398, 3912039, 4122085, 7809392, 16071417, 9564801, 10501835, 25269875, 15171267, 4213084, 19837145, 8164647, 1874056, 19315160, 4123283, 3258407, 14287258, 7623767, 5538809, 2149494, 1272745, 2847623, 10893192, 4758106, 8482089, 6592603};
    int ourDuration = 17437085;
    int secondsPerDay = 854075035;
    int n = 29;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 644491130;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> starts = {545027599, 771752846, 924284821, 1571578288, 1340302580, 1131656407, 1694716509, 370612933, 1670018392, 230950875, 1611880014, 411905850};
    vector<int> durations = {90435511, 95788071, 135859500, 18325822, 75739932, 80544951, 125224613, 1880246, 20399823, 113331402, 57893484, 102523377};
    int ourDuration = 104353209;
    int secondsPerDay = 1727956668;
    int n = 10;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 91984454;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> starts = {2057063, 863807590, 625885829, 785234614, 563755844, 95609720, 251714689, 455766424, 354937276, 744968426, 169749651, 533568906, 704051905};
    vector<int> durations = {31277143, 25214633, 57382775, 16588451, 14176786, 5136785, 72872490, 18965976, 31942227, 29538867, 41377760, 7629628, 15041825};
    int ourDuration = 46555745;
    int secondsPerDay = 957271729;
    int n = 14;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 33334206;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> starts = {552476878, 464750946, 490330813, 188682785, 50976176, 261232967, 245084363, 351864583, 32881025, 112978298, 472179513, 231997478, 86488287, 296689575, 534460339, 438096273};
    vector<int> durations = {965682, 2877064, 14723441, 9558771, 24693497, 28040637, 1916685, 2800991, 8197212, 30650571, 4504807, 4030037, 2704438, 8970198, 12628473, 24956494};
    int ourDuration = 5497187;
    int secondsPerDay = 574267818;
    int n = 6;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 553442560;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> starts = {241792394, 827516919, 119199519, 67990251, 548705809, 951142436, 503549770, 282659743, 611983993, 662125366, 488019440, 160375805, 598522711, 760539008, 313778059, 391201803, 357633924, 883057679, 200317758, 817858288, 333529162, 101871610, 858293082, 702525063, 430479404, 234822911, 747210573, 872303800};
    vector<int> durations = {18175856, 22043263, 12802016, 11742676, 28332767, 712503, 14879535, 11226480, 26817232, 14476221, 8904903, 24870504, 2769660, 25062281, 4948211, 27475081, 33172065, 31989608, 33218618, 7127126, 22170034, 16504434, 13660558, 33839401, 30619914, 4908318, 4643308, 1704545};
    int ourDuration = 23676025;
    int secondsPerDay = 957437773;
    int n = 17;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 951854939;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> starts = {1239882398, 1202392001, 249268219, 323270423, 25163123, 819928839, 1179808848, 73039089, 1169140120, 730379779, 509303753, 129891390, 978014757, 797108909, 1364014198, 292572100, 1287016013, 362280713, 709464092, 1142222167, 1086822083, 22662264, 1037466270, 851740601, 179435283, 774892583, 404999940, 1341018731, 922091101, 378491400, 85282791, 1099230656, 1266179035, 626258462, 665665335, 1023184342, 1117252626, 49036777, 439655466};
    vector<int> durations = {6252636, 17771383, 6794229, 13390176, 7662137, 23869168, 14089294, 8864787, 8750018, 23117517, 15304702, 29255506, 32467077, 9515016, 24809992, 18031710, 8069545, 2107097, 13963796, 21747929, 5244104, 163555, 6173573, 10005633, 7876544, 4621390, 27746977, 17527349, 29988674, 12532859, 19158227, 10274526, 18793736, 15809027, 8749121, 2169388, 20264565, 13801626, 634081};
    int ourDuration = 345749;
    int secondsPerDay = 1423035056;
    int n = 36;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 81903876;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> starts = {262859193, 848338720, 918442698, 562993809, 1095082876, 74224751, 1284178495, 631493301, 751698324, 934771479, 704661834, 482236870, 1139403424, 1229119051, 771658035, 715798848, 329042907, 1037877136};
    vector<int> durations = {46776802, 33763497, 15137579, 63423046, 23648121, 71926399, 66442499, 70308412, 12963109, 69789154, 2901914, 73299764, 54377617, 34572261, 53997076, 20185215, 69665076, 28679318};
    int ourDuration = 10092423;
    int secondsPerDay = 1387885789;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1263691312;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> starts = {1195073625, 10086974, 690786285, 123811857, 798107396, 1044792574, 744793471, 1257642047, 1125697353, 911667824, 321503020, 790375534, 605915154, 427785339, 1174529502, 300043054, 972033428, 220329664, 853366319, 373279396, 576298540, 52189006, 1350236841, 411274221, 940071217, 153969496, 71296914, 777237038, 932583003, 802209114, 84149300, 1315227370, 445700784, 458412599, 268880485, 1226782982, 637509638};
    vector<int> durations = {17293099, 23305421, 31659737, 24707334, 3173797, 23279508, 18191335, 23835661, 9638541, 9056519, 36230373, 4297848, 25530555, 9212487, 18929400, 17729754, 32949689, 7575107, 29052527, 6702019, 25804249, 18760017, 20094404, 15482015, 6945960, 5136416, 3580765, 6509026, 7378520, 32261059, 16284470, 5063512, 3448656, 6578101, 2650354, 15635823, 34410486};
    int ourDuration = 3471436;
    int secondsPerDay = 1365921088;
    int n = 38;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4410157;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> starts = {1180482569, 1640144511, 1565815481, 116119161, 1710552979, 939908867, 846275180, 1461785867, 227407250, 663292725, 1369955607, 611431508, 1168378456, 392797777, 910508218, 1848104124, 1742244394, 1679082008, 834474105, 373580509, 1066667900, 1418922453, 754427143, 19818141, 1887543799, 1541262670, 519882715, 347385572, 796791958, 1034253907, 1150267646, 746999878, 984469368, 79850735, 165764598, 355267038, 284752683, 1534084467, 1209546339, 256410030, 717003247, 1294955061};
    vector<int> durations = {2981031, 17615669, 22118623, 43860616, 11628260, 36973375, 42588850, 39439459, 20894660, 42681422, 36501514, 43770780, 4252915, 30549756, 3466440, 33139886, 23221526, 29018024, 4614850, 8076083, 38725024, 13154358, 23611507, 36610402, 17556775, 3477406, 27412860, 5032343, 25177583, 14749736, 6472130, 3942126, 44338469, 15240960, 22936599, 3269273, 22670469, 2185643, 24261118, 9229739, 2429561, 4985588};
    int ourDuration = 32642295;
    int secondsPerDay = 1934487101;
    int n = 35;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 423347533;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> starts = {633064663, 543978634, 1119953522, 356500104, 925329486, 1604594645, 1492420813, 307357543, 1636473774, 1244962298, 1164646869, 1031463547, 1074801000, 1281910385, 244742007, 462310373, 1188426142, 851322646, 751703323, 1355568204, 152637128, 1589676309, 820221270, 681056132, 1618269759, 1023526778, 1408965415, 395046211, 592890668};
    vector<int> durations = {26475014, 44376481, 20990631, 32815547, 56744398, 3686454, 56546240, 39205346, 52663700, 22589888, 15203117, 19397036, 31067482, 28805456, 26993181, 51891331, 16022611, 41662149, 53908383, 43765814, 17679407, 5236178, 30006719, 28869043, 12751914, 1321666, 24121675, 53046678, 7088861};
    int ourDuration = 53386453;
    int secondsPerDay = 1660480522;
    int n = 26;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 28656952;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> starts = {461901772, 562783497, 1352173402, 648553132, 601293997, 1615492983, 319376964, 1192035451, 524524995, 761009865, 1456728043, 119742695, 719569796, 409344391, 1145277165, 1550425380, 262786664, 549054116, 1031567658, 798023515, 742243673, 1505176158, 911999577, 493297145, 171678232, 1281827362, 1333974064, 59053329, 155516243, 16153416, 1367678116, 871755824, 1517388116, 699919846};
    vector<int> durations = {29395502, 10698769, 8732249, 14513136, 28059864, 47917358, 2396096, 24414773, 14064030, 26879126, 25844947, 35669392, 20219708, 28266461, 38625553, 39282524, 29723001, 3432225, 28344743, 32044081, 2654942, 7300957, 23502939, 31211446, 13645840, 22895798, 8513831, 39388276, 3413591, 25431250, 47618381, 39041517, 7854417, 16037902};
    int ourDuration = 19087171;
    int secondsPerDay = 1647681394;
    int n = 35;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 98441605;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> starts = {39530552, 123437850, 176259257, 279358321, 16053047, 434778975, 343486079, 320630504, 226636665, 463871752, 77930268, 58079923, 477516270, 312932212, 402362117, 117610415, 210584088, 483304606, 28512097, 487269929, 250604340, 418112503, 222842796, 193492853, 361760755, 376286975};
    vector<int> durations = {16311064, 15633324, 1860056, 13185902, 6274256, 3375007, 15605596, 3176039, 2490112, 8617741, 14393946, 16269090, 4660706, 742116, 2838398, 363383, 9055843, 1098986, 9474083, 11791499, 3708131, 6781621, 679462, 9768642, 9957817, 17446236};
    int ourDuration = 8997397;
    int secondsPerDay = 496726401;
    int n = 20;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2335027;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> starts = {693744428, 409205490, 1528847054, 828835481, 559507908, 1139581735, 1277868565, 1662730604, 1059699545, 28070965, 921466480, 325018465};
    vector<int> durations = {10515744, 24292921, 113855100, 39705093, 133017887, 26474019, 102569589, 59892610, 24030897, 131285786, 75735691, 61478076};
    int ourDuration = 104326604;
    int secondsPerDay = 1762105441;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1166055754;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> starts = {353138952, 579215628, 452070182, 194088516, 861048922, 246668297, 138751902, 522920966, 117347909, 944429096, 401489151, 340555237, 800021174, 219907235, 902118063, 752162875, 736391858, 539848260, 284471879, 644853050, 692741267, 161573070, 98761569, 383543464, 629817727, 832935836, 148680043, 668136513, 809994709, 267756022, 780278483, 722480302, 912851526, 878212550, 33126508, 55930723, 488282935, 412247514};
    vector<int> durations = {20076767, 22066662, 23896425, 1357311, 11957720, 10555368, 8198648, 345195, 4515805, 7214133, 2111489, 6846206, 1241437, 13308987, 4166568, 797700, 4141573, 21602511, 18849966, 18928818, 20798912, 21965743, 11735294, 17887871, 10553946, 11342530, 8780273, 20317968, 8849418, 3022920, 5898562, 8532737, 14993659, 21454342, 11601493, 12924844, 12330003, 17903507};
    int ourDuration = 1675712;
    int secondsPerDay = 952562819;
    int n = 30;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 906284631;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> starts = {44388703, 284168721, 344461384, 4923448, 148113982, 417934006, 119164435, 336722301, 468469938, 217593728, 181840540, 516137208, 37088876, 439584546, 113630800, 90701468, 425068085};
    vector<int> durations = {8899693, 24413561, 21648432, 27219464, 24116097, 6547888, 18228730, 1070172, 15170835, 22559868, 26973041, 6851142, 5577650, 27556250, 4964906, 16418476, 5410204};
    int ourDuration = 13894523;
    int secondsPerDay = 548001196;
    int n = 11;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 53288396;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> starts = {20681835, 740812734, 361260288, 269307272, 185872810, 535442036, 746728606, 317380421, 611572557, 109511552, 768496043, 470858927, 712469283, 957028908, 665476838, 889257189, 783528251, 518185079, 254702822, 156259308};
    vector<int> durations = {28167136, 4271684, 29528003, 47569192, 29698382, 45710620, 4861786, 22799468, 43393094, 30542028, 8508956, 44869094, 15094660, 35797639, 22099539, 33241269, 37288682, 13425090, 14338911, 23899949};
    int ourDuration = 37075380;
    int secondsPerDay = 978469753;
    int n = 20;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 48848971;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> starts = {221069947, 1229784026, 1546022913, 680885954, 568774556, 498371023, 993211688, 626285397, 1317936761, 1033619292, 1095207263, 131473650, 425020771};
    vector<int> durations = {119283124, 58889979, 69797965, 39038426, 32222446, 59358987, 4910086, 20311204, 54682087, 2722372, 30308675, 74466217, 19918622};
    int ourDuration = 68056947;
    int secondsPerDay = 1586681463;
    int n = 8;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 719924380;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> starts = {514808785, 58124815, 390327021, 222153411, 456394408, 766998397, 966559276, 867456451, 685351030, 352239774};
    vector<int> durations = {87782957, 686568, 47286183, 74925943, 21267647, 9540701, 50451227, 58430920, 80793719, 27083993};
    int ourDuration = 101270632;
    int secondsPerDay = 1025599340;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 58811383;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> starts = {570522519, 317043532, 1011292112, 613260072, 656640462, 179884772, 37547491, 344837309, 421730240, 100153569, 279287473, 1032251235, 256156542, 928169163, 836666010, 759530407, 958518088, 383995950, 538125523, 903191797, 872841897, 697843255, 92345867, 730320913, 224990275, 124070086, 994894008, 503080597, 806494140, 477288799, 446321023, 798900539, 172743760};
    vector<int> durations = {24247962, 17177463, 20547021, 21588287, 28485354, 1269403, 30343124, 12232654, 906852, 21644226, 31249938, 21360214, 6817641, 24398486, 415681, 18207685, 13745053, 20252017, 23973752, 13116403, 14099493, 26943808, 6697167, 9453870, 11183513, 31136443, 8317351, 9981906, 23219548, 3480753, 792680, 6768302, 4756308};
    int ourDuration = 24765199;
    int secondsPerDay = 1039195500;
    int n = 30;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 837081691;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> starts = {162635613, 225606472, 90062410, 195705906, 11784644, 233702750, 340290824, 138512287, 128815302, 283427716, 214037850, 108476745, 270489218, 241111204, 37626255, 333447360, 137182479, 305560313, 22052718, 33040955, 58399653, 185592496, 64020728, 170696749, 7534553, 322343602, 70903774, 253573777, 300031084, 203399816, 262017207, 131938611, 114832161};
    vector<int> durations = {7740946, 7999811, 6052380, 3780277, 10266350, 3520962, 1444125, 6654920, 2066902, 9559051, 5308395, 529239, 9523516, 2999245, 9797842, 4386863, 227581, 5041997, 8176962, 2750295, 3845062, 7153913, 6535041, 2076188, 1554879, 69953, 2293964, 6103742, 2005047, 2899405, 2207781, 3941415, 2569492};
    int ourDuration = 2381889;
    int secondsPerDay = 347175880;
    int n = 29;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 145167207;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> starts = {553698115, 117727747, 219143658, 590091577, 670164407, 481595450, 143129596, 648399206, 872845344, 414251576, 848885664, 742028113, 809854582, 400044161, 896707571, 505911060, 295259801, 769698097, 96855628, 571812015, 339110034, 748442651, 357091437, 182613620, 51844782, 348725500, 319867513, 720457585, 126560454, 302898472, 60782945, 786746096, 708182664, 350587639, 236143914, 85802999, 22256165, 526865733, 381403984};
    vector<int> durations = {11394920, 5087392, 2909655, 19770389, 18226104, 17680621, 13090555, 3503270, 4374961, 17559898, 8914494, 5465973, 20779335, 2615683, 11334867, 11541126, 5669949, 8169113, 8103435, 605825, 9028942, 18225196, 22765433, 19173289, 4130334, 1793908, 17667919, 19173098, 9305152, 2912195, 11603812, 3130448, 8154191, 6162354, 20146165, 10379615, 10577523, 7874368, 17873418};
    int ourDuration = 18467535;
    int secondsPerDay = 898720060;
    int n = 11;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 431811474;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> starts = {275820296, 937209957, 86482912, 621002588, 253228289, 971845129, 502621732, 717603886, 682176274, 381790053, 310006985, 476082665, 131523597, 425718456, 747169606, 53062083, 452883573, 703701348, 324128843, 870990563, 586683516, 1085080267, 35763310, 1011125892, 1136608713, 364350762, 177783556, 304667845, 533881426, 944913030, 769829068, 838698192, 821285910, 653943844, 151052400, 341278446, 849769752, 110863823, 901857386, 558784617, 857898852, 69489404, 796032487, 98727864, 4968982};
    vector<int> durations = {9303480, 5894951, 11424192, 4565516, 2936078, 15023791, 4685370, 12023345, 10827006, 16145987, 6290587, 1553231, 2417597, 19926552, 17891332, 10748740, 21445172, 13573774, 6369965, 20533226, 11882223, 3668130, 1824123, 25064649, 11941216, 7912721, 11404257, 4119067, 19197146, 19527217, 12274887, 7875720, 7890649, 12873126, 5716859, 6208044, 7708340, 6491041, 11519085, 11059752, 615402, 338020, 831055, 2818323, 13293088};
    int ourDuration = 19676602;
    int secondsPerDay = 1171547360;
    int n = 8;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 913376471;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> starts = {580096900, 1397419285, 1551724309, 1052082648, 1787514030, 1954105854, 1227594505, 701990262, 337401718, 941278242, 20310143, 1698053770};
    vector<int> durations = {90608972, 60194606, 145201745, 109638196, 114030281, 471482, 93477202, 86410320, 75654764, 102942844, 59307570, 64484219};
    int ourDuration = 81111740;
    int secondsPerDay = 1972588799;
    int n = 6;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 79617713;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> starts = {1768812420, 698466881, 523695647, 1358314644, 202405135, 319547530, 674077367, 1518842537, 1714399341, 1567559000, 1604402463, 979870013, 803991165, 823442102, 1067929590, 1475496421, 778700132, 947224455, 649046096, 1159932262, 1259236995, 1394253604, 53783005, 100563466, 576502380, 465984368, 737265486, 441019708, 1310962343, 262188101, 541413973, 113611870, 1056682350, 1223905501, 932136840};
    vector<int> durations = {9731979, 14147495, 15129542, 29180000, 39697027, 40571341, 8502188, 38148562, 29119468, 17898217, 42725960, 51248042, 3899485, 46484173, 21912101, 19489787, 22209893, 18387757, 20000060, 35589372, 2040892, 15886280, 5504674, 11335384, 37563844, 36597028, 5903908, 18828134, 6194479, 18812163, 13320751, 37122222, 5004012, 13881972, 11075954};
    int ourDuration = 36455723;
    int secondsPerDay = 1805077259;
    int n = 26;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 869926275;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> starts = {506618731, 379355663, 362533717, 445817282, 437434043, 66515497, 24092059, 129006022, 264906647, 89428011, 398806770, 525456481, 207436217, 496570789, 328536998, 426785674, 179248721, 112067242, 31575545, 304675594, 509363059, 163269473, 276909761, 492201968, 457344507, 537412840, 9420390};
    vector<int> durations = {1318173, 6178712, 3386197, 7268239, 1326256, 5471188, 1408436, 13424500, 3928928, 16526088, 14257988, 10025600, 17900444, 4013255, 17409468, 6789501, 9896168, 6179135, 14040259, 18467322, 6859388, 787403, 10721964, 3002289, 7233759, 8630415, 3055672};
    int ourDuration = 12105593;
    int secondsPerDay = 538734772;
    int n = 16;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 45615804;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> starts = {274141763, 88827619, 554440728, 311630130, 178442796, 688658334, 471374439, 201663565, 60092658, 445026922, 227346177, 47488620, 168169824, 566939275, 650645373, 408586300, 606703338, 252239233, 604292215, 380856731, 237649433, 422023879, 577121022, 346776235, 633904038, 376646243, 119808120, 482961446, 679994516, 575272856, 669585581, 334118587, 539271463, 151607084};
    vector<int> durations = {19454417, 15668443, 7938282, 8049260, 19958910, 13659497, 9204580, 20247602, 12073404, 18394899, 626600, 5715021, 4258067, 5891084, 4554718, 6505342, 18530595, 1164022, 1731926, 14277223, 5487890, 6340900, 14951807, 9415460, 7417359, 3280857, 19970522, 834548, 7837183, 180718, 3302924, 8228516, 6187602, 887280};
    int ourDuration = 17241195;
    int secondsPerDay = 693118974;
    int n = 22;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9198857;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> starts = {170717746, 153447237, 9163655, 26073318, 185614793, 115790640, 203189907, 69130252, 162172736, 123555379};
    vector<int> durations = {7157848, 87342, 5447388, 18607155, 15607527, 4908459, 4058086, 7860157, 6674744, 5580919};
    int ourDuration = 15711313;
    int secondsPerDay = 205032352;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 44680473;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> starts = {277284476, 427137989, 680412733, 466573255, 577583719, 935343151, 393048933, 974237792, 1089523681, 360183135, 1014904504, 227527181, 922896835, 795355689, 817525799, 1108032618, 547856953, 488113284, 762358547, 1056721599, 516111436, 914229573, 46637180, 111098392, 326362254, 127313623, 60176315, 144525277, 22642443, 837714436, 1071011451, 185724704, 1159317958, 722001205, 81812463, 1150483340, 891448367, 492006911, 743773881, 862259851, 299863190, 211607599, 536444260};
    vector<int> durations = {1120521, 20087975, 24439722, 13996870, 22787305, 3898099, 4939506, 6971538, 9403048, 10501088, 9790144, 21685232, 11449761, 12877471, 14728768, 22455960, 26081281, 178355, 20178977, 11156080, 7371174, 3171473, 6448614, 15878364, 20025969, 5692729, 14739835, 24536209, 12763164, 12969012, 2130810, 10936306, 3253438, 13429867, 3571606, 1544749, 13786342, 23947383, 12388471, 14962065, 22391960, 6268616, 986928};
    int ourDuration = 26776700;
    int secondsPerDay = 1161464894;
    int n = 20;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 249212413;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> starts = {716629663, 675165213, 389854097, 233781625, 555164376, 627339921, 297299732, 366278912, 202035795, 158263644, 483108421, 2420021, 441658409, 315661543, 151546561, 277945902, 116446705};
    vector<int> durations = {5391700, 16007612, 38364135, 32835919, 32826766, 2504940, 10322318, 3051153, 18296217, 1283168, 43031920, 15421412, 28134891, 9044210, 2333678, 14379940, 18524565};
    int ourDuration = 38040455;
    int secondsPerDay = 742942805;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 629844861;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> starts = {49086852, 27054872, 16286787, 34951004, 36567047, 24746526, 29945455, 19265210, 43164499, 9246997, 13689114, 38734918, 45792624, 5231715, 32869145, 30967119, 40899855};
    vector<int> durations = {2479706, 480240, 1604759, 1512504, 965552, 1992555, 871460, 2359809, 2436342, 2362286, 1896236, 1126871, 8743, 802585, 20267, 602153, 1160015};
    int ourDuration = 1084251;
    int secondsPerDay = 50478469;
    int n = 17;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 45801367;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> starts = {747065938, 370860296, 1183399809, 518589185, 1279956468, 466873557, 965986833, 781866416, 255136376, 716851684, 1025271435, 61045459, 855242232, 645023874, 541547106, 789741244, 1240900913, 597603901, 1127187563, 225147599, 326328494, 567813536, 697434829, 319261381, 418115404};
    vector<int> durations = {28127439, 25196061, 14535140, 2723324, 22233526, 27494803, 33638329, 3947522, 47421700, 25348572, 27690323, 5826520, 1636757, 42638787, 11508937, 28661635, 36697156, 43662846, 25176805, 7778264, 20322914, 15235013, 13437472, 7058294, 27617374};
    int ourDuration = 52798501;
    int secondsPerDay = 1337277487;
    int n = 8;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 856878989;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> starts = {658402115, 398583002, 143040553, 1382924204, 1074075425, 791327435, 1038514384, 68255915, 508288616, 876612842, 367763655, 711436164, 1337868760, 236164043, 285256228, 963305713, 109180415, 6301357, 740147483, 593043336, 686810950, 1148529089, 464923931, 1247052660, 185060837, 1447282919, 1418699192, 1215305031, 584390331, 1277914463, 981839995, 1018365494, 827276156};
    vector<int> durations = {22469029, 38502619, 24427279, 7611223, 39799586, 29923606, 9904398, 28886745, 27053842, 34891588, 19292894, 22202993, 35175059, 28501971, 35167818, 14356173, 6167542, 41875193, 36925037, 7967836, 19874487, 11436623, 3101353, 19526274, 23914680, 1996650, 14665190, 10896990, 238004, 28031517, 33235560, 18588745, 32866506};
    int ourDuration = 25194765;
    int secondsPerDay = 1497444956;
    int n = 13;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1449279569;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> starts = {53697582, 104593674, 31822111, 172599953, 270253936, 59377894, 90954754, 3513740, 264267785, 127492474, 278152573, 248309356, 234049562, 37897640, 19245451, 88827423, 256654685, 162475472, 153534856, 220805733, 194968708, 215897605, 95742198, 46298216, 5389404, 25949598, 200557569, 244812690, 151529518, 145425994, 69361948, 120543337, 265358349, 77286388, 135873407, 12421535, 71696988, 112726202, 43486478, 185014615, 140328258, 227289061, 124371909, 207192365, 272846940, 206186022, 144185337, 115999275};
    vector<int> durations = {159191, 2010323, 1725473, 2619338, 2079611, 5538965, 265623, 866908, 11085, 1088790, 2112494, 4301102, 4389971, 1182395, 5677348, 1025015, 4959903, 4594887, 2106647, 2794776, 3312373, 624601, 5613209, 5205837, 2162429, 1172710, 1731530, 652022, 632430, 1193007, 875012, 3742106, 522034, 2316221, 4091632, 5344972, 3423128, 169794, 508187, 5683159, 2007961, 2925541, 62441, 3038788, 4036943, 516592, 942584, 2023578};
    int ourDuration = 3079800;
    int secondsPerDay = 279493237;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 155641503;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> starts = {1133354554, 1066145347, 832195773, 563245719, 1169001504, 695451926, 348026477, 550081723, 728264010, 214726854, 1201252015, 944104805, 436076565, 685621075, 639690921, 129327704, 892625146, 269261371, 92707029, 995591831};
    vector<int> durations = {10163668, 46399755, 28842024, 50439699, 3686243, 28142730, 36159051, 168254, 41502301, 8742998, 18613834, 15128935, 29936308, 505031, 11460171, 60211363, 30599337, 53095638, 7278872, 19356481};
    int ourDuration = 35733661;
    int secondsPerDay = 1238270897;
    int n = 6;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1219865849;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> starts = {117882222, 92541631, 190571263, 81248670, 111073901, 7832629, 126969188, 62697950, 16076229, 149007692, 172064163, 212511020, 195521142, 31391841, 102899921, 82219713, 38828254, 139371786, 157486835, 92006924, 49808620, 53076680, 87510850, 26019271, 41808034, 84049806, 56210351, 105512250, 120370568, 197317146, 75566222, 120070312, 132681490, 164615592, 218832781, 156545083, 95609434, 202184663, 205066174, 114745259, 187277688, 34767957};
    vector<int> durations = {2063701, 1521592, 3383114, 476634, 2314477, 4497345, 4650384, 2705587, 4769059, 4035614, 3060733, 4875712, 1404069, 2540703, 625755, 1497278, 609278, 4497703, 1511810, 306636, 959463, 2664107, 2154334, 4687897, 3600342, 3358130, 381181, 3214160, 3961212, 3714101, 3547499, 259062, 4992440, 3068107, 3006946, 540890, 3289759, 2361444, 22525, 3032290, 2549030, 2569332};
    int ourDuration = 398009;
    int secondsPerDay = 220985510;
    int n = 33;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 113388378;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> starts = {842098393, 528383659, 1704525823, 921612673, 1038862733, 254146949, 784038160, 1471075315, 1146553240, 167692188, 1901599572, 686164694, 1092772568, 350575895, 157209822, 388360836, 1204426047, 1026047167, 1389307115, 1945750236, 368450339, 302300045, 1510596660, 611315353, 1920856845, 640592695, 440782328, 1725542932, 1750330987, 856654892, 1291516373, 511066746, 902678192, 1066947118, 1303344361, 1462521111, 1683019403, 750906011, 1793175133, 1126636579, 110577249, 1805963017, 1842328854, 219540763, 1581705408, 943455329, 207925706, 1058278470, 980667956, 1367432719};
    vector<int> durations = {13515729, 35768148, 14636022, 20334816, 2551560, 1610807, 22276671, 33678973, 37510404, 24759987, 5681350, 37673240, 14420582, 15919083, 9894698, 7276252, 17170870, 4914411, 36983561, 34876534, 18503281, 32831101, 17444902, 10770760, 19927741, 29690585, 6886988, 22706229, 20406972, 15884554, 1082116, 10923838, 4019139, 10030164, 38008013, 4289469, 15576641, 27931111, 5830104, 18361402, 36490819, 15273413, 34334250, 8470692, 32426454, 33538215, 10306705, 6775052, 9242134, 17762743};
    int ourDuration = 14858707;
    int secondsPerDay = 1999015438;
    int n = 33;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1184063644;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> starts = {1502511717, 487330513, 1351494885, 901048734, 412826261, 167403300, 1597384089, 764664405, 996304414, 1848847484, 1289792331, 333835671, 1893496599, 43228612, 1039698301, 1860785240, 1445851941, 1148582119, 1791861239, 659524885, 1533978168};
    vector<int> durations = {16933380, 68690973, 40082285, 47393626, 7631101, 42013237, 76155177, 48756438, 33109050, 4310096, 32185149, 15243171, 65129541, 50283453, 29946314, 30497382, 30340017, 1537765, 6022537, 86538660, 35066420};
    int ourDuration = 17361185;
    int secondsPerDay = 1960892199;
    int n = 17;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 93512065;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> starts = {584329503, 425146724, 16846778, 815470130, 319758012, 350325003, 950523550, 1089274593, 40980669, 1207295435, 168403625};
    vector<int> durations = {83379433, 15772227, 11158775, 54569416, 2585210, 47707327, 68807159, 102044971, 112476306, 66729785, 10983989};
    int ourDuration = 94838011;
    int secondsPerDay = 1287947392;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 440918951;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> starts = {1383578391, 399279041, 730434376, 1465498789, 621530886, 138215665, 1206213519, 1604786638, 332017635, 975427252, 1094766276, 210487427, 514195060, 1655907108, 1539021491, 1331891189, 928425353, 396210072, 670210724};
    vector<int> durations = {67240798, 45958628, 63021693, 60873353, 20125203, 9213227, 64236192, 42520214, 36123048, 47218483, 77485122, 87295134, 49943184, 42216006, 63081807, 51344434, 38671985, 909934, 1216766};
    int ourDuration = 46584621;
    int secondsPerDay = 1691203784;
    int n = 15;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 671427490;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> starts = {1132079312, 489072910, 83935655, 729709612, 881474443, 1083027767, 98546674, 922094281, 896155284, 594456915, 236180986, 475872912, 306994205, 428430429, 531769084, 636212868, 203633469, 109133420, 712951761, 1047605083, 267113493, 961513629, 981082739, 1128938271, 633408341, 133544379, 808382669, 28756541, 462476778, 397279767, 439692512, 154391693, 774598021, 818700356, 211118686, 848872015, 574236706, 6120893, 560679565};
    vector<int> durations = {14823279, 14478439, 11907857, 28005449, 8375491, 19547337, 7224639, 9250014, 19309895, 27043046, 1460270, 631744, 28409810, 919607, 19447941, 15152373, 4222192, 18213622, 2929541, 19882038, 19417213, 15372312, 27866914, 2115254, 1176026, 8197155, 6654873, 7007278, 6703122, 10805190, 11022683, 5866603, 11808549, 7010874, 15544537, 3830803, 8679833, 4250746, 2826101};
    int ourDuration = 14350613;
    int secondsPerDay = 1153036432;
    int n = 38;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 825711230;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> starts = {156978552, 326096272, 225360212, 432934698, 202496731, 533702291, 174263038, 452354398, 14336484, 7032224, 541090488, 215387027, 142310116, 99755297, 264566438, 169262652, 426183331, 410116724, 108447828, 62647837, 529131942, 44748042, 391518438, 186235982, 467114175, 492174663, 159180805, 2748165, 298891724, 511683320, 366846977};
    vector<int> durations = {674376, 15490668, 1564148, 2844119, 10527923, 4282390, 8590119, 6160894, 776470, 4035041, 3880770, 1763023, 12748104, 5681209, 7710330, 1703616, 5807145, 6966282, 10672598, 13272058, 4539280, 1659567, 15757266, 10128322, 17710376, 1739112, 9315798, 2614961, 398842, 4973135, 9996604};
    int ourDuration = 14262460;
    int secondsPerDay = 556650772;
    int n = 23;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 226924360;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> starts = {1060484242, 507053460, 599617751, 820743907, 1293280466, 682365509, 740757199, 1130863105, 684765479, 344671609, 1358247311, 434356432, 1263273749, 26276881};
    vector<int> durations = {65528221, 34779075, 39210809, 63224690, 21378508, 1920035, 10698023, 30368595, 17967671, 71765487, 3741444, 8224377, 12098352, 94916927};
    int ourDuration = 39501991;
    int secondsPerDay = 1364139608;
    int n = 9;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 751455222;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> starts = {550372918, 411507350, 763238531, 290084527, 647270790, 631513198, 188963134, 237163376, 670182777, 1114725319, 441912532, 852521621, 353284813, 886182164, 1159626598, 713286389, 1051691820, 385275272, 1201960825, 1011655403, 1098006583, 1301867044, 825711028, 496310432, 930320157, 1213844989, 600262590, 33098084, 1254885243};
    vector<int> durations = {21010889, 19218627, 42941669, 41319170, 5740057, 9914851, 10982482, 10970300, 26559133, 21696468, 20864211, 31534750, 16710536, 14029691, 39822332, 33276816, 19824334, 2374574, 5302836, 19857241, 4414302, 8584481, 16671322, 19752866, 36089784, 4990551, 17321137, 42845384, 9086203};
    int ourDuration = 34525339;
    int secondsPerDay = 1304244373;
    int n = 23;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1218835540;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> starts = {1602048704, 1457114524, 802687387, 1180464875, 853492205, 1037089499, 1135298659, 113418208, 962258981, 314662408, 1308943244, 651052544, 59116543, 755497736, 1679485176, 1229420305, 1517189361};
    vector<int> durations = {76392280, 34726593, 21361684, 37454121, 78167119, 21906987, 44519255, 60819403, 54336779, 40907057, 53570005, 84654190, 44518058, 38018344, 28681175, 34185682, 2233722};
    int ourDuration = 98676758;
    int secondsPerDay = 1709919103;
    int n = 8;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 174237611;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> starts = {1237291574, 1038553811, 1061705030, 867016540, 589455061, 379850199, 787800756, 172857968, 511594377, 24245132, 238761328, 253744385, 91132820, 1197655619, 98975381, 934084658, 755728678};
    vector<int> durations = {21361823, 632425, 72528072, 40676949, 58770631, 56981692, 67746809, 27598283, 47471806, 38334705, 6732516, 54954054, 6465001, 3262454, 62246549, 46570515, 1935643};
    int ourDuration = 10238552;
    int secondsPerDay = 1329959937;
    int n = 13;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 308698439;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> starts = {1279705097, 288414793, 260295356, 844425081, 1098050069, 1221489903, 105287376, 507884311, 345450707, 22320878, 367661623, 143663762, 1254074671, 979654266, 891707080, 569866370, 658141639, 206524881, 1083176378, 1169390002, 36758638};
    vector<int> durations = {27021539, 6278719, 422013, 29980644, 52013511, 30164799, 17938190, 55942491, 6280836, 9022193, 9953123, 46516330, 11996728, 18598302, 3703226, 32443348, 51001449, 48183766, 4198173, 21292296, 30251017};
    int ourDuration = 53578216;
    int secondsPerDay = 1287535075;
    int n = 17;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 377614746;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> starts = {9253692, 36577906, 6821856, 42625275, 15911536, 8579094, 38487850, 27486631, 3633973, 40990756, 24635565, 17942133, 22512078, 39413819, 20577241, 40072835, 43477512, 30135769, 2194458, 31284313, 34042265, 26920412, 19445706, 35983223, 1320162, 5553422, 25648043, 14393231, 32027484, 11017834, 4113136, 13817024, 18853119, 8206530, 29215710, 17126, 13015385, 689596};
    vector<int> durations = {68920, 1043617, 659541, 385945, 472311, 614127, 883475, 702089, 40178, 978816, 828486, 318818, 746137, 516153, 432787, 776571, 507774, 534748, 1105446, 210567, 620379, 454931, 821229, 485211, 172080, 709749, 806927, 550351, 983481, 562742, 153532, 536709, 49085, 337547, 779382, 342335, 38301, 461036};
    int ourDuration = 916361;
    int secondsPerDay = 44420575;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9322612;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> starts = {1655344396, 852344608, 1232261874, 263273793, 234279513, 1396496612, 1492340236, 660358941, 1152669334, 513643534, 790650692, 1453290251, 1598391241, 169280164, 1146119594, 1374668168, 619586131, 96420544, 765469617, 1057212149, 1282287834, 950117774, 544958530, 359981414, 944408591, 916871722, 25088072};
    vector<int> durations = {41245789, 19486017, 26802026, 50136809, 15806646, 34067794, 43801128, 48014270, 14730969, 17650784, 23896417, 5670935, 40503497, 59862751, 6219293, 7655736, 9311042, 33100112, 15688953, 58409167, 32317383, 38844427, 6313581, 56670884, 3668786, 15905881, 61985762};
    int ourDuration = 4778849;
    int secondsPerDay = 1677985324;
    int n = 14;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1458961186;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> starts = {128601522, 672031874, 967830228, 557240349, 453564674, 539345249, 862587363, 174794229, 257746178, 878985487, 1001095535, 383373699, 440504532, 695347049, 39512147, 504737987, 816890442};
    vector<int> durations = {43499609, 18885435, 21598085, 51867164, 7921713, 15256545, 2146185, 41207055, 51094749, 47276356, 16702223, 14111043, 2423024, 50162348, 41134905, 18372739, 10017171};
    int ourDuration = 2919113;
    int secondsPerDay = 1022869818;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 80647052;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> starts = {44731558, 29462917, 120971080, 113819800, 94934397, 89307727, 109817391, 41413665, 14768625, 117386931, 101109975, 82842926, 67726711, 499993, 48732153, 123959146, 71114385, 8005739, 54256022, 3084257, 64142448, 20403396, 10969750, 105344613, 51872403, 59659033, 6155436, 27978235, 35111810, 46216265};
    vector<int> durations = {973253, 3996717, 2915501, 3314016, 3506753, 3396381, 3114288, 2028954, 246900, 3552326, 947367, 1501756, 755451, 1306035, 1027548, 20837, 2004356, 2339842, 2310955, 2757898, 2792347, 1598649, 3421863, 2238694, 1505285, 3503904, 31426, 907859, 1370834, 972470};
    int ourDuration = 3818360;
    int secondsPerDay = 130833980;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 73118741;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> starts = {45502023, 4514208, 72242599, 27630428, 22644116, 102411279, 884368, 65257865, 61599174, 6643884, 21125642, 50218242, 56626529, 118509111, 88142721, 81729700, 12200690, 17215215, 89230067, 95044383};
    vector<int> durations = {1009335, 963163, 802013, 6132094, 1909708, 5006481, 2157343, 3156830, 2279017, 1704378, 436859, 800067, 2864120, 1716221, 552253, 3904763, 3972221, 2613503, 2585153, 4032071};
    int ourDuration = 268174;
    int secondsPerDay = 125985815;
    int n = 6;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 73044612;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> starts = {1249092239, 639647466, 369178770, 1522019840, 1709576118, 212705252, 485527664, 1341294787, 136964660, 538208924, 1188380136, 851719112, 1478904351, 820734660, 62142605, 58357105, 1144094482, 670085692, 421629709, 1207238342, 189125906, 580126809, 299595775};
    vector<int> durations = {47583328, 30119865, 28246556, 69008724, 66608637, 68448139, 46418981, 72791558, 40220899, 41505632, 13985626, 56440088, 25321177, 30761561, 68090301, 1294909, 8574696, 34495867, 17901507, 1414400, 464022, 55410246, 67796091};
    int ourDuration = 45516994;
    int secondsPerDay = 1718614042;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 704581559;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> starts = {590490226, 141021441, 281814900, 48327276, 114066727, 829760328, 334208816, 527307295, 897216895, 634077850, 188125812, 685601468, 382736043, 457547444, 814627051};
    vector<int> durations = {21167654, 6802798, 27754404, 6979128, 16590974, 20951334, 1378188, 59279614, 51079724, 51406033, 27563880, 19279690, 32668520, 9331036, 4777582};
    int ourDuration = 50701515;
    int secondsPerDay = 934740979;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 704881158;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> starts = {531387856, 329287210, 36343257, 204219893, 421682901, 305265428, 455659672, 171217721, 150448177, 120445790, 457732761, 441467296, 264616247, 477849438};
    vector<int> durations = {15910549, 27160124, 12918691, 26849682, 14975619, 13105026, 1797709, 18433741, 9084660, 7207699, 92731, 4882414, 28648420, 5788854};
    int ourDuration = 37053162;
    int secondsPerDay = 562043333;
    int n = 9;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 547298405;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> starts = {491884664, 21454468, 551060271, 1136803093, 108493871, 384527335, 771762073, 1031272700, 351809671, 572803128, 890725195, 297263232, 711130987, 630334430, 167233242, 5959705, 194663053, 1072514856, 687443282, 933997593, 783141448, 526893257, 416998575, 250456564, 435439303, 478195873};
    vector<int> durations = {32690948, 40541454, 11577986, 13422032, 36460946, 85053, 1231084, 19012224, 27411095, 30679364, 34998101, 34547316, 44720655, 16090640, 10773751, 5920857, 36795299, 13227478, 8400207, 40056763, 17331455, 1732959, 4422954, 38087417, 6988659, 4610325};
    int ourDuration = 5016074;
    int secondsPerDay = 1166645908;
    int n = 12;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 800472903;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> starts = {312601055, 99892085, 214459885, 553801851, 768274795, 225610546, 642256341, 538794468, 195721554, 82183760, 519659998, 444981796, 49668227, 781786169, 123045716, 3249413, 507319561, 749519031, 36818289, 609780855, 403006945, 359304871, 810960638, 94158258, 375706216, 566104518, 177465779, 261046403, 671486575, 706221997, 771290128, 834803361, 468834142, 26190930, 595268470, 149905692, 289485032, 490395479, 817951498};
    vector<int> durations = {13099365, 18756821, 10117443, 5236204, 462588, 1128347, 19547260, 139330, 1959848, 9588650, 6475268, 21327581, 20106240, 21942840, 15566058, 9006691, 5392642, 2649484, 1918376, 7314397, 16752559, 12272104, 4819936, 5481973, 21362391, 2364460, 2543591, 5361106, 14225627, 8759726, 9299069, 14106803, 1345647, 2135039, 515122, 13322096, 6039322, 8487835, 12287254};
    int ourDuration = 21620385;
    int secondsPerDay = 860665516;
    int n = 37;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 568468978;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> starts = {504451745, 203726896, 517065978, 461152903, 439832560, 29182238, 245401833, 288582153, 125598588, 184309930, 272715315, 429169350, 406378394, 311467184, 189659647, 14783771, 4417617, 318922605, 51557494, 371252543, 67870866, 396230929, 550222337, 75573613, 481109565, 515373547, 155284976, 230539372, 581997660, 489121007, 233796810, 328030201, 488423970, 451067451, 199535301, 144303147, 86490720, 573136241, 323733422, 32668518, 215390725, 383530499, 556147012, 171306231, 266612338};
    vector<int> durations = {6346299, 1889603, 9512563, 9931043, 9654622, 2109666, 11314686, 7367664, 6507773, 983946, 6483587, 2844170, 12182976, 2075084, 6161469, 9253549, 4922640, 2647289, 9677486, 11686477, 5683142, 3000234, 1109380, 1172801, 5249045, 1063139, 433121, 782761, 2797984, 10487886, 7836109, 12026912, 563541, 4909751, 1969478, 6183938, 5991943, 466537, 1576546, 6759977, 2270518, 3769848, 12262285, 538752, 633388};
    int ourDuration = 7567203;
    int secondsPerDay = 595273616;
    int n = 11;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 573602778;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> starts = {953949979, 442055405, 821709184, 370406523, 142051428, 49515259, 1017921840, 119681600, 619094291, 91490563, 895311178, 986010916, 754504503, 1036683494, 392449695, 871775951, 418642916, 327945903, 741105989, 24903664, 721556984, 700118647, 267638597, 916626813, 193722909, 497617776, 207954787, 1057604075, 231638215, 515080276, 803285309, 559820671, 628789099, 677918819, 593142960, 315088474, 681962454, 659316496};
    vector<int> durations = {13819161, 23241083, 7442614, 21998745, 11240734, 18075872, 15316665, 9390008, 1745289, 23712813, 7622900, 7196404, 15016867, 16123865, 20144005, 4385102, 17572402, 21542587, 7482028, 22321411, 15528972, 5135129, 11104529, 24559859, 13210991, 16347327, 14340164, 17410201, 12064325, 14950067, 12559655, 2122867, 16002194, 3606683, 25305835, 7357519, 12702901, 3205452};
    int ourDuration = 20644680;
    int secondsPerDay = 1059005354;
    int n = 18;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 67591131;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> starts = {77209806, 450071540, 46796257, 250553564, 316461886, 228221658, 375242968, 224312, 154273449, 117452695, 498796465, 212173379, 421419183, 275864946, 405064805, 368992224, 168469956, 355764777};
    vector<int> durations = {20100452, 14637904, 1216753, 20668622, 12069020, 19011379, 26898711, 7726282, 2526689, 7097439, 27086101, 11212714, 18322996, 5715698, 2754628, 2062730, 6835406, 12353424};
    int ourDuration = 10871110;
    int secondsPerDay = 534278554;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 464709444;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> starts = {2429481, 6100780, 569801, 4462316, 1850861, 5890606, 3587833, 2965456, 483724, 4129617, 1162592, 2538361, 5187898, 5284761, 5426020, 5733669, 3993117, 3893567, 3245636, 3808065, 4297648, 2618180, 4865327, 649656, 230097, 697598, 5095711, 873984, 1024863, 2201685, 432522, 2158730, 4714221, 3171569, 1666221, 5959698, 2905440, 3781903, 1564382};
    vector<int> durations = {26808, 80289, 14765, 97882, 155229, 25509, 135725, 77313, 34642, 89561, 99041, 11910, 29367, 105646, 38788, 21956, 9819, 69227, 27786, 21448, 45782, 32101, 95751, 1482, 137972, 37596, 38556, 71214, 46482, 112792, 44451, 21158, 112647, 29654, 89144, 8379, 32788, 20655, 41062};
    int ourDuration = 36522;
    int secondsPerDay = 6152551;
    int n = 22;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1071345;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> starts = {158783608, 530926837, 305542081, 323776298, 1178142470, 361043834, 1265854231, 1412901179, 1498713866, 863736582, 449371061, 1082684475, 957768472, 263673673, 1293972015, 9848871};
    vector<int> durations = {49313370, 57320826, 5591511, 36477361, 61315371, 81341455, 25809821, 70996801, 87868194, 40059716, 68411281, 47888403, 70188723, 14218079, 98335428, 734972};
    int ourDuration = 23402705;
    int secondsPerDay = 1602101621;
    int n = 6;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 588247663;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> starts = {297598497, 14486738, 102079994, 155424311, 408275599, 283250838, 340464517, 405655576, 370819062, 308569815, 181889475, 266372322, 324574734, 138895951, 430707369, 169472148, 340128507, 190893991, 26841353, 354386000, 52970246, 205535100, 108356325, 90565345, 363005047, 99658305, 414458207, 199696652, 79477203, 440521531, 233424522, 148858482, 383962229, 145013403, 124705729, 457898931};
    vector<int> durations = {1336032, 8202338, 3718390, 11299918, 5257336, 11381488, 7160925, 1385583, 11460017, 1021356, 3333449, 9631659, 12289258, 767634, 2890372, 11040704, 287706, 281780, 9257950, 8414685, 5853427, 8518450, 5522424, 4538945, 4213286, 396512, 10013848, 4258941, 2639390, 7047055, 3612291, 6495480, 4431018, 285540, 1748431, 5576901};
    int ourDuration = 12842077;
    int secondsPerDay = 463785442;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 214053550;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> starts = {854006748, 119252443, 144191663, 698573036, 1508487352, 599597651, 1351548421, 1217598342, 1324330665, 69896567, 1286335582, 661364927, 31681979, 314923891, 1606919604, 1416695760, 977625873, 255930791, 502933517, 421075991, 725053384, 802278772, 1168786836, 1544335305, 785113984, 1539548520, 546542095, 1138565060, 227597380, 771059270, 379734120, 824613171, 694847002, 643773752, 866915605, 1437747393, 1261844274, 141724268, 973662816, 1004116332, 1156975182, 200345130, 1582477231, 1092162098, 1298480388, 757796867, 1048576847, 362054959, 1633134402};
    vector<int> durations = {11913495, 13235486, 25515862, 26278934, 16977447, 26946137, 25859533, 29507614, 8468389, 10101284, 6923427, 22153451, 1605798, 4899500, 21586764, 20685929, 2609293, 32335474, 25909855, 24076645, 19359850, 11737359, 29221447, 24708958, 1457959, 1215742, 25004376, 8194353, 16231707, 2678838, 6407993, 28136246, 935831, 12742374, 12529339, 3526728, 17243822, 927491, 706568, 7324879, 8114440, 25636831, 4410985, 5511396, 13496482, 5670142, 24636765, 5464130, 24895481};
    int ourDuration = 5173120;
    int secondsPerDay = 1649752150;
    int n = 9;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 243829087;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> starts = {452739571, 526920404, 365052117, 47896923, 42427747, 19231509, 549056032, 336390759, 669762715, 695921405, 113843185, 493352378, 221560498, 107994999, 583005819, 632448454, 201636039, 649650245, 641544974, 144611720, 280726100, 120818900, 620656633, 2405562, 261114220, 382909238, 571575580, 139311574, 402115448, 489914015, 682255861, 608865756, 485124569, 242034409, 467148646, 171669235, 185365282};
    vector<int> durations = {10453259, 7715399, 11187245, 3142146, 789747, 16976448, 15311566, 10080169, 6702383, 6381617, 6896798, 14802610, 16551183, 702115, 3771059, 5850633, 9085085, 6144374, 656804, 17180523, 12600875, 16569530, 7780944, 15742315, 8861986, 733776, 6120105, 3514569, 15919452, 3111511, 8071600, 11088861, 1904283, 9406690, 13823669, 3231632, 2842101};
    int ourDuration = 18524971;
    int secondsPerDay = 702060737;
    int n = 37;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 51039069;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> starts = {422919194, 111922308, 283195474, 628392543, 224779506, 1219028930, 1028159506, 1298781309, 704050713, 804692483, 58443126, 583176676, 1101954570, 939415105, 1016077647, 914964240, 358366824, 249810018, 542656430};
    vector<int> durations = {65535272, 68994603, 70204377, 31242977, 21974615, 41141161, 231565, 69184378, 66097712, 27626122, 40251618, 30465516, 16422954, 15828655, 2750907, 11773174, 27113397, 11781856, 15126609};
    int ourDuration = 51792048;
    int secondsPerDay = 1403331557;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1118377524;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> starts = {489453115, 170890432, 135199094, 537331727, 696507541, 274060842, 631993404, 224844085, 568070229, 195213136, 48755304, 387495869, 559499849, 815339221, 323191890, 426244890, 154431004, 580345949, 419330425, 166526158, 728079154, 855093833};
    vector<int> durations = {34718623, 2472391, 17043997, 3228402, 19725595, 39490872, 9242088, 15510557, 6647800, 1899635, 36563448, 21866949, 1395347, 35900020, 20767482, 29649615, 7623248, 3508496, 5203782, 3111225, 38212052, 38969153};
    int ourDuration = 40213823;
    int secondsPerDay = 889060618;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 766291206;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> starts = {153830069, 114075090, 19408057, 205888517, 217055562, 54454063, 2105448, 180432092, 80982365, 71474232, 125573607, 164200478, 92511961, 28252281, 201206960, 191159837, 177748930, 210116339, 123697047};
    vector<int> durations = {2470412, 4164636, 5969485, 3895955, 3346993, 2635023, 10480362, 4605223, 6859281, 5951558, 11311875, 7642682, 8153117, 4635058, 306866, 3728109, 1461367, 2381057, 503954};
    int ourDuration = 2782927;
    int secondsPerDay = 218945847;
    int n = 16;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 212497396;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> starts = {1081805638, 538150129, 870911782, 652335701, 68362092, 1275042209, 1360498729, 440376834, 1213551636, 171981638, 948493264, 756676622};
    vector<int> durations = {34013287, 87683343, 68024452, 83149148, 69056816, 16584353, 37069397, 46141817, 47352913, 62852638, 113001220, 20384379};
    int ourDuration = 83486999;
    int secondsPerDay = 1496869542;
    int n = 10;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1397568126;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> starts = {242014252, 9817806, 673853879, 160394634, 59906601, 1264163926, 582985490, 1153085831, 73060045, 1075400309, 1214577950, 495253433, 131618642, 1093005609, 420573216, 910345471, 884295596, 843588405, 969922301, 210740919, 473197224, 1322654563, 330558633, 539395782, 370022492, 246605733, 1276018636, 762082638, 417905216, 714532492, 1120076242, 645395602, 57778482, 705776016, 391964624, 208943752, 816334241, 314397979, 184643137, 876608330};
    vector<int> durations = {4300602, 24356393, 20162554, 6645940, 12128049, 3336630, 15289691, 32952021, 27566619, 4185742, 25347828, 24727342, 15894732, 21403064, 24034826, 31024612, 24394422, 4282639, 12258871, 31036965, 16039616, 23564408, 32141072, 16164799, 1007933, 25109226, 5699028, 33381959, 2207798, 33320056, 4610621, 21738211, 1496140, 5725006, 1893911, 1608357, 224572, 13566907, 12556480, 5900384};
    int ourDuration = 19438438;
    int secondsPerDay = 1344455139;
    int n = 22;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 555560581;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> starts = {351697242, 1223411727, 584302698, 870097082, 473059393, 1305382811, 1024091035, 114127323, 1258012841, 1183837279, 1073769068, 230107898, 1114292677, 824518231, 318856951, 914268606};
    vector<int> durations = {80914616, 1412393, 33059300, 27534265, 53547192, 37229624, 13530984, 1510665, 946474, 3734777, 26941501, 35879741, 3288370, 22036389, 28041406, 72575894};
    int ourDuration = 43956776;
    int secondsPerDay = 1311373422;
    int n = 6;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 115637988;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> starts = {1638460228, 39590893, 374973763, 727463075, 1290276373, 512365194, 801794621, 1023230983, 1687640435, 1848607102, 623061955, 203635317, 1434852400, 1216726945, 124513377, 925412375, 1385433020, 306753401, 1143267983, 1474563287, 349563213, 1599530337, 1584678944};
    vector<int> durations = {12952102, 39111209, 33477954, 41703003, 57530328, 22865324, 42153345, 60440133, 29680089, 12366722, 67598647, 9264936, 4180717, 50598760, 11765943, 71421635, 23299866, 31250551, 50593166, 19318198, 2589604, 26978117, 13691165};
    int ourDuration = 37307390;
    int secondsPerDay = 1862272354;
    int n = 19;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1717320524;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> starts = {624196470, 236904341, 77243326, 601903321, 652523481, 577015334, 260202146, 335857136, 171881515, 476680699, 500021559, 108271432, 30153645, 720041409, 752913118, 54215058, 697277000, 481601403, 403240873, 411115595, 294923207, 580698636, 665795886, 559050855, 90195818, 317884529, 381759415, 536631134, 709613669, 4662459, 202843090, 81842971, 94492860, 366118909, 269901632, 688521877, 210592924, 100322747};
    vector<int> durations = {15295543, 16402226, 3444855, 17828186, 6277020, 1929409, 9337181, 6110514, 19660878, 1739738, 13561210, 7728379, 12950783, 18323780, 8563542, 13421397, 4949843, 2005498, 7270930, 18607269, 8697801, 4890708, 4099517, 5202478, 283039, 15150374, 18592308, 9018048, 4214698, 5118755, 3992752, 4723918, 1787814, 9348451, 19048323, 1094349, 7306601, 24206};
    int ourDuration = 4309680;
    int secondsPerDay = 763197265;
    int n = 26;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 100346953;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> starts = {544400382, 201991734, 7117594, 140895275, 598392313, 329454594, 569860674, 671179038, 164581117, 460351386, 264818719, 489709220, 19087115, 285018632, 624328871, 417072948, 654848476, 501708126, 230713292, 473561253, 71252693, 455101231, 358094520, 174616592, 49567465, 124122855, 651643032, 599658538, 517150072, 189750476, 638099765, 118632766, 403076511, 555005247, 102863587, 432276562, 448657650, 26909912, 376323432, 468470291, 46138921, 380540819, 301995268};
    vector<int> durations = {8225153, 14075166, 11543660, 2772225, 310394, 11404672, 15599157, 4284414, 8459898, 5649784, 14961307, 11312024, 102310, 10825452, 9277847, 7041909, 6760186, 12048691, 15085712, 5240065, 7069745, 3383933, 13531748, 14679295, 12439970, 2530631, 1019246, 4984643, 3326479, 6980627, 3616741, 2929259, 5930941, 3042478, 13868409, 9893380, 5426817, 8753853, 3974953, 4771525, 2313042, 4869116, 9517847};
    int ourDuration = 413258;
    int secondsPerDay = 675761115;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 196731103;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> starts = {11918174, 7338356, 3621282, 6566526, 15160617, 5498420, 13700382, 14394284, 1836704, 9533908, 737699, 2349453, 17775938, 3178650, 16835112, 10885980};
    vector<int> durations = {396543, 695222, 726699, 481494, 786609, 1062668, 551061, 322197, 186776, 838173, 262404, 47479, 338560, 356190, 269674, 870084};
    int ourDuration = 404989;
    int secondsPerDay = 19091458;
    int n = 11;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4347981;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> starts = {1778741992, 406060948, 229079969, 1866141038, 1519962382, 660028795, 564461083, 487066404, 1759191687, 1077184261, 597820617, 1179922932, 1005072005, 132448680, 1336177660, 1445027087, 965152085, 1465207487, 784152487, 357439997, 1307761108, 448055189};
    vector<int> durations = {47153548, 10354882, 37348948, 71893929, 8215020, 68666985, 9613436, 47682454, 8492927, 16811947, 30708304, 36187947, 70758414, 29674232, 56793310, 16466500, 12157223, 2375119, 49872008, 29207163, 15849913, 4547898};
    int ourDuration = 78911358;
    int secondsPerDay = 1868029199;
    int n = 12;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1093996208;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> starts = {1681085, 42860280, 54597274, 20541101, 87288570, 69629705, 73646848, 30122365, 53239569, 84756099, 10014184, 33524678, 50633307, 7486754, 24936866, 80497289, 5781029, 9106708, 59506466, 40431024, 64919744, 17070308, 75510716, 44717532, 82936911, 18377596, 77681749, 378692, 14411006, 56123715};
    vector<int> durations = {2971575, 814747, 1255628, 1102834, 2579258, 2240912, 824052, 223294, 73497, 1713626, 1214005, 2950275, 570254, 1476493, 2449059, 605402, 1548562, 188833, 2461908, 1635594, 1166277, 1185672, 832562, 1533591, 1165988, 1057971, 882534, 958127, 191239, 2805275};
    int ourDuration = 123577;
    int secondsPerDay = 92841616;
    int n = 14;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 21643935;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> starts = {609708064, 97650839, 54195595, 278098426, 825798053, 188039872, 437838823, 398002667, 260832395, 866276112, 369730797, 548270514, 138393262, 330006071, 799482472, 293318250, 478516447, 103186785, 307704882, 334231069, 760120496, 367510810};
    vector<int> durations = {17755514, 2343150, 25393912, 2699644, 39689842, 25558859, 32266158, 12023673, 3464651, 36197737, 26309412, 20256641, 12478963, 109010, 12866026, 11663160, 12413674, 30663616, 20377708, 4688096, 29404195, 768253};
    int ourDuration = 25395508;
    int secondsPerDay = 876980620;
    int n = 13;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 490930121;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> starts = {56062636, 72929158, 84376782, 48170310, 28146543, 30854889, 98699790, 68572484, 41275749, 22284396, 77216731, 13502074, 115467824, 4342907, 106584116, 9588741, 93081281, 38710556, 959318, 125158271, 119810680, 17920191, 61492571, 76830760};
    vector<int> durations = {1053629, 1026722, 4065355, 5276030, 48771, 2450914, 578129, 846797, 1991873, 3923295, 4356809, 2097763, 2557515, 4369758, 3277919, 1062167, 2623886, 1986349, 2960791, 3127469, 5315650, 1384968, 61734, 357082};
    int ourDuration = 3771788;
    int secondsPerDay = 127749896;
    int n = 19;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 33305803;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> starts = {486150873, 265711984, 462722215, 297461545, 1052955350, 935860941, 624035998, 1105259092, 54282753, 571681788, 816081501, 408458798, 1149463675, 362276494, 683578870, 437285032, 124769273, 1006707526, 770572974, 1018975314, 161126830};
    vector<int> durations = {53588912, 13531196, 16053086, 32512002, 50307261, 16176438, 37006980, 28234918, 53418184, 16306114, 31123820, 19815880, 35924402, 42669724, 34321449, 15409416, 13343026, 9717234, 1450608, 25644157, 55653005};
    int ourDuration = 49945634;
    int secondsPerDay = 1216172345;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1185388077;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> starts = {119149592, 25262954, 113459853, 101454887, 49629047, 98208675, 106090878, 131903937, 86522443, 69422417, 128264764, 7053188, 3227938, 96108067, 79090408, 43844820, 66300924, 110981940, 75659740, 10049771, 47506659, 31272547, 61714654, 105242983, 37001535, 19525818, 135791996};
    vector<int> durations = {5077612, 5082349, 4050751, 1422594, 4535534, 1859851, 2310423, 3690039, 4315927, 3673218, 2996506, 1088654, 3221395, 907190, 5084249, 2661999, 2783531, 2224908, 1190282, 4132148, 586196, 4937392, 1141200, 525215, 291264, 4398173, 571984};
    int ourDuration = 2981514;
    int secondsPerDay = 137463016;
    int n = 21;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 124227204;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> starts = {197872617, 405587914, 328754244, 475009519, 386402834, 450312610, 517281545, 161621713, 275615902, 113429573, 207690669, 32435011, 507405795, 361182555, 348188298, 68057216, 95056416, 244736972, 250739193, 497475537};
    vector<int> durations = {3695612, 25054082, 14088786, 19439945, 1686869, 13422314, 26688149, 2511977, 14238364, 20264017, 22509716, 15364683, 4452385, 19282448, 6124905, 22263880, 14248293, 4905833, 7725495, 2818844};
    int ourDuration = 8581594;
    int secondsPerDay = 541195834;
    int n = 9;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 388089703;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> starts = {198078168, 238216130, 135629798, 245033181, 78328845, 183902437, 133622286, 252469103, 256957061, 265798787, 39426811, 49182941, 140487505, 125269247, 261014424, 85302008, 179714740, 235730750, 5358178, 174239241, 222723088, 150108986, 48406154, 155133672, 170274600, 129396298, 99931446, 280505021, 191803283, 53188496, 13080475, 33854522, 249389578, 88164096, 122295988, 114580794, 271442926, 218693762, 213370412, 166530845, 65493066, 117933648, 163514755, 111412576, 231454186, 203679075, 18611574, 189640296, 94610737, 56919038};
    vector<int> durations = {4378947, 3416541, 2681632, 4223888, 5535259, 657337, 1021859, 2686797, 1466481, 4452429, 2044229, 3236899, 1087666, 1999203, 216013, 2002194, 853355, 1841610, 396586, 4431859, 4359020, 188739, 586654, 5250596, 1977293, 2260142, 3294871, 2593216, 4734489, 2596984, 4535170, 3543574, 1506646, 5220757, 1317450, 2956804, 4071003, 2572500, 171957, 3705218, 5584984, 1009251, 2981199, 3035510, 2738815, 718118, 3374651, 211754, 3204398, 1264147};
    int ourDuration = 3130924;
    int secondsPerDay = 284977774;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5754764;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> starts = {1589530075, 467389747, 1468702803, 1358003490, 1241569572, 362124917, 655257951, 221580751, 769125332, 463260726, 1310119967, 270578179, 1648652698, 1744764337, 102510393, 1567845611, 1070378748, 943525190, 445856604, 611369848, 278473194, 1421103780};
    vector<int> durations = {37969810, 70893966, 73615462, 61999202, 56513215, 57875943, 49256223, 28399880, 74479062, 3154963, 33445402, 3643286, 61298630, 29579702, 46999794, 7596978, 35974672, 52621138, 6576612, 41806075, 72306915, 17015007};
    int ourDuration = 36757869;
    int secondsPerDay = 1783729908;
    int n = 10;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 538283713;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> starts = {1999999999};
    vector<int> durations = {1999999999};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999998;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> starts = {4, 9};
    vector<int> durations = {2, 2};
    int ourDuration = 1;
    int secondsPerDay = 10;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> starts = {1125349096, 1200662815, 755058397, 1238893307, 876489858, 1105868585, 1522785055, 933652065, 1294970204, 1001768994, 1332309573, 1153505519, 1036513279, 1497941660, 1428233422, 811884118, 1316116910, 1146144794, 960942197, 1445888499, 1076262918, 857416653, 1287349850, 716763781, 1178005662, 1479982534, 945641001, 1214042513, 1183639529, 1396000664, 1092436975, 1469876809, 938018189};
    vector<int> durations = {17752176, 1843893, 53115959, 40820499, 35516319, 13396120, 1189663948, 2264366, 10104340, 30822663, 52626724, 17286453, 19476039, 8118125, 11022044, 27535204, 16152883, 3863314, 13666104, 20619363, 5389453, 10940023, 1401224, 17918198, 5475688, 14449429, 11813950, 2131281, 15813854, 29635937, 9206706, 328334, 1066727};
    int ourDuration = 17552943;
    int secondsPerDay = 2000000000;
    int n = 25;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1216173794;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> starts = {954259385, 877713953, 1235463035, 1116035321, 1347605500, 889556371, 1060671907, 1280689714, 1199065372, 1472195602, 989132022, 1162504271, 1423818210, 846079180, 1177379797, 1524227888, 1404726565, 938128781, 966988242, 1564417917, 873208125, 1086540946, 1323062600, 1457801168, 1016163158, 911706276, 1150425364, 1333753476, 1047877111, 1377159814, 1106476688, 1536913310, 928832647, 1571722277, 1011621105, 1229824818, 922197522, 1551092862, 1413426946, 915947325, 930743086, 1506671604, 1037336498, 948141895, 1007945153, 1500299733, 861741227, 899810994, 949138119, 918690657};
    vector<int> durations = {5549288, 511619, 37547034, 33115724, 25341060, 7887657, 21125876, 36309164, 30462835, 27966812, 13381329, 7262922, 27257772, 10673317, 20835328, 7308379, 7870454, 860958, 17446560, 1665005, 3433339, 19668808, 5442665, 13225254, 18737166, 1588218, 7889421, 9824891, 11953728, 26457467, 3513978, 7301562, 1908285, 1265983155, 4153108, 5615771, 3838485, 892504, 6301890, 1024694, 4797231, 16250330, 5885706, 921213, 2144421, 1736091, 8839133, 1189947, 1713136, 3252287};
    int ourDuration = 5981360;
    int secondsPerDay = 2000000000;
    int n = 45;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 938989739;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> starts = {1321256836, 1284238355, 1768653113, 1342815047, 1872746051, 1208056835, 1599324077, 1381872780, 1390424547, 1732359253, 1453414738, 1839797815, 1630946683, 1690267974, 1259402624, 1846249631, 1590655035, 1501345728, 1903364781, 1563226134, 1471536305, 1354911727, 1188747178, 1555495003, 1666252340, 1720275118, 1761097823, 1586551848, 1250416632, 1711781920, 1480741586};
    vector<int> durations = {5645482, 30281764, 58599621, 8159176, 13947162, 35446099, 24839759, 8357616, 53030017, 18481752, 5651166, 5994307, 19018177, 18339651, 4387660, 16232281, 8598972, 29423924, 1285323807, 17520902, 6826643, 26765350, 3430355, 1011517, 11444355, 3831967, 5943847, 3074095, 6900525, 1248047, 13020585};
    int ourDuration = 33264262;
    int secondsPerDay = 2000000000;
    int n = 15;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> starts = {1224546810, 1113256096, 1304575107, 1593369203, 1498035304, 1057676297, 1558174045, 1269480376, 1055782500, 1198455308, 1299558196, 1286463345};
    vector<int> durations = {39114969, 84286459, 159331666, 1456455159, 25004719, 38045302, 27153142, 14832551, 1712625, 13796637, 734234, 516545};
    int ourDuration = 109491670;
    int secondsPerDay = 2000000000;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> starts = {1802926449, 1751661699, 1548854261, 1694399753, 1652818729, 1592509502, 1473912351, 1323084982, 1252033119, 1632779671, 1287259061, 1853323035, 1742344019, 1366828455, 1215996120, 1315753231, 1821655974, 1798137681, 1459353408, 1275050253, 1408736856, 1440058703, 1525612255, 1235808615, 1396493715, 1416358469, 1446943778, 1681088051, 1208950836, 1852009543, 1813920400, 1804191171, 1692242815, 1675710436, 1517460022, 1305268106, 1403077947, 1888631815, 1541928358, 1667505017, 1247342902, 1234551488, 1390804589};
    vector<int> durations = {837812, 43645634, 42824187, 43065409, 11877796, 39388676, 43116709, 40096564, 22505648, 8557614, 14896050, 28036344, 4185630, 19327547, 17857486, 7040361, 19672543, 1104339, 3757398, 10455719, 7153753, 4800221, 12271504, 7718594, 4276075, 17370017, 1301946, 3370020, 5826868, 154736, 6505204, 2053796, 1500863, 1422289, 2538746, 8468723, 3524727, 1320032298, 4286008, 4022626, 2670146, 1037915, 4328644};
    int ourDuration = 25736449;
    int secondsPerDay = 2000000000;
    int n = 30;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> starts = {1473686230, 1535378829, 1449397738, 1710337956, 1383142778, 1777991208, 1429435613, 1594336030, 1550088544, 1571914186, 1649259098, 1724142001, 1315053183, 1420913737, 1480172505, 1679150716, 1568669880, 1747341004, 1538764998, 1506437365, 1360092696, 1527811389, 1657156259, 1833299869, 1642986170, 1631826789, 1668312061, 1352696717, 1712744441, 1769362241, 1357928747, 1692617343, 1843217350};
    vector<int> durations = {2233591, 2857233, 16352870, 1786644, 27045502, 54674992, 17374841, 37222036, 4072376, 19848368, 2233953, 16005443, 28081469, 7268086, 24372485, 10524861, 3057983, 21962497, 10013404, 15579116, 18957854, 2526804, 2600683, 8954459, 1175974, 4441102, 7017758, 4087274, 8371830, 2703329, 1410705, 17609534, 1463380970};
    int ourDuration = 6183712;
    int secondsPerDay = 2000000000;
    int n = 16;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1740147444;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> starts = {1159275235, 905996974, 1175892445, 1197683142, 1398797043, 1217024938, 1051529752, 1496363351, 1114204954, 990640598, 1304690110, 1372507979, 1012837136, 1473602265, 1147089612, 1315283105, 955006444, 1550880556, 978007298, 1512475185, 857779733, 1589653714, 1536429611, 1154345626, 1140103036, 1004492022, 1092750822, 1292792835, 882151765, 833452112, 1133682897, 1528414317, 1453044086, 968385028, 1189358745, 1272138176, 1371458042, 1367592332, 838424276, 1168659937, 1493681518};
    vector<int> durations = {59605, 44636045, 8626175, 8932115, 42459497, 46245324, 37785939, 6259054, 14265068, 7857174, 1845409, 25583976, 19183773, 11431504, 5772974, 40857808, 6195099, 33826711, 2560575, 8244386, 19717487, 1238529791, 10418861, 1162616, 2119020, 5594885, 12378228, 10829078, 12063671, 1312786, 162624, 6501354, 12813600, 1878759, 505582, 8484321, 870883, 1891809, 12595764, 4574968, 2343607};
    int ourDuration = 28142808;
    int secondsPerDay = 2000000000;
    int n = 27;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> starts = {1302070184, 1618651058, 1515375058, 1373503867, 1546381866, 1311223802, 1709828535, 1682045499, 1063141524, 1758531191, 1289317328, 1400651693, 1462758037, 1125161821, 1342432243, 1191787588, 992664155, 1791131967, 1017611114, 1213014050, 1116080103, 1270814972, 1500181461, 1748034709, 1509953273, 1096137983, 1740003765, 1592500662, 979336364, 1491056265, 1031998305, 1819837580, 1677124600, 1198761940, 1179644964, 1008358557};
    vector<int> durations = {6088475, 54709878, 29396424, 26159994, 44038184, 27660360, 27061739, 27104640, 26433537, 30670750, 59894, 52406686, 26986333, 42362122, 9849327, 189865, 14765281, 24869434, 7914549, 47310060, 1623798, 6837848, 4136615, 492486, 177436, 4423473, 2917546, 19006518, 3867575, 8973143, 3782608, 1152781886, 1280966, 7059946, 11756455, 1460957};
    int ourDuration = 40249730;
    int secondsPerDay = 2000000000;
    int n = 6;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> starts = {1573763077, 1702400822, 1470044811, 1848272333, 1748831567, 1401703988, 1621686352, 1902926359, 1590961950, 1797604245, 1691020198, 1384930374, 1519020749, 1440610755, 1555672484, 1842354491, 1739287601, 1520540759, 1648164648, 1453910146, 1514076163, 1515049740, 1544750088, 1435946126, 1699323663, 1510660228, 1412959123, 1820670273, 1567066277, 1828798134, 1601691105, 1828084493, 1416867618, 1644539812, 1547921051, 1781024251, 1608002896, 1897730783, 1539593846, 1599812664, 1445781576, 1899349993, 1733887684, 1845819164, 1831838250};
    vector<int> durations = {16194448, 30506673, 40068749, 43491418, 31116088, 10556497, 17989561, 1474066918, 8819634, 20853506, 8196715, 13013551, 1057958, 4621803, 11262146, 1361510, 8113998, 16307601, 41962810, 9313387, 256087, 2702184, 1634194, 244713, 275303, 757719, 1868565, 5488473, 4265897, 1275166, 3487812, 305024, 11762770, 159738, 7103803, 10095535, 7953553, 912647, 3149263, 1588427, 7555092, 484782, 692523, 735431, 10188870};
    int ourDuration = 27066325;
    int secondsPerDay = 2000000000;
    int n = 16;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> starts = {1353998210, 1243084348, 983418482, 786640354, 1478380412, 1313250306, 1541899735, 1362332792, 1404136363, 1068530258, 1258910967, 828619011, 1446275839, 1178513078, 1513560160, 930961319, 1467027808, 912248413, 1132786841, 1112468608, 752898268, 881627477, 1156961879, 1043234741, 1345577509, 1524435159, 1323587343, 1163061197, 1083722016, 1225917884, 764073307, 1223472021, 1127578500, 1028838677, 1015943529, 1049577552, 729393370, 1058482572, 776595126, 1464120046, 975625810, 753963040, 1249880989, 1123483019, 1109057266};
    vector<int> durations = {2795413, 1490907, 32404289, 32532592, 33598377, 7374848, 1172970944, 28699462, 39627455, 11425484, 30222973, 39751200, 9971620, 44051311, 4856107, 33376814, 1664659, 9637141, 10509023, 6202476, 704924, 29890262, 929131, 4380229, 7639655, 8760122, 15639451, 14608179, 21216122, 16840873, 6672095, 2025565, 2510379, 5481749, 3646492, 511203, 2196510, 1788097, 421687, 816007, 3690543, 3322309, 1596451, 3558533, 1230548};
    int ourDuration = 14649626;
    int secondsPerDay = 2000000000;
    int n = 32;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1289133940;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> starts = {1836655612, 1598053476, 1507347175, 1787146537, 1250682820, 1700473108, 1952893810, 1355500212, 1887140537, 1199474645, 1290461816, 1670419652, 1418122517, 1680005979, 1911943271, 1877524894, 1232993412, 1935258926, 1190979808, 1398762807, 1582645762};
    vector<int> durations = {35749315, 41606831, 71524096, 38594251, 39065949, 77255907, 1219849971, 42169912, 8002582, 21055892, 43941277, 5155258, 84094619, 15549960, 9573939, 8378993, 9014954, 8603107, 984337, 8919283, 8760318};
    int ourDuration = 76644776;
    int secondsPerDay = 2000000000;
    int n = 15;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> starts = {1243830896, 1256901616, 1349039281, 1423176910, 1212778725, 1183759406, 1333265417, 1388697640, 1567439052, 1150185442, 1537100128, 1451434390, 1630582663, 1695807486, 1474476192, 1796389165, 1734649342, 1317572161, 1613745553, 1753592311, 1725798454, 1671265968, 1787069538, 1377091575, 1799663043, 1398773617, 1174915090, 1801032521, 1197951805, 1545864283, 1304484723, 1467050158, 1194548328, 1246652618, 1294684226, 1527312788, 1382616044, 1329414098, 1511534842, 1554833858, 1606059658, 1418135161, 1341169942, 1746169241, 1718669637, 1191425258, 1624615736, 1605682836};
    vector<int> durations = {2710710, 37059213, 25646877, 23080066, 28382474, 3570121, 7039740, 8847175, 37658457, 22003995, 342966, 6361290, 38383872, 22080361, 36640130, 2773294, 11488315, 6958283, 8812134, 33019531, 1520196, 24204440, 3502359, 3640951, 192848, 13210334, 4257328, 1345627889, 424412, 2374820, 8462470, 1483917, 1515082, 6850100, 3495642, 8414664, 3745473, 3032913, 12277460, 3141842, 771647, 946823, 7831833, 2476460, 6465594, 382607, 4805825, 323382};
    int ourDuration = 25592643;
    int secondsPerDay = 2000000000;
    int n = 6;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> starts = {1517653264, 1751851193, 1191000233, 1335304213, 1033889762, 1067038938, 945736248, 1222757044, 1742675258, 1477108264, 1307350292};
    vector<int> durations = {180842655, 1181344636, 24899850, 135123118, 32341668, 102896566, 51925859, 83084445, 4878415, 19840985, 18795236};
    int ourDuration = 159536603;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> starts = {712569206, 813875416, 678375601, 1562712547, 1380520626, 1279945146, 1188244463, 1034884645, 648694085, 1334586649, 1429624637, 1445786627, 1517113586, 893059832, 718282255, 925808432, 997786942, 1400522361, 1499992462, 1087005330, 1232948951};
    vector<int> durations = {5320853, 48141489, 21260045, 1079872061, 7045177, 30128152, 40305014, 22527407, 20430592, 23475594, 5886543, 9802578, 31790319, 12878240, 78287294, 39992306, 31114623, 22797989, 4906046, 83086290, 32175949};
    int ourDuration = 1736960;
    int secondsPerDay = 2000000000;
    int n = 21;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1504898508;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> starts = {1321519586, 1414457359, 1709054356, 826448343, 951041652, 1471623331, 989518923, 1145903114, 1585086922, 886156740, 818634572, 931322616};
    vector<int> durations = {89145415, 1856430, 1057493349, 19868202, 4410883, 109661074, 136391576, 117679832, 79601843, 36954294, 4465783, 13626905};
    int ourDuration = 37177050;
    int secondsPerDay = 2000000000;
    int n = 10;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1664688765;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> starts = {1712322578, 1536046439, 1357739657, 1648972944, 1433942504, 1504110310, 1282216796, 1725878650, 1457670002, 1445629394, 1812180002, 1517117041, 1523488580, 1272419849, 1796035773, 1632262365, 1353312128, 1800803326, 1828950180, 1628396751, 1635407697, 1645118160};
    vector<int> durations = {5734157, 79318849, 68607447, 56300729, 7363726, 9384300, 68676435, 69978596, 43747423, 5650223, 10952814, 4528100, 7978846, 8924467, 4526604, 831900, 3463832, 4175615, 1438144493, 283473, 1149211, 1447556};
    int ourDuration = 84616353;
    int secondsPerDay = 2000000000;
    int n = 22;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> starts = {1649979477, 1701310492, 1457817497, 1166021900, 1661637542, 1232747642, 1311007688, 1335856734, 1533701431, 1400685319, 1253100709, 1129950233, 1279152040, 1426644024, 1622547597, 1768926974, 1579070788, 1729833669, 1761821518, 1142194053, 1529352667, 1241853784, 1818870509, 1555782135, 1836933973, 1304750071, 1255414303, 1129815364, 1698010411};
    vector<int> durations = {5966385, 20509079, 60845522, 59648437, 33251823, 3993087, 1215558, 62296323, 18647977, 13716682, 2273379, 4778718, 5998493, 23527302, 13845733, 41236102, 26203181, 25035518, 2902894, 14921736, 380742, 8333566, 9698323, 22011801, 1280852098, 2209952, 10294526, 91660, 1868266};
    int ourDuration = 15683500;
    int secondsPerDay = 2000000000;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1312223246;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> starts = {1519846126, 1104958550, 1139162503, 1546252005, 989374533, 1595233452, 1365781282, 1273032665, 1346120347, 930983254, 836149766, 861539731, 907881911, 754383085, 1608514622, 978802515};
    vector<int> durations = {14460926, 27746160, 96855719, 32099002, 113076383, 12558641, 114808579, 45787464, 18138702, 37453107, 9780808, 40681098, 14048860, 36304224, 1145694471, 2611959};
    int ourDuration = 105566668;
    int secondsPerDay = 2000000000;
    int n = 17;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> starts = {1725710882, 1496058821, 1839985084, 1366444952, 1285623048, 1413198770, 1783615969, 1655755373, 1332564973, 1567176260, 1333211406, 1744718971, 1822412992, 1831726024, 1257380956, 1616768419, 1453375675, 1404345353, 1528533892, 1697227680, 1434056965, 1812558879, 1606996246, 1763391132, 1765132326, 1350963849, 1647533114, 1527528701, 1360565881, 1885736873, 1736449321, 1769427454, 1315711735, 1732993308, 1690482197, 1780603705, 1806149604, 1746528061, 1724456144, 1328984684, 1889887674, 1395110152, 1523845570, 1680626401};
    vector<int> durations = {4807247, 23831831, 39555198, 24588073, 22319511, 13448104, 18681082, 23942466, 421332, 28707545, 6688272, 115563, 5242190, 5709483, 20148684, 29271228, 41238419, 5656153, 29171018, 21455771, 16277286, 1667371, 2672463, 858965, 229322, 1285895, 4526614, 734801, 4308348, 1609535, 3423855, 9079393, 12304232, 2775131, 985364, 434631, 2686274, 12346859, 1043152, 3131825, 1360220624, 6651214, 144582, 6613950};
    int ourDuration = 39735064;
    int secondsPerDay = 2000000000;
    int n = 13;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> starts = {1455406080, 1396327301, 1716537412, 1644897337, 1218727783, 1575091342, 1307982506, 1524411782, 1680016003, 1294429433, 1548260958, 1149762462, 1630215002, 1451727605, 1454028640, 1695737157, 1351846416, 1622594173, 1473491495, 1192849583, 1512071047, 1499629350, 1299740687, 1441041847, 1282189085, 1431993646, 1610503674, 1709712810, 1376926308, 1504468275, 1673774155, 1567883078};
    vector<int> durations = {16383382, 28306646, 1422638931, 25562459, 61735832, 33014461, 40188314, 15665187, 14801075, 2081276, 17980764, 42544704, 13760569, 976869, 1025934, 10821618, 20777989, 1730563, 15999874, 25123471, 11595361, 294803, 4653223, 9766987, 3548425, 8042401, 3475790, 4620998, 7359226, 1479057, 307825, 5717528};
    int ourDuration = 22034492;
    int secondsPerDay = 2000000000;
    int n = 24;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> starts = {1};
    vector<int> durations = {1};
    int ourDuration = 1;
    int secondsPerDay = 5;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> starts = {19999999, 59999999, 99999999, 139999999, 179999999, 219999999, 259999999, 299999999, 339999999, 379999999, 419999999, 459999999, 499999999, 539999999, 579999999, 619999999, 659999999, 699999999, 739999999, 779999999, 819999999, 859999999, 899999999, 939999999, 979999999, 1019999999, 1059999999, 1099999999, 1139999999, 1179999999, 1219999999, 1259999999, 1299999999, 1339999999, 1379999999, 1419999999, 1459999999, 1499999999, 1539999999, 1579999999, 1619999999, 1659999999, 1699999999, 1739999999, 1779999999, 1819999999, 1859999999, 1899999999, 1939999999, 1979999999};
    vector<int> durations = {20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000};
    int ourDuration = 10000000;
    int secondsPerDay = 2000000000;
    int n = 50;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 39999999;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 10;
    int secondsPerDay = 100;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> starts = {1000000000};
    vector<int> durations = {1500000000};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> starts = {2, 4};
    vector<int> durations = {1, 2};
    int ourDuration = 2;
    int secondsPerDay = 5;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> starts = {30, 5, 51, 17, 49};
    vector<int> durations = {12, 6, 10, 3, 1};
    int ourDuration = 1;
    int secondsPerDay = 100;
    int n = 40;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> starts = {1999999999};
    vector<int> durations = {1999999999};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999998;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> starts = {1999999999};
    vector<int> durations = {1999999997};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999996;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> starts = {1234567890};
    vector<int> durations = {1500000000};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 734567890;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> starts = {10000000, 1999999999};
    vector<int> durations = {1, 1000000};
    int ourDuration = 63;
    int secondsPerDay = 2000000000;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> starts = {1000000000};
    vector<int> durations = {1999999999};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 50;
    int secondsPerDay = 50;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> starts = {1};
    vector<int> durations = {1};
    int ourDuration = 1;
    int secondsPerDay = 10;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> starts = {1999999000};
    vector<int> durations = {1888888888};
    int ourDuration = 123;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1888887888;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> starts = {5};
    vector<int> durations = {10};
    int ourDuration = 3;
    int secondsPerDay = 13;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1;
    int secondsPerDay = 1;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1;
    int secondsPerDay = 5000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> starts = {1500000000};
    vector<int> durations = {1500000000};
    int ourDuration = 10;
    int secondsPerDay = 2000000000;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> starts = {2};
    vector<int> durations = {1};
    int ourDuration = 1;
    int secondsPerDay = 10;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> starts = {5, 11};
    vector<int> durations = {2, 2};
    int ourDuration = 1;
    int secondsPerDay = 12;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1;
    int secondsPerDay = 2;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 10;
    int secondsPerDay = 20;
    int n = 10;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> starts = {1999999999};
    vector<int> durations = {1000000000};
    int ourDuration = 100;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> starts = {190000000};
    vector<int> durations = {2000000000};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1;
    int secondsPerDay = 10;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> starts = {15, 8};
    vector<int> durations = {10, 4};
    int ourDuration = 4;
    int secondsPerDay = 20;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 666;
    int secondsPerDay = 1000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> starts = {30, 5, 17, 45};
    vector<int> durations = {12, 6, 3, 4};
    int ourDuration = 5;
    int secondsPerDay = 50;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1;
    int secondsPerDay = 5;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> starts = {2};
    vector<int> durations = {2};
    int ourDuration = 1;
    int secondsPerDay = 3;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> starts = {18};
    vector<int> durations = {5};
    int ourDuration = 13;
    int secondsPerDay = 20;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> starts = {1999999999};
    vector<int> durations = {1000000000};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> starts = {1, 1999999998};
    vector<int> durations = {1, 2};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> starts = {1000000000};
    vector<int> durations = {1};
    int ourDuration = 99999999;
    int secondsPerDay = 2000000000;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 5;
    int secondsPerDay = 100;
    int n = 14;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> starts = {49};
    vector<int> durations = {2};
    int ourDuration = 15;
    int secondsPerDay = 50;
    int n = 39;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> starts = {30, 5, 51, 17, 49};
    vector<int> durations = {12, 6, 10, 3, 1};
    int ourDuration = 1;
    int secondsPerDay = 60;
    int n = 8;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 2000;
    int secondsPerDay = 2000;
    int n = 50;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> starts = {1, 3, 50};
    vector<int> durations = {1, 1, 1};
    int ourDuration = 1;
    int secondsPerDay = 100;
    int n = 4;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 2;
    int secondsPerDay = 2;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1;
    int secondsPerDay = 1;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 10;
    int secondsPerDay = 10;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> starts = {1600000000};
    vector<int> durations = {440000000};
    int ourDuration = 40000000;
    int secondsPerDay = 2000000000;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 40000000;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 2;
    int secondsPerDay = 200;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> starts = {1999999999};
    vector<int> durations = {1999999999};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 10;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999998;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> starts = {30, 5, 17, 45};
    vector<int> durations = {12, 6, 3, 4};
    int ourDuration = 4;
    int secondsPerDay = 50;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 10;
    int secondsPerDay = 100000;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> starts = {2, 4};
    vector<int> durations = {1, 2};
    int ourDuration = 1;
    int secondsPerDay = 5;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 10;
    int secondsPerDay = 10;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> starts = {2};
    vector<int> durations = {1};
    int ourDuration = 2;
    int secondsPerDay = 1000;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 30;
    int secondsPerDay = 30;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> starts = {3};
    vector<int> durations = {3};
    int ourDuration = 3;
    int secondsPerDay = 10;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1;
    int secondsPerDay = 100;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1000;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> starts = {1, 2};
    vector<int> durations = {1, 1};
    int ourDuration = 1;
    int secondsPerDay = 10;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 8;
    int secondsPerDay = 8;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> starts = {1999999998};
    vector<int> durations = {1999999998};
    int ourDuration = 1;
    int secondsPerDay = 1999999999;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999997;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> starts = {5};
    vector<int> durations = {10};
    int ourDuration = 1;
    int secondsPerDay = 10;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> starts = {50};
    vector<int> durations = {20};
    int ourDuration = 5;
    int secondsPerDay = 60;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> starts = {30, 5, 51, 17, 49};
    vector<int> durations = {12, 6, 10, 3, 1};
    int ourDuration = 7;
    int secondsPerDay = 2000000000;
    int n = 47;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 10;
    int secondsPerDay = 17;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 100;
    int secondsPerDay = 200;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> starts = {1111111111};
    vector<int> durations = {1500000000};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 611111111;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1;
    int secondsPerDay = 1;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> starts = {2, 4, 6};
    vector<int> durations = {1, 1, 3};
    int ourDuration = 1;
    int secondsPerDay = 8;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> starts = {10};
    vector<int> durations = {10};
    int ourDuration = 10;
    int secondsPerDay = 1000;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> starts = {5, 7};
    vector<int> durations = {1, 4};
    int ourDuration = 4;
    int secondsPerDay = 8;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> starts = {12, 17, 55};
    vector<int> durations = {3, 4, 20};
    int ourDuration = 200000000;
    int secondsPerDay = 2000000000;
    int n = 50;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1;
    int secondsPerDay = 1231;
    int n = 25;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> starts = {10};
    vector<int> durations = {1};
    int ourDuration = 3;
    int secondsPerDay = 100;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> starts = {40, 70};
    vector<int> durations = {30, 35};
    int ourDuration = 5;
    int secondsPerDay = 80;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> starts = {1999999999};
    vector<int> durations = {1999999999};
    int ourDuration = 2;
    int secondsPerDay = 2000000000;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> starts = {30, 6, 17, 44};
    vector<int> durations = {12, 6, 3, 4};
    int ourDuration = 6;
    int secondsPerDay = 50;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> starts = {5};
    vector<int> durations = {1};
    int ourDuration = 2;
    int secondsPerDay = 100;
    int n = 10;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> starts = {100};
    vector<int> durations = {1};
    int ourDuration = 23;
    int secondsPerDay = 200;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> starts = {2, 4};
    vector<int> durations = {1, 1};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> starts = {10, 30, 99};
    vector<int> durations = {1, 1, 10};
    int ourDuration = 1;
    int secondsPerDay = 100;
    int n = 40;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> starts = {10, 30};
    vector<int> durations = {10, 10};
    int ourDuration = 1;
    int secondsPerDay = 60;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> starts = {9};
    vector<int> durations = {3};
    int ourDuration = 1;
    int secondsPerDay = 10;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> starts = {10};
    vector<int> durations = {5};
    int ourDuration = 3;
    int secondsPerDay = 100;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> starts = {1};
    vector<int> durations = {1};
    int ourDuration = 1;
    int secondsPerDay = 3;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> starts = {1999999999};
    vector<int> durations = {2000000000};
    int ourDuration = 1;
    int secondsPerDay = 2000000000;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> starts = {10};
    vector<int> durations = {20};
    int ourDuration = 1;
    int secondsPerDay = 50;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> starts = {5};
    vector<int> durations = {9};
    int ourDuration = 1;
    int secondsPerDay = 10;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> starts = {1000000000, 1999999999};
    vector<int> durations = {100000000, 100000000};
    int ourDuration = 1000000000;
    int secondsPerDay = 2000000000;
    int n = 30;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> starts = {10};
    vector<int> durations = {10};
    int ourDuration = 5;
    int secondsPerDay = 2000000000;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1;
    int secondsPerDay = 2;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> starts = {1000000000};
    vector<int> durations = {1};
    int ourDuration = 1000;
    int secondsPerDay = 2000000000;
    int n = 20;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> starts = {2, 5};
    vector<int> durations = {2, 2};
    int ourDuration = 1;
    int secondsPerDay = 6;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> starts = {1999999999};
    vector<int> durations = {1999999998};
    int ourDuration = 2;
    int secondsPerDay = 2000000000;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999997;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> starts = {100};
    vector<int> durations = {150};
    int ourDuration = 50;
    int secondsPerDay = 200;
    int n = 20;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> starts = {10, 30};
    vector<int> durations = {10, 10};
    int ourDuration = 10;
    int secondsPerDay = 41;
    int n = 5;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 1;
    int secondsPerDay = 3;
    int n = 3;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> starts = {};
    vector<int> durations = {};
    int ourDuration = 10;
    int secondsPerDay = 60;
    int n = 1;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> starts = {49};
    vector<int> durations = {1};
    int ourDuration = 50;
    int secondsPerDay = 50;
    int n = 10;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> starts = {1000000000, 1999999999};
    vector<int> durations = {100000000, 100000000};
    int ourDuration = 1000000000;
    int secondsPerDay = 2000000000;
    int n = 2;
    CommercialPlanner* pObj = new CommercialPlanner();
    clock_t start = clock();
    int result = pObj->bestMinute(starts, durations, ourDuration, secondsPerDay, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22652597&rd=10793&pm=8284
********************************************************************************
#include<stdio.h> 
#include<stdlib.h> 
#include<ctype.h> 
#include<string.h> 
#include<math.h> 
 
#include<iostream> 
#include<sstream> 
#include<vector> 
#include<string> 
#include<set> 
#include<map> 
#include<list> 
#include<utility> 
#include<algorithm> 
using namespace std;  
 
class CommercialPlanner { 
  public: 
  int bestMinute(vector <int> starts_, vector <int> durations_, int ourDuration, int SPD_, int n) { 
    vector< pair<long long,int> > a; 
    long long SPD = SPD_; 
    int K = starts_.size(); 
    if( K == 0 ){ 
      if( ourDuration > SPD_ ) 
        return -1; 
      else 
        return 0; 
    } 
    int flag = 1; 
    for( int i = 0; i < K; i ++ ){ 
      long long S = starts_[i]; 
      long long D = durations_[i]; 
      long long E = S + D; 
      a.push_back( pair<long long,int>(S,       1) ); 
      a.push_back( pair<long long,int>(S + SPD, 1) ); 
      if( E >= SPD ){ 
        a.push_back( pair<long long,int>(E % SPD, -1) ); 
        flag = 0; 
      } 
      else 
        a.push_back( pair<long long,int>(E,       -1) ); 
    } 
    if( flag ) 
      a.push_back( pair<long long,int>(0, -1) ); 
    sort( a.begin(), a.end() ); 
    long long TMEMMAX = -1; 
    long long TBEGINMAX = -1; 
    for( int i = 0; i + 1 < a.size(); i ++ ){ 
      if( a[i].second > 0 ) continue; // begin 
      long long T    = a[i].first; 
      if( T >= SPD ) break; 
      long long DMAX = a[i+1].first - T; 
      if( DMAX < ourDuration ) continue; 
      int j, n2; 
      for( j = i + 1, n2 = n; j < a.size(); j ++ ){ 
        if( a[j].second > 0 ){ // begin 
          n2 --; 
          if( n2 == 0 ) 
            break; 
        } 
      } 
      long long TMEM = (j < a.size() ? a[j].first - T : SPD); 
      TMEM = min( TMEM, SPD ); 
      if( TMEMMAX < TMEM ){ 
        TMEMMAX = TMEM; 
        TBEGINMAX = T; 
      } 
    } 
    return (int)TBEGINMAX; 
  } 
//BEGIN CUT HERE 
 
 
//END CUT HERE 
}; 
 
// Master Spark! 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/