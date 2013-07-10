/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7753
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

class IncreasingSubsequences {
public:
    long count(vector<int> a);
};

long IncreasingSubsequences::count(vector<int> a) {
    long ret;
    return ret;
}


int test0() {
    vector<int> a = {1, 3, 2, 6, 4, 5};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {1000000000, 100000000, 10000000, 1000000, 100000, 10000, 1000, 100, 10, 1};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> a = {564, 234, 34, 4365, 424, 2234, 306, 21, 934, 592, 195, 2395, 2396, 29345, 13295423, 23945, 2};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 41;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {2, 1, 4, 3, 6, 5, 8, 7, 11, 10, 13, 12, 15, 14, 17, 16, 19, 18, 21, 20, 23, 22, 25, 24, 27, 26, 29, 28, 31, 30, 34, 32, 36, 35, 38, 37, 40, 39, 42, 41, 44, 43, 46, 45, 48, 47, 50, 49, 52, 51};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 33554432;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {840730832, 49429944, 797976700, 938181488, 960841989, 540034785, 340307606, 115761449, 648296910, 34506113, 23410277, 955539723, 532631827, 176515019, 711368877, 602300658, 951665298, 994219619, 641931845, 183014256, 751199835, 445921508, 467551896, 748892743, 58703701, 971268701, 203832868, 256526064, 30186423, 574118863, 922514174, 784104727, 603145104, 173235889, 531731276, 17245468, 632900928, 254188397, 300846538, 886864020, 887129596, 872285664, 177687109, 706683078, 719535694, 988707806, 112607267, 86090542, 190869139, 452607915};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 535;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {161387517, 689478524, 284383363, 758216307, 898074775, 147083405, 194788115, 282343440, 154602515, 228297376, 847075325, 722956387, 373527999, 198443107, 175799896, 342269492, 34333082, 92438230, 775905838, 361703644, 439632600, 382169550, 610891516, 606837453, 884609122, 566701173, 200964662, 651239944, 947551059, 82117576, 48316353, 293366436, 195904379, 691094295, 182548086, 532303182};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 420;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {813801097, 711940261, 696542147, 26924344, 570432917, 758864528, 399285080, 102542961, 681082762, 547898604, 351089522, 494304041, 159660039};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {877757284, 999994383, 3040310, 751265156, 9392406, 701012027, 704920607, 457724872, 854147860, 925256348, 831463841, 364460656, 514131683, 966936551, 770852907, 555419502, 154668287, 803741543, 600613986, 623780744, 376385878, 225975165, 330776734, 124552405, 887260616, 791434267, 710424939, 31960387, 706484910, 901226313, 860514313, 465654036, 963489104, 29043104, 732302061, 96153948, 753295468, 776472273, 309625918, 849764997, 473074358, 164051487, 14048856, 260575435, 951336787, 813393632, 443951692, 8101057, 436369501};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 368;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {464335454, 658155466, 705249123, 18848639, 40080005, 737176736, 293763046, 813194478, 305141999, 305435600, 142302684, 819309046};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {830560828, 657892912, 73547217, 856325437, 887298968, 454316864, 370819790, 61778685, 126123246, 98475358, 113032913, 140087736, 656700698, 240038224, 491213265, 846808606, 406027598, 41969873, 493572697, 666198035, 481587087, 847223565, 706962952, 907348782, 181035830, 408629544, 599335952, 773551420, 482371952, 272337592, 300594106, 584489662, 590435263, 512297030, 241765601, 235292518, 226503287, 945316306, 652963443, 250772639, 744121666, 402553164, 1661171};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 418;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {190865922, 775644572, 334133531, 880178425, 242371554, 769813335, 59545753, 276130736, 750812097, 27823384, 877047957, 291138903, 758855896, 745232600, 735876048, 63583682, 928522899, 764809316, 587366273, 466841814, 57954066, 7901661, 299140562, 863330064, 393176489, 584131641, 837977184, 160340990, 92308833, 87127489, 278751934, 575311044, 811165045, 356194961, 113729267, 196280985, 262084566, 603797787, 355931639, 579436359, 336349608, 9140900, 90735674, 550791599, 199730627, 55078853, 263342109, 340871746, 656880946, 133512939};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 537;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {513374089, 374121911, 976694999, 422071570, 899179678, 190093893, 209405215, 817708332, 61828529, 875780997, 464848043, 694110198, 63312004, 424557650, 63545401, 827624728, 466787567, 611412028, 633627866, 314203946, 901340509, 115035657, 211639923, 563222076, 339127117, 56049199, 104710205, 642461776};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 55;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {919077211, 643071813, 513974747, 561820179, 480140014, 906824940, 506111048, 826298828, 855050618, 277885288, 791258740, 42445771, 964406601, 555683393, 394490163, 211300980, 233571031, 46680277, 60991946, 55173693, 479478099, 511192276, 948713587, 960772147, 852591394, 495211717, 737938652};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 68;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {583044211, 228006492, 814241920, 8525480, 767833777, 601968973, 274087346, 33251308, 512633013, 397044469, 986928220, 102456243, 900561113, 543228809, 333596500, 148971643, 123650700, 352546543, 669406402, 52257973, 395992787, 956712262, 265563812, 62630217, 546287810, 718968668, 962072394, 200020496, 697934855, 946110773, 793341915, 689722457, 135847264, 394358923, 30424270, 865549157, 966166816, 518491465, 81279602, 553013482, 782343598, 72113166, 184629095, 836062611, 156598277, 483634352, 404714787, 945046910, 695364661};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 899;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {845153879, 430312597, 330536182, 57674497, 651563150, 130688805, 86049697, 46727385, 459686423, 245966360, 1829128, 1197737, 166226, 138252970, 8042522, 4591202, 2321251, 86721890, 53469457, 604739325, 525877847, 168201551, 98797379, 41781360, 32967872, 12484156, 116070945, 43322698, 16724770, 1472785, 1282522, 726776, 382068, 7633, 588222650, 328752084, 272645976, 97018041, 54863682, 46105632, 712461693, 647326268, 614231805, 455350047, 215363918, 281961219, 41280830, 28476587, 13393177, 668029695};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2594;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {169873038, 359567709, 323746211, 54144187, 11764229, 3965611, 211751792, 182985276, 96859434, 46501860, 45968519, 26010569, 5849255, 501894188, 62382263, 34099466, 30928662, 7258532, 4098868, 139100282, 1459878, 391973, 835812620, 916563278, 827627146, 116786701, 87484157, 278487426, 250372129};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 214;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {741213036, 228471677, 226860993, 28069108, 9627466, 5127898, 906844683, 705414804, 147318306, 303179056, 932223253, 123982025, 111050350, 716065978, 644951144, 125014812, 56646641, 973744, 551490514, 1461825, 1149074, 889407, 679386725, 625387013, 995112185, 762898670, 9198473, 103585366, 259932041};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 161;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {278720208, 221008785, 487466941, 388917541, 295937637, 43193490, 977113172, 6880664, 5037988, 916735345, 39545217, 600458374, 492611897, 233549407, 209699053, 907768558, 75975062, 406668172, 447197531, 65436581, 35855988, 739986212, 679448331, 327325216, 53060684, 17656459, 90490706, 88978713, 876655465, 473368762, 121069525, 77193440, 246123592, 149043354, 76766881, 37297022, 869948265, 418472417, 267947654, 72822050, 568539790, 522600462, 77158289, 31083856, 58704054, 913586717, 957572202, 39591448, 714231325};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1760;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {469428084, 391592033, 262770902, 164500296, 160796883, 78323947, 63644596, 6088366, 6062751, 4166730, 3058003, 2335999, 1916008};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {165821271, 799023989, 105270644, 73115640, 62128838, 61960398, 36522341, 624667469, 435999016, 12240025, 9732103, 985695559, 5192956, 1851029, 1171745, 90955, 1616, 89538158, 885353640, 345967686, 84699881, 74855721, 927367512, 357277250, 34826500, 8736145, 1348497, 1294643, 451964903, 394943442, 132211512, 111608550, 101518127, 68372311};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 362;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {807010682, 603985238, 323295663, 118657299, 640317721, 93696360, 137676024, 39881359, 33412704, 17451371, 439832843, 992120852, 410287399, 757087799, 711144096, 152446570, 937851037, 889853813, 42646150, 599540629, 62569746, 34674203, 907025300, 90211927, 683114273, 454824765, 513570986, 203906741, 79844262, 139768775, 82525176, 7253052, 7130340, 566366088, 375273980, 490311803, 7101183, 69106330, 23089363, 5842654, 689179, 362430, 352777, 328724, 215173, 161992, 154126, 26319, 89558231, 78486032};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 285;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {128792065, 121294676, 84429826, 68782239, 2243645, 728532003, 632123122, 136391735, 197373665, 602489012, 442899988, 156208803, 7679215, 3602280, 1501740, 1065688, 721247489, 66962577, 51229197, 32435501, 130300735, 39473652, 16714363, 14009140, 11221973, 480927030, 384475876, 366734775, 273849106, 254187491, 167721964, 614747187, 300707977, 141518814, 860972707, 850242499, 333479395, 181828591, 83406824, 132334943};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1151;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {523448026, 914121561, 64595966, 11785686, 1395749, 930436305, 309465197, 523050693, 432742004, 382986235, 120567889, 426142849, 265071, 259437, 6417, 3686, 948542476, 232132876, 229364623, 98425182, 87002591, 214012443, 88850847};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {1000000000, 1, 2};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {455552329, 846435945, 128940031, 15684808, 1496008, 430552015, 914634899, 609576944, 236318041, 179350920, 925993262, 514158870, 725235865, 747064914, 244715282, 126688975, 51411658, 962337815, 696741249, 965120069, 313875969, 506106162, 263013153, 76677509, 147288806, 105390742, 658847132, 43957795, 110839076, 19497549, 312160914, 243931067, 925796847, 385360405, 370551376, 504236222, 496452731, 855000002, 730945723, 240094986, 569680509, 330261972, 220995328, 851743327, 112951988, 399605738, 534662368, 122114626, 70444555, 201720660};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1514;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {684777955, 357523339, 8483439, 712878433};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {208215682, 4995259, 586688467, 335171341, 271475438, 548674561, 211069844, 29970261, 175516517, 10678161, 776285614, 769935511, 950555777, 467701281, 459958797, 89088375, 25524258, 980380736, 883193887, 965297507, 363604204, 297159268, 984786268, 457848792, 270143682, 28940972, 89834426, 19756970, 280105296, 684220697, 468738107, 341251773, 239950469, 262295093};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 243;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {340613968, 274433798, 26422272, 249316982, 88487723, 954992141, 493697333, 703817507, 58655074, 32433510, 4656282, 767329950, 625006550, 315557428, 89837069, 765750866, 975130833, 46647807, 43526468, 88037587, 530800062, 641226006, 391439891, 449133139, 157816861, 49942410, 15945967, 20137775, 14254968, 947825121, 408907060, 375465571, 26505098, 58022147, 1116451, 454501903, 33854129, 30100358, 5990961, 603483131, 707732607, 253358575, 20295267, 74360849, 8698288, 128604968, 849484537, 198837998, 12471803};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 385;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {142926980, 145715738, 585269061, 80300439, 341584625, 66687086, 418476054, 412586748, 138638440, 633941034, 363282112, 354942402, 287441828, 344546214, 47504264, 583289560, 451887639, 949182359, 753568685, 48281632, 331852261, 815887745, 118049243, 558469183, 603329000, 979774269};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 150;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {119140307, 764165051, 527398633, 763705196, 784818655, 88791234, 31292810, 600648187, 105542838, 843863877, 941102017, 201152531, 290350466, 768647056, 562976054, 472361071, 411734966, 690188777, 740966044, 114501117, 35944099, 463886593, 159122263, 695891033, 984999875};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 51;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {757272059, 633827341, 72120436, 61660145, 564071018, 14702367, 34960440, 505313959, 66457195, 17849436, 453902639, 605045966, 779172615, 971843043, 763703747, 445213413, 480276396, 183247008, 51749187, 806383458, 529752488, 432962132, 154882510, 16532745, 650003630, 110123849, 848777195, 628773209, 753624918, 338662379, 981861732, 639594264, 145318301, 693650171, 529061937, 818369236, 182036833, 522663005, 520068594, 789796698, 126909158, 538667890, 401263295, 15482430, 640705877, 128165276, 248605800, 855579730, 467970871, 349680340};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1228;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {187302739, 117394672, 662903371, 380316598, 14454475, 7314077, 2485878, 312842, 271053, 14579, 3362, 1409, 641, 574, 248, 175, 154, 34, 27, 12, 8, 3, 2, 1, 173368725, 115674551, 74947770, 60697276};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 85;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {715743060, 711464858, 394470508, 140690475, 29883844, 25538511};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {437255852, 803886275, 694818790, 385932408, 489638063, 364842173, 75053610, 246825130, 102792147, 75045980, 48528224, 31328171, 285807, 75730, 38921, 975912648, 401851064, 274940192, 137905609, 676673216, 419568701, 100520894, 71920739, 16187525, 1325916, 163325, 155678, 28399, 9497, 546180849, 382155538, 100605688, 92706041};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 174;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {251331176, 99685185, 75133317, 6839776, 1477709, 905691, 112083, 11556, 7461, 6752, 2484, 1457, 806, 158, 76, 62, 34, 24, 4, 3, 1};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {448672498, 277130605, 85678864, 10109167, 2466620, 1772314};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {558558068, 882053355, 748527111, 929266978, 876979040, 319193801, 520252147, 88484364, 26133140, 685927491, 241379820, 32080471, 18205076, 759130443, 532205652, 412702481, 792826768, 161215104, 100247451, 56538795, 16786665, 886982972, 693305495, 314448981, 257640665, 649683684, 126945055, 572277853, 42101116, 19887842, 11487100, 9980943, 8058749, 6775907, 4706544, 3944347, 980774122, 371881919, 493839814, 451361590, 466173874, 846043138, 636828959, 533211919, 35430491, 30815381, 11990602, 38985315, 578702805, 905128170};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 659;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {643896899, 69752293, 62753629, 10893474, 9634581, 944199398, 716666016, 401686039};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {344326102, 158805157, 152707830, 80673138, 79549108, 38579033, 4227297, 277560744, 648237396, 83917533, 42995057, 697568392, 218782097, 785872010, 458910031, 682729819, 464586324, 323756715, 43857640, 38590074, 901796095, 424569317, 130402702, 406877429, 117580827, 4978760, 148090814, 102442379, 813648723, 113187496, 17303301, 733569152, 395129055, 995904053, 24562407, 1709124, 1650927, 1167091, 341543558, 813528652, 317197720, 702193094, 172767074, 70341879, 906690881, 599936900, 136134902, 821273388};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1887;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {785322475, 575611698, 386209557, 16100636, 514270954, 512654602, 834100080, 496722232, 688461010, 68431663, 53113650, 42613848, 36958383, 30272645, 24942753, 901336310, 846159371, 918824213, 487018156, 99171788, 87496040, 15194188, 300503756, 211521972, 999857564, 743547255, 190997324, 169878616, 103989203, 862919225, 165606320, 845369275, 762150092, 341550441, 488993249, 328861901, 964067293, 229229359, 2380414, 703739323, 585176350, 265383979, 337203077, 70068117, 540354310, 347463642, 906244549, 241025792, 922522805};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1676;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {120144538, 918113320, 748711818, 793658416, 145859801, 119591297, 107987831, 834950953, 342980567, 674385670, 463887010, 915210716, 168375905, 72006589, 500237025, 571031870, 988444969, 748903589, 913533490, 418518122, 14557439, 1991694, 246968718, 177060806, 110504112, 17511766, 673267953, 39664691, 3691992, 2002706, 157828058, 55874997, 280972642};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 91;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {674238930, 333213522, 43721117, 706901720, 66555058, 941331544, 142808954, 120705161, 611729823, 280513435, 244999703, 273703553, 263022027, 193705642, 168206874, 475865705, 59089616, 712870809, 38416875, 415456570, 287651801, 748513293, 447905156, 710033364, 27223483, 9059572, 554766671, 458368348, 299379914, 38771763, 5152007, 3916863, 843331309, 119265160, 42000826, 227437498, 62059810, 51221362, 42562652, 600066880, 571620919, 211295332};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 425;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {375461563, 991275640, 111566135, 664049528, 524752842, 11035299, 3392210, 2546888, 91849501, 79457007, 44591090, 41522003, 7052363, 467772961, 253603722, 187862311, 356286019, 196905937, 252471557, 82404762, 53847282, 175200104, 363222942, 153619554, 65634904, 35184991, 27317728, 729571498, 194426490, 118384431, 32334957, 312372640, 639437006, 471013133, 47014501, 8600179, 4979619, 517494886, 170489677, 260846336, 578235214, 486878555, 834759679, 863271452, 624879683, 29844484, 22732656, 73111743, 70277003, 974879292};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2025;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {101194851, 238969757, 306819459, 388267657, 193403359, 5853274, 4061934, 520594568, 999770263, 597657405, 9178543, 661846828, 430586371, 386024504, 256715353, 505591526, 397983194, 44282648, 597549902, 346894872, 185087126, 182760723, 35204612, 315229206, 761447103, 977065991, 630083856, 2192752, 639421813, 124299305, 996753283, 108247375, 999292196, 366173010, 294050496, 947117459, 302190448, 223294967, 81016498, 361048039, 176980249, 640767045, 360733864, 186551345, 691920936, 494714741, 64047240, 811920265, 253216513, 121118244};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 888;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {423244754, 355214637, 65977708, 494162289, 455431980, 193127620, 549021017, 692796816, 241746108, 946473937, 197943878, 45328570, 959551475, 657373218, 454327717, 322719817, 982722413, 788600456, 313545431, 958128347, 647177588, 961600404, 366631604, 980574793, 112437953, 981171812, 469836576, 995711837, 800754561, 998221251, 399059631, 381211906, 681619384, 93105324, 712408469, 277367651, 194399061, 145896450, 290499588, 709123863};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 335;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {282993741, 909197056, 521171604, 954111890, 737652717, 8263117, 882612226, 265543286, 94801593, 32287211, 830178295, 706852879, 556748031, 866307820, 468738392, 971765212, 562899615, 284101151, 601657470, 545747304};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 41;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {562895644, 19821470, 878398942, 81559144, 959781127, 465564442, 998348083, 425549140, 158321446, 767163171, 322520391, 231344661, 644538018, 269428889, 915824400, 785280676, 929287026, 461397120, 937249829, 884784196, 603043002, 71569963, 712089628, 514428275, 421501316, 5371584, 465540495, 650739147, 60874679, 708221386, 336152333, 258797919, 87196232, 69128767, 67991972, 751697967, 787005436, 785315598, 893042104, 524582287, 30953482, 26716368, 432125953, 249914466, 224604940, 482819952, 169034786, 151193984, 814849210};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 405;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {128431287, 121272569, 116885185, 103964975, 92199455, 85961130, 85631870, 73652707, 70079185, 62423575, 16395510, 136775802, 192507548, 342582742, 334732658, 323639353, 309214303, 264857160, 204933601, 467686741, 454504245, 450378954, 441530121, 439711429, 438508868, 396589548, 581384787, 545498863, 508997183, 490511120, 476597984, 708150234, 707797860, 695690313, 651254659, 581868149, 728518979, 726573438, 909447836, 893536991, 876486515, 862283326, 860035096, 800614495, 795941921, 760455212, 922976560, 929848127, 958414103, 996032375};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 184800;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {24538622, 298000809, 257336230, 250635291, 211512461, 127467724, 55658394, 32862133, 725759214, 705206024, 691095102, 686299962, 683431738, 678054054, 667368362, 603420462, 593842784, 589263452, 583308422, 548514186, 530921506, 475751221, 435626034, 435449352, 415002302, 395009697, 391798174, 387076313, 370244894, 364739823, 825897442, 790561112, 752316346, 841583291, 840265640, 919090507, 928605724, 955741719, 940602045, 970108059, 993473669};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1848;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {705178657, 926904093, 926758079, 793010901, 927338983};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {6865101, 498966724, 490439221, 471510938, 406211719, 371227690, 337532526, 328288811, 286083310, 234179906, 219875469, 206063597, 197103849, 179185779, 176835877, 153120519, 151598583, 150164613, 131868784, 82057111, 66439803, 52404063, 43220520, 22892420, 21059780, 14581597, 502729755, 834687814, 819443098, 781286648, 764237426, 763049493, 719272579, 715367823, 702104023, 679741037, 664937975, 648217089, 641306384, 572475426, 541817957, 925065395, 923404306, 923116961, 922691618, 902059198, 836017929, 997724319, 999099767};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2100;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {6712420, 5675208, 14027289, 13196050, 37148925, 37043536, 27012877, 64584777, 48235258, 74621355, 69157998, 83469371, 79613862, 134833551, 88808475, 141185948, 138913928, 136571004, 194794995, 141534967, 264272176, 260198444, 281884490, 280407695, 389570600, 388978565, 363180574, 455492878, 416884698, 542352360, 521682338, 462585092, 557878929, 551557377, 545406003, 630823604, 630083991, 647130441, 637367920, 809190369, 764488156, 750419910, 866934656, 834165227, 830189191, 964209334, 931357518, 874008039, 998074624, 987113076};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 53747712;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {30057150, 19664082, 72764663, 51177226, 30061932, 110472341, 105562182, 139613295, 128025268, 194401102, 151499349, 142623450, 295390755, 229069439, 298283187, 297345783, 346818161, 333748438, 305557102, 447575703, 433303105, 403115772, 503798490, 466573324, 550147893, 549862926, 507995368, 651890432, 593847906, 571245676, 750801607, 742009415, 855716338, 835406874, 792542003, 874748831, 872180984, 912610325, 884830807, 996686786, 944138800};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2239488;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {83724284, 51941060, 24131729, 169555793, 113088686, 97228082, 181289142, 172958511, 269437815, 250450721, 218012082, 365962017, 314866928, 537374266, 487922175, 450464483, 727415890, 593263667, 797189381, 796858918, 787228576, 917701781, 873857211, 870580522, 994597981};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 5832;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {54138474, 47907795, 83053228, 80615309, 123915928, 110413901, 91009874, 157302325, 142834995, 207191207, 187957931, 160837443, 257826085, 241109671, 211236558, 281812464, 275492905, 317081207, 302412782, 336610780, 318257029, 437209989, 362564725, 342864026, 486349512, 476801298, 469784355, 558980645, 550438668, 626807922, 625568581, 608517383, 692087083, 674977858, 674931551, 735670432, 719867230, 693274034, 802575894, 763770415, 822377338, 815226511, 884186239, 877689066, 824127155, 979587537, 899942013, 885539323, 981506642};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 30233088;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {48795263, 37962870, 72298595, 62137627, 76522641, 72987277, 83156104, 77306754, 212893682, 110139316, 229641401, 217844922, 247247240, 234447593, 277941560, 263477308, 314466867, 280854665, 342337563, 333472928, 358898099, 358696491, 371823813, 368872694, 490361006, 415389780, 503862169, 503586007, 540912551, 521156889, 550643609, 550451827, 575751143, 566983629, 583505384, 579088537, 664762913, 654465263, 733388121, 693410435, 785147389, 782530119, 811641547, 802685682, 895421366, 816069083, 982912493, 967592573, 994052706, 990382605};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 33554432;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {54754283, 39954267, 64695853, 62349523, 98135038, 65513725, 103991373, 102951884, 138535200, 125549405, 309794603, 195314213, 489181743, 339164970, 521317937, 520397034, 545171823, 534457484, 555694890, 546609142, 619941792, 604805817, 746667213, 741418477, 764628804, 761472186, 872175324, 831875791, 935805340, 906763616, 973875154, 962084297};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 65536;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {23433784, 2745506, 108773744, 60688518, 139081653, 123716831, 196299633, 141275100, 235254662, 217655300, 253888503, 246303622, 268129951, 258889010, 297147826, 280264187, 353075007, 339623503, 409564007, 379297299, 443454742, 440353312, 485783694, 483027268, 506940004, 506690191, 535587334, 535137704, 587796133, 552037199, 650927776, 630741723, 655381152, 652876610, 744575255, 741553368, 824541675, 821181109, 902972897, 845959299, 944072954, 906596798, 971725227, 952479652, 994520353, 985541849};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 8388608;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> a = {22241625, 3897820, 35427309, 32336028, 53704080, 42403814, 112415989, 98553365, 131042965, 128558447, 136349636, 136256436, 146496815, 140948361, 202521490, 159278549, 252709315, 235444043, 282092708, 274237652, 342248463, 309495054, 348809114, 347041741, 366681121, 355540539, 372205324, 368926730, 433208482, 383151424, 467281008, 456076315, 561522893, 519869593, 659394681, 567036063, 745093229, 744967234, 772963262, 759108949, 838316830, 775593844, 888890659, 860782742, 898053897, 892509708, 944793225, 917979278, 980432650};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 16777216;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {12603493, 11273707, 6827892, 75264472, 36558598, 20367258, 116748521, 112307168, 75936253, 128416399, 126476911, 122986822, 164393932, 145416457, 133853112, 204567486, 171015048, 166618141, 237139532, 228998407, 219372055, 273309250, 270076956, 258172524, 352939098, 307329242, 283331515, 522533137, 509156290, 492659761, 576128456, 566893120, 544030381, 682931580, 661078573, 577262234, 804559233, 760244716, 696614641, 875067868, 868719951, 848626315, 928587045, 918173347, 904896387, 969109604, 967531249, 929068871, 997155583, 986084056};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 86093442;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> a = {93616941, 20595805, 9805147, 160131167, 122636487, 106200293, 233573908, 194052159, 178032817, 534189013, 496124265, 377230259, 577936297, 546548640, 540609973, 694246148, 685183933, 633929978, 915043728, 805583802, 728975505, 993357158, 938191891};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4374;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> a = {68583081, 53925179, 30627585, 378759782, 312974905, 280702064, 414155805, 407464519, 395342084, 521898790, 473243176, 433074648, 605655140, 604603553, 599087817, 640091220, 638937103, 631200082, 676358770, 674061942, 657347148, 806626762, 740525357, 711357866, 910057731, 885367764, 884099474};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 19683;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> a = {70634729, 48593692, 5508991, 129624475, 98981166, 93871883, 196244743, 182349154, 179405233, 263065553, 245042195, 210736284, 304175215, 278236189, 273572260, 353284597, 311846952, 307367268, 386571375, 386021694, 371865599, 395608142, 389057997, 388704919, 469264063, 463383183, 459755331, 531332664, 506419122, 501500340, 687238097, 626687239, 601173074, 719024081, 714556082, 691622598, 777804363, 733586911, 730929444, 818958602, 811927890, 808293448, 912540692, 862540596, 853438344, 975134305, 965111421, 962424661, 992050375};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 43046721;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> a = {18002378, 17469767, 78715813, 64180894, 21518241, 89029734, 83654297, 82351990, 250635590, 158561443, 155545549, 294738890, 277827399, 275599596, 263486427, 362024286, 314257778, 305340305, 487349017, 420691461, 393650785, 387152134, 545789654, 528704355, 517237142, 652457274, 607984599, 570117940, 553610687, 729700060, 710580381, 653285378, 779635418, 763394404, 736975722, 731972730, 848585019, 837039095, 822674445, 810763250, 920200683, 901187361, 889237480, 963074953, 938645970, 925735942, 993029132, 976389098, 967214322, 10020774};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 40310785;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> a = {213535689, 171923295, 612341882, 609319470, 512566867, 280658019, 841959633, 142087836};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> a = {58091910, 40446179, 368536737, 144411221, 105253470, 104881465, 510828676, 463409933, 377057995, 706309040, 650595239, 519786031, 909606201, 872168594, 838678160, 800459822, 944074915, 684692};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 289;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> a = {42610911, 39720718, 74133702, 73500579, 69932245, 129144364, 124951173, 109456901, 93801057, 158092660, 146098501, 143694794, 259205031, 257519070, 247742171, 367634178, 343895907, 316299707, 414940824, 411982310, 411328750, 397551286, 548618521, 518473148, 458896936, 453511568, 616509993, 600858623, 578389807, 699563806, 674442824, 660632469, 826680279, 787505345, 772363737, 757090131, 870461041, 854392903, 834447450, 902721481, 883182384, 871390692, 956461258, 951553476, 938623451, 928732356, 988458645, 961101882, 37081475};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 26873857;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> a = {43192752, 42901719, 75244498, 48934648, 48043818, 21094063, 90453559, 134470305, 122959409, 178278014, 161705675, 158224971, 82161673, 229668572, 263341247, 254042405, 358840013, 280460757, 385245429, 375410361, 518412326, 504649741, 424876038, 213358071, 598934958, 643184488, 621873154, 602036783, 693266337, 675632544, 705569147, 694514872, 8282363, 713340211, 705912558, 756507773, 819423579, 791892484, 759131286, 565455384, 908168069, 905346299, 882608572, 948646032, 941263360, 924669775, 980634530, 964989392, 719557860, 36785479};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1640406;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> a = {91917157, 69301648, 49558159, 1144272, 156837291, 147031331, 196304292, 162996101, 26718549, 267934077, 238452940, 326306178, 322549123, 321759467, 34095251, 365656910, 420458226, 376773828, 481454473, 481067633, 436094534, 605855355, 540580843, 726879996, 695157059, 658922351, 762792777, 734205495, 776887943, 768812903, 345216148, 790601271, 863461828, 829846496, 801073690, 998865755, 789012945, 110586172, 209353013};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 59760;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> a = {53580271, 49842239, 219692204, 268529111, 239036070, 226764990, 16736575, 476474847, 367346593, 709377800, 672702304, 962489844, 736080041, 717587964, 81363726, 49356912};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 88;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> a = {55625140, 83336784, 77168408, 55998416, 194863211, 176005645, 290610364, 217926914, 343176075, 319368909, 41027502, 363944160, 358813261, 457196531, 452352294, 379801308, 6933352, 488923860, 484919904, 473135618, 542721986, 532369283, 616563851, 585019068, 723012160, 649738908, 621764922, 755932775, 736365052, 805911233, 798105754, 33443657, 810055621, 809259762, 858358515, 851912940, 847417189, 880632022, 866743108, 882252439, 880886207, 357726343, 920365667, 882589407, 982588525, 944454833, 564069951, 861605465, 882397083};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2740906;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> a = {999919198, 992568740, 955854040, 931496431, 918707502, 918256868, 900034017, 895833500, 880162286, 855785961, 846888956, 832142809, 827823729, 799280519, 773274688, 768312119, 760751988, 739540275, 708707221, 690657524, 646011959, 620646488, 617637778, 611731314, 606106057, 591341224, 477269190, 459605687, 452535078, 448931343, 443508252, 431322591, 353804729, 332741678, 226183179, 212890251, 202400490, 172690101, 138068332, 134053698, 117788838, 116315902, 111971903, 103833620, 93509448, 69395931, 62180838, 55479633, 39096187, 10240061};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> a = {971837935, 958551925, 933320597, 913398210, 844076905, 812605858, 765082771, 619583146, 613239049, 521352692, 484530541, 380126551, 373719344, 370475529, 329471987, 272656002, 205787627, 122823850, 15116937};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> a = {923223642, 798986555, 781411603, 754204928, 666195746, 621414919, 600521319, 561735315, 544975052, 483614664, 482505081, 481567706, 460406831, 405437190, 386608431, 159001};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> a = {984686254, 983827492, 941335868, 910330611, 902384240, 893815097, 889425039, 882527054, 853690112, 836513649, 819240190, 807889637, 787245947, 772221616, 747645008, 736462788, 715212441, 682643155, 675046294, 674786256, 669293024, 648692838, 634419025, 617983950, 617830689, 547909999, 531400551, 496070855, 478239067, 421151024, 378183402, 337204352, 310396018, 307182017, 300691110, 287130030, 287071655, 284035116, 280103544, 267405209, 251164023, 240152928, 211457807, 209609302, 202131038, 201143814, 178289642, 110378134, 87135174};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> a = {2920492, 11631554, 18250730, 25326419, 26827303, 55877013, 86605641, 91914997, 104741231, 143003363, 156804602, 167658620, 172364414, 178341371, 248646713, 268400057, 282600467, 299128806, 305962689, 328960736, 355352320, 356451642, 401960762, 404468421, 426806205, 440754132, 479549141, 496049116, 501780359, 512052435, 555309920, 564400048, 605851449, 635506560, 638402921, 712596516, 725093496, 755319322, 782597965, 783522965, 811631124, 814381399, 832146809, 856632570, 865231202, 878334581, 880896553, 916274680, 934389749, 996622659};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> a = {119960044, 437806448};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> a = {10898645, 26508359, 29381840, 52969631, 105916877, 136807199, 221333739, 295206692, 312634141, 322918408, 411974396, 418943666, 503064237, 526882386, 638038090, 666256055, 787238440, 814370960, 872494240, 875052092, 890407147, 947088522, 992432273};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> a = {23031166, 44144287, 51473072, 64513466, 69704912, 76712308, 96616829, 108968134, 115058935, 133337587, 149315708, 164524983, 251753527, 293097301, 296439656, 336175443, 344009558, 374562177, 455973319, 463760957, 467750097, 521902620, 533623888, 534872381, 535257615, 581851318, 600724632, 619467962, 638037414, 638096076, 654968320, 658902615, 679968735, 702286729, 742749758, 779574419, 799386438, 809267394, 821835926, 829377038, 842081691, 844122734, 873485418, 917401080, 940160052, 953104879, 966226419, 975077171, 997811471};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> a = {7198692, 8879725, 23823016, 29281692, 35553395, 70415670, 78007627, 93480308, 97811951, 105466056, 121530922, 134823758, 140149461, 144088225, 145383450, 208755745, 231670865, 268383198, 311989851, 357001122, 359956048, 378303093, 396764707, 436311176, 437798988, 442196916, 506338541, 520778635, 558917096, 573785616, 577570599, 582436289, 588677821, 907304299, 718947140, 751131210, 769292572, 813655228, 842286146, 864973015, 870611763, 888845268, 889229551, 903839411, 668884133, 917791590, 921144374, 925766062, 929403959, 941006360};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> a = {1051925, 6377312, 30837057, 48967027, 87412654, 89291321, 104271663, 141432542, 186018430, 207511190, 249514386, 296690300, 303504340, 312627109, 381838430, 387151562, 554312431, 431572255, 439095199, 461927979, 465525833, 469736357, 474432686, 481983080, 487065770, 518261216, 537045987, 548770447, 552091928, 552423060, 396074578, 554655144, 568801523, 626488825, 676028561, 690794190, 736930574, 743984232, 751446036, 754083874, 756509793, 853123722, 873160352, 873682257, 882595880, 886137261, 899037402, 905336419, 921909335};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> a = {561800264, 21724912, 33545068, 235302892, 867452317, 435425542, 592486804, 169846767, 580855367, 341659329, 136194649, 949527749, 471812457, 224069309, 522952719, 323892790, 364921168, 291084711, 205745688, 480024264, 442994457, 463633823, 17805857, 541753726, 510877555, 255958051, 688561076, 854721648, 557056949, 728921846, 423301906, 111447157, 135934288, 587037063, 689785083, 604156720, 620560945, 578307087, 704923379, 748241528, 242172971, 929585265, 511665653, 803092067, 628846920, 570659555, 83036594, 656382709, 873342720, 388142336};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1458;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> a = {49355587, 69619386, 418794084, 915235958, 231670915, 762550552, 276912766, 958948337, 276767546, 773231141, 798126674, 82079483, 70572896, 993223212};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> a = {285250598, 91391565, 315207428, 340635785, 556338594, 147013530, 79651731, 111635064, 101850582, 386027845, 936673331, 122018602, 834828084, 597236886, 590174567, 785203710, 707358379, 862868303, 579497278, 878143998, 446574294};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 98;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> a = {2716746, 4492686, 4736608, 12876208, 26243236, 37969486, 109052922, 873621663, 87523824, 94984955, 97768891, 105284453, 44651286, 142980343, 170236963, 173953018, 187848423, 193292302, 196615168, 348624414, 382813797, 395212674, 425400617, 432161751, 463877928, 474172261, 482829053, 484855469, 495140965, 501495520, 515866484, 545592212, 606083895, 650593201, 694317886, 726031374, 741288013, 746464943, 751918997, 756256539, 839409239, 848254700, 860685424, 873050331, 74550667, 883649971, 929519465, 939595196, 976174322, 983385108};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> a = {4751617, 27010441, 38498532, 104754510, 144657364, 119257465, 166217262, 229646854, 337264633, 908795488, 531802211, 659504258, 713713425, 756506981, 865316036, 340802498, 943742738, 944612288, 992373803};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> a = {424, 2234, 306, 21};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> a = {1};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> a = {564, 234, 34, 4365, 424, 2234, 306, 21, 934, 592, 195, 2395, 2396, 29345, 13295423, 23945, 2};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 41;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> a = {50, 82, 83, 84, 67, 68, 58, 59, 60, 61, 62, 76, 77, 69, 70, 71, 72, 73, 63, 64, 65, 54, 55, 56, 85, 90, 91, 92, 93, 94, 51, 66, 57, 74, 75, 53, 86, 87, 88, 89, 52, 78, 79, 80, 81, 95, 96, 97};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> a = {1, 5, 4, 6, 3, 2, 7, 15, 14, 13, 10, 12};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> a = {1, 2, 100, 3, 1000, 36111, 7, 5, 4, 10000, 1000000, 45, 56, 68, 3456, 123789, 23672, 67231, 456211};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 31;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> a = {1, 4, 8, 10, 44, 5, 234, 7, 23, 4234, 21, 52, 24, 34, 331, 334, 338, 3310, 3344, 335, 33234, 337, 3323, 334234, 3321, 3352, 3324, 3334};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 147;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> a = {3, 2, 1, 6, 5, 4, 9, 8, 7, 12, 11, 10, 15, 14, 13, 18, 17, 16, 21, 20, 19, 24, 23, 22, 27, 26, 25, 30, 29, 28, 33, 32, 31, 36, 35, 34, 39, 38, 37, 42, 41, 40, 45, 44, 43, 48, 47, 46, 50, 49};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 86093442;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> a = {6, 8, 5, 3, 2, 4, 1, 7, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 20, 19, 22, 21, 24, 23, 26, 25, 28, 27, 30, 29, 31, 32, 34, 33, 36, 35, 38, 37, 40, 39, 42, 41, 44, 43, 46, 45, 48, 47, 49, 50};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3145728;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> a = {100000, 200000, 50, 100, 50000};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> a = {55555, 66666, 888888, 999999, 1000000, 1002222, 8888, 9999, 555557, 4545, 1, 454545, 333, 78789, 12111, 405, 454645, 789789, 45642, 1212124, 4575, 78778, 797897897, 74544, 7878, 5544, 121212, 45757};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> a = {489685781, 312322846, 902498315, 439973224, 507056234, 258966893, 169906797, 360722859, 823851351, 768765758, 989072729, 16074449, 685833945};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> a = {455434352, 13443, 4316, 4537, 3144, 46456, 8845, 23134, 1346576, 1234345, 76435, 222, 345, 23432, 7, 356, 23452435, 234560, 23465, 7543, 347, 33333, 23456, 24657, 3575645, 999999999, 99999998, 65675876, 99999995};
    IncreasingSubsequences* pObj = new IncreasingSubsequences();
    clock_t start = clock();
    long result = pObj->count(a);
    clock_t end = clock();
    delete pObj;
    long expected = 229;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22660722&rd=10672&pm=7753
********************************************************************************
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
 
long long n,i,j,k;
bool br[100][100];
long long mr[100];
 
class IncreasingSubsequences {
public:
  long long count(vector <int>);
};
 
long long IncreasingSubsequences::count(vector <int> a) {
  a.push_back(2000000000);
  n=a.size();
  mr[0]=1;
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(a[j]>a[i])
      {
        k=i+1;
        while(k<j && (a[k]<=a[i] || a[k]>=a[j]))
          k++;
        if(k>=j)
          br[i][j]=1;
        else
          br[i][j]=0;
      }
      else
        br[i][j]=0;
  for(i=1;i<n;i++)
  {
    mr[i]=0;
    for(j=0;j<i;j++)
      if(br[j][i])
        mr[i]+=mr[j];
    if(mr[i]==0)
      mr[i]=1;
  }
  return mr[n-1];
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/