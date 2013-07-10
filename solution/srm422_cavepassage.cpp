/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10123
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

class CavePassage {
public:
    int minimalTime(vector<int> travelersWeights, vector<int> travelersTimes, vector<string> trustTable, int bridgeStrength);
};

int CavePassage::minimalTime(vector<int> travelersWeights, vector<int> travelersTimes, vector<string> trustTable, int bridgeStrength) {
    int ret;
    return ret;
}


int test0() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 13;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> travelersWeights = {1, 1, 1};
    vector<int> travelersTimes = {2, 3, 4};
    vector<string> trustTable = {"YYY", "YYY", "YYY"};
    int bridgeStrength = 2;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> travelersWeights = {1, 1, 1};
    vector<int> travelersTimes = {2, 3, 4};
    vector<string> trustTable = {"YYY", "YYY", "NYY"};
    int bridgeStrength = 2;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> travelersWeights = {1, 1, 1};
    vector<int> travelersTimes = {7, 13, 19};
    vector<string> trustTable = {"YYN", "NYY", "YNY"};
    int bridgeStrength = 3;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> travelersWeights = {5, 3, 2, 1, 1};
    vector<int> travelersTimes = {3, 3, 5, 7, 7};
    vector<string> trustTable = {"YYYYY", "YYYYY", "YYYYY", "YYYYY", "YYYYY"};
    int bridgeStrength = 10;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> travelersWeights = {3, 3, 6};
    vector<int> travelersTimes = {1, 1, 1};
    vector<string> trustTable = {"YYY", "YYY", "YYY"};
    int bridgeStrength = 6;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> travelersWeights = {20, 20, 10, 10, 1, 1};
    vector<int> travelersTimes = {10, 10, 10, 10, 3, 3};
    vector<string> trustTable = {"YNNNYN", "NYNNYN", "NNYNNY", "NNNYNY", "YYYYYY", "YYYYYY"};
    int bridgeStrength = 32;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> travelersWeights = {43};
    vector<int> travelersTimes = {23};
    vector<string> trustTable = {"Y"};
    int bridgeStrength = 42;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
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
    vector<int> travelersWeights = {1, 20, 20, 10, 10, 1};
    vector<int> travelersTimes = {3, 10, 10, 10, 10, 3};
    vector<string> trustTable = {"YYYYYY", "NYNNNY", "NNYNNY", "YNNYNN", "YNNNYN", "YYYYYY"};
    int bridgeStrength = 32;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> travelersWeights = {38, 132, 718, 350, 33, 736, 889, 116, 191, 537};
    vector<int> travelersTimes = {728, 724, 663, 631, 640, 118, 113, 691, 234, 887};
    vector<string> trustTable = {"YNNYYYYYYN", "YYYYNYYNYY", "YNYYYYYYNN", "NYYYYYYYYY", "NYYYYYYNNN", "NYYYYYYYYY", "YYYYYNYYYY", "YYYYYYYYYY", "YYYNYYYYYY", "YNNYYYNYYY"};
    int bridgeStrength = 3306;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1234;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> travelersWeights = {898, 622, 507, 923, 461, 784, 620, 203, 425, 501};
    vector<int> travelersTimes = {59, 650, 537, 336, 976, 326, 172, 324, 980, 355};
    vector<string> trustTable = {"YYNYYNNYYN", "YYYYYNYYNN", "NYYYYYYYYY", "NYNYYYYYYN", "YYNYYYYYYY", "YNYYYYNYYY", "YYYNYNYNNY", "NYYYYYNYYY", "YYYYYYNYYY", "YYYYYYYNYY"};
    int bridgeStrength = 3672;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1375;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> travelersWeights = {668, 837, 332, 773, 116, 636, 578, 658, 799, 859, 937};
    vector<int> travelersTimes = {18, 368, 324, 959, 702, 207, 12, 552, 616, 330, 20};
    vector<string> trustTable = {"YYYYNYYYNYY", "NYYNNYYYNNN", "YYYYYNYYYNY", "NNNYNYYNYYY", "YNYYYNYYYYY", "YNYYNYYNNYY", "YYYYNYYYYYY", "YYYYNYNYYNY", "YNYYYNYNYNY", "NNYYYNYNNYY", "YYNYYYNYYYY"};
    int bridgeStrength = 3071;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1407;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> travelersWeights = {603, 362, 88, 860, 847, 588, 953, 670, 463, 457};
    vector<int> travelersTimes = {443, 359, 416, 405, 102, 244, 605, 255, 293, 588};
    vector<string> trustTable = {"YNNYNNYYYY", "YYYNYNNYYY", "YYYYYYNYYN", "YYNYYYYNYN", "NYYNYYYNYY", "YYNYYYYYYN", "YYYYYYYYYY", "YNYYNYYYYY", "NYYYYNYYYY", "YYYNYYNYYY"};
    int bridgeStrength = 4245;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> travelersWeights = {284, 340, 368, 244, 363, 84, 47, 35, 489, 509};
    vector<int> travelersTimes = {853, 810, 856, 526, 27, 57, 807, 146, 366, 378};
    vector<string> trustTable = {"YYYNNYNYYY", "YYYNNYYYYY", "NYYNYNNNYY", "YYYYYYYNYY", "YYYYYNNYYY", "YYYYYYYNYN", "YYNNYYYYYY", "YYYYYYYYYY", "NNYYYYYNYY", "YYYYYNYYYY"};
    int bridgeStrength = 1048;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1951;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> travelersWeights = {790, 152, 388, 265, 473, 498, 106, 479, 840, 502};
    vector<int> travelersTimes = {935, 992, 137, 426, 534, 261, 954, 715, 13, 86};
    vector<string> trustTable = {"YNYYYNYYYN", "YYNYYYYYYY", "NNYNYYYNNN", "YNYYYNYNYY", "YYYYYNYYYN", "YYYYYYYYNY", "NYYYYNYYYN", "YNYYYYYYYY", "YYNNYNNNYY", "YNYNYYNYNY"};
    int bridgeStrength = 3231;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1266;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> travelersWeights = {7, 262, 655, 404, 444, 50, 517, 908, 939, 502, 657, 695};
    vector<int> travelersTimes = {1000, 545, 806, 513, 445, 837, 468, 137, 360, 511, 10, 657};
    vector<string> trustTable = {"YYNYYYYYYYYY", "NYYYYYYYNYNY", "YYYYYNYYYYYY", "YYYYYYYYYNNY", "YYNYYYYYNYYY", "YYYNYYYYYYYN", "YYYYNNYNYNYY", "YYYYNNNYYNYY", "YYYYYYYNYYNN", "YNNYYYYNNYYY", "NYNYYYYYYYYY", "YYYYNYYYYYYY"};
    int bridgeStrength = 1632;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 3002;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> travelersWeights = {62, 917, 698, 982, 992, 491, 690, 697, 637, 909, 912, 299};
    vector<int> travelersTimes = {341, 774, 865, 501, 579, 663, 209, 525, 640, 267, 79, 248};
    vector<string> trustTable = {"YYYYYYYYYYYN", "YYYYYYYNYNYY", "NYYYYYYYYYYN", "YNYYYNYYYNNN", "YNYYYYYNYNYY", "NYYYNYYYYYNY", "NNYNYYYYYYYY", "YYYYYYNYYYYY", "YNYNYYNYYYYN", "YYYYYYYYNYYY", "YYYYYNYYYYYY", "YYYYYYYYNYYY"};
    int bridgeStrength = 1939;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 3933;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> travelersWeights = {764, 569, 324, 485, 788, 690, 507, 455, 258, 305, 153, 775};
    vector<int> travelersTimes = {489, 244, 538, 503, 287, 777, 485, 665, 997, 549, 574, 42};
    vector<string> trustTable = {"YYYYYYYNYYYY", "NYYYNYYYYYYN", "YNYYNYYYYNYY", "YYYYYYYYNYYY", "NYYYYNYYYYYY", "YYYYNYYYYYYY", "NYYNYYYYYYYY", "NYNYYNYYYYYY", "YYNYNYYYYYYN", "YNYYYYYYYYYY", "YYNYYNYYYYYY", "NYYNYNYYYYYY"};
    int bridgeStrength = 1543;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 5020;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> travelersWeights = {902, 338, 395, 593, 623, 44, 644, 315, 641, 379, 31, 58};
    vector<int> travelersTimes = {165, 144, 116, 101, 916, 637, 6, 218, 867, 774, 608, 483};
    vector<string> trustTable = {"YYNYYYYNNYYY", "YYYYYNYNYNNY", "NNYYYYYYYYYN", "YYYYYYYYYYYY", "NYNYYYNYNNYY", "YNYYYYYYYNYY", "YYYNNNYYNYYY", "YYYYNYNYYYNY", "YYYYYNYYYYYY", "YYYYYNYNNYYN", "NNYYNNYYYNYY", "YYNYYYYYYYYY"};
    int bridgeStrength = 1330;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2729;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> travelersWeights = {38, 98, 73, 341, 803, 178, 873, 977, 718, 204, 540, 194};
    vector<int> travelersTimes = {280, 460, 108, 290, 857, 833, 69, 986, 631, 503, 520, 139};
    vector<string> trustTable = {"YYYYNYYYYYYY", "YYYYYNYNYYYY", "YYYYYNYYNYNY", "YNYYNNNNYYYY", "YYYYYNYNYNYY", "YNYYYYYYYYNY", "YYYYYYYNYYNN", "YNYYYYYYYYNY", "YYNYYYYNYNYY", "NYYYYNYYYYYY", "YNYNNYNYYYYN", "YYYYYYYYYNYY"};
    int bridgeStrength = 1164;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 3534;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> travelersWeights = {128, 128, 750, 33, 225, 968, 838, 989, 652, 592, 91, 957};
    vector<int> travelersTimes = {850, 965, 25, 624, 665, 166, 788, 905, 96, 365, 853, 524};
    vector<string> trustTable = {"YNYYYNNYYYYY", "NYYYYYYYYYYY", "YYYYYYYNNYYY", "YYYYNYYYYYYN", "NYYYYYYYNYYN", "YYNNYYYYNYYY", "NYNNYYYYYYYN", "YYYYYYNYYYNY", "YYYYNYNYYYYY", "YYYYNNYYYYYY", "YYYYYYYYYYYN", "YNYYYYYYYYYY"};
    int bridgeStrength = 1171;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 8138;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> travelersWeights = {310, 345, 808, 120, 374, 479, 132, 614, 632, 324, 740, 982};
    vector<int> travelersTimes = {209, 585, 519, 283, 849, 443, 807, 579, 68, 574, 972, 199};
    vector<string> trustTable = {"YNYNYYYNYYYY", "YYYNYYYNYYYN", "YYYYNYYNYYYY", "YYYYYYYYYYNN", "YNYYYYYYYYNY", "YNNYYYYNYYYY", "YYYYYYYYYYYY", "YYNYYNNYNYNN", "YNYYYYNYYYYY", "YYYYYYYNYYYY", "YYYNYNYNYYYN", "YNYYYNNYYNNY"};
    int bridgeStrength = 1890;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2694;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> travelersWeights = {248, 840, 567, 325, 324, 656, 615, 880, 243, 604, 156, 239};
    vector<int> travelersTimes = {739, 125, 635, 8, 175, 342, 921, 867, 435, 799, 125, 537};
    vector<string> trustTable = {"YYYYNYYNYYYY", "NYYYYYYNYYYY", "NYYYNNYYYNYY", "YYYYNYYYYYNY", "NYYYYYYYYNYN", "YYNYYYYYYYNY", "YNYYYYYYYNYN", "NYNYYYYYNYYY", "YYYYYYYYYYYY", "YNNNYYYNYYNY", "YNYNYYYYYYYY", "YYNYYYYYNNNY"};
    int bridgeStrength = 1786;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2471;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> travelersWeights = {429, 513, 410, 492, 20, 495, 694, 199, 605, 416, 405, 310};
    vector<int> travelersTimes = {277, 655, 7, 416, 939, 8, 490, 488, 47, 730, 297, 413};
    vector<string> trustTable = {"YYNYYYYYYYNY", "NYYYYYYYYYNN", "NYYYYYNYYYNN", "NYYYYYYNNYYY", "YYYNYYNYNNNY", "YNYYYYNYNNYY", "NYYNYNYNYYNY", "NYYYYNYYYYYY", "YYYYNYYYYYYN", "YYNYYYYYYYNN", "NYYNYYYYNYYY", "YYYYYYYYYYYY"};
    int bridgeStrength = 1535;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1827;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> travelersWeights = {273, 550, 194, 351, 775, 318, 831, 548, 914, 491, 511, 18};
    vector<int> travelersTimes = {312, 543, 932, 299, 475, 438, 518, 403, 297, 850, 642, 862};
    vector<string> trustTable = {"YYYYNYYYYYYY", "NYYNYYYYYYNN", "NYYYYYYYYYNY", "YNYYNYYYYYYY", "YNNYYYYYYNNN", "YYYYNYYYNYYY", "YYYYNYYYNNYY", "YYNYYYYYYNNY", "YYYYYYYYYNNY", "NYYYYYYYNYYY", "YYYYNYYYYYYY", "YYYNYYYYYYYY"};
    int bridgeStrength = 1914;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 3123;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> travelersWeights = {651, 80, 968, 515, 78, 178, 25, 743, 966, 870, 40, 974, 283};
    vector<int> travelersTimes = {207, 38, 311, 772, 762, 480, 30, 629, 669, 14, 882, 398, 149};
    vector<string> trustTable = {"YYYYYYYYYNYYN", "NYNYYNYYNNYYY", "YYYYNNYYNYYYY", "YYYYYYYNYNYYN", "NYNNYYYYYNYYN", "YNNNNYYYYYYNN", "YYNYNYYYYNNYY", "YYYYYYNYYYYYY", "YYYYNYYYYYYYY", "YYNYYYYYYYYNN", "YYYYYYYNYYYYY", "YYNNYYYYYYYYN", "YYYYYYYYYYYNY"};
    int bridgeStrength = 4664;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1119;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> travelersWeights = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 500, 500};
    vector<int> travelersTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 1000;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> travelersWeights = {600, 600, 600, 600, 600, 800, 800, 800, 800, 800, 400, 400, 400};
    vector<int> travelersTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    vector<string> trustTable = {"YNNNNNNNNNYNN", "NYNNNNNNNNNYN", "NNYNNNNNNNYNN", "NNNYNNNNNNNYN", "NNNNYNNNNNYNY", "NNNNNYNNNNYNN", "NNNNNNYNNNNYN", "NNNNNNNYNNNNY", "NNNNNNNNYNYNN", "NNNNNNNNNYNYN", "NNNNNNNNNNYYN", "NNNNNNNNNNYYN", "NNNNNNNNNNNYY"};
    int bridgeStrength = 1000;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> travelersWeights = {45, 30, 129, 105, 107};
    vector<int> travelersTimes = {130, 366, 355, 195, 259};
    vector<string> trustTable = {"YNNYN", "NYNNN", "NNYYY", "NNNYY", "NNNYY"};
    int bridgeStrength = 1393;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1369;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> travelersWeights = {63, 281, 99, 53};
    vector<int> travelersTimes = {372, 309, 325, 291};
    vector<string> trustTable = {"YNNN", "NYYN", "NYYN", "NYNY"};
    int bridgeStrength = 1287;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1638;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> travelersWeights = {67, 84, 155, 117, 128, 2};
    vector<int> travelersTimes = {202, 154, 271, 33, 131, 494};
    vector<string> trustTable = {"YNNNNN", "NYNNNN", "NNYNNY", "NNYYNN", "NNNNYN", "NNYNYY"};
    int bridgeStrength = 2655;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 3294;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> travelersWeights = {494, 389, 204, 275, 705, 452, 183};
    vector<int> travelersTimes = {220, 154, 49, 264, 198, 213, 40};
    vector<string> trustTable = {"YNNNNYN", "YYNNNYN", "NNYYNNY", "NNNYNNN", "NNNNYNN", "YNNNNYN", "NYNNYYY"};
    int bridgeStrength = 4490;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1211;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> travelersWeights = {79, 35, 64, 100, 120, 56, 92, 115};
    vector<int> travelersTimes = {434, 461, 101, 644, 688, 244, 683, 69};
    vector<string> trustTable = {"YNNYNNYN", "NYNNNYNN", "NNYYYNYN", "NNNYYNNN", "NNNNYNNN", "NNNNNYNN", "NYYYNNYN", "YNNNNNNY"};
    int bridgeStrength = 3043;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 6125;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> travelersWeights = {446, 401, 213, 45, 646, 217, 323, 207, 423};
    vector<int> travelersTimes = {207, 231, 130, 36, 67, 235, 221, 119, 210};
    vector<string> trustTable = {"YNNNNYYNN", "NYNYNYNNN", "NNYNNNNNN", "NNNYNNYNN", "NNNNYNNYY", "NNNNNYNNN", "NNNNNYYYN", "YNNNNNNYN", "NYNNNNNNY"};
    int bridgeStrength = 4729;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1141;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> travelersWeights = {68, 366, 77, 410, 433, 79, 176, 329, 55, 316};
    vector<int> travelersTimes = {534, 427, 602, 63, 47, 612, 694, 117, 384, 96};
    vector<string> trustTable = {"YNNNNNNNNN", "NYNNNNNNNY", "NYYNNYNNNN", "YNNYNYNYNN", "NNYNYNNNNN", "NYNNNYNYNN", "NNNNNNYNNN", "NNNNNNYYNN", "NNNYNYYNYN", "NNNYNNNYNY"};
    int bridgeStrength = 1237;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 6408;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> travelersWeights = {286, 66, 767, 84, 549, 389, 684, 484, 503, 713, 461};
    vector<int> travelersTimes = {304, 193, 55, 650, 412, 119, 653, 319, 501, 860, 314};
    vector<string> trustTable = {"YNNYNNNNYNN", "YYYYNNNYNNN", "NNYYNNNNNNY", "NNNYNNNNNNN", "NNNNYNYYNNY", "NNNNNYYNNYY", "NYNNNNYNNNN", "YYNNNNNYNYN", "NNNNNNNNYYN", "NNNNNNNYNYN", "NNNYNNNYNNY"};
    int bridgeStrength = 3863;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2267;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> travelersWeights = {22, 43, 25, 37, 9, 52, 36, 52, 27, 15, 14, 38};
    vector<int> travelersTimes = {479, 207, 35, 231, 387, 133, 331, 456, 9, 380, 282, 446};
    vector<string> trustTable = {"YNNNNNYNNNNN", "NYNNNYNNYNNN", "NNYNNNNNNNNN", "NYNYYYNNYNNN", "NNNNYNYNNNNN", "NNNNYYNNNNNN", "NNNNYNYNNNNN", "NNNNNNNYNNNN", "NNNNYNNYYNNN", "NNNNNNYNNYNY", "NNYYNNNYNNYN", "NNNNNYYYNNNY"};
    int bridgeStrength = 2709;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1886;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> travelersWeights = {548, 844, 266, 633, 851, 827, 209, 435, 819, 139, 485, 794, 820};
    vector<int> travelersTimes = {155, 110, 97, 223, 125, 93, 293, 238, 297, 123, 281, 389, 340};
    vector<string> trustTable = {"YNNNNNYNNNNNN", "NYNNYNNYYNNNN", "NYYNYNNNNNNYN", "NYYYNNNNNYNYN", "NNNYYNYNNYNYN", "NNNNYYYNNNNNN", "YNNYNNYYNNNNN", "NNNNNNNYYNNNN", "NNNNNNNNYNNNN", "NNNNNYNNYYNNY", "NNNNYNNNNNYNN", "NNYYNNNNNNNYN", "NNNYNNNYNYNNY"};
    int bridgeStrength = 3638;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1742;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> travelersWeights = {40, 403, 545, 533, 114, 324, 544, 319, 112, 315, 488, 52, 479};
    vector<int> travelersTimes = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<string> trustTable = {"YNNNYNNNNNNNN", "YYNNNYNNYNNNN", "NYYNNNNNNNNYN", "YNNYNNNYNNNNN", "NNNNYNNNNNNNN", "NNNNNYNYNYNNN", "NNNNNNYNNNNNN", "NNNNNNNYNNNNN", "NNNNNNNNYNNNN", "NNNYNNNNNYNNN", "NNNNNNNNNNYNN", "NYYNYNNNYNNYN", "YYNYNNNNNNNNY"};
    int bridgeStrength = 4907;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 45000;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> travelersWeights = {43};
    vector<int> travelersTimes = {23};
    vector<string> trustTable = {"Y"};
    int bridgeStrength = 43;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> travelersWeights = {10, 20};
    vector<int> travelersTimes = {1000, 1000};
    vector<string> trustTable = {"YN", "YY"};
    int bridgeStrength = 100;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> travelersWeights = {20, 10};
    vector<int> travelersTimes = {1000, 1000};
    vector<string> trustTable = {"YY", "YY"};
    int bridgeStrength = 29;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
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
    vector<int> travelersWeights = {10, 20};
    vector<int> travelersTimes = {1000, 1000};
    vector<string> trustTable = {"YY", "YY"};
    int bridgeStrength = 30;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> travelersWeights = {632, 538, 274};
    vector<int> travelersTimes = {60, 59, 60};
    vector<string> trustTable = {"YYY", "YYY", "YYY"};
    int bridgeStrength = 1325;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 179;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> travelersWeights = {522, 583, 127, 73};
    vector<int> travelersTimes = {6, 576, 190, 741};
    vector<string> trustTable = {"YNNY", "YYYY", "NYYN", "YNNY"};
    int bridgeStrength = 798;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2659;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> travelersWeights = {411, 53, 725, 602, 473};
    vector<int> travelersTimes = {33, 11, 16, 23, 51};
    vector<string> trustTable = {"YNNNN", "NYNYN", "NNYNN", "NYYYN", "NYNNY"};
    int bridgeStrength = 3399;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> travelersWeights = {291, 332, 412, 107, 35, 379};
    vector<int> travelersTimes = {208, 516, 450, 118, 637, 69};
    vector<string> trustTable = {"YNYNNN", "YYNNYY", "YNYNNN", "NNNYNN", "YNNNYN", "NYNNNY"};
    int bridgeStrength = 717;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 5024;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> travelersWeights = {830, 500, 213, 674, 396, 4, 571};
    vector<int> travelersTimes = {64, 10, 105, 61, 103, 111, 47};
    vector<string> trustTable = {"YNYYNYN", "NYYYYNN", "NYYNNYN", "YYNYYNN", "NNNNYNY", "YYNYNYN", "NNNYYNY"};
    int bridgeStrength = 1828;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 293;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> travelersWeights = {222, 256, 119, 189, 83, 60, 265, 270};
    vector<int> travelersTimes = {8, 138, 340, 153, 77, 151, 136, 92};
    vector<string> trustTable = {"YYNNNNNY", "YYYYYNNN", "NYYYYYYN", "NNYYYYYN", "NNNYYNNY", "YNYYNYNY", "YYYYNYYN", "NYYNNNNY"};
    int bridgeStrength = 491;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1298;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> travelersWeights = {479, 250, 760, 734, 10, 568, 484, 229, 745};
    vector<int> travelersTimes = {258, 145, 256, 73, 156, 124, 521, 231, 438};
    vector<string> trustTable = {"YYYYYYYYN", "YYNYYYNNY", "YNYNYYNYY", "NYNYNNYYN", "NNNYYYNNY", "NYYNYYNYN", "YNYYNNYYY", "YYNNNNYYY", "YNYNYYNNY"};
    int bridgeStrength = 2515;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 901;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> travelersWeights = {592, 129, 27, 580, 156, 645, 83, 299, 730, 508};
    vector<int> travelersTimes = {37, 61, 85, 18, 44, 53, 32, 6, 98, 96};
    vector<string> trustTable = {"YYNYNYNNYN", "YYNNYNYYNY", "NYYNYYYNYN", "NYYYYYYNYY", "YYNYYYNNNY", "NNNYYYNYYY", "YYYYNYYYYN", "NYNNNYYYNN", "YNNNYNYNYY", "YYNNNNNNNY"};
    int bridgeStrength = 905;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 518;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> travelersWeights = {421, 258, 217, 571, 312, 448, 532, 541, 155, 305, 143};
    vector<int> travelersTimes = {33, 56, 8, 52, 3, 25, 32, 19, 11, 44, 45};
    vector<string> trustTable = {"YYNYNYNYYYY", "NYYYYNYYYYY", "YYYNYYNNYYY", "NYNYNYNYNYY", "NYYNYNYYNNN", "YYYYYYYNYNY", "YYNNYYYNNYY", "NNYNYYNYYYN", "YYNYNYNYYYN", "YNNYNYYYYYN", "YYYYYYYNNYY"};
    int bridgeStrength = 1506;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> travelersWeights = {620, 496, 162, 590, 359, 376, 99, 98, 515, 28, 437, 135};
    vector<int> travelersTimes = {705, 879, 918, 867, 114, 739, 96, 317, 726, 620, 330, 718};
    vector<string> trustTable = {"YNNYNYNNYNNN", "NYYNNYNNNNNN", "NNYNNNNNYYNN", "YNNYYNYNNNYN", "NYNYYNYNYNYN", "NNNNYYNNNNNN", "YNNNNYYYNNNN", "NNYNYNYYNNNN", "NNNNYNNNYNNN", "NNYNNYNYNYNY", "NNNNNNNNNYYN", "YNNNYYYYNNNY"};
    int bridgeStrength = 1535;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2716;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> travelersWeights = {1, 379, 512, 196, 720, 105, 769, 203, 160, 768, 267, 399, 132};
    vector<int> travelersTimes = {68, 11, 90, 3, 36, 26, 52, 60, 79, 22, 64, 21, 81};
    vector<string> trustTable = {"YYNNYYNNYYNYY", "NYYYNYYYNYYYN", "NYYYYNYYNYYYN", "YNYYYYNYYYYYY", "YNYYYYYYYYYNY", "YNNYYYNYYNYYY", "NYYNNYYNYNNNY", "NNYNYYYYNYYYN", "YYYNNYYYYYYYY", "YYYNYNYYYYNYN", "YYNYNYYNYYYYY", "YYNNYNYYYYYYN", "YNNYYYYNYNYYY"};
    int bridgeStrength = 1385;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> travelersWeights = {623, 704, 192, 578, 763, 722, 13, 544, 728, 84, 161, 767, 737};
    vector<int> travelersTimes = {185, 191, 125, 458, 149, 577, 282, 163, 151, 242, 597, 476, 510};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYNYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYN", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 2771;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1456;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> travelersWeights = {221, 306, 679, 486, 385, 610, 427, 692, 657, 662, 242, 400, 401};
    vector<int> travelersTimes = {457, 124, 288, 439, 118, 84, 251, 325, 344, 326, 358, 205, 124};
    vector<string> trustTable = {"YNYYYYYNNYYYY", "NYNYNYNYYYYYY", "YYYNYYYYNYYYY", "YYYYNYNNYNNYY", "NYNYYYNYYNYYN", "NYNYYYYYNYNYN", "YNYYYYYYYNYYN", "YNNYYNYYNNYYY", "NYNYYYNYYYYYN", "NYNYYNNYYYYYN", "YYYNNYNYNYYNN", "NYYNYYNYYYYYY", "YYYNNYYYYYYNY"};
    int bridgeStrength = 3765;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 829;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> travelersWeights = {348, 291, 448, 107, 407, 199, 137, 78, 480, 257, 271, 229, 197};
    vector<int> travelersTimes = {392, 294, 353, 171, 299, 27, 228, 332, 36, 181, 377, 422, 16};
    vector<string> trustTable = {"YYYYYYYNYYYYY", "NYNYYYNYNYYYY", "YYYYYYYYYYYYY", "YNYYYYYYNYYYY", "YYYYYNYYYYYNY", "YYYYYYYYYYNNY", "YYNYYYYYYYYYY", "YYYYNYYYYYYNY", "YYYYYYYYYNYYY", "YYYYYYYYYYYYY", "YYYYYYNYYYYYN", "YYNYYYYYYYYYY", "YYNNYYYYYYYNY"};
    int bridgeStrength = 2329;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 666;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> travelersWeights = {589, 529, 826, 710, 779, 685, 462, 548, 881, 602, 616, 707, 31};
    vector<int> travelersTimes = {413, 327, 53, 424, 308, 525, 498, 314, 99, 188, 490, 442, 429};
    vector<string> trustTable = {"YYNYNYYNYYYYY", "YYYYYYNYNYYYY", "YYYYYYYYYNYYY", "YYYYYNYYYYYYY", "YYYYYYYYYYYYY", "YYYNNYYYYYYYY", "YYYYYYYYYNYYY", "YYYYYYYYYYYYN", "YYYYYYYYYYYYY", "YYNYYYYNYYYYY", "YYYYYYYYYYYYY", "YYYNYYYNYYYYY", "YYYYYYYYYYYNY"};
    int bridgeStrength = 4241;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1103;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> trustTable = {"YYNNNNNNNNNNN", "NYNNYNNNNNNNN", "NNYYNNNNNNNNN", "NNNYNYNNNNNNN", "NNYNYNNNNNYNN", "NNNNNYYNNNNNN", "YNNNNNYNNNNNN", "NYNNNNNYNNNNN", "NNNNNNNNYYNNN", "NNNNNNNYNYNNN", "NNNNNNNNNNYYN", "NNNNNNNNNNNYY", "NNNNNNNNYNNNY"};
    int bridgeStrength = 10;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {1, 2, 3, 2, 1, 4};
    vector<string> trustTable = {"YYNNNN", "NYYNNN", "NNYYNN", "YYYYYY", "NNNNYY", "NNYNNY"};
    int bridgeStrength = 4;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> travelersWeights = {1, 2, 3, 4, 3, 2, 1, 5, 3, 2, 2, 3, 1};
    vector<int> travelersTimes = {5, 8, 9, 12, 11, 6, 2, 3, 4, 5, 6, 7, 4};
    vector<string> trustTable = {"YNNNNYNNNNNNN", "NYNYYYYNNNNNN", "NNYYNNNYNNNNY", "YYNYNYYNYYNNN", "YNYYYYNYNNYNY", "NNNNNYYYNNNNN", "YNYNYNYNYNNNN", "YYYNNNNYYNYNN", "NNYNNYNNYNYNY", "NYNNNYNNNYYNN", "YYYNYNNYYNYNN", "NNNNNNNNYNNYN", "NYYYNYYNNNYYY"};
    int bridgeStrength = 8;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> travelersWeights = {10, 10, 10, 1, 1};
    vector<int> travelersTimes = {10, 10, 10, 1, 1};
    vector<string> trustTable = {"YYYYY", "YYYYY", "YYYYY", "YYYYY", "YYYYY"};
    int bridgeStrength = 10;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> travelersWeights = {223, 323, 123, 912, 815, 293, 742, 12, 535, 32, 412, 628, 932};
    vector<int> travelersTimes = {500, 400, 123, 699, 900, 800, 700, 987, 819, 500, 623, 100, 109};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 2000;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2756;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> travelersWeights = {572, 10, 391, 839, 934, 720, 35, 893, 153, 689, 352, 855, 733};
    vector<int> travelersTimes = {608, 836, 16, 474, 548, 97, 723, 647, 661, 837, 6, 284, 210};
    vector<string> trustTable = {"YYYNYYNYYNYYY", "YYYYYNYYYYYNY", "YNYNYYYYNYYYY", "YYYYYYNYYYNYN", "YNYNYNYYNYYYY", "YYYYYYYYYYNYY", "YYNYNYYNYYYYY", "NYNYYYNYYYYNY", "YYYYYYYYYNYYY", "YYNYYYNYYYYYN", "YYYNYNYYYNYYY", "YYYYYNYYNYYYY", "NYYNYYYYNYYNY"};
    int bridgeStrength = 1500;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 3148;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> travelersWeights = {724, 400, 673, 846, 522, 373, 458, 502, 667, 255, 233, 691, 704};
    vector<int> travelersTimes = {724, 400, 673, 846, 522, 373, 458, 502, 667, 255, 233, 691, 704};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 4500;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1746;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> travelersWeights = {814, 531, 955, 54, 600, 908, 747, 572, 115, 624, 907, 342, 784};
    vector<int> travelersTimes = {530, 803, 641, 384, 468, 162, 75, 663, 391, 781, 306, 703, 161};
    vector<string> trustTable = {"YYYNYNNYYYYYY", "YYYYYYYYNNYYN", "YYYYYYYYNYNYY", "YYYYNYNYNYYYY", "NYYYYYYYNNYNY", "NNYYNYYYYYYNY", "YYYYYNYYYYYYY", "YYNYNYYYYYYNY", "YNNNYYYNYNYYN", "YYNYYYYYYYYNY", "YYYNYYNNNYYNY", "YNYYYYYYNYNYY", "NYYYYYYNYNYYY"};
    int bridgeStrength = 2865;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2166;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> travelersWeights = {891, 23, 673, 923, 983, 867, 348, 945, 120, 23, 24, 999, 1000};
    vector<int> travelersTimes = {891, 23, 673, 923, 983, 867, 348, 945, 120, 23, 24, 999, 1000};
    vector<string> trustTable = {"YNYYYNYNYNYNY", "YYYYYNYNYYYNY", "YNYYYNYNYNYNY", "YNYYYNYYYNNNY", "YNYYYNYNYNYYY", "YNYYYYYNYNYNY", "YNYYYNYNYNYNY", "NNNYYNYYYNYNY", "YNYYYNYNYNYYY", "YNYYYNYNYYYNY", "YNYNYNYNYNYNY", "YNYYNNYNYNYYY", "YNNYYNYNYNYNY"};
    int bridgeStrength = 3000;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2858;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 15;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> travelersWeights = {1, 2, 3};
    vector<int> travelersTimes = {1, 1, 1};
    vector<string> trustTable = {"YNY", "YYN", "YYY"};
    int bridgeStrength = 4;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> travelersWeights = {43};
    vector<int> travelersTimes = {23};
    vector<string> trustTable = {"Y"};
    int bridgeStrength = 142;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> travelersWeights = {1, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> trustTable = {"YYNNNNNNNNNNN", "YYNNNNNNNNNNN", "YYYNNNNNNNNNN", "YYNYNNNNNNNNN", "YYNNYNNNNNNNN", "YYNNNYNNNNNNN", "YYNNNNYNNNNNN", "YYNNNNNYNNNNN", "YYNNNNNNYNNNN", "YYNNNNNNNYNNN", "YYNNNNNNNNYNN", "YYNNNNNNNNNYN", "YYNNNNNNNNNNY"};
    int bridgeStrength = 11;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> travelersWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> travelersTimes = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 13;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {50, 1, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 45};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 2;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> travelersWeights = {43};
    vector<int> travelersTimes = {23};
    vector<string> trustTable = {"Y"};
    int bridgeStrength = 50;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> travelersWeights = {1, 1, 1, 1};
    vector<int> travelersTimes = {2, 3, 4, 5};
    vector<string> trustTable = {"YYNN", "NYYN", "NYYN", "NNYY"};
    int bridgeStrength = 3;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> travelersWeights = {384, 645, 965, 357, 468, 358, 957, 735, 382, 125, 474, 385, 175};
    vector<int> travelersTimes = {375, 306, 382, 496, 206, 783, 683, 934, 395, 385, 171, 864, 476};
    vector<string> trustTable = {"YNNYYNYNYNYYN", "NYNYYNNYNNNYN", "YNYNNYNNYYNYN", "YYNYNYYNNYYYN", "NYNNYNNNNNNNN", "YYYNNYNNNYNYN", "NNNNNNYNNYYYN", "NYYYNNNYNNYYN", "NNNYYYNNYNNYN", "NYYNNYNNNYNNN", "NNYYNNYNNYYNN", "NNNYNNYNNNYYN", "NNYNNYNNYNNNY"};
    int bridgeStrength = 2500;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2371;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> travelersWeights = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    vector<int> travelersTimes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 43;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> travelersWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> travelersTimes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "NNNNNNNNNNNYN", "YYYYYYYYYYYYY"};
    int bridgeStrength = 5000;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {1, 1, 1, 1, 1, 1};
    vector<string> trustTable = {"YYNNNN", "YYNNNY", "YNYYYN", "NYNYNN", "YNNNYN", "NYYYYY"};
    int bridgeStrength = 3;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 13;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {324, 455, 456, 435, 435, 35, 435, 435, 55, 56, 56, 56, 56};
    vector<string> trustTable = {"YYNNNNNNNNNNN", "NYYNNYNNNNNNN", "NNYYNNNNNNNNN", "NNNYYNNNNNNNN", "YNNNYNNNNNNNN", "NNNNNYYNNNNNN", "NNNNNNYYNNNNN", "NNNNNNNYYNNNN", "NNNNNNNNYYNNN", "NNNNNNNNNYYNN", "NNNNNNNNNNYYN", "NNNNNNNNNNNYY", "YNNNNNNNNNNNY"};
    int bridgeStrength = 10;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2440;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> travelersWeights = {1, 1, 1, 10, 10};
    vector<int> travelersTimes = {1, 1, 1, 1, 1};
    vector<string> trustTable = {"YYYYY", "YYYYY", "YYYYY", "YYYYY", "YYYYY"};
    int bridgeStrength = 10;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 10;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> travelersWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> travelersTimes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<string> trustTable = {"YYNNNNNNNNNNN", "YYNNNNNNNNNNN", "NNYYNNNNNNNNN", "NNYYNNNNNNNNN", "NNNNYYNNNNNNN", "NNNNYYNNNNNNN", "NNNNNNYYNNNNN", "NNNNNNYYNNNNN", "NNNNNNNNYYNNN", "NNNNNNNNYYNNN", "NNNNNNNNNNYYN", "NNNNNNNNNNYYN", "NNNNNNNNNNNNY"};
    int bridgeStrength = 1000;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> travelersWeights = {1, 1, 1, 1};
    vector<int> travelersTimes = {1, 2, 9, 10};
    vector<string> trustTable = {"YYYY", "YYYY", "YYYY", "YYYY"};
    int bridgeStrength = 2;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> travelersWeights = {886, 727, 640, 595, 187, 142, 20, 261, 57, 108, 390, 118, 762};
    vector<int> travelersTimes = {574, 433, 17, 844, 434, 882, 902, 936, 180, 963, 842, 162, 118};
    vector<string> trustTable = {"YNYNNYYNYYYNY", "YYYNNYNNYYNYN", "NYYNYYYYYYYNN", "YNYYYYNYYNYNY", "NNYYYNYNNNYYN", "NNNNNYNYYNNYY", "YNNYNYYYNYYYN", "YYNYNYYYNNYYY", "YNNNNYYYYYNYN", "NYNNYNYYNYNNY", "YNYYYYNNYYYNN", "YNYYYYNYYYYYY", "NNNNYNNNNYNNY"};
    int bridgeStrength = 2198;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2149;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> travelersWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> travelersTimes = {9, 8, 7, 3, 5, 7, 4, 7, 3, 2, 8, 1, 9};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYNYYNYYNNYNN", "NNYYYNYYNYYYY", "YNNYYNYNYYYNY", "NNYNYYYNYNNYY", "NNYYNYNNNNYYY", "NNNYYYYYYYYYY", "NNYYNYYYNNNNN", "YYYYYYNNYYYYY", "YYYYNNYYNYYYY", "YYYYYYYNNYYYN", "YYYYYYYYYYYYY", "YYYYYNYYYYYYY"};
    int bridgeStrength = 17;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 2;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> travelersWeights = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> travelersTimes = {194, 858, 217, 936, 333, 137, 264, 209, 84, 758, 38, 190, 562};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 5000;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1516;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> travelersWeights = {9, 7, 12, 20, 9, 26, 22, 29, 24, 27, 12, 15, 12};
    vector<int> travelersTimes = {9, 7, 12, 20, 9, 26, 22, 29, 24, 27, 12, 15, 12};
    vector<string> trustTable = {"YYNYYYYNYYYYY", "YYNYYYNYYYYYY", "NYYYYYYYYYYYY", "NYYYYYNYYNNYN", "YYNNYYNYYYYYY", "NNYYYYYYYYNYN", "NYYNYYYYNYNNY", "NYNYYNYYYYYYY", "YYYNYYYYYYYYN", "NYYYYYYYYYYYY", "YYYYYYYNYYYYY", "NYYYNYYYYYYYY", "NYYNYYYYYYYNY"};
    int bridgeStrength = 85;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> travelersWeights = {28, 19, 29, 17, 17, 25, 21, 24, 28, 16, 10, 22, 13};
    vector<int> travelersTimes = {8, 18, 19, 3, 13, 16, 12, 2, 20, 12, 17, 2, 8};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 35;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 251;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> travelersWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> travelersTimes = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 14;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 255;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> travelersWeights = {1};
    vector<int> travelersTimes = {1};
    vector<string> trustTable = {"Y"};
    int bridgeStrength = 2;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 12;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> travelersWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> travelersTimes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY", "NNNNNNNNNNNNY"};
    int bridgeStrength = 1000;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> travelersWeights = {1};
    vector<int> travelersTimes = {1};
    vector<string> trustTable = {"Y"};
    int bridgeStrength = 10;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> travelersWeights = {826, 519, 179, 293, 44, 203, 703, 677, 763, 934, 679, 342, 27};
    vector<int> travelersTimes = {889, 511, 425, 931, 638, 896, 160, 994, 83, 886, 925, 106, 151};
    vector<string> trustTable = {"YNYYNYNYYYYNN", "NYYYYYYYYYYNY", "YNYYYYYYNYNNY", "NYNYYNNYYNNYY", "YYNYYNNYYYNNY", "NYYYNYNYNYNYN", "YNNNYNYNYNYYY", "NNYNYYYYNYYYY", "YNNYYYYNYYYYY", "NNNNYYYNYYNNY", "YYYYYYYNYYYYN", "YNYNYYYYYYYYN", "YYYNYYNYYYYYY"};
    int bridgeStrength = 2000;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2885;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> travelersWeights = {43};
    vector<int> travelersTimes = {23};
    vector<string> trustTable = {"Y"};
    int bridgeStrength = 43;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> travelersWeights = {1, 1, 1, 1};
    vector<int> travelersTimes = {1, 2, 3, 4};
    vector<string> trustTable = {"YNYN", "NYYN", "NYYN", "NYNY"};
    int bridgeStrength = 3;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> travelersWeights = {5, 5, 5, 5, 5, 5, 5};
    vector<int> travelersTimes = {5, 6, 4, 9, 3, 1, 6};
    vector<string> trustTable = {"YYYNNNY", "NYYNNNN", "YNYNNNN", "NNNYYYY", "NNNNYYN", "NNNYNYN", "NNYNNYY"};
    int bridgeStrength = 15;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> travelersWeights = {10, 10, 10, 10};
    vector<int> travelersTimes = {5, 5, 5, 5};
    vector<string> trustTable = {"YYNY", "YYYN", "NYYN", "YNNY"};
    int bridgeStrength = 20;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> travelersWeights = {1, 2, 3};
    vector<int> travelersTimes = {2, 3, 4};
    vector<string> trustTable = {"YNY", "YYY", "YYY"};
    int bridgeStrength = 4;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> travelersWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> travelersTimes = {9, 8, 7, 3, 5, 7, 4, 7, 3, 2, 8, 1, 9};
    vector<string> trustTable = {"YYYYYYYYYYYYY", "YYNYYNYYNNYNN", "NNYYYNYYNYYYY", "YNNYYNYNYYYNY", "NNYNYYYNYNNYY", "NNYYNYNNNNYYY", "NNNYYYYYYYYYY", "NNYYNYYYNNNNN", "YYYYYYNNYYYYY", "YYYYNNYYNYYYY", "YYYYYYYNNYYYN", "YYYYYYYYYYYYY", "YYYYYNYYYYYYY"};
    int bridgeStrength = 16;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> travelersWeights = {2, 8, 2, 3, 5, 2};
    vector<int> travelersTimes = {296, 800, 5, 123, 767, 957};
    vector<string> trustTable = {"YNNNNN", "NYNNNN", "YNYYNY", "NNNYNN", "YNNNYN", "YNYYNY"};
    int bridgeStrength = 23;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 10619;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> travelersWeights = {2, 8, 5, 1, 10, 5, 9, 9, 3, 5, 6, 6, 2};
    vector<int> travelersTimes = {8, 2, 2, 6, 3, 8, 7, 2, 5, 3, 4, 3, 3};
    vector<string> trustTable = {"YYNNYYNYNYNYY", "YYNYYNYYNYYYN", "YNYNYYYYYYNNY", "NNNYNNNNNNYNY", "NNNYYYNYYNNNN", "NNYNNYYNYYNNN", "YYYYYNYNNYNYN", "YYNNNYYYYYNNN", "YNYYYNYNYNNYN", "NNYYYYYYYYYYY", "YNYNNNNNYNYNY", "NYNYNYNYYYNYN", "YNNNNYNYNNYNY"};
    int bridgeStrength = 20;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> travelersWeights = {834, 414, 959, 580, 863, 869, 307, 311, 267, 663, 896, 900, 684};
    vector<int> travelersTimes = {438, 580, 537, 747, 526, 592, 26, 87, 762, 297, 313, 226, 190};
    vector<string> trustTable = {"YNNNYNNNNNYNY", "YYNNNYYNYNNNY", "YYYNYYNNNYNYY", "YYNYYNNYNNNYN", "NNNYYNYYNYNNN", "YYNYNYYYNYYYN", "NNNYYNYNYYYYN", "NNNYYNYYYYNYY", "NYYNNNYYYNYNN", "YYYNYYNYYYNYY", "NNNYYYNYYYYYN", "YYNYNYNYYYYYN", "YNYNNYNNNNNNY"};
    int bridgeStrength = 2582;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 2128;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> travelersWeights = {281, 421, 703, 37, 264, 84, 118, 21, 355, 7, 506, 595, 281};
    vector<int> travelersTimes = {281, 421, 703, 37, 264, 84, 118, 21, 355, 7, 506, 595, 281};
    vector<string> trustTable = {"YYYYYYYYNYYNY", "NYYYNYYYYYYYY", "YYYYYYYNYYNYY", "YYYYYNYYYYYNY", "YYYYYYYNYYYYY", "YYNYYYYYNYYYY", "YYYYYYYYYNYNY", "YNYNYYYYYYYYN", "YYYYYYYYYYYYY", "YYYYYYYYYYNYN", "YYYYNYYNYYYYY", "YYYYYYYYYYYYY", "YYYYYYYYYYYYY"};
    int bridgeStrength = 2000;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 1131;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> travelersWeights = {1, 1, 50, 60, 70, 80};
    vector<int> travelersTimes = {1, 1, 100, 100, 100, 100};
    vector<string> trustTable = {"YYYYYY", "YYYYYY", "YNYNNN", "YNNYNN", "NYNNYN", "NYNNNY"};
    int bridgeStrength = 132;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> travelersWeights = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> travelersTimes = {300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312};
    vector<string> trustTable = {"YNNNNNNNNNNNY", "NYNYYNNNNNNNN", "NNYNNNNYNNNNY", "NNNYNNNNNNNYN", "NNNNYNNNNNNNN", "NNNYNYNNNNNNN", "NNNYNNYNYNNNN", "YNNNNNNYNNNNN", "NNNNNNNNYNNNN", "NYNNNNNNNYNNN", "NYNNNNNYYNYYN", "NNNYNNNNNNYYN", "YNNNNNNNNNYYY"};
    int bridgeStrength = 8;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 3386;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> travelersWeights = {10};
    vector<int> travelersTimes = {10};
    vector<string> trustTable = {"Y"};
    int bridgeStrength = 10;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> travelersWeights = {1, 1, 1, 1};
    vector<int> travelersTimes = {1, 2, 3, 4};
    vector<string> trustTable = {"YYNY", "YYYN", "NYYY", "YNYY"};
    int bridgeStrength = 2;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> travelersWeights = {1, 1, 1, 1};
    vector<int> travelersTimes = {1, 1, 1, 100};
    vector<string> trustTable = {"YYNN", "YYNN", "YYYN", "YYNY"};
    int bridgeStrength = 3;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> travelersWeights = {1, 1, 10, 10};
    vector<int> travelersTimes = {1, 1, 1, 1};
    vector<string> trustTable = {"YYNN", "YYNN", "YYYN", "YYNY"};
    int bridgeStrength = 12;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> travelersWeights = {1, 1, 1, 1};
    vector<int> travelersTimes = {1, 1, 1, 1};
    vector<string> trustTable = {"YYNN", "NYYN", "YYYY", "NYNY"};
    int bridgeStrength = 3;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> travelersWeights = {5, 2, 3, 4, 3, 2, 7, 2, 3, 6, 3, 2, 9};
    vector<int> travelersTimes = {5, 2, 3, 4, 3, 2, 7, 2, 3, 6, 3, 2, 9};
    vector<string> trustTable = {"YYYYNNNNYYYYN", "NYNYNYNYNNYYY", "YYYNNYNYYNYNY", "NYNYYYNYYNYYY", "YYYYYYYYYYNNN", "YNYYNYYYNYNYN", "NYNYYYYYNYYYN", "NYNYYNYYYNYYY", "NYYYYYYNYYYNY", "NNYNYYNYYYYYY", "NNYYYNYYNYYNY", "YYNYNYYNYNYYN", "YYYYYYYYYYYYY"};
    int bridgeStrength = 17;
    CavePassage* pObj = new CavePassage();
    clock_t start = clock();
    int result = pObj->minimalTime(travelersWeights, travelersTimes, trustTable, bridgeStrength);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=13513&pm=10123
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
#include <queue>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class CavePassage
{
public:
    int minimalTime(vector <int> travelersWeights, vector <int> travelersTimes, vector <string> trustTable, int bridgeStrength);
};
 
