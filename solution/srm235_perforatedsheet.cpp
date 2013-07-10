/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4436
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

class PerforatedSheet {
public:
    vector<double> getCenterOfMass(int sheetWidth, int sheetHeight, vector<int> x, vector<int> y, vector<int> width, vector<int> height);
};

vector<double> PerforatedSheet::getCenterOfMass(int sheetWidth, int sheetHeight, vector<int> x, vector<int> y, vector<int> width, vector<int> height) {
    vector<double> ret;
    return ret;
}


int test0() {
    int sheetWidth = 5;
    int sheetHeight = 10;
    vector<int> x = {};
    vector<int> y = {};
    vector<int> width = {};
    vector<int> height = {};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.5, 5.0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int sheetWidth = 10;
    int sheetHeight = 5;
    vector<int> x = {0, 1};
    vector<int> y = {0, 0};
    vector<int> width = {1, 9};
    vector<int> height = {5, 1};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.5, 3.0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int sheetWidth = 5;
    int sheetHeight = 5;
    vector<int> x = {1};
    vector<int> y = {1};
    vector<int> width = {1};
    vector<int> height = {1};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.5416666666666665, 2.5416666666666665};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int sheetWidth = 822741;
    int sheetHeight = 110524;
    vector<int> x = {335076, 665632, 210102, 714135, 229942, 149776, 675634, 502085, 393066, 115215, 80993, 272343, 434287, 593760, 589713, 485801, 395389, 755380, 417327, 477023};
    vector<int> y = {104509, 23182, 103471, 62180, 5040, 10186, 45286, 107985, 36936, 87885, 63846, 58794, 89480, 85195, 64703, 96341, 89224, 7727, 71438, 39128};
    vector<int> width = {24578, 20552, 3332, 254, 21489, 21158, 35061, 37453, 21881, 216, 32930, 31555, 5121, 36687, 6949, 3512, 8049, 30019, 37252, 8001};
    vector<int> height = {2240, 3152, 4625, 3508, 4206, 5262, 1750, 627, 3983, 3192, 3609, 3361, 1135, 2580, 4158, 1356, 583, 5408, 5521, 2742};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {411084.49564976187, 55331.97175632337};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int sheetWidth = 1234567;
    int sheetHeight = 314159;
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> width = {1234567};
    vector<int> height = {314159};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int sheetWidth = 2000000;
    int sheetHeight = 2000000;
    vector<int> x = {1, 0};
    vector<int> y = {0, 1};
    vector<int> width = {1999999, 1};
    vector<int> height = {2000000, 1999999};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5, 0.5};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int sheetWidth = 2000000;
    int sheetHeight = 2000000;
    vector<int> x = {0, 1999999};
    vector<int> y = {0, 0};
    vector<int> width = {1999999, 1};
    vector<int> height = {2000000, 1999999};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1999999.5, 1999999.5};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int sheetWidth = 2000000;
    int sheetHeight = 2000000;
    vector<int> x = {0, 0, 201, 0};
    vector<int> y = {0, 23, 23, 24};
    vector<int> width = {2000000, 200, 1999799, 2000000};
    vector<int> height = {23, 1, 1, 1999976};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {200.5, 23.5};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int sheetWidth = 2000000;
    int sheetHeight = 2000000;
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> y = {0, 40000, 80000, 120000, 160000, 200000, 240000, 280000, 320000, 360000, 400000, 440000, 480000, 520000, 560000, 600000, 640000, 680000, 720000, 760000, 800000, 840000, 880000, 920000, 960000, 1000000, 1040000, 1080000, 1120000, 1160000, 1200000, 1240000, 1280000, 1320000, 1360000, 1400000, 1440000, 1480000, 1520000, 1560000, 1600000, 1640000, 1680000, 1720000, 1760000, 1800000, 1840000, 1880000, 1920000, 1960000};
    vector<int> width = {1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950};
    vector<int> height = {2378, 8588, 11667, 4571, 1473, 18373, 3925, 6563, 3277, 8091, 6690, 3958, 17304, 14152, 17304, 18989, 12750, 9681, 17127, 20, 7493, 8221, 2540, 18189, 10458, 17971, 3096, 16271, 19186, 16274, 17637, 14596, 7007, 14190, 8616, 13658, 12417, 9976, 2075, 12740, 14428, 16934, 8311, 16407, 3036, 5667, 7024, 2258, 4984, 16903};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {999999.8610075671, 992090.7281122984};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int sheetWidth = 2000000;
    int sheetHeight = 2000000;
    vector<int> x = {0, 40000, 80000, 120000, 160000, 200000, 240000, 280000, 320000, 360000, 400000, 440000, 480000, 520000, 560000, 600000, 640000, 680000, 720000, 760000, 800000, 840000, 880000, 920000, 960000, 1000000, 1040000, 1080000, 1120000, 1160000, 1200000, 1240000, 1280000, 1320000, 1360000, 1400000, 1440000, 1480000, 1520000, 1560000, 1600000, 1640000, 1680000, 1720000, 1760000, 1800000, 1840000, 1880000, 1920000, 1960000};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> width = {2378, 8588, 11667, 4571, 1473, 18373, 3925, 6563, 3277, 8091, 6690, 3958, 17304, 14152, 17304, 18989, 12750, 9681, 17127, 20, 7493, 8221, 2540, 18189, 10458, 17971, 3096, 16271, 19186, 16274, 17637, 14596, 7007, 14190, 8616, 13658, 12417, 9976, 2075, 12740, 14428, 16934, 8311, 16407, 3036, 5667, 7024, 2258, 4984, 16903};
    vector<int> height = {1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950, 1999950};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {992090.7281122984, 999999.8610075671};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int sheetWidth = 1655644;
    int sheetHeight = 32192;
    vector<int> x = {918168, 543457, 46954, 991821, 47639, 1418320, 1264965, 1307814, 1072620, 1267513, 225742, 1112870, 1519618, 1352754, 201428, 469657, 1644188, 1380970, 848108, 1395680, 1289278, 216435, 1653217, 1052870, 1227487, 1506210, 469661, 1579888, 956227, 912461, 471928, 876643, 1498780, 1137027, 1227743, 993956, 1221396, 772526, 820988, 857125, 996259, 1453139, 1324989, 621113, 489059, 1186846, 691758, 1274677};
    vector<int> y = {30067, 11972, 14319, 359, 26950, 1601, 5061, 5134, 18334, 10574, 12618, 13197, 18407, 29875, 22585, 16050, 31773, 30646, 26655, 31257, 28559, 19227, 9242, 20201, 8348, 26423, 17509, 16099, 15886, 23016, 584, 7210, 13295, 25109, 24457, 11975, 22269, 20503, 17518, 29764, 16200, 3636, 2031, 19580, 20220, 3172, 1746, 3222};
    vector<int> width = {7645, 5253, 13998, 7652, 21649, 2335, 17815, 3904, 2899, 10319, 7161, 19603, 7293, 5156, 29036, 26881, 1901, 24877, 22980, 11557, 5430, 21387, 1389, 3290, 33091, 14529, 1478, 22855, 13586, 29765, 28308, 31886, 8685, 1094, 27251, 8413, 32434, 9633, 3858, 32585, 17033, 8262, 14490, 11050, 18019, 2938, 7793, 31481};
    vector<int> height = {497, 372, 119, 216, 152, 48, 152, 578, 322, 209, 282, 617, 232, 554, 130, 84, 256, 493, 648, 188, 358, 49, 546, 437, 640, 654, 373, 471, 575, 326, 294, 90, 396, 270, 297, 589, 80, 217, 102, 578, 261, 176, 647, 23, 642, 412, 650, 506};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {826825.3008094893, 16091.31929144302};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int sheetWidth = 1399523;
    int sheetHeight = 1364233;
    vector<int> x = {390431, 304601, 469751, 625391, 1151808, 661688, 1371696, 1315709, 1171181, 1039157, 327938, 1171046, 1367131, 300690, 1139276, 108564, 1306488, 1317356, 798930, 1077042, 483819, 1069653, 1351291, 1181180, 92111, 1154037, 513005, 1295168, 403389, 219421, 182365, 175613, 731812, 216768, 1109149, 274731, 826721, 1268485};
    vector<int> y = {805057, 1222413, 233887, 432536, 1134572, 366200, 334003, 687765, 1323547, 961893, 808160, 864064, 182521, 105367, 240255, 1086156, 62959, 904899, 30062, 167588, 1096394, 1056581, 859297, 935337, 137585, 415542, 1064279, 269027, 1306236, 808170, 120007, 147918, 556148, 390817, 23460, 666803, 755504, 1275412};
    vector<int> width = {25866, 15899, 30177, 25907, 18189, 25748, 17369, 10548, 6123, 10063, 17576, 32811, 1600, 33765, 3217, 17305, 11528, 18866, 20470, 28595, 31134, 4982, 393, 36161, 18772, 32880, 20949, 20880, 30103, 30815, 7320, 20614, 13948, 29078, 12845, 18944, 30242, 20069};
    vector<int> height = {6529, 29199, 20366, 26969, 32704, 25339, 7641, 11359, 23999, 30104, 34802, 4969, 5134, 23805, 21211, 20217, 23939, 20799, 20966, 15234, 10603, 1530, 9100, 5357, 29235, 4065, 22660, 34636, 25979, 12877, 12826, 806, 8383, 17680, 7274, 33654, 29076, 26798};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {699843.840248188, 682269.8241527766};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int sheetWidth = 24197;
    int sheetHeight = 547161;
    vector<int> x = {454, 998, 11904, 6930, 295, 14988, 23488, 20585, 1694, 13806, 8661, 6401, 21684, 4182, 18589, 20244, 15027, 21820, 7348, 383, 6714, 11306, 20139, 3573, 20067};
    vector<int> y = {278783, 444247, 228497, 257130, 384188, 273612, 461495, 522211, 93197, 44866, 28256, 113332, 188789, 74550, 348884, 298491, 35282, 543843, 197783, 206568, 212550, 525619, 378226, 55918, 84110};
    vector<int> width = {293, 496, 101, 115, 85, 201, 186, 753, 68, 777, 908, 675, 184, 285, 356, 576, 653, 418, 871, 603, 349, 699, 488, 627, 618};
    vector<int> height = {18200, 12072, 16330, 15704, 14091, 15413, 15037, 14263, 19380, 4240, 11781, 20897, 7423, 7672, 13243, 14170, 3228, 433, 1412, 4171, 6590, 10985, 9134, 17224, 20737};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {12099.833395239055, 273881.37616269296};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int sheetWidth = 694111;
    int sheetHeight = 1541810;
    vector<int> x = {50065, 131459, 585358, 282080, 513598, 299257, 540123, 522600, 520101, 164625, 323784, 139394, 91654, 64554, 619843, 169186, 662216, 674519, 408772, 92207, 135525, 373572, 669806, 49663, 392712, 234350, 8483};
    vector<int> y = {1287457, 884012, 900186, 695533, 395060, 250034, 400274, 590857, 549415, 1409109, 803314, 679541, 781759, 1342683, 1187431, 1538962, 257202, 375452, 272330, 246619, 239193, 622135, 1133244, 450459, 18918, 1453041, 894856};
    vector<int> width = {25164, 24190, 15266, 17264, 12391, 16197, 15399, 16321, 10169, 18122, 17616, 15211, 23222, 1164, 17440, 13126, 11698, 10834, 18054, 6604, 10530, 16886, 11870, 4518, 13246, 18455, 16638};
    vector<int> height = {13042, 31655, 45590, 9369, 13842, 26329, 15377, 33441, 32765, 5990, 29316, 39835, 29610, 19925, 32837, 2124, 20238, 34497, 8040, 24735, 2082, 14938, 11754, 35575, 34326, 6834, 29057};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {347064.11259442684, 771327.548358344};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int sheetWidth = 109930;
    int sheetHeight = 1543911;
    vector<int> x = {96177, 64215, 79344, 46325, 2701, 97758, 4524, 58728, 43152, 67400, 104110, 109794, 34288, 65641, 108584, 77263, 41838, 98691, 87300, 98828, 43206, 109631, 21190, 85213, 10213, 55992, 19219, 103654, 88995, 35740, 90540};
    vector<int> y = {971524, 799848, 148859, 1272684, 423115, 838795, 466481, 705213, 1443488, 927154, 861277, 762237, 443884, 1461702, 948854, 1164528, 15854, 132544, 192845, 1167790, 1085833, 46750, 1489677, 1475265, 951765, 890650, 1277893, 1299180, 656495, 1060122, 222407};
    vector<int> width = {3488, 2245, 2420, 1553, 1286, 3267, 3393, 1774, 3287, 1188, 2296, 102, 931, 3279, 792, 1704, 2514, 1973, 1088, 1209, 3234, 134, 333, 868, 3258, 2002, 901, 2257, 216, 3500, 1891};
    vector<int> height = {16450, 32418, 10868, 15415, 7657, 2098, 21643, 10847, 25023, 19517, 49073, 3231, 37676, 5692, 3903, 34940, 46393, 44142, 28574, 5895, 7619, 2232, 19509, 24341, 31369, 40994, 13887, 16709, 48312, 21293, 8089};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {54922.967982661714, 771778.9093318478};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int sheetWidth = 314205;
    int sheetHeight = 668144;
    vector<int> x = {174147, 81667, 247411, 76700, 23490, 107132, 272981, 153951, 68636, 302170, 20547, 33479, 102107, 147023, 251402, 59010, 149871, 189849, 368, 202013, 52112, 14467, 21979, 235674, 276206, 222109, 234068, 44981, 130324, 232837, 265812, 175239, 201363, 142713, 267, 138654, 168059, 266129, 157099, 214103, 100370, 5351, 9342, 258720, 196635};
    vector<int> y = {21397, 59188, 514024, 279529, 492545, 231934, 643878, 58656, 437155, 77457, 616006, 441807, 73375, 517046, 618142, 230012, 272827, 369416, 415416, 639102, 465922, 392472, 212548, 456810, 329410, 452712, 305706, 340632, 458977, 290805, 230467, 440410, 427846, 421210, 560067, 615063, 106182, 566938, 536435, 214617, 287477, 663808, 535682, 119206, 254934};
    vector<int> width = {2615, 2901, 3558, 5154, 5029, 6515, 4039, 4900, 2421, 6800, 6487, 2140, 4753, 2548, 1983, 6480, 1651, 3353, 5938, 4429, 2872, 3517, 4916, 6325, 2776, 2643, 3310, 5582, 2439, 6727, 1527, 3026, 3258, 4005, 6382, 3795, 3981, 56, 6672, 6535, 4007, 4969, 983, 5520, 4947};
    vector<int> height = {4977, 13195, 591, 4062, 4971, 8094, 2901, 1809, 8019, 2481, 12847, 2632, 1726, 10407, 5587, 10249, 14175, 3346, 8647, 10699, 13504, 14070, 4505, 3964, 2224, 8055, 12749, 4121, 7665, 3725, 10428, 9076, 4286, 12969, 4601, 6783, 12155, 8896, 14216, 567, 12261, 3419, 2058, 7875, 4887};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {157291.97927648132, 333779.444240947};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int sheetWidth = 832312;
    int sheetHeight = 1344923;
    vector<int> x = {583714, 650517, 22372, 522707, 489412, 132435, 368084, 245544, 229090, 695449, 96868, 644453, 30729, 781486, 698781, 278497, 405520, 782580, 814046, 146179, 295229, 71890, 595452, 582316, 347513, 815982, 241690, 427470, 623948, 806287, 814109};
    vector<int> y = {1239555, 1230296, 288636, 1252202, 613342, 425171, 203701, 694455, 876628, 306525, 852204, 798926, 845631, 520125, 1255186, 442843, 995858, 1329132, 738878, 1209616, 577817, 1116255, 25598, 131025, 338063, 67612, 515970, 835737, 526458, 198148, 543187};
    vector<int> width = {22481, 26749, 5709, 8430, 9597, 20, 122, 19643, 2205, 25247, 1874, 25038, 21652, 19433, 17562, 681, 912, 1337, 15710, 21277, 24245, 20286, 13170, 8593, 16552, 9241, 24141, 14182, 2054, 14051, 15982};
    vector<int> height = {29150, 39674, 36717, 19678, 21699, 14107, 24535, 17381, 21055, 20300, 16270, 25909, 33765, 10697, 4287, 26251, 26126, 1181, 5063, 2010, 25856, 6276, 9679, 37232, 26864, 19298, 23543, 40034, 41791, 6157, 7223};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {415759.7217243637, 671932.4531085688};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int sheetWidth = 691362;
    int sheetHeight = 387000;
    vector<int> x = {198196, 654916, 246396, 688819, 133234, 473392, 137929, 351309, 608465, 104901, 93852, 630962, 391568, 460078, 309970, 92327, 596556, 213515, 427900, 541834, 286108, 107623, 19720, 139225, 410631};
    vector<int> y = {135878, 383609, 265049, 159984, 269432, 294367, 229333, 239670, 375101, 240570, 2641, 222178, 3843, 213041, 248628, 253200, 121234, 83546, 166805, 125315, 255014, 131247, 283319, 312496, 301913};
    vector<int> width = {21806, 1315, 17601, 213, 15698, 21192, 2819, 5871, 21417, 690, 24601, 14837, 19372, 10512, 8605, 14881, 25545, 12546, 17195, 25970, 17265, 16948, 9691, 11516, 2139};
    vector<int> height = {6108, 603, 2535, 14455, 3534, 4082, 11221, 13535, 4058, 10861, 14063, 13292, 12126, 7269, 14422, 7669, 7435, 14302, 9547, 5560, 5495, 6488, 10198, 10008, 9798};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {345870.0711512337, 193767.05170642512};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int sheetWidth = 1966096;
    int sheetHeight = 120104;
    vector<int> x = {1350909, 1709840, 1871467, 565554, 264486, 190132, 1716868, 1416771, 1385916, 555027, 1091158, 398395, 185678, 420325, 1485973, 944768, 1808330, 94566, 1258667, 1267922, 623571, 371342, 479288, 107260, 921252, 1586975, 576013, 1271605, 587270, 1609019, 1934224};
    vector<int> y = {104729, 113488, 77374, 49052, 64690, 91780, 119638, 87093, 118181, 31508, 37287, 95509, 117321, 10422, 8086, 116717, 105147, 31243, 102177, 85144, 76943, 73743, 33804, 95179, 44297, 54713, 65335, 8893, 107075, 51204, 48814};
    vector<int> width = {14161, 44237, 31541, 37592, 54221, 1935, 53937, 35291, 29752, 29587, 9837, 39899, 14596, 40182, 9878, 2513, 51796, 27921, 49684, 55497, 13297, 21612, 16074, 13047, 16646, 53765, 40132, 18799, 13652, 31416, 3301};
    vector<int> height = {977, 582, 3636, 1534, 1640, 2708, 352, 892, 215, 1840, 715, 92, 571, 377, 524, 197, 1316, 1523, 3236, 456, 967, 2297, 803, 2663, 2784, 1011, 1186, 1444, 2858, 2898, 1291};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {982580.8488990446, 59987.091841228816};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int sheetWidth = 1531090;
    int sheetHeight = 112017;
    vector<int> x = {1296356, 233831, 271287, 1318375, 1192792, 406535, 732435, 684220, 468841, 702809, 320381, 686078, 134985, 437107, 668013, 407913, 1209963, 389313, 114079, 759791, 752360, 684639, 805365, 1359477, 315778, 149825, 1179439, 707594, 1136307, 1053788, 967841, 269174, 991835, 1175515, 1281106, 1489672, 31942, 96953, 1434167, 59388};
    vector<int> y = {2284, 29262, 110564, 4639, 92378, 84434, 40944, 74287, 60425, 22518, 2390, 92548, 20284, 57350, 75448, 21195, 111601, 38296, 110634, 70254, 25107, 68777, 108567, 99312, 38218, 35518, 103032, 104282, 73777, 76801, 10249, 52125, 73466, 78829, 32640, 15979, 36896, 18754, 107163, 52430};
    vector<int> width = {6412, 30659, 1237, 8898, 11102, 16666, 9535, 32018, 18989, 7457, 11377, 6421, 8950, 16095, 28772, 8475, 7894, 19751, 9678, 26218, 18723, 15792, 1425, 11619, 17577, 8227, 11695, 36665, 9403, 11794, 1943, 25551, 13759, 25416, 18493, 12711, 2770, 38258, 21038, 30805};
    vector<int> height = {112, 2647, 1066, 1672, 608, 1147, 629, 763, 2736, 2125, 64, 1311, 2420, 2122, 2615, 243, 162, 526, 1353, 971, 1296, 1739, 2335, 322, 161, 1779, 267, 2760, 1722, 67, 1667, 594, 285, 1686, 360, 850, 1824, 386, 2506, 1276};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {766051.4936299813, 55963.356416264825};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int sheetWidth = 1536026;
    int sheetHeight = 1526384;
    vector<int> x = {1505715, 946588, 1069682, 977675, 805148, 1167110, 1389020, 32384, 895261, 114801, 1166559, 775673, 771233, 198355, 573271, 1267114, 60390, 132664, 1312576, 642873, 1518624, 755292, 259308, 531145, 185287, 656737, 75863, 455480, 468061, 1259484, 1277940, 1026113, 355070, 794187, 284536, 112198};
    vector<int> y = {999375, 1128275, 1457168, 196215, 434968, 252589, 1195607, 1319674, 33405, 508717, 1222832, 346371, 80838, 1526180, 457730, 226715, 904399, 932960, 537025, 601007, 516975, 1268939, 1488238, 213073, 349949, 1069682, 1436577, 116504, 1206806, 1039274, 595687, 719640, 598558, 1144847, 1073077, 1509243};
    vector<int> width = {24007, 31190, 23698, 23622, 1062, 18328, 24858, 19841, 22687, 34942, 22758, 16918, 740, 13507, 22655, 16304, 42062, 20183, 18462, 10886, 2141, 3618, 27556, 3214, 22633, 38167, 39655, 12756, 23210, 42346, 29478, 32259, 21085, 15739, 32598, 20619};
    vector<int> height = {3421, 4596, 9075, 35741, 4106, 28980, 17685, 17995, 30619, 32222, 2741, 35349, 34603, 102, 42062, 39412, 42175, 4934, 27781, 35385, 1316, 26663, 10162, 25982, 41182, 41397, 29834, 1177, 27975, 18792, 29464, 33454, 35534, 36721, 41482, 6276};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {769112.5411084753, 762921.4311600103};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int sheetWidth = 1186238;
    int sheetHeight = 343228;
    vector<int> x = {378171, 1011087, 635087, 190867, 1106172, 1015329, 805816, 250961, 929715, 1025650, 910530, 773806, 1114690, 830523, 1122933, 998241, 277316, 265668, 325183, 581434, 631922, 935014, 996711, 591712, 345124, 953298, 919157, 174539, 546198};
    vector<int> y = {136449, 148667, 6481, 238083, 4424, 98303, 329356, 82482, 168704, 181307, 272919, 178777, 75894, 227471, 125800, 226094, 45728, 162980, 314657, 196773, 288666, 156463, 88005, 156889, 103040, 183062, 35731, 137812, 121747};
    vector<int> width = {9831, 5997, 13754, 31643, 36777, 13189, 3138, 35230, 23316, 14405, 10170, 6880, 14784, 37409, 26348, 35542, 5531, 15320, 32153, 26989, 9856, 40760, 13538, 20720, 2583, 31657, 38607, 21979, 4476};
    vector<int> height = {5722, 11604, 8830, 2212, 5233, 9954, 4710, 69, 7254, 7048, 1952, 6076, 4331, 403, 6997, 1002, 10710, 4457, 9533, 3178, 5217, 1407, 780, 10566, 2379, 7668, 8397, 7761, 5222};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {591954.1054259511, 171778.66533978167};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int sheetWidth = 193698;
    int sheetHeight = 1825541;
    vector<int> x = {177892, 9722, 111035, 158468, 190304, 181082, 70979, 33144, 36212, 171174, 122506, 104417, 182986, 157431, 94437, 110359, 169963, 33832, 127657, 125762, 132936, 43004, 167353, 89503, 171467, 55827, 166789, 100150};
    vector<int> y = {110350, 55784, 1685785, 895613, 500700, 506864, 596946, 858972, 889747, 658700, 1425933, 1427546, 260251, 1142585, 693968, 761459, 139384, 74388, 760911, 547366, 1570398, 984561, 638899, 499320, 1699773, 497102, 393404, 1028159};
    vector<int> width = {3798, 5442, 103, 6725, 2396, 4916, 3831, 4968, 6613, 988, 6808, 216, 3090, 3623, 1674, 6531, 5463, 5964, 1061, 814, 3081, 2350, 1199, 3520, 278, 569, 211, 4843};
    vector<int> height = {32431, 48332, 52107, 41530, 1755, 56894, 45939, 3642, 53248, 37938, 18409, 31032, 9556, 59785, 3077, 55897, 55224, 26400, 2849, 12344, 21993, 55215, 17110, 41635, 54951, 46899, 30662, 3521};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {96720.94777173501, 914999.2204952505};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int sheetWidth = 1166347;
    int sheetHeight = 1456879;
    vector<int> x = {918759, 399252, 999214, 569439, 229039, 332660, 1098957, 155812, 805081, 396388, 886450, 358726, 158586, 236670, 929587, 764205, 108328, 333953, 393290, 1056667, 442810, 507817, 171447, 228911, 1041317, 102450, 1156870, 922557, 394759, 687848, 884250, 370395, 213542, 130293, 549055};
    vector<int> y = {178022, 7784, 579801, 317039, 342846, 507773, 788669, 1095215, 1286587, 291358, 1349745, 1124811, 1294374, 26117, 909456, 432207, 662356, 378401, 1286606, 486638, 440733, 1267481, 819296, 577144, 567145, 1143495, 317025, 1062146, 1448849, 1059898, 185671, 510978, 1260601, 190236, 413757};
    vector<int> width = {4480, 14076, 9052, 9346, 27947, 632, 31859, 19081, 20784, 14891, 14722, 28453, 10685, 2598, 27388, 31957, 29701, 20591, 11495, 20815, 5526, 7319, 30610, 20585, 27156, 26688, 7791, 22237, 3017, 11992, 30898, 25169, 12076, 20845, 2017};
    vector<int> height = {34390, 11045, 5511, 1051, 28541, 22215, 15872, 34921, 35284, 12074, 9823, 30887, 12313, 33316, 17547, 15081, 24732, 4178, 38400, 5481, 4816, 4772, 1641, 38942, 41162, 29129, 30765, 9178, 5616, 9835, 26187, 85, 33640, 38777, 1952};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {583535.095169397, 728323.015466868};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int sheetWidth = 460737;
    int sheetHeight = 886789;
    vector<int> x = {346284, 409886, 386914, 203512, 67188, 210038, 380549, 428389, 84887, 275865, 142102, 84159, 128137, 167998, 84803, 287414, 364665, 290933, 297064, 401355, 270037, 436216, 84524, 17290, 313980, 39905, 149432, 240310, 408621, 18559, 106778, 303877, 13582, 257106, 305056};
    vector<int> y = {767955, 275216, 806927, 388487, 413618, 110657, 578018, 735072, 460096, 713013, 607841, 654784, 394367, 749134, 408044, 175126, 110285, 759359, 70067, 200921, 310264, 535772, 288208, 104664, 786675, 234149, 680801, 222431, 294664, 719068, 785347, 240970, 713036, 758650, 254810};
    vector<int> width = {11031, 9656, 12527, 1818, 6512, 11175, 12079, 9161, 8860, 4342, 5166, 9884, 11513, 4100, 12538, 6845, 47, 6153, 11472, 9637, 7319, 9284, 4994, 6690, 8480, 12265, 9548, 7726, 8718, 8814, 13003, 1108, 4177, 8381, 9148};
    vector<int> height = {15423, 14793, 6990, 4751, 15065, 4605, 13361, 24476, 769, 18, 15970, 10666, 12613, 3801, 934, 12463, 21132, 5945, 13839, 1186, 22199, 18889, 2443, 20190, 17938, 23690, 14006, 24294, 15603, 18556, 6243, 12018, 9324, 15272, 8654};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {230251.9775628237, 443068.16034419724};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int sheetWidth = 1517644;
    int sheetHeight = 1020072;
    vector<int> x = {831657, 329090, 619793, 1474852, 1136728, 987888, 738240, 1371928, 1364367, 342574, 891540, 299461, 710585, 1121910, 426258, 45136, 164995, 1238336, 413999, 1326964, 1236883, 467418, 846504, 539922, 653375, 518712, 1130979, 62895};
    vector<int> y = {676486, 201399, 156468, 277699, 704162, 839160, 426570, 225776, 820998, 741241, 804033, 681562, 90448, 207612, 46886, 933787, 514750, 383730, 738128, 172892, 962481, 882255, 287338, 737116, 982801, 698533, 596717, 792634};
    vector<int> width = {28220, 30105, 26274, 24739, 49057, 50914, 35111, 37335, 13788, 18330, 44114, 18739, 12336, 27191, 5640, 9121, 7228, 11097, 25096, 36530, 16520, 47721, 33772, 10075, 368, 13066, 25589, 15773};
    vector<int> height = {24646, 16754, 20478, 34557, 21574, 18117, 19982, 11393, 18087, 21640, 8170, 11705, 19681, 16034, 26699, 19190, 30341, 5315, 3051, 27402, 26268, 3044, 22484, 3450, 9959, 29626, 24079, 14649};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {757549.7462728785, 509991.48622314096};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int sheetWidth = 828779;
    int sheetHeight = 205038;
    vector<int> x = {50574, 388927, 704624, 325583, 202768, 474965, 242346, 96581, 27895, 434930, 740540, 665781, 256913, 811251, 446817, 226511, 517101, 772372, 686190, 1345, 131848, 812923, 712398, 720546, 642752, 679868, 508315, 473694, 287866, 423384, 19730, 105340};
    vector<int> y = {73039, 173954, 7242, 35101, 147954, 18802, 19524, 37470, 156660, 128681, 190062, 144899, 23921, 123358, 45930, 74584, 128040, 107188, 140103, 84177, 76886, 64198, 12074, 138349, 429, 120712, 8169, 12985, 48321, 116220, 30112, 83471};
    vector<int> width = {9750, 6456, 21924, 12394, 783, 7339, 3929, 3494, 21132, 11467, 11144, 3729, 7696, 8185, 1671, 11317, 8446, 2699, 1069, 16267, 14718, 4639, 1406, 24491, 843, 18733, 14974, 16818, 25263, 15468, 24504, 11575};
    vector<int> height = {1495, 2180, 1172, 5986, 5055, 133, 6047, 405, 4608, 422, 4739, 290, 6206, 5200, 1681, 1636, 5880, 2831, 4169, 1304, 589, 3191, 4076, 353, 3431, 5655, 3588, 4313, 4726, 1462, 4053, 2752};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {414587.64702254976, 102660.10618999187};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int sheetWidth = 596625;
    int sheetHeight = 1453274;
    vector<int> x = {224042, 423789, 73021, 114724, 209016, 144675, 396177, 78149, 342671, 427141, 476957, 534251, 519705, 525555, 356638, 481931, 168829, 438526, 308836, 324955, 446870, 382828, 92564, 392428, 308095, 31573, 197559, 63489, 448277, 107159};
    vector<int> y = {1067476, 983010, 231593, 387244, 844980, 981285, 739449, 654211, 1294282, 402069, 431687, 867609, 1197519, 23424, 484910, 802682, 1409047, 756700, 480814, 379175, 965558, 1053983, 136225, 392112, 918641, 899274, 1341494, 1225291, 755804, 334811};
    vector<int> width = {4903, 9434, 5017, 13072, 10554, 504, 13945, 10987, 11491, 16474, 19881, 2329, 1450, 12501, 14852, 18904, 18183, 5770, 17380, 17157, 8974, 8688, 4008, 19257, 13654, 2930, 18486, 17115, 19816, 9238};
    vector<int> height = {41128, 21170, 10292, 15714, 43404, 15486, 16575, 38703, 10641, 10032, 16201, 21825, 20497, 10477, 4287, 16140, 31152, 6280, 33838, 5900, 34739, 2323, 47311, 23296, 7766, 1211, 37459, 949, 48142, 39563};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {298212.2973487889, 726181.5976514557};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int sheetWidth = 1828137;
    int sheetHeight = 541608;
    vector<int> x = {1251390, 1672902, 1759832, 1113596, 1708838, 332844, 1584373, 633026, 1751278, 1483516, 400774, 1052757, 702073, 1055610, 817961, 1162959, 569024, 1301745, 1551199, 973570, 1214156, 1763638, 477840, 1621092, 112096, 1467904, 1014911, 1238163, 46075, 1570553};
    vector<int> y = {376280, 498049, 31864, 462079, 243230, 249227, 315229, 114772, 3591, 110201, 528776, 109947, 476600, 478063, 324536, 112532, 226245, 523817, 4000, 11575, 143241, 65566, 250674, 321226, 503383, 458614, 448658, 46044, 250043, 417027};
    vector<int> width = {20343, 27569, 40931, 15081, 54941, 20696, 14907, 38574, 60881, 4691, 50718, 5102, 2349, 11020, 44113, 47877, 40986, 17002, 44930, 45079, 59281, 14885, 21414, 22547, 27168, 18250, 42445, 12106, 50651, 35357};
    vector<int> height = {9914, 14725, 2434, 10137, 13394, 10776, 14802, 4646, 4142, 15603, 10480, 7007, 287, 11934, 12914, 4592, 11946, 8234, 17305, 5061, 17268, 389, 2125, 11958, 16447, 10009, 5229, 4435, 9901, 5681};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {912460.2466300594, 270788.371290113};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int sheetWidth = 1168447;
    int sheetHeight = 536925;
    vector<int> x = {821282, 39516, 665644, 431417, 1049060, 109588, 972253, 1070972, 364749, 887174, 320766, 345409, 1011054, 409216, 981216, 1116773, 697398, 378200, 498055, 459616, 547775, 530307, 1052577, 1123038, 622493, 135813, 633899, 573215, 1115197, 436201, 519370, 767845, 400953, 940982, 33776, 639268};
    vector<int> y = {516138, 186864, 70762, 127766, 206515, 518508, 397209, 237128, 45784, 106004, 37186, 462929, 15368, 426130, 36368, 64602, 108134, 449970, 487430, 466064, 237173, 123916, 148340, 210880, 204966, 391314, 32316, 51995, 459290, 193040, 122451, 238220, 119134, 368717, 9916, 526740};
    vector<int> width = {23691, 29469, 14552, 25200, 17750, 32009, 10164, 10213, 18233, 3599, 17170, 8736, 15424, 2211, 3443, 26158, 1526, 8616, 14928, 28535, 22918, 21123, 5778, 18566, 15811, 6080, 29035, 315, 25277, 9507, 8830, 17687, 5615, 14156, 30657, 18509};
    vector<int> height = {5331, 3808, 12377, 2215, 11429, 623, 7779, 5364, 9308, 5415, 7322, 7211, 3309, 2477, 1238, 4419, 14783, 4010, 2711, 11362, 6363, 4301, 7164, 9031, 10658, 14559, 14473, 13139, 11914, 2162, 12495, 14725, 1956, 5846, 2432, 1544};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {583606.7713204429, 268665.4168943033};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int sheetWidth = 855213;
    int sheetHeight = 348209;
    vector<int> x = {135023, 323015, 269593, 213102, 102323, 625660, 580976, 369235, 578330, 391058, 574657, 691959, 617888, 297693, 250734, 627731, 695764, 696833, 156377, 358489, 662992, 352037, 133757, 219003, 197712, 510268, 599897, 636053, 748581, 326924, 427129, 819315, 123406, 754681, 311872, 58083, 259422, 795415, 163074, 749489, 752810, 686154, 804577, 396220, 142845, 62277, 791959, 95379, 31489};
    vector<int> y = {233416, 58010, 229068, 233, 271310, 150165, 327160, 80293, 181361, 87465, 200136, 50630, 64727, 193553, 22606, 63233, 274528, 5011, 153956, 29578, 256828, 263063, 105791, 252029, 268759, 121759, 231756, 164152, 330158, 313547, 66257, 289854, 187023, 12126, 341423, 223486, 257535, 77449, 333987, 267152, 20483, 191785, 217459, 285103, 198122, 93503, 252539, 92759, 159405};
    vector<int> width = {11955, 2361, 3564, 10947, 17212, 9425, 10166, 11504, 12662, 14025, 2697, 817, 8537, 5265, 13574, 6387, 2177, 830, 12576, 5402, 17177, 4781, 10727, 14666, 12630, 3205, 15767, 2074, 1316, 69, 341, 11018, 4950, 10761, 8468, 13699, 10393, 10520, 8296, 5181, 15913, 9285, 7691, 8026, 11452, 16369, 9470, 14348, 16524};
    vector<int> height = {2691, 6141, 7050, 6800, 5750, 1959, 4267, 3215, 6763, 6859, 1535, 4673, 2318, 5051, 2931, 6566, 5096, 5077, 650, 1564, 5899, 4275, 3522, 5117, 1763, 6815, 2126, 6853, 1627, 4769, 150, 987, 6229, 1619, 1797, 2679, 4984, 4703, 4242, 4335, 806, 2665, 1433, 4050, 6805, 3494, 5651, 1738, 6955};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {427945.35295913724, 174066.6901297085};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int sheetWidth = 826938;
    int sheetHeight = 1713581;
    vector<int> x = {43574, 149608, 58845, 61147, 346077, 274654, 427773, 712839, 629189, 567131, 723991, 13214, 544290, 623658, 656881, 476413, 731652, 499800, 403023, 439501, 462063, 481216, 453481, 519172, 322797, 638089, 742998, 792534, 434500, 793573, 772791, 339920, 767853, 595459, 579338, 758318, 609635, 270569, 773967, 112860, 438984, 671881, 444619, 354517, 462030, 395036, 535562, 234348, 672808, 118398};
    vector<int> y = {1028362, 1051899, 1131424, 1451849, 864160, 278548, 694809, 1667915, 287774, 813672, 261051, 533920, 901494, 808064, 806729, 173539, 1563326, 1323026, 473909, 1009542, 319923, 243549, 242334, 1201413, 1535595, 1640223, 1442767, 1113717, 575999, 1276457, 143433, 1020060, 449003, 1146710, 1239529, 1258488, 29779, 917868, 1452768, 1312914, 880347, 1045567, 537734, 773842, 556963, 906947, 1122197, 584949, 794582, 587260};
    vector<int> width = {9784, 2411, 16078, 954, 16492, 12898, 11921, 1632, 8086, 1492, 6740, 1647, 4118, 16336, 13213, 31, 9037, 4522, 12334, 2012, 1189, 6969, 13330, 6378, 12690, 4301, 2805, 10135, 13000, 5292, 6176, 15373, 9220, 16313, 9804, 3223, 1419, 11740, 8157, 9235, 1106, 10059, 3151, 7005, 8486, 13441, 158, 13164, 15587, 14090};
    vector<int> height = {15160, 7531, 12608, 31015, 3128, 18334, 10090, 21359, 7755, 1883, 29844, 15771, 32794, 18296, 31346, 4512, 32751, 26875, 23660, 24576, 23708, 31845, 16877, 29622, 10146, 27877, 5241, 12824, 23724, 27310, 8494, 23837, 13287, 25086, 3898, 28301, 4002, 4271, 25033, 395, 34060, 33077, 24502, 18631, 28795, 7793, 14715, 1324, 13959, 27711};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {413012.7647851812, 856719.4835950504};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int sheetWidth = 1230719;
    int sheetHeight = 553845;
    vector<int> x = {195016, 344565, 918319, 718713, 477898, 407738, 210199, 987961, 656202, 86985, 505417, 756371, 678414, 1069900, 847342, 949225, 436524, 316425, 1171523, 728054, 947552, 529777, 367058, 958057, 386572, 1184619, 146519, 271981, 925069, 1145698, 718948, 953516, 210046, 1073921, 199168, 1006264, 1205755, 800965, 978147, 442107, 1206202, 338534, 1223363, 1011352, 1164790, 868879, 1013228};
    vector<int> y = {276799, 250790, 294220, 508550, 26218, 387819, 85086, 260874, 227041, 99158, 255139, 47002, 36111, 65232, 65182, 425064, 189056, 102038, 133919, 226235, 284521, 227511, 378450, 50227, 59074, 109550, 520536, 258839, 535226, 58494, 386705, 24204, 413268, 233691, 425617, 309431, 44493, 493294, 380005, 524478, 131248, 539369, 500583, 65764, 177357, 28133, 258814};
    vector<int> width = {24539, 2099, 20672, 22876, 11175, 24236, 3556, 18617, 12144, 20654, 7347, 25307, 5258, 8266, 8499, 16803, 18875, 22895, 19995, 14013, 23257, 12336, 23993, 20969, 17077, 10944, 18164, 15847, 9080, 16559, 22443, 9614, 8192, 13964, 12727, 7130, 5571, 19559, 1162, 608, 23367, 18699, 6138, 3191, 13234, 23269, 9383};
    vector<int> height = {11154, 1220, 11326, 4635, 5186, 2448, 5613, 40, 8115, 6282, 4325, 1704, 15, 3224, 5817, 7885, 7776, 1286, 11358, 3344, 8953, 3480, 5738, 7695, 10672, 7324, 4487, 2071, 3114, 7491, 11308, 5718, 2931, 3471, 7025, 454, 11495, 3019, 1510, 8092, 1788, 8609, 8719, 9086, 8611, 4964, 4338};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {614777.691994321, 277075.36275229754};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int sheetWidth = 1665317;
    int sheetHeight = 413067;
    vector<int> x = {1247823, 1192482, 1292626, 1457864, 683015, 1615044, 1555740, 1645894, 995728, 524997, 886323, 404967, 592547, 520835, 411681, 1554983, 852017, 721800, 1210072, 128957, 191144, 1607852, 159631, 130567, 165920, 1079279, 1573364, 934066, 659860, 748357, 1527949, 1091411, 189840, 211676, 1354611, 819936, 1052702, 179957};
    vector<int> y = {57116, 359683, 270963, 271542, 90528, 309504, 14220, 5289, 136663, 403510, 221329, 99215, 7416, 85644, 1073, 395996, 194598, 668, 10472, 152178, 326613, 335681, 177760, 354290, 98000, 193511, 64702, 146613, 79044, 263694, 121705, 15074, 61648, 289083, 279887, 335649, 52689, 180230};
    vector<int> width = {29329, 7008, 33293, 14804, 20816, 18492, 41001, 8577, 21010, 26842, 20365, 12445, 18956, 39390, 16585, 23612, 26149, 14398, 18946, 11570, 29255, 35665, 5156, 7952, 33051, 14331, 41725, 16240, 18003, 8699, 14574, 26949, 22167, 5259, 5141, 25730, 5915, 5055};
    vector<int> height = {5652, 6020, 8307, 3271, 5170, 4383, 8699, 10334, 4228, 2803, 2594, 6446, 2683, 5773, 2771, 4387, 10346, 10802, 7413, 4127, 4224, 5334, 3348, 1285, 6443, 8380, 4675, 10631, 3421, 6284, 5953, 3474, 922, 3041, 7491, 1930, 5073, 3918};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {831534.4817977797, 206850.17806039163};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int sheetWidth = 308905;
    int sheetHeight = 21375;
    vector<int> x = {5155, 118651, 78273, 98789, 278957, 263477, 31476, 6447, 148721, 108895, 136208, 173911, 42318, 132764, 280884, 209083, 115878, 144374, 275842, 249574, 144267, 155836, 110803, 119535, 20797, 298082, 266799, 155605, 242967, 19973, 260496, 280782, 164034, 270133, 147788, 259597, 137009, 292528, 125297, 218595, 104016, 75749, 256504, 268374, 129246};
    vector<int> y = {10922, 9903, 4322, 14927, 6198, 12946, 19467, 4100, 5906, 20329, 2996, 7787, 5620, 11814, 7471, 4671, 2441, 3606, 10303, 19921, 9050, 3806, 19649, 19484, 16902, 6814, 371, 15887, 360, 4004, 7173, 16764, 21269, 5463, 8402, 4942, 10061, 2965, 3259, 21302, 4569, 20395, 175, 2754, 5914};
    vector<int> width = {785, 3411, 5093, 3943, 5542, 3250, 483, 1840, 2606, 4591, 2266, 4090, 1256, 5605, 1374, 4753, 2767, 2357, 480, 4958, 5720, 1345, 4826, 3187, 5258, 2508, 2574, 4758, 237, 3419, 1337, 257, 3594, 1791, 2207, 3335, 5414, 5857, 1365, 6084, 2097, 2236, 215, 4951, 2133};
    vector<int> height = {54, 376, 169, 238, 464, 75, 340, 338, 179, 199, 364, 351, 437, 77, 458, 106, 459, 2, 452, 353, 11, 389, 73, 329, 330, 103, 237, 114, 473, 306, 54, 72, 96, 377, 377, 372, 409, 424, 8, 39, 387, 421, 444, 446, 6};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {154352.95837381377, 10695.216248889034};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int sheetWidth = 1118627;
    int sheetHeight = 568885;
    vector<int> x = {871825, 998954, 985906, 669922, 16079, 733576, 788217, 193433, 332561, 1114698, 1096787, 898162, 565486, 792408, 612268, 302862, 78070, 654067, 572245, 654732, 645506, 363065, 826282, 1091497, 176321, 1101628, 275995, 554816, 510238, 1027930, 108895, 457852, 1017333, 18430, 1093128, 994159, 47837, 780556, 299971, 746796, 1018702, 1016019, 661840};
    vector<int> y = {331727, 259603, 152822, 218327, 326917, 82750, 315573, 46543, 431123, 156383, 322941, 186429, 28155, 500597, 428635, 549545, 409426, 335646, 324836, 147060, 461744, 274248, 247058, 117540, 256701, 535528, 11520, 129968, 273157, 510957, 89981, 297921, 410063, 308130, 364394, 419370, 233452, 82448, 629, 364960, 274447, 460294, 558746};
    vector<int> width = {22486, 12634, 2202, 18371, 62, 2475, 6212, 17402, 10884, 2923, 1952, 10365, 23692, 178, 2194, 14672, 12850, 7098, 18890, 11220, 15297, 6141, 19456, 13007, 16850, 1970, 17822, 24882, 14657, 5459, 14891, 14748, 2839, 13313, 1745, 5994, 4081, 19507, 7506, 13830, 19728, 12383, 25620};
    vector<int> height = {8621, 12560, 12353, 3438, 627, 9135, 7888, 12397, 12007, 12480, 2653, 10797, 51, 6862, 7300, 1540, 4945, 9641, 1561, 4695, 1151, 2470, 2037, 11045, 4950, 11752, 9309, 10107, 11240, 9789, 6635, 2705, 7568, 2168, 6611, 1520, 1925, 12038, 8808, 5800, 3287, 8241, 2381};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {558941.3741606971, 284692.0304541642};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int sheetWidth = 1010156;
    int sheetHeight = 139634;
    vector<int> x = {61925, 201426, 562881, 139693, 676257, 395820, 379566, 823301, 529912, 364137, 298866, 800029, 642344, 90137, 83312, 870026, 194484, 866600, 213026, 302936, 380469, 650793, 743295, 657666, 154834, 769454, 776176, 66151, 18353, 466192, 94311, 183109, 966172, 637171, 486251, 656477, 792008, 852991, 846651, 107106, 135207, 54920};
    vector<int> y = {34132, 64319, 69150, 8727, 98861, 34657, 61211, 43854, 42012, 39551, 127615, 114995, 23438, 109213, 51277, 125476, 132998, 104997, 94890, 83188, 94492, 73796, 13073, 117695, 105635, 56293, 45672, 126948, 108490, 47489, 27971, 72699, 74377, 104903, 52611, 104431, 111514, 101885, 106413, 100791, 94738, 35334};
    vector<int> width = {13733, 18002, 22749, 11776, 2696, 10417, 10279, 10157, 13534, 245, 6539, 3514, 15564, 108, 16819, 21745, 12842, 21123, 5868, 5077, 9510, 8995, 6029, 11380, 22184, 23900, 3463, 9777, 11469, 6486, 23079, 6407, 6678, 18629, 1995, 1959, 8937, 5588, 18120, 6021, 11679, 3187};
    vector<int> height = {2490, 290, 1135, 1733, 2213, 2059, 1937, 2950, 2980, 1314, 1081, 2708, 1068, 535, 2616, 3144, 388, 1035, 2388, 1260, 1129, 1263, 1926, 2101, 1133, 1319, 1468, 2653, 3129, 3249, 1441, 1731, 908, 1744, 171, 1413, 188, 2635, 2617, 1674, 3132, 825};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {505277.57068520715, 69766.087473945};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int sheetWidth = 266398;
    int sheetHeight = 1151763;
    vector<int> x = {74007, 122008, 151765, 96389, 139997, 197942, 20652, 203285, 66627, 35820, 13390, 23042, 1679, 201343, 35476, 27586, 154687, 136642, 215311, 14695, 73494, 99265, 38368, 28280, 137072, 187833, 260197, 157764, 48645, 248509, 87015, 77944, 113133, 48420, 99052, 208053, 173335, 68967, 154285, 109702};
    vector<int> y = {1050463, 1075265, 993111, 597289, 869062, 150950, 1126714, 988798, 148867, 175461, 1115661, 433336, 597154, 897738, 761882, 527295, 622383, 132103, 423952, 118325, 717005, 743649, 567684, 799864, 652499, 533738, 609301, 570662, 351050, 667481, 135820, 878228, 245169, 46975, 438043, 375840, 329744, 985460, 735465, 596214};
    vector<int> width = {1679, 2412, 3507, 3365, 6565, 1448, 6561, 1656, 3782, 1668, 6597, 2201, 1316, 2795, 5635, 2736, 2726, 200, 1765, 2129, 589, 5310, 449, 3300, 3434, 5077, 887, 5487, 3377, 6618, 1944, 4803, 2136, 3692, 5314, 4251, 4848, 4666, 2916, 3060};
    vector<int> height = {1163, 2533, 5975, 28479, 23575, 12485, 4345, 20268, 9715, 18712, 24793, 12575, 14575, 20601, 2830, 3074, 25658, 21128, 27242, 779, 17021, 2560, 10022, 15166, 8475, 839, 9141, 23370, 21408, 24912, 2610, 9970, 13172, 9365, 9761, 3923, 14723, 25919, 19166, 20830};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {133275.28291151914, 575216.9660691182};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int sheetWidth = 1891280;
    int sheetHeight = 1577143;
    vector<int> x = {66436, 1232832, 786484, 1606992, 95992, 272469, 1262119, 489882, 1326802, 1009603, 1482626, 862580, 1667243, 784379, 501896, 841424, 240424, 27254, 280118, 794415, 707117, 1617453, 1676070, 666054, 1666400, 127169, 373892, 1701705, 1072538, 1332458, 1314781, 642085, 59793, 1594799, 1678602, 988192, 340575, 243392, 1786995, 857232, 930710, 1208636, 448083, 354799, 399065, 1176068, 739890};
    vector<int> y = {987334, 1244863, 827214, 1005978, 131363, 1413554, 1048415, 612209, 802363, 103461, 1140644, 313462, 985360, 609779, 1343196, 798705, 760538, 1130121, 329775, 576854, 1098264, 630423, 992007, 309610, 1475981, 1394074, 97652, 1351927, 138275, 83672, 1284379, 65670, 625460, 313293, 794410, 1352028, 504126, 681296, 245170, 643334, 143851, 263764, 1365070, 726473, 1295732, 920371, 444628};
    vector<int> width = {38471, 977, 20831, 38004, 37351, 13840, 9676, 21390, 30405, 36423, 1752, 1164, 1831, 6616, 6685, 22083, 4237, 35957, 28736, 20653, 39604, 17976, 629, 22663, 2019, 17864, 26074, 27830, 35561, 9071, 2773, 5255, 39684, 4533, 15690, 9557, 22359, 3145, 10382, 36109, 36905, 27870, 12923, 22325, 1158, 16755, 35687};
    vector<int> height = {16501, 28487, 29969, 321, 27798, 7495, 19475, 31818, 13857, 6326, 18852, 20377, 5979, 13840, 4678, 5038, 26182, 25584, 26876, 20455, 28997, 29026, 6003, 11651, 26489, 29707, 30273, 7550, 3507, 11504, 15584, 8127, 22093, 5274, 4031, 11296, 2556, 33230, 2521, 6537, 3615, 26250, 14777, 6578, 6922, 27909, 9165};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {947118.6016723819, 789014.9627687478};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int sheetWidth = 81864;
    int sheetHeight = 811601;
    vector<int> x = {61820, 56924, 26033, 65839, 61728, 31995, 65768, 55468, 6106, 35266, 70462, 6066, 26788, 77406, 32397, 76924, 32423, 52543, 76690, 44362, 6551, 65204, 34935, 19691, 60951, 21811, 50572};
    vector<int> y = {502844, 475554, 769989, 315209, 134015, 342412, 162299, 639169, 580437, 646752, 536692, 670659, 134954, 679456, 264784, 451222, 798274, 228135, 221325, 545511, 252763, 261963, 180215, 481758, 606868, 744304, 659627};
    vector<int> width = {1873, 2740, 1238, 1075, 2901, 1642, 2193, 343, 2294, 563, 2514, 2913, 1096, 2066, 100, 1524, 2408, 1293, 574, 2625, 53, 2416, 1073, 731, 1674, 1729, 883};
    vector<int> height = {15079, 13082, 6125, 14109, 22224, 22176, 349, 21586, 9865, 21398, 19926, 15376, 17712, 5237, 28210, 24667, 6489, 1637, 26476, 14522, 14190, 14584, 5430, 28845, 26314, 10883, 5458};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {40853.535550931534, 405225.90956567234};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int sheetWidth = 1835623;
    int sheetHeight = 1914325;
    vector<int> x = {1536665, 322805, 1182473, 1824512, 1680852, 1571874, 1096612, 1179500, 1121592, 1577508, 328456, 230981, 746332, 1356944, 258111, 810785, 1809669, 12515, 880412, 242521, 1812651, 294339, 22321, 544819, 946831, 6103, 1107288, 463909, 369801, 1382208, 1235113, 60177, 1135353};
    vector<int> y = {1100325, 1045736, 1552367, 1771104, 454751, 1307525, 976417, 614440, 569066, 708478, 145836, 1462205, 64827, 369175, 1878236, 219022, 514254, 767737, 1553181, 1183034, 1245178, 879672, 1746660, 667165, 1400344, 438225, 195586, 736276, 1436827, 239778, 1171498, 565765, 840908};
    vector<int> width = {3110, 15185, 36888, 5093, 17082, 40641, 2331, 48941, 16696, 14380, 47036, 42380, 3670, 7302, 36042, 9084, 17681, 21845, 17723, 16732, 22570, 41646, 36200, 33808, 29246, 55435, 26601, 18790, 5355, 31941, 14907, 24296, 46820};
    vector<int> height = {18691, 32338, 53519, 43138, 28269, 38612, 43537, 38201, 44899, 30308, 44834, 51106, 5476, 22504, 25220, 10003, 4381, 8696, 19288, 53153, 39437, 38635, 29485, 3583, 10183, 34158, 47613, 29169, 5030, 56777, 46578, 40193, 22945};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {918728.2142050336, 957463.8149515995};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int sheetWidth = 652470;
    int sheetHeight = 931036;
    vector<int> x = {239790, 554891, 633174, 105916, 634389, 259114, 222962, 577293, 342013, 619202, 441133, 78154, 648705, 219881, 20376, 141232, 55931, 285704, 186524, 307467, 200793, 565632, 1306, 11596, 376315};
    vector<int> y = {485398, 340968, 238144, 665871, 873917, 252376, 586204, 395072, 264809, 170340, 447818, 432839, 685539, 174531, 232255, 22840, 488558, 710990, 233967, 454598, 533428, 40949, 85049, 476405, 641593};
    vector<int> width = {14051, 7043, 8935, 9330, 10153, 19773, 25536, 24393, 10272, 235, 779, 171, 1686, 4856, 4276, 17162, 12499, 16236, 6318, 7726, 3757, 15129, 4032, 23669, 10354};
    vector<int> height = {17509, 34186, 27801, 14656, 37007, 32570, 10328, 8155, 14321, 16400, 20501, 36703, 24522, 35824, 5377, 30621, 15183, 29802, 17741, 29408, 12084, 10900, 28031, 29920, 12755};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {326566.17109684873, 465924.14134409954};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int sheetWidth = 1607436;
    int sheetHeight = 1750575;
    vector<int> x = {1343652, 245163, 796050, 271092, 546586, 1002103, 916269, 1007880, 1418228, 335089, 973900, 819163, 818066, 262048, 51345, 388909, 396662, 66718, 1147281, 907640, 819336, 477970, 396710, 901911, 1092506, 796458, 1156432, 429658, 95826};
    vector<int> y = {372456, 780303, 477194, 1733860, 1596135, 1437243, 164951, 1289697, 582609, 1718666, 631935, 957590, 337447, 653570, 76958, 1600899, 751081, 714523, 1582924, 1506220, 1353685, 668460, 1428803, 1104262, 325936, 1238085, 936875, 1343158, 1344576};
    vector<int> width = {12215, 37458, 13671, 11618, 39712, 50020, 41713, 49902, 53732, 20437, 30909, 26076, 27605, 51068, 27770, 26344, 1345, 8168, 47408, 23632, 55317, 22842, 36170, 38865, 25076, 6689, 8632, 21199, 45415};
    vector<int> height = {56271, 29754, 58101, 14588, 25919, 21657, 25342, 19278, 43567, 19759, 39223, 11953, 54909, 57048, 39845, 17622, 33809, 49768, 32578, 3523, 59791, 10941, 26346, 50131, 37984, 13081, 10373, 31443, 35033};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {804329.0239546731, 874389.5753747955};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int sheetWidth = 602554;
    int sheetHeight = 1823737;
    vector<int> x = {243989, 431426, 236861, 23971, 134813, 481339, 140939, 595259, 304808, 575946, 562432, 178693, 450084, 588921, 284625, 176897, 119259, 239965, 112919, 410511, 259177, 171622, 49285, 456658, 85508, 434618, 306827, 391768, 323174, 261091, 187587, 96203, 291223, 477911, 294538, 175452, 164999, 465331, 350220, 267309, 222825, 450039, 529224, 351223, 69578, 482208, 44882};
    vector<int> y = {1389711, 1015204, 1801572, 179414, 1136188, 352407, 338653, 204543, 135724, 334445, 301915, 523873, 446652, 1599949, 545319, 1217744, 1326902, 717102, 70654, 620587, 1800233, 1642842, 223578, 1144883, 1500971, 519365, 1444553, 194338, 1348046, 390234, 683372, 1772340, 1301468, 1286352, 1373815, 179859, 618979, 92780, 1681908, 707530, 258754, 130778, 238685, 1555215, 72597, 1218474, 958501};
    vector<int> width = {1467, 4152, 2458, 1847, 10862, 8467, 6786, 3873, 11769, 8506, 4873, 11559, 9218, 8099, 3444, 12231, 1661, 5282, 5776, 1893, 7943, 3246, 10346, 187, 302, 12336, 1287, 11872, 8944, 10517, 12002, 6994, 2294, 125, 11814, 870, 2072, 2063, 8602, 11640, 6821, 5902, 11305, 2889, 12177, 2761, 4178};
    vector<int> height = {26568, 35804, 18307, 4965, 10642, 397, 11987, 37460, 17255, 12009, 31534, 17612, 409, 5068, 30781, 7335, 6204, 25630, 26289, 26922, 6658, 31079, 12956, 14104, 26528, 447, 10113, 15134, 23704, 25448, 23169, 32645, 16284, 33893, 27169, 10506, 21667, 23683, 25767, 28809, 5270, 27831, 6369, 16445, 3176, 16707, 38786};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {301339.3336054152, 912341.464521567};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int sheetWidth = 975568;
    int sheetHeight = 682772;
    vector<int> x = {723878, 737404, 101471, 732265, 759822, 364458, 490847, 677458, 584803, 545567, 664852, 666733, 510430, 201775, 80716, 544771, 141692, 850332, 660305, 831967, 8892, 395195, 811345, 920753, 810057, 963281, 923243, 57445, 721951, 444571, 554911, 515311, 204122, 474715, 13758, 344321, 461947, 600121, 477755, 761167, 348660};
    vector<int> y = {345528, 221558, 659684, 567124, 354353, 153050, 308886, 636918, 235085, 524853, 440246, 326995, 393396, 203462, 91382, 284665, 631005, 118049, 92374, 237048, 17341, 502722, 273147, 244263, 218787, 483013, 152996, 373085, 201642, 225663, 484783, 561163, 471869, 209352, 397576, 186626, 413466, 375005, 108278, 37591, 627904};
    vector<int> width = {5452, 1875, 17574, 20694, 13424, 21915, 16218, 230, 2025, 2353, 11755, 17424, 2863, 7196, 10840, 19492, 23720, 15152, 8392, 16173, 4459, 3377, 17229, 4392, 15577, 11029, 15477, 22247, 21069, 62, 5853, 9824, 5525, 14621, 20023, 17991, 8998, 23155, 7860, 21192, 18998};
    vector<int> height = {10425, 14282, 4243, 3232, 3785, 4112, 955, 10547, 2173, 16447, 11657, 15056, 478, 10181, 14472, 11271, 14365, 3544, 13020, 8732, 1686, 4382, 687, 11721, 15988, 2360, 5777, 7217, 8691, 16449, 4561, 9805, 9878, 1407, 4334, 10771, 449, 13526, 11108, 13323, 10974};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {487565.45892119326, 341476.3235275514};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int sheetWidth = 1748366;
    int sheetHeight = 1861392;
    vector<int> x = {1366058, 1008682, 1707693, 721763, 194754, 963099, 1164902, 585825, 436621, 1685917, 147931, 1110040, 1698783, 419801, 850905, 231535, 1475010, 1193514, 1331813, 1312627, 826612, 1329583, 1714370, 590570, 749527, 1372045, 1323135, 1744220, 1399060, 1304958, 1353271, 227241, 343309, 362317, 1647290, 1291687, 1706194, 366112, 940462, 1307788, 295130};
    vector<int> y = {110309, 849523, 136611, 1500098, 1464777, 582135, 508969, 1185207, 325186, 1496439, 499335, 13586, 37370, 642751, 1715996, 716956, 616871, 52814, 1379275, 308039, 1586797, 614909, 697937, 1582776, 1193386, 463742, 388638, 245783, 990908, 1652036, 1126637, 1388576, 1754442, 249110, 1430009, 1130506, 764835, 610397, 646409, 790892, 807229};
    vector<int> width = {35952, 39721, 37034, 14592, 17346, 17385, 34758, 6558, 17251, 32894, 40415, 24856, 15435, 39237, 21212, 17303, 40550, 42235, 23270, 8891, 7906, 10530, 11951, 18104, 15077, 26151, 36153, 2245, 4693, 12976, 14123, 41993, 31817, 13665, 37171, 21264, 31929, 27008, 30509, 31635, 15511};
    vector<int> height = {22619, 23408, 4795, 232, 9891, 1155, 741, 38010, 338, 44377, 21295, 9546, 41366, 31160, 16371, 16280, 25712, 38214, 31309, 20621, 44401, 2957, 34841, 12324, 34142, 2446, 10872, 26164, 9806, 31793, 3455, 9138, 9492, 33781, 36362, 27857, 13056, 25441, 14730, 22662, 1082};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {872819.7426889603, 931212.7739003139};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int sheetWidth = 633590;
    int sheetHeight = 1448353;
    vector<int> x = {144420, 76835, 158925, 620626, 575810, 82179, 459755, 427455, 502990, 24051, 437857, 394808, 198103, 436855, 345519, 187022, 133503, 156870, 239336, 183468, 623521, 32680, 435184, 401210, 83944, 583364, 69507, 204585, 572033, 508255, 228930, 110762, 203827, 334534, 244615, 379557, 586538, 79573, 111599, 515728, 393239, 272563, 302023, 276422, 438797, 153737, 136745, 88445, 106855};
    vector<int> y = {119636, 687100, 1284284, 21824, 712350, 441863, 1426835, 665324, 182433, 1277002, 392034, 806567, 676275, 1128543, 1308727, 444675, 670359, 765973, 589925, 113141, 1307202, 1285352, 1107719, 131004, 673269, 1342379, 1226092, 408415, 240582, 999802, 759390, 1389584, 795621, 590005, 1411062, 1009482, 1293392, 130613, 556179, 1202437, 1331573, 1036506, 246812, 586239, 232828, 543697, 1186889, 1149450, 640947};
    vector<int> width = {12757, 1337, 8995, 7237, 5689, 2660, 6189, 4237, 2069, 4646, 3591, 4332, 4814, 5767, 1197, 11155, 6516, 6637, 267, 11420, 6708, 8023, 7159, 3148, 11750, 11934, 2605, 10228, 10319, 2099, 12567, 6690, 6133, 11163, 4923, 10079, 2214, 6365, 2108, 3816, 12764, 11317, 659, 8026, 4892, 11151, 5209, 5018, 11515};
    vector<int> height = {17618, 2040, 29477, 5626, 15060, 6993, 11018, 12695, 18022, 9910, 19001, 17736, 19908, 18107, 5799, 20445, 15561, 22782, 23964, 23174, 10701, 10707, 7671, 20342, 4334, 18273, 989, 15705, 26560, 18795, 7525, 28623, 25392, 27068, 18913, 50, 6196, 13467, 11700, 5040, 3990, 11282, 8532, 24802, 24365, 20858, 15016, 17814, 11408};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {316990.4085448944, 724131.4039790398};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int sheetWidth = 530643;
    int sheetHeight = 316612;
    vector<int> x = {229993, 189451, 168987, 61265, 320971, 416931, 152793, 231419, 320748, 191794, 351336, 462407, 496893, 435773, 221936, 188093, 58136, 473755, 124116, 347711, 167573, 248888, 240112, 365330, 332313, 346401, 373779, 121644, 524703, 449819, 391583, 521450, 3969, 87197, 463418, 321800, 316680, 507185, 421606};
    vector<int> y = {9201, 149544, 297066, 176119, 128559, 150105, 214324, 41370, 247973, 40063, 66192, 97001, 106290, 199074, 126698, 221014, 288796, 123022, 32137, 72147, 231041, 209475, 267016, 239577, 23084, 211071, 87205, 303077, 222142, 291570, 194087, 161856, 93386, 180870, 65180, 209479, 167216, 29216, 238704};
    vector<int> width = {13161, 13215, 595, 4658, 13456, 7591, 12516, 4134, 7961, 13270, 12832, 11736, 1994, 6971, 7122, 10663, 5800, 1011, 12611, 2790, 10834, 459, 7371, 3273, 7084, 5267, 1731, 12872, 2892, 3776, 2983, 7925, 6265, 8290, 12729, 7869, 4966, 6192, 9500};
    vector<int> height = {5902, 5151, 6834, 6373, 6438, 7133, 5229, 969, 5588, 245, 6488, 7055, 8107, 5367, 6689, 5487, 1522, 6668, 3425, 1897, 7646, 1876, 6876, 6307, 363, 6991, 1150, 606, 1175, 1148, 2466, 5238, 7714, 5950, 5258, 2035, 7546, 625, 4108};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {265137.01158116525, 158339.6936334384};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int sheetWidth = 1457328;
    int sheetHeight = 390761;
    vector<int> x = {1413541, 94218, 1186330, 980085, 1364915, 543793, 431554, 756116, 342378, 622932, 1151105, 1403546, 1160449, 595213, 728520, 30097, 505587, 948464, 1322581, 385087, 51554, 836630, 1157728, 785349, 637202, 1228082, 791507, 783089, 308100, 1287504, 668546, 1446328, 677931, 329741, 684262, 1128288, 1262964, 1444857, 1326028, 1033291};
    vector<int> y = {144888, 227448, 193453, 136735, 183046, 105377, 377732, 291575, 33409, 371363, 112925, 70500, 199466, 39457, 189211, 294395, 327736, 114220, 150090, 184396, 302771, 217187, 234611, 66247, 29449, 248109, 193908, 167418, 285363, 41347, 159257, 181608, 312729, 360931, 7389, 363625, 66827, 8903, 10071, 70796};
    vector<int> width = {32443, 7519, 345, 26444, 10317, 17435, 5676, 27770, 31305, 3404, 25999, 16661, 3357, 6347, 19545, 1559, 25106, 13749, 20618, 4581, 20880, 26944, 22872, 22052, 30528, 22595, 25355, 36144, 2801, 30477, 8336, 6710, 343, 21474, 27151, 16254, 8144, 2961, 196, 1865};
    vector<int> height = {9605, 568, 8936, 9109, 2394, 7392, 1718, 3912, 1708, 5567, 5306, 3873, 5280, 5646, 3143, 9181, 7592, 9302, 8252, 8091, 3202, 6492, 5639, 491, 1885, 9521, 7881, 6221, 7278, 9286, 8026, 8760, 3707, 1774, 1386, 4041, 241, 4530, 63, 4700};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {727217.9758901439, 195501.10512521936};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int sheetWidth = 1194495;
    int sheetHeight = 1310691;
    vector<int> x = {1051094, 32125, 1134151, 604670, 395980, 359428, 804201, 966698, 682563, 1173723, 1157184, 729530, 41123, 342640, 38524, 792720, 1141001, 903027, 141961, 796920, 267456, 841744, 170815, 1093676, 1185016, 369703, 628243, 101719, 659998, 237085, 512342, 223504, 976407, 909205, 293897, 710577, 1055865, 265062, 1115676, 368584, 802949, 409882, 584851, 921461, 121054, 931126, 854711};
    vector<int> y = {293386, 892672, 591237, 175496, 532396, 158653, 539730, 1151222, 129195, 719261, 1200570, 760424, 250364, 542474, 826682, 956271, 486238, 662162, 649147, 220534, 218258, 1202193, 1061430, 168183, 961610, 1209253, 660988, 757278, 799292, 157778, 503327, 248277, 996453, 1253739, 466763, 267145, 521677, 632410, 122900, 506048, 856399, 752262, 308553, 217479, 581770, 1090842, 453896};
    vector<int> width = {9503, 8844, 15707, 19914, 12804, 408, 10736, 12775, 13962, 18377, 21270, 7723, 17231, 22678, 9096, 17435, 17505, 2000, 5454, 20394, 15524, 1293, 23865, 9253, 4219, 3306, 22423, 4346, 5154, 19682, 11092, 1072, 969, 6655, 22627, 9695, 17791, 8431, 8059, 12291, 3074, 532, 18156, 22463, 15743, 9012, 15470};
    vector<int> height = {4721, 6295, 24324, 21795, 5933, 2279, 18891, 1970, 953, 8628, 6186, 13636, 2098, 24525, 951, 10392, 24891, 25199, 6515, 8416, 5544, 3253, 25680, 17674, 26729, 10158, 25697, 10131, 3628, 14650, 9794, 6421, 19218, 6511, 16397, 22187, 4846, 1739, 22491, 3317, 11142, 416, 24436, 22696, 27040, 3338, 17297};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {596959.6767638779, 655927.1073982435};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int sheetWidth = 942815;
    int sheetHeight = 1000249;
    vector<int> x = {15247, 447249, 43228, 842271, 673713, 717388, 468733, 89088, 67122, 63268, 268558, 795414, 56642, 392695, 133564, 14994, 9556, 99034, 519720, 698069, 922037, 403945, 847527, 57221, 497027, 371503, 772915, 64598, 594204, 224140, 566608, 609727, 557209, 296728, 750527, 676255, 122968, 41958, 391481, 406884, 328750};
    vector<int> y = {712280, 669439, 53681, 270475, 209813, 640687, 450079, 987258, 747226, 951309, 645449, 431080, 73679, 25405, 711315, 300137, 863225, 890455, 283450, 870390, 794898, 408497, 648143, 967066, 128076, 681910, 495987, 50374, 994918, 879362, 133353, 59562, 440783, 372161, 262676, 349243, 728825, 571766, 813616, 659243, 552434};
    vector<int> width = {14185, 17752, 11956, 4340, 17257, 19121, 17678, 377, 2420, 19529, 3025, 13696, 13681, 4276, 10744, 11276, 10755, 7640, 20104, 22757, 6442, 10983, 10261, 8154, 2524, 12991, 5593, 942, 7344, 4692, 14271, 19201, 9441, 4682, 17336, 16701, 14175, 21825, 4233, 16349, 11657};
    vector<int> height = {13547, 1780, 13966, 20453, 3912, 6860, 8850, 12933, 11616, 7291, 313, 650, 15395, 6646, 12822, 17281, 23295, 12544, 7171, 17704, 3830, 13156, 7405, 23621, 13187, 8650, 7159, 2314, 3371, 7605, 11672, 4099, 4660, 10875, 10868, 22933, 19879, 11867, 287, 21294, 11787};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {471988.25873285386, 499855.29318189435};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int sheetWidth = 2000000;
    int sheetHeight = 2000000;
    vector<int> x = {0, 1, 0};
    vector<int> y = {0, 0, 1999999};
    vector<int> width = {1, 1999999, 1};
    vector<int> height = {1999999, 2000000, 1};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int sheetWidth = 2000000;
    int sheetHeight = 2000000;
    vector<int> x = {1, 0};
    vector<int> y = {0, 1};
    vector<int> width = {1999999, 1};
    vector<int> height = {2000000, 1999999};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5, 0.5};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int sheetWidth = 832741;
    int sheetHeight = 111524;
    vector<int> x = {335076, 665632, 210102, 714135, 229942, 149776, 675634, 502085, 393066, 115215, 80993, 272343, 434287, 593760, 589713, 485801, 395389, 755380, 417327, 477023};
    vector<int> y = {104509, 23182, 103471, 62180, 5040, 10186, 45286, 107985, 36936, 87885, 63846, 58794, 89480, 85195, 64703, 96341, 89224, 7727, 71438, 39128};
    vector<int> width = {24578, 20552, 3332, 254, 21489, 21158, 35061, 37453, 21881, 216, 32930, 31555, 5121, 36687, 6949, 3512, 8049, 30019, 37252, 8001};
    vector<int> height = {2240, 3152, 4625, 3508, 4206, 5262, 1750, 627, 3983, 3192, 3609, 3361, 1135, 2580, 4158, 1356, 583, 5408, 5521, 2742};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {416159.5478133503, 55837.39162696547};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int sheetWidth = 1234567;
    int sheetHeight = 314159;
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> width = {1234567};
    vector<int> height = {314159};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int sheetWidth = 1999999;
    int sheetHeight = 1999999;
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {490009, 0, 10001, 20002, 30003, 40004, 50005, 60006, 70007, 80008, 90009, 100000, 110001, 120002, 130003, 140004, 150005, 160006, 170007, 180008, 190009, 200000, 210001, 220002, 230003, 240004, 250005, 260006, 270007, 280008, 290009, 300000, 310001, 320002, 330003, 340004, 350005, 360006, 370007, 380008, 390009, 400000, 410001, 420002, 430003, 440004, 450005, 460006, 470007, 490008};
    vector<int> width = {1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999999, 1999998};
    vector<int> height = {1509990, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 9991, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 9991, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 9991, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 9991, 10001, 10001, 10001, 10001, 10001, 10001, 10001, 20001, 1};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1999998.5, 490008.5};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int sheetWidth = 2000000;
    int sheetHeight = 2000000;
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> width = {200000};
    vector<int> height = {200000};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1009090.9090909091, 1009090.9090909091};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int sheetWidth = 2000000;
    int sheetHeight = 2000000;
    vector<int> x = {0, 1};
    vector<int> y = {1, 0};
    vector<int> width = {1, 1999999};
    vector<int> height = {1999999, 2000000};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5, 0.5};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int sheetWidth = 1;
    int sheetHeight = 1;
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> width = {1};
    vector<int> height = {1};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int sheetWidth = 1800000;
    int sheetHeight = 1800000;
    vector<int> x = {500000};
    vector<int> y = {500000};
    vector<int> width = {600000};
    vector<int> height = {600000};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {912500.0, 912500.0};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int sheetWidth = 2000000;
    int sheetHeight = 2000000;
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> width = {1};
    vector<int> height = {2000000};
    PerforatedSheet* pObj = new PerforatedSheet();
    clock_t start = clock();
    vector<double> result = pObj->getCenterOfMass(sheetWidth, sheetHeight, x, y, width, height);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1000000.5, 1000000.0};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=6534&pm=4436
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
typedef long long LL;
template<class T> inline int size(const T&c) { return c.size(); }
 
struct PerforatedSheet {
 
  // MAIN
  vector <double> getCenterOfMass(int sheetWidth, int sheetHeight, vector <int> x, vector <int> y, vector <int> width, vector <int> height) {
    LL mass = LL(sheetWidth) * LL(sheetHeight);
    LL totalX = mass * sheetWidth;
    LL totalY = mass * sheetHeight;
    REP(i,size(x)) {
      LL x1 = x[i];
      LL y1 = y[i];
      LL x2 = x1 + width[i];
      LL y2 = y1 + height[i];
      LL m = (x2-x1)*(y2-y1);
      mass -= m;
      totalX -= (x1+x2)*m;
      totalY -= (y1+y2)*m;
    }
    vector<double> res;
    if(mass==0) return res;
    res.push_back(double(totalX)/mass/2);
    res.push_back(double(totalY)/mass/2);
    return res;
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/