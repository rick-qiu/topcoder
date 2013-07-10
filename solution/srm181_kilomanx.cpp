/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2288
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

class KiloManX {
public:
    int leastShots(vector<string> damageChart, vector<int> bossHealth);
};

int KiloManX::leastShots(vector<string> damageChart, vector<int> bossHealth) {
    int ret;
    return ret;
}


int test0() {
    vector<string> damageChart = {"070", "500", "140"};
    vector<int> bossHealth = {150, 150, 150};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> damageChart = {"1542", "7935", "1139", "8882"};
    vector<int> bossHealth = {150, 150, 150, 150};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 205;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> damageChart = {"07", "40"};
    vector<int> bossHealth = {150, 10};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> damageChart = {"198573618294842", "159819849819205", "698849290010992", "000000000000000", "139581938009384", "158919111891911", "182731827381787", "135788359198718", "187587819218927", "185783759199192", "857819038188122", "897387187472737", "159938981818247", "128974182773177", "135885818282838"};
    vector<int> bossHealth = {157, 1984, 577, 3001, 2003, 2984, 5988, 190003, 9000, 102930, 5938, 1000000, 1000000, 5892, 38};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 260445;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> damageChart = {"02111111", "10711111", "11071111", "11104111", "41110111", "11111031", "11111107", "11111210"};
    vector<int> bossHealth = {28, 28, 28, 28, 28, 28, 28, 28};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> damageChart = {"84864526478851", "83416770395308", "29625489225615", "78951390260665", "18359094695830", "75743617007499", "07535006290985", "94789444361580", "99026753769079", "18622313057331", "04193312077057", "24852776009269", "71077373905992", "14131085782981"};
    vector<int> bossHealth = {297135, 157577, 887133, 28164, 114079, 557243, 816852, 369128, 751517, 502951, 363721, 899916, 299081, 276958};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 745116;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> damageChart = {"2006339", "5454474", "2009339", "7685892", "1693811", "4419064", "6509700"};
    vector<int> bossHealth = {652153, 980136, 832152, 294711, 368023, 836430, 205136};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 725805;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> damageChart = {"083", "796", "708"};
    vector<int> bossHealth = {72932, 146107, 457622};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 167467;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> damageChart = {"997547639664", "968931936825", "843916225971", "844720428434", "727432916429", "271781875269", "521396769724", "937779798087", "166814867116", "814907390060", "151060778581", "969691474984"};
    vector<int> bossHealth = {831317, 158824, 270956, 285349, 757854, 32612, 731529, 217458, 732090, 889443, 718218, 807436};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 753756;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> damageChart = {"6423262051", "0859268641", "1375366553", "9394620847", "1667885870", "9038766341", "6346900116", "9235113792", "7032108762", "9485298419"};
    vector<int> bossHealth = {212362, 298531, 30914, 584797, 334478, 397056, 190720, 798943, 674405, 161301};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 480159;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> damageChart = {"320532", "338845", "897972", "085221", "190452", "984138"};
    vector<int> bossHealth = {604614, 165979, 608674, 98075, 514929, 428848};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 421420;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> damageChart = {"88888", "28673", "00412", "86496", "90196"};
    vector<int> bossHealth = {61661, 606003, 289541, 92941, 551202};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 252833;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> damageChart = {"919792781202", "944701990109", "923936027217", "407737921614", "725965858371", "975618578453", "447721193881", "487414723215", "282237874566", "888286527260", "833276916349", "128775585323"};
    vector<int> bossHealth = {243373, 100978, 861809, 422712, 635101, 559077, 857692, 163029, 550681, 162507, 746743, 603340};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 784127;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> damageChart = {"1115728917", "8826588026", "8387689518", "9410983976", "6861411535", "1401169032", "0372582800", "6802945291", "7259568581", "9846027327"};
    vector<int> bossHealth = {288446, 247870, 802506, 270826, 447494, 242448, 64642, 45702, 140380, 490604};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 417607;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> damageChart = {"97783560", "30914848", "59146013", "58660901", "97124829", "83341738", "86266693", "45067276"};
    vector<int> bossHealth = {659481, 32220, 3259, 998577, 689280, 811653, 997887, 721590};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 626346;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> damageChart = {"349", "306", "111"};
    vector<int> bossHealth = {842902, 378131, 564185};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 721787;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> damageChart = {"06788115499601", "64930443404748", "70876576901391", "02488338771378", "03873662268382", "68582960291284", "78481275967327", "60940432515838", "21299793178057", "57439480034641", "67981492395485", "73242981581518", "37995198792008", "60555007908482"};
    vector<int> bossHealth = {124692, 285022, 901351, 290396, 108259, 601712, 76447, 435356, 398463, 682677, 693514, 197572, 667468, 886079};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 802419;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> damageChart = {"760937439", "129989300", "571736192", "360858841", "887719730", "860127290", "822270466", "262643324", "417494608"};
    vector<int> bossHealth = {623146, 223833, 460770, 700649, 974084, 902542, 501653, 375478, 172240};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 720103;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> damageChart = {"2506134867004", "3802495249142", "2623160124472", "2643073397241", "8623061222824", "1600036489112", "1067343576318", "5370908029583", "3956388971438", "3916790611691", "8889410994775", "6019878236154", "2713014928257"};
    vector<int> bossHealth = {142903, 772162, 693397, 400552, 432697, 523483, 419103, 167481, 220683, 898241, 216508, 812903, 233515};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 810350;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> damageChart = {"8"};
    vector<int> bossHealth = {870606};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 870606;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> damageChart = {"395655996", "479163226", "068001935", "233084769", "488147053", "597196226", "339055573", "040998002", "929598407"};
    vector<int> bossHealth = {349781, 836503, 29892, 502230, 56058, 968396, 122441, 274879, 232511};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 423494;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> damageChart = {"50954173195", "58943828110", "33910010560", "64771280030", "97601613668", "67860039303", "29640843863", "66629995975", "95700650172", "71258764042", "77388805592"};
    vector<int> bossHealth = {777814, 934660, 703583, 806362, 762115, 647936, 432564, 623714, 235028, 978711, 89576};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 876722;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> damageChart = {"836699038988768", "440879106639566", "661442347365254", "228207437213169", "045399625363909", "321373219930269", "363802987733045", "199426847760907", "845247665331835", "375519196982102", "086623599342457", "984656677288698", "808781032968303", "224709566404266", "076966269678428"};
    vector<int> bossHealth = {69629, 6425, 103883, 792273, 675524, 440994, 503822, 197479, 973032, 747181, 213634, 930395, 780485, 180706, 550801};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 811936;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> damageChart = {"898", "956", "336"};
    vector<int> bossHealth = {601150, 963313, 778625};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 805514;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> damageChart = {"4411", "9344", "7357", "8933"};
    vector<int> bossHealth = {406273, 301367, 812474, 47932};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 329679;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> damageChart = {"0341", "2281", "4182", "4464"};
    vector<int> bossHealth = {373584, 247162, 983985, 57336};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 335522;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> damageChart = {"60475289", "56902324", "36064501", "36441239", "27670687", "40773138", "76441754", "39041456"};
    vector<int> bossHealth = {777602, 305834, 61996, 674534, 920180, 326075, 257391, 994835};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 712123;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> damageChart = {"93", "11"};
    vector<int> bossHealth = {491419, 361980};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 612079;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> damageChart = {"45272936942280", "01365327987418", "20895360206360", "66087464902009", "41981779069587", "84760059614728", "72934837736097", "57433423674208", "94689715542571", "58827550995560", "99083764699254", "95743781233339", "01992998872564", "92007762643979"};
    vector<int> bossHealth = {581673, 915733, 983339, 589606, 683787, 58980, 690665, 678189, 237749, 148325, 795127, 175270, 595642, 693682};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 935167;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> damageChart = {"0574573", "4350719", "6041097", "9579960", "3763239", "9223593", "4051212"};
    vector<int> bossHealth = {353753, 70283, 259402, 88604, 361148, 264821, 61204};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 251363;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> damageChart = {"6343297786", "0015170423", "6551786689", "7551070848", "6600427481", "9466754434", "5190229306", "3826860528", "8146921385", "8389601753"};
    vector<int> bossHealth = {856344, 347400, 749515, 725809, 808538, 849293, 195765, 65978, 624581, 361720};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 715831;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> damageChart = {"02972307177", "55738003644", "04140069572", "74604324199", "02724180704", "15511470866", "66300731655", "47078068573", "09768974632", "95360445005", "09326173794"};
    vector<int> bossHealth = {268567, 466307, 894575, 552596, 889466, 975749, 725964, 392559, 138752, 218743, 891897};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 888269;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> damageChart = {"060520792725", "354824502967", "815161760734", "013405130635", "085283165891", "069255658928", "631694315953", "461950276291", "779763526808", "249755293318", "337178565631", "985568514501"};
    vector<int> bossHealth = {404503, 465234, 212901, 697836, 115739, 764652, 386887, 400863, 49548, 322734, 506954, 882355};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 664579;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> damageChart = {"039", "661", "778"};
    vector<int> bossHealth = {322686, 25024, 375719};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 120552;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> damageChart = {"6"};
    vector<int> bossHealth = {373953};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 373953;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> damageChart = {"111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111", "111111111111111"};
    vector<int> bossHealth = {150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 2250;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> damageChart = {"222222222222222", "222222222222222", "222222222222222", "222222222222222", "222222222222222", "222222222222222", "222222222222222", "222222222222222", "222222222222222", "222222222222222", "222222222222222", "222222222222222", "222222222222222", "222222222222222", "222222222222222"};
    vector<int> bossHealth = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 800;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> damageChart = {"09900", "00090", "00009", "00000", "00000"};
    vector<int> bossHealth = {1000, 1000, 1000, 1000, 1000};
    KiloManX* pObj = new KiloManX();
    clock_t start = clock();
    int result = pObj->leastShots(damageChart, bossHealth);
    clock_t end = clock();
    delete pObj;
    int expected = 1448;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=262936&rd=4725&pm=2288
********************************************************************************
// Includes
 
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
 
// Macros
 
typedef long double ld;
typedef long long ll;
template <class T> T MIN(const T &x, const T &y) {return x<y? x:y;}
template <class T> T MAX(const T &x, const T &y) {return x>y? x:y;}
template <class T> T ABS(const T &x) {return x>0? x:-x;}
template <class T> void SWAP(T &x, T &y) {T z=x; x=y; y=z;}
const ld PI = 3.14159265358979323846;
const ld EPSILON = 0.000000000001;
 
// General parsing/formatting
 
ll toInt(string s) {stringstream in(s, ios_base::in); ll result; in >> result; return result;}
ld toDouble(string s) {stringstream in(s, ios_base::in); ld result; in >> result; return result;}
string toString(ll n) {stringstream out(ios_base::out); out << n; return out.str();}
string toString(ld d, int precision = -1) {stringstream out(ios_base::out); if (precision >= 0) {out.precision(precision); out.setf(ios::fixed);} out << d; string s=out.str();
  bool nonZero=false; for(int i=0;i<s.size();i++) if (s[i]!='0' && s[i]!='-' && s[i]!='.') nonZero=true; if (s[0]=='-' && !nonZero) return s.substr(1); else return s;}
string toString(int n) {return toString((ll)(n));}
string toString(char ch) {string s="?"; s[0]=ch; return s;}
string toString(const string &s) {return s;}
template <class U, class V> string toString(pair<U,V> u) {return toString("(") + toString(u.first) + "," + toString(u.second) + ")";}
template <class T> string toString(const vector<T> &v, string delim=",") {string s="("; for(int i=0;i<v.size();i++) {if(i!=0)s+=delim; s += toString(v[i]);} return s+")";}
template <class T> string toString(const set<T> &t, string delim=",") {string s="{"; for(typename set<T>::const_iterator it=t.begin(); it!=t.end(); it++) {if(it!=t.begin())s+=delim+" "; s += toString(*it);} return s+"}";}
template <class U, class V> string toString(const map<U,V> &m, string delim=",") {string s="{"; for(typename map<U,V>::const_iterator it=m.begin(); it!=m.end(); it++) {if(it!=m.begin())s+=delim+" "; s += toString(it->first) + "->" + toString(it->second);} return s+"}";}
int getNumWords(string s, string delim=" ") {int count=0; for(int i=0; i<s.size(); i++) if ( (i==0 || delim.find(s[i-1])!=-1) && delim.find(s[i]) == -1) count++; return count;}
string getWord(string s, int j, string delim=" ") {int count=0; string t; for(int i=0; i<s.size(); i++) {if (delim.find(s[i])==-1) t += s[i]; else {if (i!=0 && delim.find(s[i-1]) == -1) count++; if(count>j) return t; t="";}} return t;}
string getDelimiter(string s, int j, string delim=" ") {int count=0; string t; for(int i=0; i<s.size(); i++) {if (delim.find(s[i])!=-1) t += s[i]; else {if (i==0 || delim.find(s[i-1]) != -1) count++; if(count>j) return t; t="";}} return t;}
 
// Basic math
 
bool isEqual(ld v1, ld v2) {return ABS(v1-v2)<EPSILON;}
bool isLess(ld v1, ld v2) {return v1-v2<-EPSILON;}
ll gcd(ll n1, ll n2) {return n2==0? ABS(n1) : gcd(n2,n1%n2);}
ll lcm(ll n1, ll n2) {return n1==0 && n2==0? 0 : ABS(n1*n2)/gcd(n1,n2);}
 
// Real code
 
class KiloManX 
{
  public:
  
  int n;
  vector<string> damageChart;
  vector<int> bossHealth;
  map<int,ll> best;
  
  ll getBest(int done)
  {
    if (done == (1<<n)-1) return 0;
    if (best.count(done)) return best[done];
    
    ll bestCost = 12345678912345;
    for (int nb = 0; nb < n; nb++)
    if (! (done & (1 << nb)) )
    {
      int nextDone = done + (1 << nb);
      int md = 1;
      for (int j = 0; j < n; j++)
      if (done & (1 << j))
      md >?= (damageChart[j][nb]-'0');
      ll cost = bossHealth[nb];
      cost += (md-1);
      cost /= md;
      
      bestCost <?= (cost + getBest(nextDone));
    }
    
    best[done] = bestCost;
    return bestCost;
  }
  
  int leastShots(vector <string> _damageChart, vector <int> _bossHealth) 
  {
    damageChart = _damageChart;
    bossHealth = _bossHealth;
    n = damageChart.size();
    
    return getBest(0);
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/