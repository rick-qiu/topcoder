/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10074
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

class CakesEqualization {
public:
    double fairDivision(vector<int> weights, int maxCuts);
};

double CakesEqualization::fairDivision(vector<int> weights, int maxCuts) {
    double ret;
    return ret;
}


int test0() {
    vector<int> weights = {1, 3};
    int maxCuts = 2;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> weights = {1, 1, 1, 1, 1};
    int maxCuts = 4;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> weights = {1, 3};
    int maxCuts = 1;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> weights = {7, 11, 13};
    int maxCuts = 10;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3999999999999999;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> weights = {13, 69, 41, 37, 80};
    int maxCuts = 27;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4666666666666668;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> weights = {414019321, 30667337, 2402966, 173333436, 979544501, 879112468, 105872869, 264147125, 163480207, 247568752, 268968791, 360757816, 20516599, 238075182, 516626934, 952201900, 493717434, 255734317, 87546725, 552635279, 491216890, 285590872, 248633409, 721570995, 499355008, 463260539, 462203095, 407868086, 458998576, 591393203, 992393673, 182025394, 809006700, 166115526, 492696203, 934322316, 803425590, 986506035, 535167763, 68449307, 926215028, 665840054, 100505101, 451543041, 747225566, 634409905, 129470459, 349974178, 658301459, 33478869};
    int maxCuts = 1;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 9.84103069E8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> weights = {642668141, 717461656, 15737233, 767809368, 185221781, 571465275, 198758191, 946131071, 964265411, 13898438, 616247271, 807418634, 601295590, 54020075, 82809572, 312695993, 63217549, 838147636, 940294000, 88884004, 116653155, 226594969, 278190951, 521869603, 268363164, 850029844, 248575478, 366373230, 289070732, 957936064, 576905336, 553490131, 331333714, 251716781, 922864511, 276384786, 965951921, 363284034, 735791604, 662343000, 95036414, 895918671, 454213206, 717848406, 380734261, 689218479, 878007294, 554481959, 470629699, 265096410};
    int maxCuts = 10;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 7.93520196E8;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> weights = {772129825, 384695033, 109856625, 376252680, 738642705, 856403622, 683133038, 14418426, 959992718, 706707680, 96026709, 149711909, 938916325, 506333239, 984232204, 24597788, 781398092, 323783759, 772810878, 797054540, 320854585, 93013200, 805828476, 117834376, 734656926, 857974137, 248180712, 875377657, 619606089, 936361677, 9681141, 974828938, 233855617, 298087020, 265944465, 401060849, 862890588, 786194717, 698113322, 712462470, 784267587, 707755211, 463606237, 181277470, 225966270, 754647608, 566670743, 404958756, 469727906, 55556849};
    int maxCuts = 100;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0481239325E8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> weights = {602379653, 153925919, 714496011, 784820375, 601277492, 846700869, 253903885, 655166961, 52914354, 969629416, 667358261, 965676065, 257525280, 802802103, 538997221, 268401907, 334230444, 995677618, 580998921, 51303493, 12221508, 167471855, 323835605, 994033418, 169546542, 652386403, 971282850, 663661854, 958095569, 323440190, 425871391, 645874256, 773163041, 647133203, 627962096, 430776062, 130364192, 715094288, 715560130, 856832523, 84551658, 632928653, 583102554, 492707655, 535804343, 607717899, 795374944, 511134748, 546226574, 555698439};
    int maxCuts = 1000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4701995875E7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> weights = {661589242, 947320907, 472387331, 736402063, 622284001, 257692065, 760270912, 622106412, 830028132, 896740590, 502349994, 344203862, 523553138, 972126878, 613681383, 690417797, 599523051, 905353449, 246900517, 438896592, 761471398, 449113424, 579583069, 992131214, 661546153, 776823227, 466744227, 810124843, 112552539, 871900940, 246772812, 992911774, 173873146, 882731104, 587636778, 202352975, 469324845, 865826610, 205294255, 357549158, 913439733, 526853624, 418993199, 887014661, 6254084, 452572222, 157718728, 562909555, 114652505, 271689106};
    int maxCuts = 10000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 34517.92156862747;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> weights = {279026531, 698011995, 637438385, 109845286, 855414280, 712375195, 46223461, 442120726, 508833248, 859978909, 765234617, 990663809, 501967870, 65333683, 385646033, 244424271, 1779244, 220239614, 355283735, 673796739, 421144819, 719168009, 474628227, 347109781, 85619284, 969474426, 327132143, 703721465, 159356383, 934126845, 260021909, 178067042, 934219365, 933843938, 464388909, 748059167, 954677034, 415604578, 666111597, 960962172, 790530522, 767929491, 242551486, 633122563, 626676596, 396717498, 933086007, 214754581, 802145165, 672874597};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 710.7880937401787;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> weights = {1};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> weights = {1000000000};
    int maxCuts = 1;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> weights = {1, 1000000000, 1000000000};
    int maxCuts = 1;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 9.99999999E8;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> weights = {50000, 50001};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> weights = {50001, 50002};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9999181744576617E-10;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> weights = {1000000000, 1};
    int maxCuts = 1;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> weights = {1000000000, 1};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 9998.90000099999;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> weights = {25001, 25002};
    int maxCuts = 50000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5999359614937703E-9;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> weights = {922180093, 922180107, 922180155, 922180104, 922180113, 922180261, 922180115, 922180124, 922180230, 922180165, 922180229, 922180276, 922180204, 922180251, 922180217, 922180089, 922180210, 922180122, 922180079, 922180260, 922180153, 922180141, 922180157, 922180283, 922180113, 922180084, 922180240, 922180200, 922180197, 922180304, 922180259, 922180089, 922180194, 922180203, 922180164, 922180099, 922180101, 922180285, 922180148, 922180197, 922180177, 922180268, 922180222, 922180190, 922180179};
    int maxCuts = 58;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 112.5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> weights = {496135, 496135, 496135, 496135, 496135, 496136, 496136, 496135, 496136, 496135, 496136, 496136, 496136, 496135, 496136, 496135, 496136, 496135, 496135, 496135, 496135};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 2.099958000769675E-4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> weights = {568, 579, 540, 537, 515, 546, 548, 546, 501, 535, 512, 537, 537, 519, 557, 511, 534, 515, 539, 565, 556, 571, 562, 552, 519, 497, 498, 543, 552, 499, 567, 567, 541, 521, 566, 519, 540, 557, 523, 512, 518, 517};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> weights = {162589667, 365085897, 458525206, 504490984, 486917250, 142011733, 848646326, 44221742, 654158730, 769623179, 283564081, 624911215};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 4.400881698602461;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> weights = {47479, 453994, 373064, 43085, 80481, 686215, 437649, 711626, 125334, 278731, 438485, 111259, 626515, 600930, 404385, 16181, 151180, 359698, 825461};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024235744544938598;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> weights = {9735397, 9735389, 9735405, 9735435, 9735441, 9735393};
    int maxCuts = 950;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32704402515810216;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> weights = {79485, 79444, 79455, 79413, 79362, 79373, 79381, 79518, 79434, 79414, 79432, 79369, 79396, 79499, 79476, 79536, 79409, 79451, 79400, 79365, 79507, 79483, 79460, 79337, 79423, 79348, 79453, 79344, 79527, 79452, 79348, 79426, 79534, 79391, 79534, 79356, 79466, 79459, 79438, 79444, 79458, 79525, 79383, 79538, 79417, 79459, 79483, 79341, 79429};
    int maxCuts = 317;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 28.714285714286234;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> weights = {509576654, 509602640, 509621703, 509592052, 509588845, 509616957, 509599279, 509598126, 509608549, 509621319, 509616236, 509569457, 509576522, 509590809, 509567704, 509580399, 509584127, 509596967, 509598749, 509562082, 509577635, 509591503, 509562372, 509588340, 509596479, 509577331, 509590101, 509580356, 509603410, 509603841, 509581167, 509575931, 509579489, 509565399};
    int maxCuts = 711;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 2839.0952380932868;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> weights = {91, 282, 184, 87, 182, 300, 133, 202, 242, 186, 151, 181, 246, 161};
    int maxCuts = 52;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 8.700000000000003;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> weights = {883, 616, 1067, 264, 321, 943, 673, 940};
    int maxCuts = 9;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 177.5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> weights = {21064, 21073, 21069, 21069, 21050, 21076, 21072, 21066, 21054, 21073, 21069, 21057, 21062, 21079, 21069, 21063, 21051, 21069, 21075};
    int maxCuts = 68;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 7.25;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> weights = {26656725, 396508525, 412120998, 465487500};
    int maxCuts = 99380;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04594895564514445;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> weights = {31577, 53637, 77182, 12453, 333684, 46728, 295227, 320941, 311724, 29075, 112479, 43525, 334024, 291029, 57697, 81660, 233517, 162834, 229640, 211977, 306414, 170329, 159425, 11438, 209478, 70701, 68216, 158861, 333876, 237744, 265208, 172610, 159220, 270547, 8337, 334979, 144120, 147014, 151099, 255670};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10802571111044301;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> weights = {2108612, 2108608, 2108633, 2108541, 2108519, 2108641, 2108355, 2108387, 2108548, 2108574, 2108607, 2108348, 2108529, 2108347, 2108347, 2108589, 2108333, 2108576, 2108363, 2108575, 2108481, 2108346, 2108673, 2108347, 2108418, 2108599, 2108333, 2108600, 2108405, 2108449, 2108504, 2108675, 2108515, 2108524, 2108588, 2108465};
    int maxCuts = 490;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 24.428571428579744;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> weights = {9571482, 9571475, 9571486, 9571473, 9571478, 9571471, 9571467, 9571479, 9571484, 9571492, 9571485, 9571486, 9571467, 9571469, 9571490, 9571478, 9571472, 9571485, 9571485, 9571486, 9571471, 9571474, 9571483, 9571486, 9571483};
    int maxCuts = 34;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> weights = {530, 1045, 955, 897, 570, 725, 664, 479, 520, 576, 646, 941, 452, 704, 818, 687, 703, 589, 588, 504, 900, 690, 448, 573, 736, 819, 514, 478, 964, 1049, 795, 699, 980, 735, 391, 885, 347, 989, 828, 829, 578, 412, 389, 745, 563, 650, 676};
    int maxCuts = 171;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 43.83333333333334;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> weights = {93422, 93514, 93724, 93579, 93464, 93465, 93371, 93733, 93631, 93355, 93582, 93352, 93370, 93366, 93248, 93655, 93568, 93724, 93622, 93723, 93420, 93722, 93341, 93268, 93631, 93308, 93730, 93384, 93316, 93582, 93630, 93416, 93735, 93306, 93674, 93672, 93609};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.010883133543558188;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> weights = {133688388, 208814873, 139173046, 138368101, 116850455, 58279275, 71581508, 187642593, 71880890, 45627151, 81008835, 226887172};
    int maxCuts = 5;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 8.8061237E7;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> weights = {893545, 390327, 386079, 260319, 700159, 808438, 853745, 754193, 710564, 725067, 233345, 173424, 187678, 630818, 688470, 850363, 688048, 615756, 199894, 488677, 157828, 848050, 746965, 876043, 96610, 284191, 388038, 204733, 187052, 677082, 130643, 387830, 516838, 525205, 698211, 532109, 853128, 283604, 819173, 266934, 611856, 348489, 739188, 535786};
    int maxCuts = 6640;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 44.4750402576492;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> weights = {52440, 52439, 52439, 52439, 52441, 52442, 52439, 52439, 52442, 52439, 52442};
    int maxCuts = 16;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> weights = {9675116, 9678709, 2972531, 8466812, 7677997, 4796386, 5159827, 5621682, 8264418, 5302557, 3695413, 3092194, 4552568, 4517286, 6102018, 6461121, 5683354, 3084725, 7796480, 3467560, 7504406, 5678211, 3500005, 8566644, 6691536, 9301093};
    int maxCuts = 8;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 4531875.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> weights = {640637081, 640637082};
    int maxCuts = 397;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005025125574320555;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> weights = {1634891, 1258083, 691268, 2106779, 949933, 588833, 2758815, 1176411, 905057, 379153, 2519527, 2907031, 2004454, 1132105, 824007, 469408, 839389, 613862, 1086752, 1486577, 1074765, 224681, 365663, 1362101, 1781851, 1352091, 2599815, 1681120, 2355910, 2914604, 1340636, 2640115, 1083205, 659738, 1038414, 1152505, 124350, 1182579, 2786615, 1106470, 2156154};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.40577247389899185;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> weights = {5577, 5591, 5596, 5583, 5595, 5591, 5599, 5579, 5591};
    int maxCuts = 8;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 22.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> weights = {9, 7, 9, 10, 8, 10, 10, 7, 10, 10, 9, 8, 10, 7, 8, 7, 9, 7, 9, 7, 7, 9, 10, 8, 9, 8, 8, 7, 9, 7, 7, 7, 9};
    int maxCuts = 11;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> weights = {10, 12, 12, 10, 10, 9, 10, 10, 11, 10, 10, 10, 12, 11};
    int maxCuts = 652;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> weights = {58343, 312, 56576, 5851, 16338, 58039, 43842, 3469, 24531, 11711, 54878, 19340, 41125, 57069, 2608, 38983, 49844, 18497, 61355, 53568, 47256, 1034, 56554, 13908, 31792, 22017, 49621, 59416, 42071, 35698, 9068, 44639, 45638, 46229, 8371};
    int maxCuts = 15;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 43530.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> weights = {10, 11, 6, 3, 8, 2, 11, 7, 7, 8, 3, 5, 9, 2, 4, 4, 7, 6, 11, 10, 11, 5, 11, 3, 3, 9, 6};
    int maxCuts = 4588;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> weights = {74374, 74378, 74375, 74375, 74378, 74377, 74377, 74376, 74376, 74374, 74376, 74374, 74375, 74374, 74377, 74374, 74374, 74377, 74375, 74376, 74377, 74375, 74378, 74374, 74375, 74378, 74377, 74378, 74377, 74376, 74375, 74376, 74378, 74378, 74376, 74374, 74376, 74374, 74378, 74376, 74374, 74378, 74374, 74377, 74378};
    int maxCuts = 30;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> weights = {5360950, 5283427, 5302194};
    int maxCuts = 5;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 38761.5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> weights = {382467279, 188433726, 103322671, 247885910, 200967605};
    int maxCuts = 2;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 9.7644934E7;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> weights = {324258, 328359, 193963, 331300, 342894, 38357, 34372, 414304, 308476, 177702, 78075, 285812, 163612, 371025, 218540, 15307, 15145, 200103, 318176, 242599, 262796, 235903, 152100, 91055, 156568, 260111, 89994, 410305, 346620, 179402, 194679, 94639, 213055, 186971, 34894, 153027, 412038, 293111, 374137, 297558, 30589, 275627, 314497, 232093, 21270, 216936, 170748, 51590};
    int maxCuts = 1205;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 1378.4571428571435;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> weights = {8506852, 8506852, 8506855, 8506854, 8506855, 8506855, 8506854, 8506856, 8506853, 8506855, 8506855, 8506852, 8506853, 8506852, 8506856, 8506852, 8506855, 8506852, 8506855, 8506856, 8506853, 8506855, 8506856, 8506853, 8506852, 8506853, 8506856, 8506855, 8506856, 8506853, 8506854, 8506854, 8506856, 8506856, 8506856, 8506852, 8506855, 8506856, 8506855, 8506854, 8506853, 8506856, 8506855, 8506853, 8506852};
    int maxCuts = 73301;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0024554941683163634;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> weights = {2372, 3533, 2224, 6182, 4906, 5175, 1824, 3761, 1886, 5041, 1549, 2094, 3329, 4818, 1236, 2480, 4588, 3668, 5007, 4074, 5554, 2255, 6130, 5612, 2194, 4084, 4780, 1927, 3640, 3370, 2298, 3970, 1049, 3141, 1221, 2738, 3075, 5628, 1323, 3494, 3201, 5083, 1239};
    int maxCuts = 7;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 3992.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> weights = {2397491, 5461562, 26639409, 52480204, 3616992, 16806675, 47905668, 24896680, 44912601, 1394807, 35634828, 27609509, 2617074, 46735137, 125958, 17674320, 1329260, 21712283, 10301691, 4732401, 25893563, 13152217, 31259691, 9785882, 5854989, 52891586, 37616234, 42987805, 25175878, 23127985, 19539963, 38430469, 46213225, 6238879, 43356366, 746394, 31416949, 46679474, 14262989, 28420975, 24212391, 18140057, 38802732, 19548496, 50817512, 26568403, 38943067};
    int maxCuts = 11;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8676774E7;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> weights = {410039, 410045, 410034, 410032, 410045, 410041, 410030, 410036, 410032, 410032, 410040, 410033, 410028, 410033, 410035, 410044, 410039, 410034, 410032, 410038, 410037, 410038, 410037, 410033, 410037, 410034, 410041, 410029, 410030, 410031};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00509898020396804;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> weights = {81903519, 81936146, 81944126, 81920211, 81890132, 81938123, 81922241, 81887076, 81892478, 81945207, 81891680, 81908686, 81926952, 81917855, 81884110, 81918738, 81921518, 81899810, 81944393, 81918200, 81918566, 81912805, 81913194, 81936174, 81886919, 81945644, 81893128, 81917413, 81914983, 81926898, 81890943, 81924744, 81933168, 81898122, 81936214, 81890597, 81893055, 81902149, 81904807, 81920914, 81936682};
    int maxCuts = 532;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 4733.384615384974;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> weights = {928143320, 747497605, 65274849, 595601562, 788812503, 124704964, 637427825, 4963931, 135628265, 815452656, 513471785, 935585367, 813703268, 337631346, 922923758, 534193530, 949144149, 775176253, 506323223};
    int maxCuts = 25898;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 1095.0821316614165;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> weights = {45691, 5436, 89948, 30021, 14787, 33748, 21145, 89097, 35587, 71868, 87375, 40159, 93079};
    int maxCuts = 1;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 84512.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> weights = {87, 87, 89, 87, 90, 88, 87, 89, 90, 87, 90, 88, 87, 88, 89, 88, 88, 90, 88, 88, 90, 89, 90, 90, 90, 88, 89, 87, 89, 90, 88, 89, 89, 88, 90};
    int maxCuts = 9;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> weights = {3422592, 3174777, 3543766, 3132815, 3517087, 3283732, 3177866, 3132594, 3341501, 3328550, 3516815, 3539516, 3254481, 3170259, 3559819, 3190716, 3182996, 3258023, 3298400, 3226312, 3363435, 3367518, 3493532, 3359127, 3567048, 3515697, 3483112};
    int maxCuts = 4;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 434454.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> weights = {366383, 528664, 319183, 544044, 265961, 328486, 468721};
    int maxCuts = 7;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 106369.5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> weights = {66057711, 66056973, 66056293, 66056067, 66056851, 66055615, 66056898, 66056648, 66057036, 66056929, 66058102, 66058179, 66056361, 66057638, 66055666, 66058074, 66055931, 66056174, 66056286, 66057540, 66056387, 66057098, 66056986, 66055595, 66057473, 66056731, 66056948, 66058048, 66056994, 66056295, 66056583, 66056731};
    int maxCuts = 529;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 152.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> weights = {15, 12, 12, 11, 14, 12, 13, 18, 18, 12, 11, 11, 11, 13, 12, 13, 18, 11, 14, 13, 18, 17, 11, 12, 13, 12, 12, 12, 17, 12, 14, 14, 15, 18, 12, 17};
    int maxCuts = 99;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
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
    vector<int> weights = {65184117, 65184719, 65181267, 65183376, 65177297, 65178377, 65181427, 65176429, 65182844};
    int maxCuts = 28;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 2072.5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> weights = {86620453, 86620429, 86620477, 86620452, 86620457, 86620487, 86620453, 86620428, 86620479, 86620495, 86620475, 86620426, 86620458, 86620460, 86620464, 86620498, 86620434, 86620494};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012958963283381308;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> weights = {61790, 142925, 115024, 134617, 111021, 107809, 101595, 131778, 120857, 103023, 108985, 83307, 139198, 98887, 114612, 118099, 103146, 65641, 107680, 125540, 69544, 137936, 143844, 112534, 143020, 87270, 140920, 80061, 133765, 100665, 135094, 97260, 94733, 79988, 102689, 77032, 72604, 130925, 115901, 104344, 70350, 100088, 115978, 113267, 70811, 64328, 123496, 114270, 108066};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.022148722550305422;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> weights = {4082, 8099, 4288, 2337, 2411, 6855, 8199, 5615, 4150, 599, 487, 974, 1722};
    int maxCuts = 283;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 21.77000000000001;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> weights = {2032113, 5112438, 3715652, 2975551, 3453622, 3844669, 2051226, 1983277, 452968, 4257740, 1696706, 5066009, 4221857, 505919, 3846567, 1697062, 3222755, 1826631, 1656634, 4602301, 3699480, 3023650, 2176160, 1993562, 5336403, 661743, 4957928, 3648699, 5487555, 485458, 727981, 4753185, 5389926, 2750656, 5277295, 2993856, 1244043, 3663053, 1956197, 955177, 5162614, 5203003};
    int maxCuts = 79;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 829221.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> weights = {738565, 1284884, 753878, 793501, 1118794, 1274071, 757984, 889019, 772949, 1078995, 867214, 1033330, 1036508, 1283807, 1295674, 1129633, 1149176, 1258824, 1023569, 959144, 1090502};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.029908052340886115;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> weights = {41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 24464, 5705, 28145, 23281, 16827, 9961, 491, 2995, 11942, 4827, 5436, 32391, 14604, 3902, 153, 292, 12382, 17421, 18716, 19718, 19895, 5447, 21726, 14771, 11538, 1869, 19912, 25667, 26299, 17035, 9894, 28703, 23811, 31322, 30333, 17673, 4664, 15141, 7711, 28253, 6868};
    int maxCuts = 1337;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 528.4909090909091;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> weights = {804289384, 846930887, 681692778, 714636916, 957747794, 424238336, 719885387, 649760493, 596516650, 189641422, 25202363, 350490028, 783368691, 102520060, 44897764, 967513927, 365180541, 540383427, 304089173, 303455737, 35005212, 521595369, 294702568, 726956430, 336465783, 861021531, 278722863, 233665124, 145174068, 468703136, 101513930, 801979803, 315634023, 635723059, 369133070, 125898168, 59961394, 89018457, 628175012, 656478043, 131176230, 653377374, 859484422, 914544920, 608413785, 756898538, 734575199, 973594325, 149798316, 38664371};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 389.6466434101749;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> weights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 49996.50012499375;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> weights = {999999951, 999999952, 999999953, 999999954, 999999955, 999999956, 999999957, 999999958, 999999959, 999999960, 999999961, 999999962, 999999963, 999999964, 999999965, 999999966, 999999967, 999999968, 999999969, 999999970, 999999971, 999999972, 999999973, 999999974, 999999975, 999999976, 999999977, 999999978, 999999979, 999999980, 999999981, 999999982, 999999983, 999999984, 999999985, 999999986, 999999987, 999999988, 999999989, 999999990, 999999991, 999999992, 999999993, 999999994, 999999995, 999999996, 999999997, 999999998, 999999999, 1000000000};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024487756134476513;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> weights = {2259002, 735898756, 551889953, 285382391, 654055418, 419843253, 534051754, 860486221, 548490232, 176291683, 658886606, 235306259, 407431435, 647121656, 66631921, 475324005, 222646685, 972843553, 948441627, 49073379, 891155670, 504342281, 286079947, 876628264, 1672327, 29675289, 967177097, 529152607, 353990488, 963411166, 446966056, 807619055, 369942420, 992995849, 176304538, 507544975, 685193583, 754141443, 574494894, 999323633, 305061612, 321542038, 110928411, 212707222, 973993924, 690742753, 530836999, 349157715, 733907062, 317820760};
    int maxCuts = 98797;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 3654.083333333314;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> weights = {999999, 999997, 999996, 999995, 999993, 999991, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999971, 999973, 999975, 999977, 999979, 999961, 999963, 999965, 999967, 999969, 999951, 999953, 999955, 999957, 999959, 999941, 999943, 999945, 999947, 999949, 999931, 999933, 999935, 999937, 999939, 999921, 999923, 999925, 999927, 999929, 999911, 999913, 999915, 99991, 24647};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06267605633809126;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> weights = {3527600, 77401585, 62824094, 47902791, 35015484, 68800909, 8029962, 86256195, 62517896, 67834857, 80171318, 36760831, 95337876, 90425861, 11915298, 49758331, 44289376, 88290529, 47418062, 75546039, 67274732, 26272125, 43201082, 75780531, 44964408, 69681625, 16175974, 61472111, 3003716, 86638325, 430162, 68141291, 60847632, 48521425, 28650750, 49606695, 35903132, 63719789, 29995114, 75811875, 93145576, 95405769, 2736534, 71520223, 56633844, 58258661, 83689602, 78442075, 75280064, 27576257};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 98.86311004374147;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> weights = {226539881, 983746533, 574839920, 844665771, 384990201, 384990201, 498590230, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 127.96677899226779;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> weights = {1000000, 1000001, 1000002, 1000003, 1000004, 1000005, 1000006, 1000007, 1000008, 1000009, 1000010, 1000011, 1000012, 1000013, 1000014, 1000015, 1000016, 1000017, 1000018, 1000019, 1000020, 1000021, 1000022, 1234567, 1234568, 1234569, 1234570, 1234571, 1234572, 1234573, 1234574, 1234575, 1234576, 1234577, 1234578, 1234579, 1234580, 1234581, 1234582, 1234583, 1234584, 1234585, 1234586, 1234587, 1234588, 1234589, 1234590, 1234591, 1234592, 1234593};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01336272780724812;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> weights = {999999950, 999999951, 999999952, 999999953, 999999954, 999999955, 999999956, 999999957, 999999958, 999999959, 999999960, 999999961, 999999962, 999999963, 999999964, 999999965, 999999966, 999999967, 999999968, 999999969, 999999970, 999999971, 999999972, 999999973, 999999974, 999999975, 999999976, 999999977, 999999978, 999999979, 999999980, 999999981, 999999982, 999999983, 999999984, 999999985, 999999986, 999999987, 999999988, 999999989, 999999990, 999999991, 999999992, 999999993, 999999994, 999999995, 999999996, 999999997, 999999998, 999999999};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024487756134476513;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> weights = {539645949, 415791362, 736319818, 285134547, 773398106, 79803624, 855460762, 60348785, 917573515, 333984967, 406804997, 208837623, 256756413, 423094965, 565842274, 429009294, 790285335, 902813102, 218404105, 189691765, 63152157, 154859016, 749389956, 89388712, 870407009, 29642040, 39139927, 733767931, 632725283, 924721273, 958860174, 848413405, 708293017, 514857468, 504007296, 551372308, 913666878, 696937961, 202037981, 117528169, 213765002, 830555887, 468430117, 654331467, 38644959, 152524955, 242381649, 485918891, 992225055, 811111018};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 468.11680613667704;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> weights = {50, 500, 5000, 50000, 500000, 200, 20000, 20000, 12392013, 21391312, 12292, 1119948, 2999909, 2911, 1237, 1000000000, 123, 1, 1923, 4857, 222, 4882, 998872, 1472, 10018, 108, 177, 199999, 22777, 33213, 321321321, 4872, 289888, 336, 33990, 47671, 28571, 4008, 47171, 55554, 2717, 9271, 273654, 19972, 4517171, 9427, 10181, 28881, 194727};
    int maxCuts = 5000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 272850.2960436562;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> weights = {892753, 1000000000, 99998743, 987451123, 49753134, 984513, 938475913, 98345834, 349875, 95871, 93847589, 983745245, 983472345, 938475345, 983745335, 212364885, 234687234, 892753, 1000000000, 99998743, 987451123, 49753134, 984513, 938475913, 98345834, 349875, 95871, 93847589, 983745245, 983472345, 938475345, 983745335, 212364885, 234687234, 892753, 1000000000, 99998743, 987451123, 49753134, 984513, 938475913, 10, 349875, 95871, 93847589, 983745245, 983472345, 938475345, 983745335};
    int maxCuts = 40000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 556473.0272676683;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> weights = {262213616, 246598425, 252626246, 436614666, 235899997, 253126126, 346246166, 221612, 265126216, 896898989, 262213616, 246598425, 252626246, 436614666, 235899997, 253126126, 346246166, 221612, 265126216, 896898989, 262213616, 246598425, 252626246};
    int maxCuts = 25216;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 61904.016883116856;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> weights = {1, 4, 10, 31, 43, 74, 101, 201, 231, 344, 387, 399, 400, 410, 420, 422, 434, 480, 500, 567, 594, 600, 623, 700, 800, 900, 999, 43, 74, 101, 201, 231, 344, 387, 399, 400, 410, 420, 422, 434, 480, 500, 567, 594, 600, 623, 700};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
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
    vector<int> weights = {1000000000, 999999999, 999999998, 999999997, 999999996, 999999995, 999999994, 999999993, 999999992, 999999991, 999999990, 999999989, 999999988, 999999987, 999999986, 999999985, 999999984, 999999983, 999999982, 999999981, 999999980, 999999979, 999999978, 999999977, 999999976, 999999975, 999999974, 999999973, 999999972, 999999971, 999999970, 999999969, 999999968, 999999967, 999999966, 999999965, 999999964, 999999963, 999999962, 999999961, 999999960, 999999959, 999999958, 999999957, 999999956, 999999955, 999999954, 999999953, 999999952, 999999951};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024487756134476513;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> weights = {13, 69, 41, 37, 80};
    int maxCuts = 27;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4666666666666668;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> weights = {1681, 41030089, 40119556, 2250000, 67450561, 47244176, 31744484, 61892164, 26949444, 98487296, 32547025, 92141025, 42004961, 83147929, 99221521, 241081, 8970025, 42611364, 23299929, 29550096, 49176881, 13276816, 15225604, 23409, 85264, 53313924, 3491241, 50288656, 88799524, 95811025, 29669809, 72019076, 18182441, 33125444, 3493161, 96487744, 58794889, 91637401, 90191225, 97891236, 23862209, 66963721, 81067684, 20090889, 12334929, 21752896, 29249881, 59459521, 98232009, 47169424};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 21233.90092378753;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> weights = {3112, 54325, 123, 435, 13532, 1345423, 31, 24, 56, 8734, 3112, 54325, 123, 435, 13532, 1345423, 31, 24, 56, 8734, 3112, 54325, 123, 435, 13532, 1345423, 31, 24, 56, 8734, 3112, 54325, 123, 435, 13532, 1345423, 31, 24, 56, 8734, 3112, 54325, 123, 435, 13532, 1345423, 31, 24, 56, 8734};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 47.269361161139955;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> weights = {10000, 10001};
    int maxCuts = 1;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> weights = {157010962, 361129695, 461134522, 284482012, 288217717, 263153678, 358845672, 481164138, 377069527, 34718949, 533514739, 394911717, 52750836, 520129014, 49044456, 144655039, 507148491, 119400500, 262894679, 224551693, 642333, 511080310, 499630805, 147017224, 440927987, 363219192, 502635387, 105904526, 338613269, 116738521, 536669540, 290598562, 446492308, 125334942, 215632178, 535938023, 70675265, 204576941, 350287754, 307472425, 159602739, 53469907, 299343763, 96009429, 286419781, 11471295, 488308091, 463487100, 261456021, 3734405};
    int maxCuts = 996;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3159423615384616E7;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> weights = {1, 2, 2, 3, 4, 3, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> weights = {1000000000, 999999999, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 4.997501382604241E-4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 353, 36, 37, 38, 39, 40, 41, 423, 43, 44, 45, 46, 47, 48, 49, 50};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> weights = {289384, 930887, 692778, 636916, 747794, 238336, 885387, 760493, 516650, 641422, 202363, 490028, 368691, 520060, 897764, 513927, 180541, 383427, 89173, 455737, 5212, 595369, 702568, 956430, 465783, 21531, 722863, 665124, 174068, 703136, 513930, 979803, 634023, 723059, 133070, 898168, 961394, 18457, 175012, 478043, 176230, 377374, 484422, 544920, 413785, 898538, 575199, 594325, 798316, 664371};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0284313725490506;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> weights = {1, 2, 23, 34, 545, 565655, 3434, 3434, 34343, 34343434, 3434343, 3434343, 3434343, 343434343, 3434343, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 50000, 50000, 50000, 50000, 90000, 90000, 90000, 90000, 125000, 125000, 125000, 450001, 450001, 450001, 1212, 1212, 1212, 8888, 8, 8, 8888, 565656, 5656565, 43343, 35656, 6783, 5656, 1567};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 73996.33609590055;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> weights = {648027539, 701334894, 747069242, 320405652, 114611276, 560152603, 689166560, 865680268, 775543705, 529131117, 871324535, 511202167, 909269196, 803775365, 158226781, 803564037, 604557856, 590715988, 452198626, 373256778, 679704855, 793960829, 803965770, 534058792, 897573514, 853845072, 975733440, 960640012, 918088315, 447467499, 756377625, 430890995, 531138863, 903916113, 184861505, 900460957, 783542205, 336874010, 208401143, 848536986, 298746951, 790473232, 451960008, 366444733, 738834819, 453377839, 193690532, 936430200, 522040292, 525232876};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 203.37923664122354;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> weights = {10, 29};
    int maxCuts = 2;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333339;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> weights = {999982981, 927863971, 92371723, 923964123, 237618623, 192786378, 396261371, 957637291, 938497263, 132461623, 125125431, 23423412, 3472837, 27381723, 7123, 781, 12387, 317238, 12378, 21387, 12378, 234870, 234780, 2378, 12738, 83745, 237804, 127830, 23578, 1234780};
    int maxCuts = 99999;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 59026.37413424817;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> weights = {237530862, 242098763, 241358022, 249876541, 233456788, 258395059, 241975306, 247160492, 252098763, 250740738, 240617282, 238765430, 248765430, 243580245, 253456788, 251975306, 241604936, 239629627, 252716047, 238765430, 239012344, 247160492, 243456788, 248765430, 243086418, 252592590, 241851850, 255432096, 255679010, 238518516, 252222220, 251481479, 242469134, 249876541, 249259257, 248271603, 255802467, 249012343, 249629627, 252469134, 248765430, 255679010, 251604936, 242716047, 253580245, 233209874, 245925924, 251111109, 243333331, 249135800};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 5.093952786410227E-4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> weights = {1000, 3000, 5000, 7000, 9000, 11000, 1300, 1700, 1900, 10000, 110, 130, 150, 170, 190, 1110, 1130, 1170, 1190, 100000, 210, 230, 250, 270, 290, 2110, 2130, 210, 2190, 100000, 310, 330, 350, 370, 390, 3110, 3130, 3170, 3190, 100000, 410, 100, 1000, 10000, 100000, 100000, 100000, 100000, 9999};
    int maxCuts = 99999;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 9.999999999994458E-4;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> weights = {43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023, 43289023};
    int maxCuts = 99999;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> weights = {1, 3, 5, 7, 9, 11, 13, 17, 19, 10000, 11, 13, 15, 17, 19, 111, 113, 117, 119, 10000, 21, 23, 25, 27, 29, 211, 213, 217, 219, 10000, 31, 33, 35, 37, 39, 311, 313, 317, 319, 10000, 41, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 999999999};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 10109.7122895708;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 1000000000};
    int maxCuts = 50000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 19998.60000799984;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> weights = {12405160, 10000000, 46551765, 46501785, 12301584, 48114975, 24401105, 22513505, 41511165, 11411115, 23405165, 48005175, 30010545, 88080095, 30114065, 69080709, 90718979, 45878645, 12304156, 12341567, 12345607, 12345678, 30205011, 21011401, 43000201, 50430021, 65430021, 44014041, 11520061, 99999910, 88899988, 45600175, 10101025, 62010115, 12340155, 33301121, 45601789, 34560178, 78965546, 11451012, 10254135, 10110145, 10811495, 77777777, 67676767, 76767676, 12305281, 99779977, 12350107, 21541506};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 20.295032181249553;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> weights = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 999999999};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 4.997501382604241E-4;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> weights = {44227194, 700639607, 562310850, 399664033, 977341964, 574844297, 282528160, 86489368, 660423302, 831443987, 385582771, 654529074, 588898824, 566449165, 556086590, 477224841, 591067307, 844353688, 245081797, 881209601, 534013216, 296555642, 205606354, 126247407, 376344673, 409634692, 548420954, 155797104, 353497343, 87743607, 403134816, 30311014, 128553879, 393645460, 153444791, 124598800, 909413987, 178729919, 264754916, 7898181, 601278956, 822673999, 150493986, 515869261, 738357469, 474214261, 833146750, 757106524, 336478451, 519797521};
    int maxCuts = 18981;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 17070.350383631652;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> weights = {1, 1000000000};
    int maxCuts = 1;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> weights = {5, 5, 5, 5, 5, 6};
    int maxCuts = 6;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> weights = {2, 3, 4, 5, 6, 7, 8, 9, 11, 13, 15, 17, 18, 19, 23, 34, 35234, 3214432, 12345, 565467, 235523324, 235623};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 2393.7940329783232;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> weights = {4, 4, 5};
    int maxCuts = 9;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08333333333333326;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> weights = {1000000000, 999999999, 987654321, 123456789, 389783, 4475757, 3453345, 4535434, 13476, 45467, 213446};
    int maxCuts = 79793;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 25675.201941899613;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> weights = {412, 1244, 12, 541, 25, 124, 12, 512, 5, 12, 512, 4, 321, 54, 125, 12, 412651, 2143215, 1, 143214, 512, 125, 21, 412, 512351, 215215, 12, 512, 512, 5213, 5164125, 215161, 1562151, 125, 21512, 51, 25, 125, 12, 5, 15, 12, 551, 125, 125, 12, 512, 5151, 51521, 1};
    int maxCuts = 50000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 208.0971817298348;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> weights = {45871346, 9998601, 58858165, 73585138, 56508640, 55705684, 5881471, 35488549, 86182778, 49611882, 71183869, 17369417, 83819071, 28946063, 14514027, 39962043, 885360, 46230713, 66392090, 8373405, 72977266, 6360518, 58445875, 15726513, 96264064, 67950472, 88437182, 29540500, 10667800, 95467359, 6942902, 93685852, 86985934, 84379298, 57517099, 93427814, 65106918, 36543286, 13912997, 37263266, 47282116, 71502052, 84745325, 16773628, 78095804, 72269694, 37773551, 74366541, 64720519, 51940156};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 52.51437553061987;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> weights = {1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 100000};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 479845.4491362764;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> weights = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> weights = {1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 489954.9039686428;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> weights = {1945984, 394237, 84623, 6653, 124667, 12338, 999999, 664, 2213, 12377, 1245, 67234, 8633, 122678, 12588, 23, 2333, 10058458, 584874, 1226, 1226, 1288, 121244, 99565, 35502, 6533, 23446, 766711, 4841, 2334, 6744, 9944, 34462, 34566, 3663, 1774, 6733, 32234, 85542, 98433, 95533, 3344, 1247, 88534, 1123, 7344, 954544, 346666, 8443, 266445};
    int maxCuts = 99997;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 152.896369613878;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> weights = {1, 2, 2};
    int maxCuts = 1;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> weights = {943351957, 968036878, 917603339, 944313882, 938102501, 962448755, 957313995, 902900862, 940092631, 962109168, 926332822, 912418653, 963999088, 934225048, 904810687, 969202642, 944404079, 991233810, 927566501, 985506568, 908372191, 972437876, 986009830, 967865555, 911015571, 940580598, 904770527, 968994308, 938734894, 916801099, 910222909, 999157963, 909823614, 902405506, 933091954, 907953093, 927122988, 960892101, 912329036, 972436367, 962415390, 958667875, 992444687, 952538371, 977243403, 987893981, 931485889, 999700085, 909842191, 919897606};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 204.3913794553373;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> weights = {398884122, 148899920, 790078480, 369899775, 391792263, 298552011, 68041389, 678845583, 972835167, 328443443, 895139446, 31040594, 467708059, 600294411, 640064573, 649495634, 95340448, 561454957, 698754639, 93834274, 245951243, 887998390, 962980176, 964500898, 156038634, 957449416, 895280903, 33530190, 827774058, 25108616, 41942771, 687619690, 126537481, 47487160, 46988613, 916497439, 830504385, 586242126, 884709487, 62475608, 366940337, 516680112, 451314094, 184797581, 30862200, 599367621, 178859982, 881778840, 289107794, 87096337};
    int maxCuts = 100000;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 724.7278577995603;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> weights = {208095, 868273, 202641, 853349, 953685, 360412, 273754, 290142, 218713, 289585, 890795, 314265, 941709, 326072, 265570, 7837, 569352, 308013, 988422, 588349, 482307, 353466, 890971, 34463, 380780, 398743, 851269, 740013, 170719, 237060, 944121, 133785, 240622, 767587, 308678, 29075, 766765, 352465, 481074, 118196, 409007, 461882, 763008, 459020, 822921, 660723, 729975, 875149, 380712, 911504};
    int maxCuts = 99999;
    CakesEqualization* pObj = new CakesEqualization();
    clock_t start = clock();
    double result = pObj->fairDivision(weights, maxCuts);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5979601518026527;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22675302&rd=13512&pm=10074
********************************************************************************
// SRM421: There is no limit to make the world better. 
 
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
 
class CakesEqualization { 
public: 
double fairDivision(vector <int> w_, int mc) { 
  int i,j,k,n=w_.size(); 
  int now[60]; 
  double w[60]; 
  double res=1e100; 
  double mx,mi; 
 
  rep(i,n) w[i]=w_[i]; 
  rep(i,n) now[i]=1; 
  for(;;){ 
    mx=-1e100; mi=1e100; 
    rep(j,n){ 
      if( w[j]/now[j] > mx ) mx = w[j]/now[j], k=j; 
      if( w[j]/now[j] < mi ) mi = w[j]/now[j]; 
    } 
    if(mx-mi < res) res= mx-mi; 
    if(mc==0) break; mc--; 
 
    now[k]++; 
  } 
 
  return res; 
} 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/