bool trusted(const vector<string> &table, int bits)
{
    int N = table.size();
    if (__builtin_popcount(bits) == 1) return true;
    for (int i = 0; i < N; i++)
        if (bits & (1 << i))
        {
            bool good = false;
            for (int j = 0; j < N; j++)
                if (i != j && table[i][j] == 'Y' && (bits & (1 << j)))
                    good = true;
            if (!good)
                return false;
        }
    return true;
}
 
struct qitem
{
    int state;
    int prio;
    bool operator <(const qitem &b) const
    {
        return prio > b.prio;
    }
 
    qitem() {}
    qitem(int s, int p) : state(s), prio(p) {}
};
 
int CavePassage::minimalTime(vector <int> weight, vector <int> times, vector <string> trustTable, int strength)
{
    int N = weight.size();
    int speed[1 << N];
    for (int b = 1; b < (1 << N); b++)
    {
        if (!trusted(trustTable, b))
        {
            speed[b] = -1;
            continue;
        }
        speed[b] = 0;
        int tweight = 0;
        for (int i = 0; i < N; i++)
            if (b & (1 << i))
            {
                tweight += weight[i];
                speed[b] = max(speed[b], times[i]);
            }
        if (tweight > strength)
            speed[b] = -1;
    }
 
    int M = 1 << N;
 
    priority_queue<qitem> q;
    q.push(qitem(0, 0));
    int prio[2 << N];
    fill(prio, prio + (2 << N), INT_MAX);
    prio[0] = 0;
 
    while (!q.empty())
    {
        int s = q.top().state;
        int p = q.top().prio;
        q.pop();
        if (prio[s] != p) continue;
 
        int moveable = (s & M) ? s & (M - 1) : ~s & (M - 1);
        for (int m = moveable; m != 0; m = (m - 1) & moveable)
            if (speed[m] != -1)
            {
                int s2 = s ^ m ^ M;
                int p2 = p + speed[m];
                if (p2 < prio[s2])
                {
                    prio[s2] = p2;
                    q.push(qitem(s2, p2));
                }
            }
    }
 
    int trg = (2 << N) - 1;
    if (prio[trg] == INT_MAX) return -1;
    else return prio[trg];
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/