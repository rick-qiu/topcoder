/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3539
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

class Highscore {
public:
    int getRank(vector<int> scores, int newscore, int places);
};

int Highscore::getRank(vector<int> scores, int newscore, int places) {
    int ret;
    return ret;
}


int test0() {
    vector<int> scores = {100, 90, 80};
    int newscore = 90;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> scores = {};
    int newscore = 0;
    int places = 50;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> scores = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int newscore = 1;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> scores = {10, 9, 8, 7, 6, 5, 4, 3, 3, 0};
    int newscore = 1;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> scores = {2000000000, 19539, 19466, 19146, 17441, 17002, 16348, 16343, 15981, 15346, 14748, 14594, 13752, 13684, 13336, 13290, 12939, 12208, 12163, 12133, 11621, 11119, 10872, 10710, 10390, 9934, 9296, 8844, 8662, 8653, 8168, 7914, 7529, 7354, 6016, 5428, 5302, 5158, 4853, 4538, 4328, 3443, 3222, 2107, 2107, 1337, 951, 586, 424, 31};
    int newscore = 1337;
    int places = 50;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> scores = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9};
    int newscore = 10;
    int places = 50;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> scores = {10, 10, 9, 9, 9, 8, 8, 8, 8, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2};
    int newscore = 2;
    int places = 50;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> scores = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    int newscore = 2000000000;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
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
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int newscore = 0;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
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
    vector<int> scores = {1994545937, 1938943236, 1902605580, 1707491184, 1377509761, 1347571835, 1217847778, 1140345403, 1103320943, 856465388};
    int newscore = 496673726;
    int places = 42;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> scores = {1740665186, 1709527555, 1539354427, 1480770569, 1349214389, 1245184376, 814903705, 788125553, 721703778, 465503691, 423475004, 379610024, 239733076, 231195889, 109266651};
    int newscore = 213159886;
    int places = 34;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> scores = {1924424854, 1869076508, 1812125141, 1696815179, 1662099718, 1527497209, 1472193624, 1391284950, 1373480982, 1270736526, 1211536634, 1106628158, 954534139, 893588844, 812415196, 633294201, 576948272, 528127546, 357541085, 2999473};
    int newscore = 69819329;
    int places = 20;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> scores = {1939928133, 1875935049, 1874384766, 1832123006, 1809983561, 1625747860, 1588411305, 1361588761, 1320953759, 1136618504, 1133373165, 1106524752, 847491406, 733381297, 677242199, 584857676, 558993346, 510461239, 457677773, 242350491, 116483683, 101258178, 98100520, 93572540, 69360786};
    int newscore = 521656710;
    int places = 38;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> scores = {1903735057, 1887825995, 1880825322, 1877831942, 1802388243, 1555852138, 1513446242, 1203724509, 1200731806, 1105750579, 863109059, 836341042, 745861977, 726734362, 706121526, 503119284, 437528121, 416091381, 336416999, 257840551, 242394994, 233495100, 211064438, 183815485, 141972426, 117998694, 97397548, 63965870, 48028723, 12674889};
    int newscore = 370202168;
    int places = 33;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> scores = {1974014389, 1964036502, 1953683864, 1953248190, 1926289996, 1781913563, 1735290113, 1641543549, 1640198679, 1621452949, 1597571326, 1586267163, 1555302851, 1458106487, 1384793500, 1269037460, 1265178712, 1177524568, 1104177778, 1048331951, 981750648, 979385732, 812662202, 733383112, 427958704, 278890030, 242667017, 235032387, 216597435, 173344067, 166328677, 109524502, 103765484, 66807754, 13678613};
    int newscore = 1455897858;
    int places = 35;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> scores = {1877393448, 1834989440, 1759499467, 1738609108, 1673995822, 1519198720, 1500826967, 1467241958, 1396862963, 1394688430, 1325309652, 1306535105, 1296477122, 1273712974, 1264561740, 1223164070, 1075918311, 1070687864, 1057166548, 974370191, 969826757, 961165694, 886803778, 743005399, 695169475, 649123734, 616740593, 613674568, 594450572, 510913920, 348167239, 326934943, 309789149, 261236661, 246618669, 244517132, 129006603, 118116160, 111063613, 89571464};
    int newscore = 268720403;
    int places = 42;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> scores = {1911149990, 1902703485, 1888970559, 1883636820, 1880142125, 1753625007, 1732488637, 1689754533, 1569142580, 1563923162, 1497333876, 1480687681, 1390602329, 1300053421, 1272661111, 1227449115, 1191777786, 1186665734, 1092781939, 1025601386, 957029871, 834037365, 776513336, 748859997, 733100499, 722645215, 688375817, 625966032, 598088401, 583935317, 582066621, 382819993, 374271715, 316052593, 288279863, 193032316, 131639041, 105406189, 75050206, 71787501, 71564608, 51370353, 38768929, 8996184, 3514904};
    int newscore = 1878768466;
    int places = 49;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> scores = {1978501717, 1879220794, 1814291060, 1812449837, 1792216779, 1789819517, 1668115199, 1613617070, 1577726434, 1575355039, 1554280006, 1485366242, 1451396991, 1442994192, 1403168401, 1374399628, 1348617509, 1248826990, 1153916906, 1146537624, 1088370258, 1070154972, 1053802901, 988916555, 952578434, 949250003, 844791307, 820134199, 815921820, 796086813, 750603113, 741656383, 685507230, 667331505, 637949195, 609344475, 607889868, 501643894, 466963173, 430207065, 351184889, 320597257, 205026957, 141444725, 128212188, 124119560, 101645255, 94839898, 65635978, 62828927};
    int newscore = 52707780;
    int places = 50;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> scores = {2000000000, 19539, 19466, 19146, 17441, 17002, 16348, 16343, 15981, 15346, 14748, 14594, 13752, 13684, 13336, 13290, 12939, 12208, 12163, 12133, 11621, 11119, 10872, 10710, 10390, 9934, 9296, 8844, 8662, 8653, 8168, 7914, 7529, 7354, 6016, 5428, 5302, 5158, 4853, 4538, 4328, 3443, 3222, 2107, 2107, 1337, 951, 586, 424, 31};
    int newscore = 1337;
    int places = 50;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> scores = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int newscore = 10;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> scores = {10};
    int newscore = 2;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> scores = {50};
    int newscore = 5;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> scores = {10, 10, 9, 9, 9, 8, 8};
    int newscore = 8;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> scores = {10};
    int newscore = 5;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> scores = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int newscore = 1;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> scores = {10, 10, 10, 10};
    int newscore = 5;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> scores = {500, 400, 400, 400, 400};
    int newscore = 400;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> scores = {10};
    int newscore = 20;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> scores = {100, 90, 90, 90, 10};
    int newscore = 90;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> scores = {1, 1, 1};
    int newscore = 1;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> scores = {100, 90, 80};
    int newscore = 20;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> scores = {3, 2, 2, 1};
    int newscore = 1;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> scores = {10, 9, 8};
    int newscore = 5;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> scores = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int newscore = 10;
    int places = 13;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> scores = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int newscore = 1;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> scores = {10};
    int newscore = 7;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> scores = {2, 1};
    int newscore = 0;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> scores = {10, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    int newscore = 9;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> scores = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    int newscore = 1;
    int places = 15;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> scores = {};
    int newscore = 2;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> scores = {90, 90, 90, 90, 90, 90, 90, 90, 90, 90};
    int newscore = 60;
    int places = 30;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> scores = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int newscore = 5;
    int places = 15;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> scores = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int newscore = 1;
    int places = 18;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> scores = {50, 40, 30, 30, 30, 30, 30, 20, 10};
    int newscore = 5;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> scores = {90, 80, 70, 60, 50, 40, 40, 30, 20, 10, 0};
    int newscore = 35;
    int places = 12;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> scores = {5, 5, 5};
    int newscore = 3;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> scores = {50};
    int newscore = 50;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> scores = {10, 10, 10, 9, 9, 9, 9, 9, 9};
    int newscore = 9;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> scores = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int newscore = 9;
    int places = 14;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> scores = {90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 1};
    int newscore = 1;
    int places = 11;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> scores = {2};
    int newscore = 1;
    int places = 10;
    Highscore* pObj = new Highscore();
    clock_t start = clock();
    int result = pObj->getRank(scores, newscore, places);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11820199&rd=6518&pm=3539
********************************************************************************
#include <vector>
#include <cstdio>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <list>
#include <queue>
#include <set>
#include <map>
 
using namespace std;
 
#define CLASS Highscore
#define FOR(p,it,k) for(it=p; it < k;it++)
#define ALL(s) s.begin(), s.end()
#define SORTALL(vec) sort(ALL(vec));
#define PERM(vec)  (next_permutation(ALL(vec)))
#define DLVEC(a,vec) a = vec.size();
 
//typedef long long LL; 
typedef vector<int> VI; 
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef vector<PII> VPII;
 
vector<string> split( const string& s, const string& delim =" " ) { vector<string> res; string t; for ( unsigned int i = 0 ; i != s.size() ; i++ ) { if ( delim.find( s[i] ) != string::npos ) { if ( !t.empty() ) { res.push_back( t ); t = ""; } } else { t += s[i]; } } if ( !t.empty() ) { res.push_back(t); } return res; }
inline bool zawieraS(const string& s, const string& delim =" " ) {  return (s.find(delim) != string::npos);}
template<class A,class B> inline bool zawieraV(const A&a, const B&b) {  return find(a.begin(),a.end(),b)!=a.end();}
 
//sscanf(tab[x].c_str(),"%d%d%d",&w1,&w2,&w3);
//x = atoi(tab.c_str());
//int num = sscanf(word.c_str(), "%d-%d", &val1, &val2);
 
VI::iterator id;
VI::iterator id1;
VI::iterator id2;
VS::iterator is; 
 
 
class CLASS
{
public:
  
  int getRank(vector <int> scores, int newscore, int places)
  {    
    int i,j,k,len;
    DLVEC(len,scores);
 
    if ((places == len) && ( newscore <= scores.at(len-1)))
      return -1;
    i = 1;
    if (!len) return 1;
    while (scores.at(i-1) > newscore)
    {
      i++;
      if (i > len)
        return i;
    }    
 
 
    return i;
  }
 
};
 
/*
int main()
{
  CLASS a;
 
  return 0;
}
*/
 
 
//  reverse(A, A + 6);
//  double* y = find(A,A+6,1.4);
//  vector <int> a;  a.size(); a.push_back(1); a.clear(); a.pop_back(); a.erase(ALL(a));  
 
//  list <int> L; L.back(); L.front(); L.insert(L.begin(),2); L.max_size(); L.pop_back();
//  L.pop_front(); L.remove(1); /*wszystkie rowne 1*/ //L.sort(); 
//  L.splice(L.begin(), list<int> x); L.swap(list <int> x); /*zamiana list*/
  
//  deque <int> xx; xx.swap(deque<int>x);
//  stack <int> sss; sss.pop(); sss.push(2); sss.empty(); sss.top();
//  priority_queue <int> pq; pq.pop(); pq.push(9); pq.empty(); pq.top();
 
//  set - unique, multiset nie
//  set <int> s; s.count(1); //- ile jest elementow o wartosci 1 
//  s.equal_range(1); //zwraca pare iteratorow w zasiegu ktorych sa wszystkie 1
//  s.lower_bound(1); //- pierwszy element nie mniejzy niz 1
//  s.upper_bound(1); //pierwszy wiekszy od 1
//  multiset <int> ms; 
 
//  map <int,int> mp; multimap<int,int>mlmp;
//  mp.count(1); mp.lower_bound(1); mp[1]; mp.upper_bound(1);
 
//  pair<int,int>p; p.first=1; p.second=2;
//  bitset <32> mask;
 
//  string s; s.c_str(); s.data(); //tablice z nullem i bez
//  s.compare("aa"); s.copy(buf,0,3); s.find("aaa"); s.replace(1,4,buf,2,5); s.substr(2,5); s.swap(buf);
//  string s = "asdfghj"; cout << s.substr(2,1) << endl; //drugi parametr to ilosc
//  char alpha[] = "abcdefghijklmnopqrstuvwxyz";rotate(alpha, alpha + 13, alpha + 26);
  
//  int A1[] = { 3, 1, 4, 1, 5, 9, 3 };
//  int A2[] = { 3, 1, 4, 2, 8, 5, 7 };
//  int N = 4;  //ile porownujemy
//  cout << "Result of comparison: " << equal(A1, A1 + N, A2) << endl;
  
//  vector<double> V(4);
//  fill(ALL(V), 137); 
//  vector<int> V;generate(ALL(V), rand);
 
//  vector<int> V;
//  vector<int>::iterator new_end = unique(ALL(V));
//  copy(V.begin(), new_end, ostream_iterator<int>(cout, " "));
 
//  min(1,2); max(1,2); min_element(ALL(a)); max_ele...

********************************************************************************
*******************************************************************************/