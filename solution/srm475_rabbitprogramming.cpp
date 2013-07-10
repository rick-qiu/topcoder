/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10880
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

class RabbitProgramming {
public:
    long getTeams(vector<int> points, vector<string> standings, int qualified, int selected);
};

long RabbitProgramming::getTeams(vector<int> points, vector<string> standings, int qualified, int selected) {
    long ret;
    return ret;
}


int test0() {
    vector<int> points = {1, -10};
    vector<string> standings = {"NY", "YN", "YN", "YN"};
    int qualified = 3;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> points = {-250, -500, -1000};
    vector<string> standings = {"YYY", "YNY", "YYN", "YYN", "YNN"};
    int qualified = 4;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
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
    vector<int> points = {5, -12, 5, -15, 10, -20, 3, -25, 7, -32, 21, -45};
    vector<string> standings = {"YYYYYYYYYNYY", "YYYNYYYYYNNN", "YYYNYNYYNNYN", "YYYYYNYYYYNN", "YYNNYNYNYYNN", "YYYNNNYYNNNN", "YYNNNNYYNNNN", "NNYNYYYNYNNN", "NNNNNNYYYNNN", "YYYNNNYYYNNN"};
    int qualified = 4;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> points = {1};
    vector<string> standings = {"Y", "Y", "Y", "Y", "Y"};
    int qualified = 3;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> points = {124, 123, -1, 257, 1, -29, 871, 20, 897, 1, -25, 71, 9261, -9, 2, 63, 10, 82, 614, -9, 26, 7, 1, -9, 256, 1, 10, 2, 936, 1, -2, 52, 9, 56, 1, -2, 95, 17, 2, 61, -2, 30, 7, 51, 9, 23, 60, 1, 2, 4};
    vector<string> standings = {"NNYNYNYNYNYNNYNNNNNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNY", "YNYNYNYNYNYYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYNYNYYNYNY", "NYNYNYNYNYNYNYYNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYNNYNN", "NNNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYYNYNY", "NYNYNYYNYNYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYYN", "YNYNYNYNYNYYNYNYNYYNYNYNYNYNYNNYNNNNNYNYNYYNYNYNYN", "YNYNYNYNYNYYNYNYNYYNYNYNYNYNYYNYNYNYNYNYYNYNYNYNYN", "YNYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYYNYNY", "NYYNYNYNYNYNYNNYNNNNNYNYNYYNYNYNYNYNYNYNYNYNYYNYNY", "NYYNYNYNYNYNYYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYNYNYYNY", "NYNYNYNYNYNYNYNYYNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYNNY", "NNNNNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYYNY", "NYNYNYNYYNYNYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNYNY", "YNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYNNYNNNNNYNYNYYNYNYN", "YNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYYNYNYNYNYNYYNYNYNYN", "YNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYYNY", "NYNYYNYNYNYNYNYNNYNNNNNYNYNYYNYNYNYNYNYNYNYNYNYYNY", "NYNYYNYNYNYNYNYYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYNYNYY", "NYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYYNYNYNYNYNYNYNNYNNN", "NNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYYNYNYN", "YNYNYYNYNYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYYNY", "NYNYNYNYNYYNYNYNYYNYNYNYNYNYNNYNNNNNYNYNYYNYNYNYNY", "NYNYNYNYNYYNYNYNYYNYNYNYNYNYYNYNYNYNYNYYNYNYNYNYNY", "NYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYYNYNYN", "YYNYNYNYNYNYNNYNNNNNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYN", "YYNYNYNYNYNYYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYNYNYYNYN", "YNYNYNYNYNYNYNYYNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYNNYN", "NNNNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYYNYN", "YNYNYNYYNYNYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYY", "NYNYNYNYNYNYYNYNYNYYNYNYNYNYNYNNYNNNNNYNYNYYNYNYNY", "NYNYNYNYNYNYYNYNYNYYNYNYNYNYNYYNYNYNYNYNYYNYNYNYNY", "NYNYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYYNYN", "YNYYNYNYNYNYNYNNYNNNNNYNYNYYNYNYNYNYNYNYNYNYNYYNYN", "YNYYNYNYNYNYNYYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYNYNYYN", "YNYNYNYNYNYNYNYNYYNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYNN", "YNNNNNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYYN", "YNYNYNYNYYNYNYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNYN", "YYNYNYNYNYNYNYYNYNYNYNYNYNYNNYNNNNNYNYNYYNYNYNYNYN", "YNYNYNYNYYNYNYNYYNYNYNYNYNYYNYNYNYNYNYYNYNYNYNYNYN", "YNYNYNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYYNYNYNY", "YNYNYNYNYNYNNYNNNNNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNY", "YNYNYNYNYNYYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYNYNYYNYNY", "NYNYNYNYNYNYNYYNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYNNYNN", "NNNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYYNYNYNYNYNYYNYNY", "NYNYNYYNYNYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYYN", "YNYNYNYNYNYYNYNYNYYNYNYNYNYNYNNYNNNNNYNYNYYNYNYNYN", "YNYNYNYNYNYYNYNYNYYNYNYNYNYNYYNYNYNYNYNYYNYNYNYNYN", "YNYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYYNYNYNYNYNYNYYNYNY", "NYYNYNYNYNYNYNNYNNNNNYNYNYYNYNYNYNYNYNYNYNYNYYNYNY", "NYYNYNYNYNYNYYNYNYNYNYNYYNYNYNYNYNYNYNYNYNYNYNYYNY"};
    int qualified = 48;
    int selected = 45;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 17296;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> points = {64589, -58153, 70314, -35746, -85096, 4435, 6607, -60022, 1749, 36570, 98474, 40318, -8737, 45563, -38766, -14408, -48738, 68597, -87811, 25377, 20333, -10690, 79100, -17326, -73041, -34702, -79847, -62563, -48698, 13206, 42855, 8801, -64994, -88637, -16045, 82690};
    vector<string> standings = {"YNYYNYNNYYNYYNNNNYYYYNNYNNNNYNNNNYNY"};
    int qualified = 1;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> points = {74088, -72808, -68269, -2999, -60203, 27689, 65563, -1759, 64709, -35515, -85931, 6380, -75305, 24760, -19190, 74618, 48527, 52375, -49380, 83054, 58826, -82899, 40602};
    vector<string> standings = {"NNNNNYNNNNYNYYYNYNYNNNN", "NNYYNYNNNNNYYYNYYYYYNNN"};
    int qualified = 1;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> points = {89274, 11690, 66010, 73053, 59782, 22766, 33271, -50240, 99895, 6369, -64233, -1450, 99827};
    vector<string> standings = {"NNYYYNYYYYNNN", "NNYNNNYNNYYYN"};
    int qualified = 1;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> points = {67844, 16347, -4353, -26124, -61640, -98377, -38230, 67254, 25780, -29487, -65929, 74907, 91840, 31939, -98974, -73954, -30735, -99486, 66678, 30296, 39739, -68114, -35154, 6325, 1310, -88620, -57601, 65048, -22662, -84450, 21424, 54474, 7241, 32377, -35170, -59106, -14815, -72544, 16166, -77530};
    vector<string> standings = {"NYYYNNNNNNYYYNYYNYYYYYYYYYNYNYNYNNYYNYYN", "YYYYYYNYYYYYYYNNYYNNYNYYNNYNYYYYYYNNYNYY"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> points = {68450, -98986, 40271, -65486};
    vector<string> standings = {"NNYN", "NNNN", "NNNY"};
    int qualified = 3;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> points = {61473, 43564, -55779, -73515, 79697, 11097};
    vector<string> standings = {"NYNYNY", "NNYNNN", "YYYNNN"};
    int qualified = 1;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> points = {36716};
    vector<string> standings = {"N", "N", "Y"};
    int qualified = 1;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> points = {69498, -54265, 26377};
    vector<string> standings = {"YNN", "YYY", "NYN"};
    int qualified = 3;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> points = {-62301, -51706, -67962, 14864, 54987, -71280, 45833, -69462, 38569, -42643, -13426, 90127, -9956, -35436, 75547, -15287, 95678, 59272, -14050, -25424, 37464, 50031, -24877, 82565, -90285, -46961, 17066, -36736, 92725, -70483, 36250, 96131, -12162, -27910, -59754, 148, 6194, 60922, 14178, 85974, -19597};
    vector<string> standings = {"YYNYNYNYYYYYYYYYYNYYYYNYNYYYYNNYYYYNYNYYN", "YYYNYYYYNNYNNNNYNNNYNNYYYYNNNYYNNYYYNYNNY", "NNNYNNYNYNNNNNNYNNNNNNNNYNNYYNYNNYYNYYNYY"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> points = {90888, 98117};
    vector<string> standings = {"YY", "NN", "NN"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> points = {11507, 47537, -73199, -32807, -84997, -58838, 89801, 22012, 76205, 78361, 35878, 35823, -85508, 30749, 14207, -46426, -94505, 78654, 61098, 36999, 75079, -55581, -73353, -31704, -97235, -59793, 30722, 42250, 17198, -42251, -26790, 95957, -85206, -75881, 22501, -25783, -11481, 42880, 4415, 72523, 67085};
    vector<string> standings = {"NNYNYNNYNNYYNYNNYYYYYNNYNYYYNNNYYNNNNNYNY", "YNYNNNYYNYNNYNNYNNNYNYNNYYNNNNYNNYYNNNYYY", "NYYNNYYNYYNYYYYNYNNNYNNNYYYYNYNYNNYNYYNYN"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> points = {-1533, 31971, 27196, 9150, 84409, 17032, -39084, -12889, 72356, -62529};
    vector<string> standings = {"NNNNYYNNNY", "NYNYYYYYYY", "NYYYNYNYYN", "NYNNYYNNNN"};
    int qualified = 3;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> points = {75627};
    vector<string> standings = {"Y", "Y", "N", "Y"};
    int qualified = 3;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> points = {23749, 39234, 58460, 23993, -38478, -2278, -4611, -37730};
    vector<string> standings = {"YYYYNNNY", "YNYNNNYY", "NYNNNNNY", "YYYYYYYY"};
    int qualified = 1;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> points = {85834, 77679, 65154, 70673, 72259, -67205};
    vector<string> standings = {"YNNYYN", "YNNYYN", "NNNYYY", "YYYYNY"};
    int qualified = 1;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> points = {-75432, -37153, 54846, -2253, 52873, 67363, -7322, -89634, -16736, 43591, -83461, 26927, -70071, -67061, 52570, -68498, -29340, 45197, -92569, 86329, -29448, 94673, -77545, -39665, 4804, 41329, -74933, -28516, 9650, -76448, 27477, -90236, 43243, 33628, -44843};
    vector<string> standings = {"YYNNNYYNNYYYYYYYYNYNYNNYYNYNNYNYYYY", "NNNNYYYYNNNYYNYYNNNNNYNNYYNNNNYNNYN", "YNNNNYNNNYNYYNNNYNYYYNNYYYYNNNNNYYN", "YNYYNYYNNNYYYNNYYYYNYNNYYYNNNYYNNNN"};
    int qualified = 4;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> points = {11242, 93876, 44176};
    vector<string> standings = {"NNN", "NYN", "YNY", "NYN"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> points = {61807, 50244, -58156, -82094, 3462, 78222, -5971, 31860, -43927, 45811, 65801, 70669, 84078, 84668, 74924, -37590, -19826, 45473, 11620, -46689, 48310, -24798, 9942, -55373, 36891, 87305};
    vector<string> standings = {"NYYNYYYYYNYNYNNYNNYNYNYYYY", "NNNNNYYNNNNNNNNYYNYYYYYNYY", "YNNNNNYNYYYNNNYNNNNNNYYNNY", "NNNNNNNNNYYNYYNYNNYYNYYYYY"};
    int qualified = 3;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> points = {-18509, -49060, 66902, -31843, 20652, 74258, 86658, 66647, -77347, 89112, -49543, 4389, -94549, -56645, 89231, -58548, -66144, 70802, -61847, 36106, -81255, -85965, -95936, -7661, 3842, -84007, -17307, -82362, -68555, -46830};
    vector<string> standings = {"NYYYNYYNYYNYNYNNYYYYNNNNNYYYNY", "NYNNNNNNYYNYNNNNNNNNNNNYNNYYNN", "NYYYNNYNYYYNNNNNNYNNNYYYNNNYYN", "YYYYNYNNNNYNYYYNNYNYNNYYYYNYNY"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> points = {73100, -28680, -53516, 85028, -29638, 59715, 9108, 88041, -54750, 73695, 71989, -5110, 97527, -14140, 58732, 10945, 76614, 96818, -75487, 84170, 36436};
    vector<string> standings = {"NYNNYYNYNYNNYYNYNYYNN", "YNYNNYYNNYNYNNYYYNNNN", "YNYYYNNNYNYYNYNNNNYNY", "YNNNNNNYYNNYNYYYNNYYY"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> points = {32654, 37002, 1067, 30572, -816, 91509, 85081, -35499, -6582};
    vector<string> standings = {"NYYYYYNYN", "YYNNNYNNY", "NNNYNNYNN", "YYYYYYNNN"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> points = {-23305, -388, -50591, 49198, 55654, 69630, 68314, 6071, -43967, -11533, -64284};
    vector<string> standings = {"YNYNYNYNNNN", "NYNNNNNNYNN", "NYNYYNYNYYN", "NNNYYNYNNYN"};
    int qualified = 4;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> points = {45976, -33817, 94497, -49827, 98256, 97904, -66756, 27091, -11498, 1882, -53486, 86338, 43641, -44191, 81586, -52943, 20674, -82204, 91663, -59065, -44081, 19020, -15838, 7944, 87428, 26258};
    vector<string> standings = {"YNYYNNNYNNNYNNYYNNNNYYNYYN", "YNYYYYYYNNNYYNYNNYNYNYNNYY", "YYNNYNYNYYNNYNNYNNYNYNNNYN", "YNNYYNNNNYNYYNNNYNYNNNYYNN"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> points = {-10239, 22390, -53276, 82525, -50326, 77646, -18004, -35102, 79043, 65178, 24142, -43921, 66813, 2431, -82685, 43382, 43587, -95007, 55029, 95497, -1023, 34030, 23620, -99926, -8306, -76430, -5165, 64002, -69389, 64171, -64808, 73066, -74598, 12825, 81052, 74343, 12822, 94539, -44982, -39438, 83849};
    vector<string> standings = {"NNNYYYYYNYNYNNYYNNNYYNNNNNYYYNYYYNYYNYNNY", "NNNNNNNYYYYYNYYYYNNYYNYNYYNYYNYNYNNNNNNYN", "NYNNNNNYYYNNNNNNNYNNNYNNYYNNYYNYNNNYYNNNN", "YYNYNNYNYNYYYNYNNYNYNNNNYNNNYYYNNYYNYYNYY"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> points = {94629, 17982, -29672, -15235};
    vector<string> standings = {"NYNN", "YYYY", "YNYY", "NYNN"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> points = {-27935, 25220, -96909, 64574, -76973, 23245, 32788, -49813, -31838, -35893, 23524, -51519, 48235, 36936, 48675, -66841, 26499, 20351, 88410, -5833, 67590, -19804, 84217, 23892, 70592, 62796, 18703, 88979, -46287, -53090, 55973, 46998, -54719, 98824, -37001, -1992, 67395, 6002, 48594, -24028, 27740, 25576, 44356, -36606, 92311, -18085, 46018};
    vector<string> standings = {"YNNYYYYYNYYNYNYNYNYYYYYYNYYYYYYNYYNYYYYYYYNYNNN", "NYNYNNYNNNYNNYYYYYYYYYYNYNYYNYYNYYNYNYYYNNNYYNN", "YNYNNNNYNNNNNYNNNYNYNNYYNYNYYNYYYNNNNNNYYYYYYNN", "NYYYYNNYNYNYYYYYNYYNYYNNYYYNNNYYNNNYYNYNNYNNYYY"};
    int qualified = 4;
    int selected = 4;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> points = {-26693, -40698, -27097, 58541, 92841, 54067, 64175, -75329, 35776, -45871, -21660, -62082, 49793, -9419};
    vector<string> standings = {"YNNYNYNYYYNYNN", "NYYNYNYYYYYNNN", "YYNYYYYYNYYYNN", "YNYNNNYNNNNNYN", "NYYNYYNNNNYYYN"};
    int qualified = 3;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> points = {-43667, 82132, 86020, 56255, 32472, -82262, -7036, -24264, -8779, 92315, 73265, -87602, -23271, 45661, 78975, -62597, -74456, -87089, 65919, 64898, -18322, -75043, -99526, 95011, -31860, 18253, -41097, 41913, -94068, 44580, -61285, -46031, 83798, -55306, -18136, -51093};
    vector<string> standings = {"NNYYNNNNNYYYNYYYNNNNYYNNNNNNYNNNYYYN", "NYNYNYYNNNNNNYYYYNNNYYYYNNYNNNYYNYYN", "YNNNNYNYYNNNNYNNYNYYNNYNYYYNNNNYNNYY", "NNNNNYYYYYYYYNNYYYYNNNYNYYYYNNNYYNNN", "YYNNNNYYYNNNNNYYNYNNYYNYYNNNYNYYYNYY"};
    int qualified = 3;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> points = {-87259, 15362, 24, 75416, 98137, -27885, -79257, 8205, 22648, 1525, 27737, 84373, -73925, 76446, -85048, 66890, 87828, -55428, -52171, 16417, 68547, -23384};
    vector<string> standings = {"YNNYNNNNNYYYNYNNYNYNNN", "YYNNNNYYYNYNNNNYYYYNNY", "NNYNNYYYNNYYYNNYYYNNYY", "NYNYNYYNYNNYNYNNYYYYYN", "NYYYYNYYNYNYYYNYYYYNYN"};
    int qualified = 1;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> points = {65610, 13566, 69307, 68166, 39309};
    vector<string> standings = {"NNYNN", "NYNNY", "NNNYN", "YNYYN", "YNYNN"};
    int qualified = 1;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> points = {35698, -56877, 60282, 50715};
    vector<string> standings = {"NNNY", "NNNY", "NYNN", "NNYN", "YYYY"};
    int qualified = 2;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> points = {12315, 64099, -44355, -41441, -13842, 85457, -81065, 36087, -52156, -24013, -26849, 62496, -77019, -80327, -4504, 43485, -4588, 58300, -14524, 27202, 53540, -75158, -33689, 5480, -52383, 53401, 60139, 38026, 47986, -91167, -76500, -7234};
    vector<string> standings = {"NYNYYNYYNNYNNNNYYNYNYYYYYNYYNNYY", "NYYYNYYNYYYNNYNYYNYYYYYYYNNNYYNN", "NYNNNYNNYYNNYNNNYNYNNNNNYNYNYYYN", "YNNYNNNYYYYNNNNNNNNYYNNNYYNNYNNY", "NNYYYYYYNNNYNNYYYYNYNNYYYYNNNYYY"};
    int qualified = 5;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> points = {65796, 54360, -58906, -80185, 88856, -59615, 94772, -28396, -84120, 15486};
    vector<string> standings = {"NNYYNNNNYN", "YNYNYYNNNN", "YNNNNNNYNY", "NYYYYNNNNY", "YYYNNYNNNY"};
    int qualified = 3;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> points = {51169, 5879};
    vector<string> standings = {"NN", "YY", "YY", "NY", "YY"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> points = {49922, 18419, 21911, 33478, 99828, -97328, -5935, 8508, -77011, -36808, 31100, 16238, -73958, -59137, 90115, -54562, -16624};
    vector<string> standings = {"YYYNNYYYYNNNNNNNN", "YYYNYNNNNNNNYYYNN", "NNYYYNNYYNNYNYNNY", "NYYNYYNNNYYYNNNNY", "YYNNYNNYYYNNYYNNN"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> points = {-74833, -88279, 39873, 68070, -81953, 30448, 55223, 89999, 70042, 62512, -13326};
    vector<string> standings = {"YNNYNYNYYNY", "YYNNNNYYNYY", "YNYNNNYNYNY", "YNNNNNNYYNN", "NYNYYNNNNYN"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> points = {87469, 76153, -31425, 23770, 62478, 35946, 52121, -11682, 75416, -63647, 52144, -91671, -80867, 47465, 18507, -95229, 38045, 34233, -91338, -90367};
    vector<string> standings = {"NNYYNYNNNNYNNNYNYNNN", "YNYNYYNYNYYNNYYYYYYY", "NNNNNYNNYYNNNYNYNYYY", "YNNNYYYYNNYYNNYYYNNN", "YNYYNNYNYNYNNNYNNNNN"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> points = {-10, 3741, 54530};
    vector<string> standings = {"NYY", "YYN", "NNY", "YYY", "YYN"};
    int qualified = 4;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> points = {81577, 85927, -11009, -71892};
    vector<string> standings = {"NNYY", "NYNN", "NNNN", "YYNY", "YNNY"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> points = {55877, -95784, 9571, 37025, -49596, 38989, 66403, -83626};
    vector<string> standings = {"NNYYYYYN", "YYNYNNNY", "NYYNYNNN", "YNYNNYYY", "YYYNYYYN"};
    int qualified = 3;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> points = {96617, -99401, 38225, 93059, 56821, -34930, -73993, 42726, 89724, 580, -17501, 4936, -85255};
    vector<string> standings = {"YYYYNNYNYNYNY", "YNNYYYYYYNYNN", "YYNYNNYNNNNYN", "YYNYNYYNYNNYN", "NNNYNYNNYNNYN"};
    int qualified = 2;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> points = {3712, 29649, 21303, -28061, -18820, -68202, -32033, -57569, 63104, 24903, 1876, 58830, -97227, -97581, -41253, -6897, -92829};
    vector<string> standings = {"NYNYYYNYNYNYNYNYN", "NYYYNYYNNNNYYYNNY", "NNNNYYYYYNNNNYNYN", "NYYYYYYYNYYNNYYNY", "YNYYNYNNNNNNYNYYY"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> points = {-82669, 72626, -37680, 45512, -22143, 84529, -57205, 48662, 43201, 42554, 44303, -20615, -46746, -8592, 80747, 20893, 60967, 23750, 208, -50154, -26978, -60513, -38737, 53865, -95348, -87004, 65538, -65902, 27170, 99880, 37731, -429, 83247, 35376, 75094, 53756, -95557, -98336, -29909, -7122, -17545, -28535, 66303, -92809, 42378, -73911, -83881, -85178, 50245, 29151};
    vector<string> standings = {"YNYYNYYNNYNNYYYYYYYYYYYYYNYNNNYNYYYYYYYNNYYYYYNYYY", "NNYYNNYNYNNYYYYNNNNNNNYYYNYNNYYYNNYNYNYYYYYNYYYNYY", "NYYNYNYNNYYYYYYNYNYNYNNYNYNNNYYYNNYYYNYNYYYNYNNNYY", "YYYNNYNYNYYNYYNYNNYYYNYNNNNNYNNNYNNNNNNYNYYNYNNNNN", "NNYNYYYYNYYNYNYNNYNNNNYNNYYNYNNNNYNNNNNYYYNYYNYYNN"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> points = {-30377, 27497, 89412, -70981, -92314, -50786, -54879};
    vector<string> standings = {"NNYNNYN", "YNNNYNN", "NYNNNNY", "YYNNNNN", "NYYYNNN"};
    int qualified = 4;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> points = {62044, 69251, -90373, 45856, 1294, 72143, -77192, -94257, -77345, 13573, 17815, -94506, 96009, 82455, 54706, -49493, 9313, 77732, 68688, 83134, 37060, -35915, -33450, -7237, 56974, -4972, 20894};
    vector<string> standings = {"NNYYYYYNYNYYNYNYNYYYYNNNYNN", "YNNNYYYNYNNNYYNYNNYYYYYNYNY", "NNNNYYNYYNNNYNNYYYNNYYNNYYY", "NYYYNYNNNNNNYYNYNNNYYYNYYYY", "NNYYNNNNNNYYNNNYYYNYNYNYNYY"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> points = {84958, -62348, -7184, 1514, -67688, -69445, 77025, -58835, 18010, -17197, -3767, -12520, 11984, -71655, -63531, 10000, -39420, 76086, -46645, -351, 72496, 85509, -88650, -61947, -75546, 82664, -87196, -23626, 10865, -29016, 22923, 21225, -58311, -1660, 78598};
    vector<string> standings = {"YYNYNNNNNNYYYYYYNYNYYNYNYYYNYYYNNYN", "YNYNYYNYNYNYNNYNYYNNYNYYYNNNYYNYYNN", "YNYYYNYYNYNYYNYNYYYNYYNYYYYYYNNNYYY", "NYNYYNNNNYNYNYNYYNYNYYNYNYYYYNYNYNN", "NYNYYNNNNYYYYNNNNNNYNNNYNNNYYNNYNNN"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> points = {1931, -82224, -77331, 41720, 59364, -49206, -59335, 37205, 36183, -39358, 50794, 94312, 53618, 89908, 99472, 71479, 32512, 52605, 60703, 43113, 4447, -64956, 79571, 85441, 59631, 42761, -22484, 27255, 6630, -69181};
    vector<string> standings = {"NNYNNYNNYNYNNYNNYNYNNNNYYYNYYY", "YNNYNYYYNYNNYYNNNYNNYYNNYYNNNY", "NNYNNYNNYYNYYYNNNYYYYNYYYYNNNY", "NYNYYNYNYNNYYNNNNNYYYNYNYNYYYY", "YYNYYNYNNNYYYNYYYNYYYYYYYNYNNN"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> points = {-9404, -43961, 87751, 66436, -54236, -40987};
    vector<string> standings = {"NNNNYN", "YNYYYY", "YNYNNN", "NNNYNN", "NNYYYN"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> points = {50934, -39554, 69795};
    vector<string> standings = {"NYN", "YNY", "NNY", "NYY", "YYY"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> points = {37815, -25891, -23938, -21781, 63324, 62031, 54361, -92251, 90044, -76758, 98373, 71116, -21628, -68569, 79620, -97427, 99269, -258, 96415, 52829, 11005, -62769, 68737, 88872, -94771, -6991};
    vector<string> standings = {"YNNYYYNYNNYYYNYNNYNNNYYNNN", "NYNNYYNYYNNYYYYYYYYNYNYYYN", "NNYYNNNYYNNNNYNYNNYNYYYYNY", "NNNYNYYYYYNNNYNNNNNYYNYYNY", "NNNYYNNNYYYNYYYYYNNNNNNYNN"};
    int qualified = 3;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> points = {-16646, 71115, -92644, -55969, 97677, -10316, -606, -90337};
    vector<string> standings = {"NNNNNYYY", "YNYNNYYN", "NYNNNYNY", "NYNNYNYY", "NNYNYYYY"};
    int qualified = 5;
    int selected = 4;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> points = {-89750, -32867, 13534, 70802, 34367, 86763, -87417, 91449, 5543, 45819, 52348, 70657, -6345, 8790, 40191, 79349, -81555, 49781, -37857, 43497, -26640, -82215, -95679, 55523, 50362, 75786, -94953, 1958, -20402, 89321, 57136, -11813, 80938, 29040, 1894, 44895, 31864, -9076, -10504, 25636, 67965, 69975, -65351, -701, 31828, 86571, -33697, 98856};
    vector<string> standings = {"YNYYYNYNYYYYYYNYYNYYNYYYNYYNYYYNNNNYYNYNNYNNNNNY", "NYNYYNNYYNYYYNYYNYNNNNYYNNYYYNNNYNNNNYNNNYNYYYYN", "NNYNNNYYNYNNYYYNYYNYNYNYNNNYYNNYNNYYNYYNNYYNNYNY", "YNYNYYNNNYNNNNNNNNNNYNNNNYNNYNNNNYYNYYNYYYYNNNNN", "YYYYNNYYNNYNYNYYYNYNYYYNYYYNYNYYNNNYYNNYYNYNNNNY"};
    int qualified = 4;
    int selected = 4;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> points = {46989, -9224, -23865, 37344, 15980, 75907};
    vector<string> standings = {"NYNYYN", "YYYYNN", "YYNYNY", "NYNNNN", "YYYNYN"};
    int qualified = 4;
    int selected = 4;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> points = {-1690, -98215, 1612, -13993, 54628, 50751, 35267, -61747, -20212, 51577, 14434, -97203, 59605, -24125, 1566, 98052, -36069, -72519, 81884, -24169, 2301, -43911, -95085};
    vector<string> standings = {"YNNYYNYNNNYYNNYNNNNYYYN", "YYYNNYYNNYYYYNYYNYNNYYY", "YYNYNNNNYNYNNYYNYNYNYNY", "YYNNNNYNYYNYNYYYNNYNYNY", "NNNYNNYNYNNNNYNYYNYYNNN"};
    int qualified = 4;
    int selected = 4;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> points = {98901, 24318, 39017, 25650, -40241, 49102, -69023, 68032, -12957, -70748, -17830, 62151, -92989, -79205, 18412, 75236, 28406, 83378, -41979, 82489, -3677, 10737, -43760, 55589, 83792, 45439, -28493, 6181, 805, 48259, -43215, 57735, 29224, -49104, 66097, -95611, 37965, 26420, -34282, -61562, 65190, -52234};
    vector<string> standings = {"NNNNNNNYNNNNNNNYNNYYNYNYNNYYNYNYYNYNNNYNNY", "YYYNYYNYNNYYNYYNYNYYYNNYNNYYYYNNNNNYNYYNNN", "NNYYYNNYNYNNNYYNNNYNYNYNNYNNYNNNNYYYYYNYYN", "YYYYNNNYNNYYYYYYNYNYNNYYYNYYYNNYYNNYYYNNYN", "YYNYNNNNNNNNYNNYYYYYNNYNYNNNNYYYNYYNNYNYYY"};
    int qualified = 4;
    int selected = 4;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> points = {-35557, -87068, 61145, 75969, 81132, 33750, 71623, 33457, -8361, 26611, -61889, 55376, -64665, 31828, 12796, 83293, 15486, 58749, 73867, -49218, 65039, 45368, -39010, -88344, 35727, -90739, -44544, -67609, -65110, 96737, -52765, -64693, 10224, -7000};
    vector<string> standings = {"NYNNYNNYNNYYYNNNNNNYYNYNYYNYYNNNNN", "YYNNNYNYNNYYNYNYNNNYNYNNNNNYNNYYNN", "YNNNYYYNYYYYYYYYNYNYYNYYYYYNYNNYNN", "NNYYYYYNNYNNYNYNNNYNYYNNNNYYNYYYYY", "NNYNYNNNNYNNNYNYYNNNYNNNYNYNNNNNNY"};
    int qualified = 5;
    int selected = 5;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> points = {-15698, -71673, -11371, -54977, -70622, -28072, 35274, -78736, 39979, 15830, -15652, -85876, 13169, -82419, -71190, -2312, -28461, 74841, -92114, 98263, 12778, -41270, -67627, -71864, 11347, 41671, -96930, -51502, 23035, 47659, 89899, 21727, -26582, -4248, -32347, -71272, 9932, -53452, 74706, 14074, 61690, 69402, -43220, -670, 77697, -25625, -36226, -63010, -18506, 21640};
    vector<string> standings = {"YNNNYNYNNYYYYNYYYYNNNNYNYNYYYYNNNNYYYYYNYNNYNYNYNN", "NNYNYYYNYNNYNNNYYNYNYNYYNYNYNNNNNYYYNNNNYYNNYNNYYN", "NYYNYYNYYYYYNNYNYNNNNNNNYNNYYNNYNNYYNNYNNNYNNYYYNN", "NNYYNNYYNYNYNYNNNNNNNNNNYYNYNYYYYNYYYNNNYNYNYNNYNY", "YNNNYYYYNNNNYYYYYNYYNNYNNNYYYNNNNYNNNYYNNNYYNYYNYY", "NYYNYYNYNYYNYNYYYYYYNNYYYNYYNYYNNNYYNYYYNYYYNNYYYY", "NNYNYYYNYYYYYNYNNNNYYNNNNNNYNYYYYNYYYYNYNYNYNNNYYY", "YNYYNYNYYYNNNNNNNNNYNYNNYYYYNNYYYYYNNNNYNNYYNYYYYY", "YNYNYYYNNYYNNNNNNYYYNYYYNNYYNYYNYNYYYNYNNYYNYYYNNY", "NYNNNYYNNYYNNYYNNYYYNNYYYYNNNNYNYYNNYNYYYYYNNNYYYY", "YYNNYNYYNNNYNYYYNYNYYYNYNNYYNYYYYNYNNYNYYYYNNYYNYY", "YYNNNYYYYNNNYNYYNNYNYNYNYNYYYYYNNYNYYYYYYYYYNNYYNN", "YYNNYYNYYYNYYNYYNNNYYNYNYYNYNYYYYYYYYYNYYNNYNNNYYY", "NYYNYYYYYNNYYNYYNNNNYNYYYYNYYNYYNYNNYNNNYYYNNNYNYN", "NYYNNYYNNNNNYYYNNNYYNYYNYNNNNYNNYNNNNNNYYYYNNNNNNY", "NYYNYYNYNNNNYYNYYYNNYNNYYYNNYNNNNNNNNNNYNYNNYNYYNN", "NNYNYNYNYNYYYNYNNNYYNNNNYYNYNYYNYYNNYYNNNNYYNNYNNN", "YYYYNYNNNNYYNNNYYNYNNNYNNYYNYYYNNNNNNNYNNYNNNNYYYN", "NYYYNYYYNNNYYNNNYYYYNNYNYNYYYNNNYYYNNYYYYYNNNNYYYN", "YYYYYYYNYYNYNYNNYNNNNYNNYYYYNNYNYYNYYNYNNYNNYNYYNN", "NYNNNYYNYYYYNNYNNNNNNNYNNYYYNNNNNYNYNYNNNNNNNYNNYN", "YYNNYYNYYYYNNYNNNNNYYYNNYNYNNYNNNNNNYYYNNNNNNNYYYN", "YNNYNYNNNNYNYNYNNYNNNYYYNNYNNNYNYYNYNYNYNNNNNYNNYN", "YYYNNYYNNYYNNYYYYYYNYYNYYYNYNYNNNNNNYNNNNYYNYNNNNY", "NNNNYNYNYNYNNNYYYYNNYNYYNYNYYNYYNYNNNYYYYYNNYNNYNY", "YYYYYNNYYNYNNNYNNNNYYYNYNNNNYYYNYNNNNYNYNYYNNNNNNN", "NNYNYYYNNNYYNNYYNNNYYYYYNYNYNNYYNYNYYYYYNYYNYYNNYN", "YNYYNNYNNYYYNNNYNYNNYYNNYYNNYNNNNYNYYYNNYYNYYYYYYN", "YNYYNYYNNYNNYNNYNNNYYNYNNYYYYNNNNNYNNYNNNYYYYYYNYY", "YYYYYYYNYNNYNYNYYYNNYYNNYYNYYNNYYYNNNNNYYNYYNNNYNN", "YYYYNYYYYNNNYNYYNNNYYYNYYYNYNNYNNNNNNYNYNYYNNYNYYY", "NYYNYYNNNYNNYNNYNNYYNNYYNYYNNYYYNYYNNYNNYNYYNNNNYN", "NNYNNYYNNNNNNNNNNYNYYYNNNNYNYNYNNNNYYYNYNYYYNNNNYN", "YNYYYNYYYYNNYYNNYNNNYNYYYNYNYYYNNNNYNYNYYNYNYYYNYN", "NYNNYNYYYYNNNYYNYYNYNNYNNYNYYNYYNYNNYYYYNYYNNYNYYY", "YNYYNNNNYNNNYNYNYYYYYNYYNNYYNYNNNYNYYYNYNYYNNNNYYN", "NNYNNNYNNYYYYNNYYNNNYYYYYNYYNYYYNYYNNNNYYYYNNYYNNY", "YYNYYYYNNNYNYYYNNYYYNYNYYYNNYNYYNNYYYYNYNNNNYNYYNN", "NYNNYNYYYNYNYYNNYNYNNYYNYYYNYYNYNYNNNNYYNNNYYNYYYY", "NNNNYNYYNNYYNYNNNYYYNNNYNNYYNNYNYNNNNNYNNNNYYYYNYY", "YNYYNNNYYNYYNYYNNNYYYNNYNYYNNNYYNYNYNYNYNYYNYNYYNY", "NYNYNYYNNYYYYNNYYYYNNYYYYYNYNNNNNNYYNYNYNYYNYNYYNY", "YYYYYNYNYYNYYYYNNYNNNYYNNNNNNYYNNNNYNYNNYNYNYNNYNN", "NNYYYNNNYNNNYYNYYYYYYNNNYNYYYYYNNNYYNYNNNNNNNYNYYN", "NYNYNYNNYYNNYNYYNYNYYNYNNNNNNYYNYYNYYNYNNYNYYYYYNN", "YYNYYNYNNYYNYYYNNNYNYYNYYNYNNYNYNYYYYNYNYYYNNYNNNY", "YNYYYNNNYNYNYYYYYNYYYNNYYNYNYNNNNYNYNNYNYNYNYNNNYY", "NYYNYYNYYNYYNNYYYYYYNYNYYNYYYYYNNYNNNYNNYNNYNNNNYY", "YNYYYYYNNNYYNNYNYNYYNNNYNYYYNNNYYNNNNYYNYNNNNYNNYN", "YYNNNNNNNYNYYYNNYNYYNYYYNNYNNYNNNYNYYYYNYYNYNNYYNN"};
    int qualified = 50;
    int selected = 25;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 126410606437752;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> points = {1626, 58741, 78398, 91723, 42949, -61482, -85666, -78462, 57356, -64666, -25069, 71088, -55827, -73879, 90001, -78093, -90323, 39838, 26541, -93961, 34622, 49626, -19683, 19804, -59127, -1198, 51926, -25272, 35870, 17274, 52473, 88482, 40628, 65091, 88697, -60777, -67939, -55360, 95952, -79013, -94517, -88852, -17512, 97072, -8582, -15739, -3253, -97770, 21114, 79186};
    vector<string> standings = {"YNNYNNYYYYYNYYNYYYNYYYNNYNYNYNNNYYYNYNYYNYNYNYNNYY", "NNYNYYYYNYNYNNYYYYYYNNYYYYNNNNNNNNYNYYNNYYYNNNNYYN", "NNYNYNYNYYYNYNNYYNNNYYNNYYYNNYYYYNNNYYYYYYYYYYYYNY", "NYNNNNNNYNNYNNNYNNYYNNNNYNNYNNNNNNYNYYYYNNYNNNYNYN", "YYNNNYNYYNNNYNNYNYNNNYYNYYYYYNNNNYYYYYNNNYNNYNNNNN", "YYYNNYNNNYYYYNNNYNYYNYNNYNNNNNNYNYYNYYNYYYYNNYNYYN", "NYYYNNYNNYYNYNNYYYYYYYYYNNNNYYYYNNYYYNYNYYYNYYYYYN", "YYYYNYNYYNYNNNYYNYYNNNNNNYNYYYYYNNYYNYYNYNNNNNYYNN", "YNNNYYNNYNYNYYYNYNYYYNNYNYYYYYYNYYYYNNNYNNYNYNNNNN", "YYYNNNNYNYNNYYNNNNNNYYYNNYYYNNYYYNYNNNNNNYYYNYYYNY", "NYNYNNNYNNNNNNNYNYNYNNNYNNNNNNNYNYYYNYYYNYNNNYYYYN", "YNYYNNYYYNYNNNNYNNNNNYNYNYYNYNNNNYNNYYNNYNYYYNNYNN", "NNNNYNNNYYYYNYNYYYYNYNYNYNNYYNYYNNYYNYNYNYYNNNNYYY", "YNNNYNNYYYNYYNNNYYNNNNYYNYNNNYNYNYYNYYYNNYYYYYYYNY", "NYNYNNNNNYYNYNNYNYYNYYNYNYYYNNYYYYNNYNNYYYNYNNNYNY", "NNNNNNNNNYYNYNYNYYYYYYNNYNNYYNNNYNYNNYYYYYYYNYYNYY", "NYYNYYNNNNNYYNNYNYNNYYYNNYYNNNYNYYYYYYYYNYNNNYNYYN", "YYNNNNNNYYNYNNYYYYNYNNNYYYNYNYNYNNNYYYNNYYYYYNYNYN", "YYYNYYNYNYYYNNNYNNNNYNNNNYNNYNNNYYNYNNYYNNNYYNYYNY", "YNNNYYNYYYYNNYNNYYNYYNNYNNYNYYYNYYYYNNYNNNYNNNNNYN", "NYNNYNNNNYNYNYNNYYNYNYNYNYNNYYNNNNYYNNYYNNYNNNYNYN", "NYYNNNYYNYYNNYYNNYYYYNNNYNYYNNNNNNYNNNNYYNNNYNYYNN", "NYNYNYNYNYYYNYNNNNYNYYNYNYNYYNNYYNYYYYYNYNYYYYYNNY", "YYYNNNNYYNYYYNYNYYYNYNYYYNYYNNNNNNYNNNNYNYYNYYNNYN", "YNYYYNNNYYNNNNYNYNNYYYYYNYYNYNYNNYYNNYYYNNYNYYNYNY", "NNYYNNNYYNNNNYNYNNYNNNYNNNYNNNYNYYYYYYNYNYNYNNYNNN", "YNYYYNNYNYNNYYNYYNNNNYNYNYYNYYYYNYYYYNNNNNYNNNNNYY", "NYNNYYYNNYYNNNYNYYYNNYNNNNYNYNYNNNYYNNYNYNNNNYYNNY", "NNYYNYNNNYNYNYNYYNNYNYYNNYNYNNYNYYYYYNNYNNNNNNYYNN", "YNNNNYNNNNNNNYYYNYNNNNYNNNYNNNNYYYYNYNNYNNYNYYNYYY", "NYNNNYNNYYYYNNNYYYNYYNYYYNNYNNYYNYYYYNNNYNYNYYYYNN", "YYNYYNNYNNNNNYYYNNYYNYNNYYYYNNNNNYNYNNYNNYYYYNYNYY", "YYYNNYNYNNYYNNNYYNNYYYYYYNNNNNYYYYYNNNNYNYNYNNNYYY", "NNYYNNNYNYNNNYNNNYNYNYYNNYYYNYNNNNYNNNYYYNNNYNNYYY", "YNNYYNNNYYYYYYYNNNNNYYYYNNYNNNNYNNYNYYYYYYNYNNNNYN", "NYYYYYNYNYYNYNYNNNYYYYYYNNYNNYYYYNYNNNYNNNNYNYNNYN", "NYYYNNYNNNNNYNNYYNYNNYNYNYYYNYYNYNNNYNNNYNYYYNYYNY", "YNNYNYNYNNNYYYYYYNYNYNYNYYNNNNNYYYNNNNYNYNNNYYYNYY", "NNNNNYNYYYYNNYNYNNYNNYYYYNYNNYNNNYYNNYNNYYYYYYNNYN", "NYYYNNYYYNYNNYYNYNYYNYYYYNNNYYNNYYNNNYYYYNNNNYYYNN", "YNNNYYYNYYYYYYYNYYNYYYNNNYYNYYYYNYNYYNNYNYNYYNYYNN", "YYYNYYYNNNNYNNYNNYNYYYNNNYYYNYYNYYNNNYNYYYNNYYYNYN", "YNYNYNNNYYNYNYYYYYNYYNYYYNNYYYNYYYNYNNNNYNYYNYYNNN", "YNYNYYYNYNYNNYNYYYNNNYNYYYYNYYNNNNNNNYYNYNNNNNYYYN", "YYNYNNNNNYYYYYYNYNNNNNNNNNNNYYYNYNNYNYYNNNNNNNYNNN", "NNYYYYNYYYYNNYYYNNYYYNNNYYYYNNNYYNNNYNYNNYNYYNNYYY", "YYNNYNYYYNNNYYYYYNYYYYYYNYYYYYNNNYNNNYYNNYYNNYNYNN", "YNNYNNNYNYYYYYNYYYNYNNYNNNYYNYYNNNYYYYNNYNYYYYYYYY", "NNNYYYYYNYNYYNYNNNYYNNNNYNYNYYYNYNNYNNYYNNYNYYNYYN", "NNNNNNYYNYNNYYNYYNNNNYNNNNNNYNYYNNNNYNYYNYNNYNYYYY"};
    int qualified = 42;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> points = {34858, -79801, 45173, 56436, -34450, 21695, -77832, -84271, 63118, 5627, 4908, 60819, 78742, 83264, 87194, -99494, 47175, 79521, -84958, -49567, -34977, -28371, -5221, 37736, -74986, 69050, 93842, -939, -5407, -77626, 58990, -96654, 88434, -54064, 8948, -28610, 65664, 44340, -20763, -37522, -44737, -39495, 63877, 54470, -90448, 91525, 75703, 47565, -90283, -54508};
    vector<string> standings = {"YNYNYNYNYYNNNYNYYYYYNNNYNNYNNNNYNYNYYYYYYYYNYNNNNY", "NYYNNNNYYNNNNNYYNNYYYYYYYNYNNNNNNYNNYNYYNNYNYYNYNY", "YNYNNNYYNNNYYYYNNYNYYNNYYNYNYYYNNYNNNYNYYYYYYYYNYN", "NYYNNNNYYYYYNNYNNYYNNNYNYNYNNNNNYNYNYYNNYNYYNYNYYN", "NYYNNYYYYNNYNYYNYNNNNYNYYYYYNNNYYYNYYYYYYYNYYNNNYN", "YYNNNYNNNNNNNYNNYNYNNNYYYYNNYNYNYNYNYYYNNYYNYYYNYY", "YNNYYYYYYYYNNYNYYYYNNYYNNYNYNNNYNYYYYYNNNNNYYNYNYY", "NYYNYNNNYYYYNNYNNNYYYNNYNNYNNYYYYYYNNYNYYNNNNNNYYY", "NYNNNNNNYNYYYNYNYYYNNNYNNYNYNYYNNNYNNYYNNNYYYNNYNN", "NNNYNNYYNYYYNNYNYYYNNYYYNYYYYNNNNYYNYNYNYNYYYYYNYN", "YYYNNYYNNYYYNYYYYYYNNNYNYYNYYNNNNNNNNNNYNYYNNYNNYN", "YNNNNYYNYYNYNYNNNNYYNYNNYNYYYNYYNYNYNNNYYNNNYNYYNN", "YNYNNYNYYNNNNNYNNNNYYYNNYNYYYNNYNNYYYNYNNNNNNNYNYN", "NNYYYYYYYNYNNNYNYNYYNNYNYNYNYNNYNNYYYNYYNNNNNNYNNY", "NNNYYNYYNNNYYYYYYNNNNYNYNNNYNNNNNYYNNYNNNYNNNYYYNY", "NNNNYNYNNYNYYYYYNNNNNYYYNNNNYNNYNYNYNNYYYNYYNNNNNY", "NYNNNNNNNYYYYNNYNNYNYNNYNNYYNNYYYNNYNNYNNYYYNNYNYY", "YNYYNNNNNYYNNNYNNYNNYYYYYNYYYYNYNYNYYNYYYYYNYNNYNN", "NNYNNNNYYYYNYYNYNYYYNNNYNNNNNNNYYYYNNYYNNYNNNNYNYN", "NYYYYNNNNYNNYNNNYNNNYYNYYNNYNYYYNNYNNYNYNYYYNNNYNN", "YYYNNNNNNNYYYYNNNYNNYYNYYYYYYYYYYYNYYYNYNYNNNNNNNY", "NYYYNYYYYNYYYNYYNYNYYYYNNYNYNNNNYYYNNNYYYNYNYYYYNY", "NYNNYNYYNYNYYYNNYNNNNNNNYNYNYYYYNYYYNYYNNNNNYNNYNN", "NYNYNYYNYYYYNYYNNNYYYNYYYNNNYYNNYYNNNNYNNYYYYYNNYY", "NNNYNYYNYYNNNYNNYNYNNNNYNNNYYNYYYYNYNYNYYYYYNYNNYN", "NYYNYNYYYNNYNYYYYYYNYNNNYYYYYYYYYYNYYYNYYYYYYNNYNN", "YNYYYYNNNNYYNYNNNNNNNYNNYYNYNNYYNYNYNYNNNNYNNNYYYY", "YNYYYYYYYNNYNYNYYYNNNNNYNYNNNYYYNYYYNYNYYYYNNNNYYY", "YYNNNYNYYYYNNYYYNYYNYNNNNNYYYYNYNNNNNYYNNYNNYNYNNY", "NYNNNNYYYYYYYNNNNYYNYNNYYNNYNNYNNNYNNNYNYYNYNNYYNY", "YYNNYNYYNYYYNYYYNYYYNNYYNNNYYYYYYYYNNNYNYYYNNYYYYY", "NYYNNYNNNYYYYNYNNYYNYNYYYYNYYNYNYNNNNNNYYYYNNYNYNY", "YYNYNNYYNYNYNYYNYYNNNNNYNNNYNYYYYYYNNNYYNNNNYYNYNN", "NYNYNYYYNYNNNNNNYYYYYNYYNYYNYNYNYYYNNNNYNNNYNNNNNN", "NYNNYYNNNYNYNNYNNYNNNYNNYNYYNYYNYNYNNYNYNNYNYYNYYY", "NYNYYYNYNNYNNYNNYYNYNYYNYNYYNYYYYNNNNNYYNNYNYNYYYY", "NNYYNYNNYNYYYYYNYNYYYYYYYNYYNYNNYYYYNYNNYNNYYNNYNY", "NYYNNNYYNNNNNYNYNNNNNNYYNYYNNNNNYYYYYYYYNYYYYYYNNY", "NNYNYNYNYNNYYYYNYYNYNNYNNYNNNYNNNYYYNYNYNYYYNNNYNY", "NNYYNYYYNNNYYNNYYNYNYYYNYNYYNYNYNNYYNYNYNNYYYNNNNN", "YYNYNYYNNNYNYNYNNNYNNNNNNNNYYNNYYYYYNNYNNNNYNYYNYY", "NYNYNNNYYYNYYNYYNYYYNNNNYYNNYYNNNNYYYNYNYNNYNYNYNN", "NNYNYYYYNYNNYYNNNYNYNYNNNYYYYNYYYNNYYNYYNYNYYYNYNN", "NNYNNYYNNYNYYYYNYNNNNYNYNNNYNYNNNNYYNYNYYYNNNNYNYY", "NYNNYNNYNNNNNYNYYYYYNNYYNYNNNNNNNYNNYNYYYYYNYNNNNN", "NYYYNNNNYYYNYYNYYYNNNYNYYYNYNYYYYYYYNYNYYYYNNYYYNY", "NNNYYNYYNYYYYNYNYYYYYNNYYNNNYYYNNYNYYYYNNYYYNNYYNY", "NNNNYNYNNNNYNNYYNYNNYNYNYNNNYNNNYNNYYNNNYNYYYNYYYN", "YYNNNNNNNNNNNNNNYNNNYYNNYNNYNYYYYNNYNYNYYNNNYYYNYY", "NNNYNNNYNYYYNYYNNNNYNYYYYNNNNNNNYNNYYNNNYYYNNYYYNY"};
    int qualified = 15;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1225;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> points = {-43344, 59119, 35008, 24856, -43102, 97135, -6596, 2481, 62376, -39055, -85598, -49821, -60196, -44881, -55776, -91000, 93568, -68276, 29509, 1580, -74993, 81321, 31843, 38182, -36417, -52975, 48990, 20711, -32810, -53736, -13483, 20822, 22951, -33023, 58158, 26639, 69095, 48020, -7177, -41654, 240, 82641, 7936, -81251, 66640, 35648, 39474, 62617, -66163, 76390};
    vector<string> standings = {"NNYYNNYYYYNNNYNYYYNNYYNNNYYYNNNYNYNYYNNYYNYYNNNYYY", "NNNYYNYNYNYYYYYNNNNNYNYYNYNNNYNNYYNNYNYYNNYNYYNYNN", "NYYYYYNYYNYNNYYNYNNNNNYNNNNNNNNYYYNNNNNYYNNNNNYYYN", "YNYNNYNNNYYYNYNNYYNNNYNNNNNNNYNNYYYYNNNNYYNNNNNYNY", "NYNNYNNYNYNNYNNYYNNYYNNYNNYNNYYYNYNYYNNNYNNNNYNNYN", "NYYNYYNYYNYYNNYNYYNYYYNYNNNNNNYNNNNNNNYYNNNYNNYYYY", "NNYNNYYYNYYNNNNYYNNYYNYYNNNYNYYNYNYYNYNNNNYNNYNNNN", "YYNNNYNYNYYNNYNNYYNYYNYYNNNNYNNNNNNYNYYYNYYNNYYYNY", "NYNYNNYYYYNYYYNYNYNNNNYYNNNNNNNNNNNYNYYYYNNNNYNNNY", "YYYYYNNYNNNYYNYNNYYNYYYNYNNNYNNYNNYNYYYYNNNYNNNNNN", "NNNNNYNNYNYYYYNYYYNNYNYNNYNYNNNNYYNNYYNYYYNNNNYNNY", "YNNNNNYNYNYNNNNYNYNNNYYYYNYYNYNNNYYYNYNYYYNYNNNYNN", "NYYNNYNNNYNYNYNYNNNYNNNNYNYNNNYYYNYYYYYYYNYYYYNYNY", "YNNYNNNYYNNYYYYNNYYNNYYYYYNYNNNNNYYYNYYYYNYNNYYYYY", "NNYNNNYYNYNNYNYNYNNNNNNNYYNYNYYNYYNYNYNYNNNYNNNNYN", "NNNNNNYYNNYNYYYNYNNNNYNNYYNNYNNYNYNNNYNNYYYNYNYNNN", "NYYYNNYNYYNYYNYYNNNNYYYNYNNNYNNNNNNYNYYYNYYNNYYNYN", "NNNYYNYNYYNNNNYYNYYYNYNNNYNYYYYYNNYNNNNYNNNNYNYYNY", "YNNNNYYYNYNNNYNYYYNYNYNNYYYNNNNNNYNYYNYNNNNNYNNNYN", "YNYNNNNYNYNNNNNYYYNNNYYYNYNYYNNNYYNYNYYNYNNNYNYNYY", "YYYNYNYNYNNYYNYNYYYYNNYNNNYNYYYNNYNNNYNYYYNYNYNYNY", "YNNNNYNNYNYNYNNNNNNNNYNNYYYYYYYYYYYYYYYYYNYYYYNNNN", "NNYNYNNNYNYYNYYNYNYNNNYYNYYYYNNYYYYNNNYYYNNYNNNYNN", "NNYNYNYYNNYNNNYYYNNNNYYYYYYNYNYNNNNNYNNNYNNNYNYYNN", "YNYYYYYNNYYYNNNNNNYNYYNYYYYYYNYNNYYNYNNNYNYNNYNYNY", "YYYNNYYYNYNYNYNNYYNYNYNNNYNNNNNNNYYYNYNYNNNYNYYNNN", "YNYYNYYYYNNNNYNYNYNYYYYYNNNNNNNYNYYYNYYYYYYNNYNYNN", "NYNNNYNNNNNYNNNYYYYNNNNYYNNNNNNNNYNNNNYNYYYNNYNYYY", "YNNYYYNYYNYYNNYYNYYYYNNYYNYNYYYNNYYNYNYNNNNNYYYNNY", "NYYNYYYNNYYNYNYNNNYYNNNNYNNNYNNYNYNYNNNYNYNNYYNNNY", "YYNNNNNYNYYNYNNNNNNNNNYYYYYYNNNYNNYNNNNYYYNYYYYNYN", "NNYNYNYNNNYNNNNYYYNYYYNNNYNYNNYYNYYNYNNYYYYYYYNYYN", "YYNNNYNYYNYNNNNYYYNYYNNYYYYYYYNYYYNNNYYYNNYYYYYNNY", "NYNYYYYYYNNNNNNNNYNYYNYNNYNNYNNYNNNNYNYNNNNNYNYNYN", "YNYYYNYYNNYNYNNYNYNNYNNNYYNNYNNYNNYYNNNNNYNNYNYNYN", "YYYYYYYYYNYNNYYYNYYYYNNNYNYYYNYNYNYNYYYNNNYYNYNYNN", "YYYNYYNNYYYNYYYNNYNYNNNNYYYYNYYNNYNNYNYNYNNNNNNYYY", "NYNYYYNNYNNYYNYNNNNYNYNNNNYNYNNYNNYYYYYNYNNNNNNYYN", "YNYYNYYYNNNYYNNYNYYYYYNYYNYYNYNNNNNYNYYYNYNYYNNNYN", "YYNNNYYYYYYYNYNNYNNNNNNYNNYYNYNNYYNNYNNNYNNNYYNNNY", "NYNNYNNNYYYYNNYNNNYYYYYNYYNNNNNNNYYYYYNNYNYNYNNNYY", "YYYYYYYYYNYNYNNYNYYYYNYNYYNNNNNYYNNYNNNNYNYNNYYYYY", "YNNYNNNNYNNNYNYYNYYYYYYNYNNNNNNYNNYYYYYNYYYNNNYNYN", "NNYNNNYYNNNNNNNYNYNNNYNYYYNNYYYNYYYYYNNYNNYNYNNYYY", "NNNNNNNNYNNNYYYNNNYYNYYYYNYYNNNNYNNNYYNYYYNNNNNYNN", "YNNNYNNNYYYNNYNYYNNNNYNYNYYNNYYNYYYYNNNYNYYNYNNYNY", "NNNNYNNYNNNYNNNYYNYYYYYNNNNYYNNYYNYYNYYYYNYNNYYYNN", "NYYNNNYYNYYYYNYNYYNYYNNNYNYNYYNYNNYYYNYYNYNNYNYYYN", "NNYNNYNYNYNNNNNNYNNYYYYNYNYNNNNNYNYYYYYYNYNNNNNYYN", "NYNYYYYNNYYNYNYYNNYYNNYYYNYNNNNNYYYYNYYNYNYNNNNNYY"};
    int qualified = 17;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 19600;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> points = {89177, -50663, 65221, 99488, -12986, 22453, 10903, -60385, 11950, 53639, -51301, -16298, -51470, 78787, -8519, 1674, -36926, -80917, 50369, 9957, -28583, 43950, -11656, 50283, 20770, 48343, -30124, -33354, -11598, 6069, -88382, -40148, 41913, 8332, 20709, 13891, -45645, -7181, -71912, -98012, -87849, -89140, 81588, -44279, 39636, 52193, -15475, -3952, 9136, -52461};
    vector<string> standings = {"NNYNYNNNNYYYYNYNNNYYNNNNYYYNNNYYNYYNYNYNNYYNNNNYYY", "YYNYYNNNYNYNNYNNNYYNNYYYYYYNYYNNNNNYNNYYNNYNNNNNNN", "YYYNYNNYNYYNNYYNNYNYYYNNNNYYYNNNYYYNYYYNNYNNNYNYNN", "NYNNYYNNNYYYYNYYNYNYNYYNYYNYYYNYYYNYNYNNYNYNNNNYNN", "NNYNNYNYYYNYNYNYNYNYNYYNNYYYYNYNYYNNYYYNYNYYYNNNYN", "NNNYNYNYNYNYYYNYNYYYYYNNNNNNNYNYNNYYYYYNYNNNNNYYNY", "YNNYNYNNNYYNYYYNYNYYNYYNNYNNYYYYNNYNNNYNNYNYYYYYNY", "NNNYNNYNNNYNYYNYYYYNYNNNYYYYYYYYYNYYNYYYNNNNNYYYNY", "NNYYNYYNNNYYNNYNYNNYNNYYNNYNYNNYNNYYNNYYYYYNNNNYNY", "YYYNNYNYYYNNNYYYYYYYNNNNNNYYNYYYNYYNNNYNNNNYNYNYNN", "NYNYNNYNYYYNYYNYYNNNYNNNNYYYNNNYYNNNYYNYYNYYNYYYYY", "NYNYNYNNNYYYYNYNYYYYNNNYYNNYYYNYNYYYYNNNNYYNYNNYNN", "YYNYYYYYYNYNNNNYNYYYNYNYYYNYYYYNNYNNYNNNYYYNYYNYNY", "NNNYYYYYYYYNNNYNYNYYYYYNYYNYNNYNYNNYNNYNYNNNNNYNYY", "NNNNNYYYNYNYNNYYYYYNYNNNYNYNNNNNNNNYNNYYYYNNNNYYYY", "NYNYYYNNYNYYYNNYNYNNNYYNYYYNYYYYNNNNNYNYNNNYNNNNYY", "YYYYYNYYNNYNYYYYYNYNNNNYYNYNYNYNNYYYYNYYYYNNYNNNNN", "NNYYNNNNNYNYYYYYYYYYYYNNNYNNNYNYNYNNNNNYYYYNNYYYNY", "YYNYYYNNYYYYNYNYYYNNNYYYYNYNNYNNNYYNYYYNYYYNNYNYNN", "YNNNYNNNNYNNNNNNNNYNYNYYYYNYNYYYYNYYNNNNYYYNNNNNYN", "NNNNYYYNYNNNYYNYYNNYYNNYYNNYNNNNNYNNNYYNYNNNYNNNNY", "YYNNNNNNNNNNYYNYYNNYNYYYNYNYNNNYNNYNNYNNYYYYNNNYNN", "YYNYNNNNYNNYYYYYYYYNNYYNYNYNYNYNYYNYNNYYYNYNNYYNNN", "YNNNNYNNYYNYYNNNYYNNNYNNNNNYYNNNYYNYYYYYNYYYNYNYNY", "NNYYNNNYNNNYNNYNYNYYNNYNYNNNYNNNNNNNYYNNNYYYYNYYNY", "NNYNNNYYNYYYYNYNYYNYNYYYYNYNNYYNNYYNYYNNYNNYYYYNYN", "NNYYYYNNYNYYYYNNYYNYYNYNYYNNNNYYNNNYNYYNYYYNNYYNYN", "NNNYYYNNNNYNNNYNYNYYNNYNYYNYYYYNNYNYYNYNYNYYNNYYNN", "YNYNYYNNYYYYNNYNYNYYYNNNNYNYYYYNNNNYNYYYNYNYYNYNYN", "YNNNYNYYYYYNNNYNYYNYYYYNNNYNNYYYYYNNYNYYYNNNNYYNYN", "NNYYNNNYNNNNNYNNNYYYYNNYYNNYNYYYNNNYNYYYNYNNYNNNNN", "YYYYYNYYYYYNNYYNYNNYNNYYYNYYNYYYNYNYNYNNNNNYYNNNNY", "YYNNNNNNNYNYYYNNYYYYNYNNNNYNNYYNNYNYNYYYYNYYYNNNNN", "NNNYYNYYNNNNNNNNNNNNYYYNNYYNNNNNYYNYYYNYNNYYNYNYYY", "YNYYNNYNYYYYYNNNNYNYYNNYNNNYYYNNYNYYYYYNYNNYYYYYYY", "NYYNYYYNNNNYNYYNYNYNNYYYNNYNYNYNYYYNYYNYNNNYNNNNYY", "NYYYYYNNYYYNNYYNNNNNNNYNYYYYNNNNYNYNNNYNYYYYNNYYNY", "YYNYYYNNYYNYYNNNYNYYYNNNYYNNNYNYYNNNYYYNYYNYNNYNNY", "NNYYYNYNNNNYNYNYYNYYYYNYNYYNNNNYYNNYNYYNYYNNYYNYYY", "YNNYNNNNYYYYYYNYYNYNYNNYYNYNNNNYNNYNNYNNYYYYNYNYYY", "NYNNYNYYYYNYYNYNNYNYYNYNNYNYYNYNNYNNYNYNYNYNYNYYNY", "NNYYYYNNNNYYYNNNYYYYNNYNNNYNYYYNNNYYYNYNNNNYYYNNYN", "NYNYNYYYYYYNNNNYYYNNNYYNYYNNNYYYYYNNYYYNNNNYNNNYYN", "NYYYNYNNNYNYYNNNYYYNNNYNNNYYYNNNYNNNNYYNYNNNYNNNYY", "NNNYNYNYYYNNYYYNNYYYYYYNYNYYNYNYNYNNNNYNYYYYYNNNNN", "YYYNNNNYNYYNNYYYNNYYYYNNYYNNYNNYNNYNYNNNNYYNYNNNNY", "YNNNYYNYNNNYYYYNNNYYYYNNNNYNNNNYYNNNNYNNNNYNNNYNYY", "NNYYYYNNYYNNNYYYNYNYYNYYNYNYYYYYYYYYYNYYYNNYNNNYNY", "YYNNNNNYNNYNNNYNYNYYNNYYNNNYNYNNNYNYYNYNNYYNYYYYNY", "YYNNNNYNYNYYYYNNNNNYYYYYYYYYYYNYYYNYYNNNNNYNYNYYYN"};
    int qualified = 50;
    int selected = 23;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 108043253365600;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> points = {-78283, 15446, 79266, 79226, 25874, -92310, 88111, 86663, -63499, -85056, -77363, -29528, 90296, -98304, 6001, 91713, 37276, -83147, -81468, -81649, -98410, -79724, 93324, 50062, -30915, -59044, 71001, 34841, -71921, -98792, 94503, 69963, 7068, -86334, 21077, 84900, -21041, -36926, -56895, 17126, 26976, -5868, 81729, -91329, 65423, -47545, 40761, -31775, 28829, 14754};
    vector<string> standings = {"YYNNYNNYYNYNYNYYYYNNNNYNYNNYYYYNYYNNYNNYYYYYYYYNYN", "YNNNYYNNYYNNYYYYYYYYYYNNNYYNNNYYYNNNYYNNYYNYNYNYYN", "YNYNNYYYNNNNYYYNNNYNYYYNNNNNNYNNNNYNYNYYNNNNNNNYYN", "YNYNYNNNYNYYNNYYNNYNYNNNYNYNNYNNNNYNYNYNNYYYNNYYNN", "YNYYYYYNYNYYYYYYYYYNNNYNNYNNNYNNNNNNYYYNNYYNYYNNYY", "NYNNYYNYYNYNYNYNYNYNYYYNYNYYYYYYYYNYNYNNYYYNNNYNNN", "NNYNYNYYYYYYYYYNNNYNYYNNNNNNYNNNYYYYNYYNNYYYYYNYYY", "NYNNNYYNNNYYYYNYNYYNYYYYYNYNYYNNNYYNYNYNYNNNNNNNNY", "NYNYYYNYNNYYNNNNYNNYNYNYYYYYYYNYYYNNNNYYYNYNYNYYYN", "NNNYNNNYNYYYYYYYYYYYYYNYYNNYYNNNNYYNNNNNYNNYYNYNYN", "NNNYYNNNYYNNNYNYNNNYNYNNNNYNYYYNYYYNYNNYNYYYNNNYYY", "NNNNNYNYNYYNNYYNNNNYNYYNNYNYYNYNYNNNYNYYYNYNYNYYYN", "YYNNNNYNNNNNNNNYNNNNNYNNYNYYNYYNYNYNNYNNYYYNYNYYYY", "YNYNNYNNNYNYYNNYYNYNYYNNYNYNNYNNNYYYYYNYYYNNNNNYYN", "NYYNYNYYYYNNYNNYNYNNYNNNYNNYYYNYNNYYYYYNYNNYNYYYNN", "NNNYYNYYYNYYYYNYYYNYNYYNNYNYNNYNYNYNNNYNYYNYYYYNYY", "NNYNYNYYNYNNYNYNNNYNNNYNNNNYYYNNNNNYYYNNYNYYNYYNYY", "NNNYNYYNNYNNNYNNYNYNNYNYNYYNYYNNYYYNNNNYNNYYYYNYNN", "NNYNYNNNYNYYNNNNNNNNNYNNNNNNYNYYNYNNNYYYNYYYNYNYNY", "YNYYYYNNNYNYYYYNYNYYNNYYYYYNNYYYNNNYNYNYNYNYYNNYYN", "YNYYNYYYYNYNNNNYNYYYYNYNYNNNYNNNNYNNNNNNNYYYNNNNYY", "YYNYYYYYNYNNNNYNYNNYNYNNYNNNNYNYNNYNNNYNYNYNNNNNYY", "YYYYNNNYYYNYYNNNYYYNYYYYYYYYNYYNNNYNYNNYYYNYYYNNYY", "YNYNYYNNNYYYNYYNYYYNNNNNYYYNYYYNYYYNYYNYYYNYNNNNYN", "YNNNYNNNYNYYYNYNNYNYYYYNNNYYNYNYYYNNNNYNYYNYYYYYNY", "NYNNNYNNNYYYNYYNNYYNYNYNYYNNYYNYYNNYYNYYNNYYYYYNYY", "YYYNNNNNYNNNNYYYNYYYNNYNYNNYYYYNYNYYNNNNYYYNNNNNNN", "NNNYNYYYYNYNNNYYYYYYNNYYNNNYYNYYYNYNNYNYNYNYNYYNNY", "NYYNNNYYYYNNYNYNNYYNNNNNNNYNNYNNNYNNNYNYYNYNNNNNNY", "YYNYNNYYNNNYYNYYNNYYNYYNYNYYNYNYYYNYNNNYYYNYNYYNNN", "NNNNNNYNNNYNNYNYNYNNYNNYYYNNNYYNYYNNNNYYYYNYNYYYYY", "YNYYYYNYNYYNYNNYNYNYNNYNYYNNYYYNYNNYYYYYYYYNNYNNYY", "YNYNNYYYYNNYYNYYNNYNYNYNNYYNYNNYYNNYYYYYNNNYNNYNNN", "YNNYNNYNNNNNYYYNNNNNYNNNYNNYYYNNYYYNYYNNYNYNYNNNYY", "NYYYNNNYNNNNYYYNYNNNYYNNYNYNNYYNYYNNNYNNYNYYNNYNNY", "NNYNNYNNNYYNYYYYNNNNYNNYYYYYNYNNYYNYYNYYYNYNYNYYNN", "YNNYNYNYYYYYNNNNNYYYNNYYYNNNNYNNYNYNNYYNYYYYNYNYYY", "YYYNYNNYNYYYNNNYYNNNYNNNYNNNNYYNNNYYNYYYNNYYYYNNNY", "YYNYYYYNYYNNNNNNYYYNYNYYYNYYYYYYNYYNYNNNNYNYYNNNYY", "YYNYNYYYNYNNNYYNYYYYYYNYNYNYNNNNNNNNNYNNNNYYNNNYNN", "YYNYYNYYNYNNYNNNNYNNNNYNNYNNYYNYYYYYYYYNNYYNYNNNYN", "YYYNNYYYNNYYYNYNNNNYNNYNYYNYYNNYYYNNNNYYNYNNNNNYYY", "YNNYYNNNNNNNNYYNNYYYNNYNYYNNYYNNNNNYYNYYYNNYYNNYNN", "YYYYNYNYNYNNYYYYNNYYNNNYNNNYNYNNYNYYYNNNYNYNYYYYYY", "NYYYNNNNNNNNYYYNNNNYYYNNYYYNNYNNNNYNYYNNNNNNNYNYYY", "NYNYYNYYNNYNNYYNYYYYNNYNNYYYYYNYYYNNNYNNYYYYYYNYYY", "YNYNYNNNYNNYNNNYYNNYYYNNYYYNNNNYNYNYYYNYYYNNNYYYNY", "NYYNNNNNYYNYYNNYNNYYYNYNNNNNNNYYNYYNNYYYYNYYYYYYNY", "YYYYYNNYYYYNYNYYNNYYNNYYNNNYNYYYYNNYYYNNNYYYNNYYYY", "NYNNNNNYYNNYYNNNYNYNYYYNNYNYYNNNNNNYYYYNYYNYNYNYNY"};
    int qualified = 35;
    int selected = 24;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 121548660036300;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> points = {-66467, 96896, -72772, -30694, 98065, -64057, 41518, 49839, -45522, 3891, 2845, -70377, -19990, 26415, 52920, 85035, 79779, -54941, 78002, 22954, -51627, 97976, -86718, -17131, -44174, 40191, 97285, 619, 22348, -95555, -37954, 4733, -84184, 11994, 3263, -64724, -47688, 65762, 48096, -71673, 98212, 28470, -85333, 67644, -517, 45970, -423, -88074, 15249, -67654};
    vector<string> standings = {"YYYYYNYNNNYYYYNYNNYNYNYNNYYYYNNYNYYNYYYYNNNNYYYNYY", "NYYNYYYYYNNNNNYYNYYYYNNNYNNNYNNYYNYNYNYNNNNNYNNYNN", "YYNNNNNYNNNYNYNYNNNNNNYNNNNYNYNYNYYYYYNYNNYYYNNYYY", "NYNNNYNNNNNNYNYYYNYNNYYYYNYNNNYYYYNNYNNNYYNNNYNYYN", "YYNNNNNNYNNYYYNNNYYNNYYNNNNYYNNNNNYYYNNYNYYNYYYYYN", "NNYYYYNNNNNNNYNYYNYYYNYNYYNNNYNYYNYNNNYNYYYYYYNYYY", "YYNNNYNNYNNYNYNNYYNYNYYYYNNNYNYYNYNNYNNNNYNNYYNYYY", "NYNYYNNYNYYNYNYNNYYNYYYYNYNYNNYYYNNYYNYYNNNYYYYYNY", "YNYNNNNYNNYNYYYNYYNYYYNNYNNNNYYYYNNNNNYYNYYNYNYNYN", "YNNYYNYNNNYNYNNNYNYYYNNNNYYYYYNYYYYNNYYYNYYNNYYYYN", "NYYYYYNYYNYYYNNYYYNNYNNNNYNNYNNYYYYNYNYNNNYNYYYYNN", "NYNYYYYNYNYYYYYYNYYYYYNNYYNYNYYNNNNNYYYNYYYYYYYNNN", "NYYNNNYYYYNYNNNNYYNYYYYYYNYYYNYNNNNYYNYNNYNYNNYNNY", "NNYNNYNYYYYYNYNNYNYNYYYNYYYNNNNYNNYNYNNNNNNNYNYYNY", "NNNYNNYYYNNNYYYYNYNYYNYNNYYNNNNYNYNYNYNNNYYNYYYNNN", "NYYYNNNNYYYNYYYYYYYYYNYYYNNYNYYYYYNNNNNYYNNYYNYNNN", "YNYYYNNNYYYNNNNNYNYNYNYYYYNNYYNNYYNYYYYYNYYYNYYYYY", "YNYNYYYYNNNYYYYYNNNNYYYYYYNNNYNYYNNYNYYNYYNNYYNYNN", "YNYYYNYYNNYNNNNNYYNYYYYYNYNNNYYNNNYYYNYYNYNYYYNNYN", "NYNNYNNNNYYYYYNNNYNNYNYNYYYNNNNNNNNNYYYYYYNYYNYNNN", "NYYYNNYYYNNYYYYYNNYNNNYYNYNYNNYNYNYYYYYYYNNNNYYNYN", "NYNYNYYNNNNYNNYNYNYYNYNYYYYNYNNNNNYYNNYYYYNNYNYNNN", "YNNYYYYNYYNNYNYNNYYYNYNYYYNYNNNYYYYYNNYYNYYYYNNNNY", "NYNNNNNYNYYYNNNNNNYYYYNNYYNNNNNNYYNYYYNNNYYNYNYYNY", "NNYNNNNYYNNYNNYYYYNYNYYNNYNYYYYNYYNNNYNYYYYNYYYNYN", "NNYNNYNYYNNYYYNYYYNNYYYYYNNNNYNNNYYYYNNNYYYNNYNYYY", "YYNNYNNNNYYYNNNYNYYYYYNNYYYNNNNNYNYNNYYNNYYYYYNYYY", "NYYYNNYNNNYYYYYNNNYYNNYYYYNNYNYNYYNYYNNYNYYNNYNNNN", "NYNYYYYNNYYNNYNYNYNYNYNNYNNYYYNNNNNYNNNYYYNYNYNYNN", "YYNYNNNNNYNNNYYNYYYYNYNYNYNYYYNYNYNYYYNYNNYYNYYYNY", "YYNNYYYYYNNYNNYNNYNNNNNYNNYNYYNYYNYNYNNYYYNNNNNYNN", "YNNNNNNYYYNNYNNNYNYYYYNYYYNYNYYYYNYNNNNYNYYYNYYNNN", "NYNYNNYNYYYNYNYNYYYNYNNNNNYNNYNNYYYYYNYNYNNYYNNNYY", "YYNNNNYYYYNYYYNNNYNYYNYNNYYNNYNYYYYYNYYNNNNNNNYNNY", "NNNYNNNYNYYYYYYNNYYYNNNYYNNYYNNYNYYNNYNNNYNNNYYNNN", "NNYYYYNYYYNNYYNNNNYNYNYYNNYYNYNNNYYNYYYNYYNYNYNNNY", "NYYNYYNYYNNYNYNNYYNYYYNYYNYNYNNNNNYYNYYNNYNYYYNNNN", "NNNYYYYYYYYNNNYYNYYNNYYYYNNYYYYYNNYYYYNYYNYYYYYYYN", "YNYYNYYYNYNNNYNYNYNYYYNNNYNYYNYYYYYNNYYNYYYNYYNYNY", "NNYYYYNNNYNYNYNNNNNNNNYYYYYNNNNNYNNNYYYYYYNYNYYNNY", "NNNNYNNNYYNYNNNNYNNYNNYNYYNNYYNNNNNYYNYNYYYNNNYYYN", "NNYYNYNNNYYNNNNYNNNYYYNNNNNNYNNYYYYNNYNYNYYNYYYYYY", "NNNNYYNNYNYNYNYYNYYYYYYNYYYNNYYYYNNYNNNNYNNYYNYNNN", "YNYYNYNNYNYNNYNYNYYNYNYNNNYNNNYNNNNYNYYNNNNYNNNNNN", "NNNYNYNYYNNYNNNNYYYNYNYNYYYNYYNNYNNNYYYYNNNYNNNNNN", "YYNNNYYNNYNYYYYYNYNYYYNYNNNYYYYNNYNNNYNNYNNNNYYNYN", "NYNYYYNNNYNYNYYNYYNNNNYYYYNNYYNNNNNNYYYYNYYYNNNNYN", "YNYYYNNNYNNYNYNNYNNNYYYYNNNNNYNYNYNNNYNYNYYYYYYYYN", "YNYNYYNYNNNNNYNNNYNNNNNYYYNYNYYNYNNNNYNYYYNYNNYNNY", "YYYNYNYYYYYNYYYNYNYYNNYNNYNYNNYNNNNNNYYNYYYNYNNNNY"};
    int qualified = 30;
    int selected = 25;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 63230982356997;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> points = {20757, -98525, -936, -55487, -99374, -75588, 55233, 13887, -97426, -85870, -39817, -30893, 14390, -3103, 36142, 90179, 9488, 77074, -81961, -11478, 80949, 94564, 18612, 52941, 52496, 86983, 95290, 84779, 22894, -8566, -85792, 48588, -26846, -75476, -20279, 31005, 47674, 13968, 92941, 88434, 88534, -67572, 51615, -21208, 20329, 63329, 63069, 55087, -55537, -84220};
    vector<string> standings = {"NNYNNYNYYNNNNNNYYYNNYYNYYNYNYNYNYYYYYNNYNNNYYNNYYN", "YYYNNNNNYYYYYNNNNNNYYNYYYYYNNYNNYNYNYNNYNYYYYYNNNY", "NYNYNNNYYYYNNYNNNYYNYYYNNYYYYNYNNNYNYNYYYNYNYYNNYY", "YNNYNNYYYYYYNNNYYYNYNNNYYYNNNNYNNYNYYYNNYYNNYYNYYN", "NYNYYNNNYNNYNNNYNYNNNYYNYYYNYYYNNNYYNYNYYYYYYNYNNY", "YNYNNYYNYYYNNNYYYNYNNNNNNNYYYYYNYYYYNNYYYNNYYNYYYY", "NNYYYYYYYYNYNNYYYYNNNNYNYYNNNYYNNYYNYYNYNYYYNNNNYY", "NNYYYNYNYYYNYYNNYYNYYYNYYYNYNNYNNNYYYNNYNYYNYYYNYY", "YNYNNYYNYYYNNYYYYYNYNNYYYYYNNYYYYYNNYNNNYYYNNYYNYY", "NNYNNNYNYYNNNNYYYYYYNNYNYNNNYNYNNYYNNNNYYYYNYNYNNN", "YNNNYNNYYNNYNYYYYNNNYYYYYNYYYYNYNYNYNYNNNNYNYNYYYN", "YNYNNYNYNYYNNNYYNNYNYNYNYNYYYYNNYNYYNYYYNYNYNNNYYN", "NYYYNNNYYNYYNNNYYYYYYYNYNYNYNYNYNYNYNNYNYYYYNNYNNN", "YNNYNNNNNNNNNYNNNYNNYYNYNYNYYNNNYNNNYYNNNYNNNNYYNN", "YYNNNNNYYNNYYNYYNYNNNNNYYNNNYNNNYYNYNYNNYYNNNYNYYY", "YNNYNYNYNNNNNYNYNNNNYYYYYYYNYNNYNYYYNYYYYNNNYNNNNY", "YYYNYNYNYYNYNNYYNYYNNYYYYNNNYNNNNNYYNNYYNYNNYNNNYN", "YNYYNNNNNYYNYNYNNYNYYNNYNYYNNYYNYYNNYNYNNYYYYNYNYN", "NNYYYNNYNYYYYYNNYYYYNYYNYNNNYNNNYNYYYNNYYYYYNNYNNY", "YNYYYNYNYYNYYYYYYNYNYYYNNNNNNNYNNNNYNNNNYNYNNYYNNN", "YYYYNYNNNNYYYNYYNYNNNNNNYYNYYNYNNYYYNNYYNNYNNYNYNN", "NYYYNYYNYNNYNNNYNNNYYYYNNYNNYYNNNYNYYYNNNYYNNNNYNY", "YNYNYNNNYNYYYYNYYYYNYNNNYNYYYYYYYYYYNNYNYYYYYNYYYN", "YYNYNYNYNYNYNNYYYNNYYNNYYYNNNNNYYYYYYNYNNNYNYNYNNY", "NYYYNNYNNYYYNYNNNYYNNNNYNYNYNNYYNNNNNYNYNYYYNYYYNN", "NNYNNNNYYNNYYNYYNYNYYYYNNNNYYNNYNYYYNNNNNNNYYNNYNN", "NYNNNYNYYYYNYYNYNNYYYYNYNNYNYNNNNYNNYYNNYYNYNYYYNN", "NNYNNNNYYNNNNNNYYNNYYNNNNYYNNNYNYNYNYYYYYNNNNYNYNN", "YNYYYNNYNYNYYYYYYYYNYNYYYYYYNNYNNNNNYYYNNNYNYYNNNY", "NNYYYYNNYYYYNNNYYYNNYYYYYYNYYNNYYYNNYYYNNYYYYYYNNN", "YYYNNNYYNYNYNNYNYNNYNYYYNYYYYNYYNNYYNNYNNNNYYYYNNY", "YYNYNYYYYYYNYNNNNYYYYNYYNNNYNYYNNNNYNNYYYYYNNYNNNY", "YNNYNNNNYNYYNYNNNNNNYNYYNNYYYYYNNYYNNYNYNNNYNYYNYY", "NYNNYNNYNNYYNYNNYYYYYNNNYYNNNNYYNYYNYNNYNNNNNYYYYY", "YNNNNYYNNNNYNYNNYNNYYYNYNYYYNYNYYNYYNYNNNNNNNYYNYY", "YYNNNYNYYYNNYNNNNYYNYYNNNNNYYNNYNYYYNYNNYNNNNNNNNN", "YNYNNYNNYNYYNNYNNNYNNNNYNNNNNYNNNNNYNYYYNYNYYNYNYN", "NYNNYYNYNYNNNNNYYNNYNYNNYNNNYYYNYYNNYNYNYYYNNYNYNN", "YYNNYYYYNYNYNNYNNYNNYNYYNNYYNYNYYYNNYYNNNYYYYNYYNN", "YNYNYYNYNNNYYYNYNNNYYYNNYNNNNNYYYYNYNYNYNNNNYYYNYY", "YYYYNNNYNNYNYYNYYYYNNNNYNYNNYNYYYYNNYYNYNYYNYYYNNN", "NYYYNYYYYNYYNNYYYNNYNYYYNYYYYYYNYYNNYNYYYYNYNYYYNY", "NYNYNNNNNYYYNNYNNNNNYNNNNYYNNYNNNYYYYYNYYYNYNYYYYY", "NNYNNYNNNNNYNNNYNNNYNNNNYNYYYYYNNNNNNNYNNNYNNYYNNY", "YNNNNYYNNYNYNNNNYNNNNYNNNYYYYNNYYYYYNYYNNYYYNYNYYN", "YNNNYNYYNYNNNNNYYNNYNYYYNYNYYNNNYNNYYYNNNNYYNNNNYY", "YNYYNNYNNNYYNNYNNNYNNYYNNYYNYYNNNYYYYYYYNYYYYYYYNN", "NNYYYYNNYNNYYNYYYNYNYYNYNYYNNNYYYNNYNYNNYYNYYNYYNN", "YNNNNYYYNYNYNYNYNYYNNYYYNNYNYNNYNNYNYNNNNYYYYNYNNY", "NNNNNNNYNYYYNYYYNNYYNYNYNNYYYYNNYYYNYNYNNNNYNYNYYY"};
    int qualified = 29;
    int selected = 26;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 10750359664716;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> points = {-34834, -95339, -7092, -38285, 35775, 50387, 68197, -54334, -96628, -13440, -64506, 67664, 39519, 17593, 60035, -32205, 2703, -60201, 63632, -88553, -82125, 67450, 93180, 15292, 70943, 59096, 26749, 41829, -80128, 23611, 80165, 44001, 90922, 56348, -21005, 44856, -29333, 84443, 82055, 39153, -32995, 24535, 96239, -49731, 33852, 7856, 94557, -14652, 55724, -61290};
    vector<string> standings = {"YYYNYNNYNYNNNNYNYNYYNYNNYYNNYYNYYYNYYNNNYNNYNYNNNN", "NYYNYYYYYNYYNNNYYYYNYYNNYNYYYNNNYNYYNNYYYYYNNNYNYN", "NYYYNNNYYYNYNYNNNYYYYYYNNYYNNNNNNYYYYYNNNNYYNNYNYY", "YYNYNNNYYYNYYYNNNNYNNNNNYYNYNYNYNYYYYNNNYNYNYNNNYY", "YNYNYYYNYYYYNNYNNNNYYNNYNNYYNNNNYYYNYYYYNYYYNYYNYY", "YYYNYNNYNYYNNNYNNYYNYYYNYYYNNYNYYNYYYYNYYNNNYNYNYY", "YNNNNNYYNNNYYYYYNNYNNYNNYYYNYYNNNYYYYNYNNYNNNNYYYY", "NYYNYNYYYNYYYNYYNYNYYYYNNYYYNYYNYNNYYYNNYYNYYYNYNN", "YYYNNYNNYYNNYNYNYNNNNYYNYNYYNYNNYNNYNNYYNYYYYNYNYY", "YYYYYYYNNYYYYYNNYNNYNNNYYNYYYNYYNNYNYYYYNYNYNNNYNN", "YNNNYYYNNYYNYYNYNNNNYNYNNNNYNNYNNYNNYNYYYYNYYYYYNN", "NNYYNNYYNNYNYNYNYYNNNNNYNNYYNYYYNNNNYYYYYNYNNYYYYN", "YYYNNNYNNYNYYNNYYNNYNNYNNNYNNNYYYNYNYYNNYYYYNNYNYY", "NNNYYNYYYNNYYNNNNNYYNYNYYYNNYYYNNNNYYYNNNNNYNYNYNN", "YYNNYNYNNNYYYYYNNYNNYYNNNYNNNNYNYYYYNYNYNYNYYYYNNY", "YNNNNYYNYYNYYYYYYNYYYNYYYYYNNNYNNYYYYNYYNYNYNNYYYY", "NYYNYNYYYYNNNYYYNYYYYNNNYYYYYNYYYNNNNNYNNNNNYYYNNY", "YNYNYNNYNYYYYYYYYYNYYNYYNYYNNYNYYYNNYYNNYYYNNYYYYY", "NYYNYYNYNNYYNYNNYNYYNNNYNNYNNYNYYNNYNNNNNNYNNYYYYN", "YNYYNNYNYNNNYNNYYYNYNYYNNNNYYYNYYNNNNNYYYYYNYYNYNY", "NNNNNNNYNNYNNNNNYYNYYYNNNYYNYNYNYNNYYYYYYYYYYYYNNY", "YYNYYYNYNYYNNNYYYNNYNYYYNNNYNNYNYNNNYNYYNNYNNNNNNN", "YYNYNYYNNNYYNNYYNNNNYYYYNYYNYNNYNYNNYYYNNYYYNYYYNN", "YYNYNYNYYYNNYNYYNYNYYNNNNYNYYNYYNYYNNNNYNNNYYNNNNN", "NYNYYNYNNYYYYNNYNYYNYYYNYNYNYYNYYNYNYNYYYYNYNNYNNN", "NYYYNNNYYYNNYYNNNNYNNNNYNNYNNYYNNNYNYYYYYYNNNNNYNY", "NYYYNNYYNYYYYYYYNNYNYYYYNYYYNYYNNNNNYNYNNNNNYYYYNY", "NNNNNNYYNYNYNNYYYNNNNNNYNNYNNNNYYYNYYNYNYNNYYNYNYN", "NYYNNNYNYYNNYNYYNYYNNNNNYYYNNYNNNNYNNNNNNYNNYYYNNN", "YYNYNNYNYYNNYYNYNYYYNNYNNNNYNYNNNNYNYYNNYNYNYNNYNY", "YNNYYNNYNNNNNYYNNNNNYNNYYNNYNYYYYNYYYYYNYYNYNNYYYY", "NYYNNNNYYYYNNYYNYNNNYNNNYYNYNNYYNNYNNYNYNNYNYYNYYN", "NNNYNNNYNNNNNNNYNYYYYNYNYYYNNNYNYYYYNYNNYYYNNYNYYN", "YYYYYNYNNNYNYYYYYYYNYNNNYNNNNNNYYNNYNYYNYYNYNYNNYY", "NNYYNNYNYYYNYYYNNNYNNNNYYNNYYYYYNNNNNYNYNYNNNNNYYY", "NNNNNYYNNNYYYNNYNNYNNNNYYYNNNYNNNYNNYYYYYYNNNNNNNY", "YYNYNYNYYNYNNNNNYYYNYYYNYYNYYNNNYNYNYYNYYNYYNYNYYY", "NNYNNYNYNYYNYNYYYNYYNNYYYYYYNNYYNNNYNNNNNYNNNYNYYN", "NYYNNNYYYYYNYNNNYYNYNYNYNYNNNNYYYNNNYNNNNYYNYNNYNN", "NYNNYYNYYNNNNNNNNNYNNNNYYYNNYNYYNNNNNYYNNYNYYYNYNY", "NNYNYYNNYYYYNYNYNNYYNYNYNYNYYYYNNYNYNYNNNYYYYYNYYN", "YYYNNYNNYYNYNYYNNYYYNNNYNNYNYNNYNNYYYNNNNNNNNNYNNY", "NYYNNNNNNYYYYYNNNNYYNYYYYNYNNNYNYYNNYYNYYYYYNYNNYN", "NYYNYNNNYYYNYYNYYYYNYYNYNYNNYYYNNNNNYYYYYNYNYNYYNN", "YYNYNNYYNYNYYNNNNNNYYNYYYNNYYYNNNYYNNNYYNNYNNYNYYY", "YYNNYNNNYNNYYYYYYYNYYNNYYNYNYYYNNYNYYNNNYYNNYYNNNY", "YNYNNNYYYYNYYNNYYNNYYNYNYYNYNNNNNNYNYYYNYYNYNNNYYY", "YNNNNNYYNYYYYYYNYYNYYNNYYYNNNNYYYYNNYYNYNNYNYNYNYY", "NYYYNNYNNNYNYNYYYNNNNYNNYYYNNNYNYYYYYNYNYYNNYNYNYY", "YNNNYYNNNYYNYNYYNYNNNNNYNNYYNNNNYYYYYNNNYYNNYYYYNY"};
    int qualified = 33;
    int selected = 27;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 59812767736120;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> points = {-25, 16758, 27064, -69231, 76145, 88045, -60838, 77601, -65826, 23690, 4178, -93198, 71534, 70293, 57446, 79412, -76346, -18677, 16661, -18190, -32722, -3581, -41530, -35376, 96591, 33703, 24232, -55916, -93665, 18012, 12966, -86372, 6194, -61501, 22089, 23855, 99610, 33311, -35288, -41491, 30902, 40783, 99153, -54489, 56286, 67317, 79087, -7477, -49368, 11448};
    vector<string> standings = {"YNNNYYNYYYYNNYNYYNYNYNNNNNNYYNNNYYNNYNYNYYYYNYYYNN", "YNNNYYYNNNNYYYNYYNYNNYNNNYNNYYYNYYYNNNNNNNNYYYNYNY", "YNNYNYNNYNNYNYNNNYYNYNNNYNYYNYYYYYNYNYYYYNNNYYYYNY", "NNNNYYYYNYNYYNYYYNYNYNNNNYYYYYNNYYYYYNYYYNYYYNNYNY", "NNYNNNNYYYYYNNNYYYNNYYNNNNYYYNNYYYNNYYNYNNNNNYYNNY", "YNNYYYYNNYYNYYNYYNNNNNYNYYYYYNNNYYYNNNNYNYYNYNYYNN", "NNNYNYNYYYNYNYYYYNYYNNNYYNYNYYNNNYYYNYYYYNNYYNYNYN", "YYNYYNNYYNYYYNYYNNYNNYYYNNNNNNNNNNYNYYYNNNNNNYNYYN", "YNYYYYNNYNNNYNNNNYNYNNNYNNYYNYNYNYYNNNNNNYYYYNYYNN", "NYNYYNNNNYNYYNYNNYNYNYYYNYNNNNNYYNNYNNNNYNNYYNYNNY", "YNYNNNYNYYNYNYNNYNYNYYNYNYNNNNYNYNNNNYYYNNNNYYYYNN", "NNNYYYYNYNNNYNNNNYNNYYYNYYNYNYYNYNYNNYYNYYYYYNNYNY", "YNYNYNYNYYNNYYYNNYYYYNYNNYNYYNYYYNYNYYYYYYYYYNYNYN", "YYYYYYYYNYNNYNYNNNNYYNNYYNNYNYNNYYNYYNNYYNNYYNNYYN", "YNNNYNNYYYNYNNNNYYNNYNYNYNNNYYYNYYYNNYNNNNNYYYYYYN", "NYYNNYNYNYYYNYYNNYYYYYYNNYNYNYYNYNYYNYYYNNNNYYNNYY", "NNYYNNNNYNYYYYYYNYNYNYYNYNYYNNNNNNYNNNYYYNYYNNYYNY", "NYYYYYNNYNYNYYYNYYYYYNNNNNYNYNYNNNYYNNYYNNYNNYYYYN", "NYNYNNNNYNNNNNNYNNYYYNYNNYNYNNYNNYNNYYYYNYYYYNNNYY", "NYNNNYYNYYNYNYNYNNYNNNNYNNYYNYNNYNNNNYYNYNYYNYNYYN", "YNYNNNNYNYYYNYNYYYNNYNNNNNYNNYNNYYNNNNYNNYYNYNYNYY", "YYYYYNNNYYNYYNNNNNYNNNNYYNYYYYYYNNNYYNNNNNYNYYYYYN", "NYNYYYNNNNNYYNNYYNNNNNNNNYYNNNYNNYYNYYYNYNYYNYYNNY", "YNYYYNYYNYNNNYNNNNYNYYNNYYNNNYNYNYNYNNYNNYYYYYNYNY", "NYNYNYNYYYNYNYNYNYNNNYNYYYYYYNNNNYNYYYYYYNNNNNNNYN", "YYYNNYYNYYNYYYNNNNYYYYYYNYYNNNNYYYNNYYYYNNYNNNNNYN", "NNNYNYNNNNNNYYYYNNNYYNNYNNYNYNNNYNYNNNYNYNYYYNNNNN", "YYYNYNNNYNYNYYNYNYNNNNYYYNNNNNYNNNYYNYYNYNYNYYNYNN", "NYYYNYYNYYNYYYYNYYYYNNYYYYYYYYNYYYNNNNNNNNYYNYNYNY", "YNYNYNYNYYNYNNYNYNNNNNNYYNYYYNNNNYNNYYYNNNNNYYYNNN", "YNNYYNYYYYNNNNYNYYYYYYNNNYNYNYYNNNNYYYYNYYNYNYYYNN", "YYYNYNYYNNYNNYNYYYYNYYYNYYYYYNNNYYNNNYYYYNNNYYNNNY", "YNNNYNNNNYNYNYYYYNYYNYNYYNYYNYNNNYYNNYNNYNNNNNYYYY", "NYYNNYYNYYYNYNNNYNYNYYNNNNYYYNNNNYNNNNNYYNYNYNYYNY", "NYNYNNNNYNNYNYYYYNNNNNYNYYNNYYNYYYNYYNNYNNYNNNYYNN", "NYYYNNNYNYYYNNNYNNYNNYYYYYYYNYNNNNYNYYNYNYYNNNYYYN", "NYYNNYYNYNYNYYYNYYNNNYYNYYNNYYNYYYYNYYYYYYYYYNNYNY", "YNNYNNYYYYNNNNNNYYNNYNNNNYNYNYYYNNNNNNYNNNNNYNYYYY", "YYYYNYNYNNNYYNYYNNYNNYNNNNNYNNYYNNYNNNYNNNYNNNNYNN", "NYNYYYYNNYNNNNYYYNYNYNYYYNNNNYYNYNYNNNNNNNNYYYYNYN", "YYNNNYNYNNNYNNYNNNNYYNNNNNYYNNNNNYYYNNNYYNYYYNYYYY", "YYYNNYNYYYYYNYYYNYYYYNNNYNNNYYYYYNYYNNYYNYYYYYYNYN", "YYYNNYNYNYYNYNYNNNNYYYNYNYNNNNYNYYNNYYYNYNNYNNYNNN", "NNNNYNNNYYNYYYYNYYYNNYNNNYNYNYNNNNYNNNNNYYNYYYNYNY", "YYNNYYNNNNYYYNYNNYNNYYNYNYNNNYNYYNNYNNYNYYYNYNYNNN", "NNYNNYYYNNNNNNYYNNYNNYNYNYNYNYYYNNYNNYNNYYNYNNYNNN", "YYYNYYYNYNYNYYYNYYYNNNYYNYYYYYNNNNYYYYYYYNNYNYNNNN", "YYYNNYNNYYNYYNYYNNYNNNNYYYNNNYYYYYYYNNYYYNYNNYNYYY", "NNNNNYYYYYYNYYNNYYNYNYNNYYYYYYYNNYNNNYYYNYYNYYNNYY", "YNYYYNYNNYYNNNNNYNYNNNNNYNYNNNYNNNYNYNNNYYYNNNYNYN"};
    int qualified = 48;
    int selected = 48;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1036;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> points = {10965, -83273, 34400, -67557, 27646, -33899, 64490, 61352, -71303, 42417, -33113, -74265, -55283, -2512, -13648, 2945, -26677, -77385, -6037, 53302, -50273, -42865, -27022, -32351, 34762, -73806, 72340, -82800, 63334, 64693, 40113, 7292, -79066, 65106, 93703, -40481, 36514, 39952, -73398, -6023, -57851, -98929, 47408, -50528, 14954, -70282, -14907, 9855, -84290, 74291};
    vector<string> standings = {"YNNYYNNYNNYNNNYYNYNYNNNYYYNYNNNYNYYNNYNYNNNYYYNYYY", "NNYYYNNYNNYNNYYYNYYYYYYYYYYNYYNYYNYYYNYNNNNYYYYYNN", "YNNYNNNNNNYYNNYYYNNNYYYNYYYNNYYYNNYNYYYNNNYNNNYNNN", "NYNYYYYNNNYYNYYNNNNYYYYNYYYYNNNYYNNYNNYYNYYYNYYNYN", "YYYYYYYNNYNNNNYYYYYYNYYYNNYYYYYYNNNYNYYYYNYNYNNNYN", "YNNYYYNNYYYYNNNNYNNYNNNNYNNYNYNYYYNNNYYNYNNYYYYYNN", "YYNYNYYYYNNYYNYNYNNNYNYNNNYYNNYNNYNYYNNYYYYNYYYYYY", "NNNNNYYYNNYYYYYYNNYNNNYNNYYYNNNNYNYYYNYNYYYNYNNYYN", "NNNYYYNYNNNYYYNYYNYNYYYNNNNNYYNNYYYYNYNYNYYNNNNNNY", "NNNNYNNNNNYYNNYYYYYYNNNYNNNNNNNNNYNNYNNNYYYYNYNYNY", "NNNYNYNNYYNYYNNNYYYNYNNYYNNYNYYYYNYYNNYYNYYNYYYNYY", "NNYYYYNYNNYYYYYNYYYYNNYYYNNYYNYNNYYNNNYNYNYYYYYNYN", "YNNNNNYYNYNNNYYYYYYYYNYNNYNYNNNNYYYNYYNYYYNNYYNNYY", "YNYYNYNNYNNYNYNNYNNNNNYNYYYYNYNYNNNYNNNNNYNNNNYYNN", "NNYYNYYNYYYNNYYYYNNNNYNYNNNNNYYYNYYYYNNYYYYYNYNYYN", "YYNYNYNYNYYNYNYYNYYNNYYNYNYNYYYNNNYNYYNYNNNYNYYYYY", "YYNNNYYNNNYNNNNYYYYNYYYYYNNYYYYYNNNYNNYYYNNNNNNNNY", "YNNYNNNNYNNNNNYYNYNYNNYNYNYNYYNYYNNNNNYYYYNNYNYYYN", "NNNNYYYYYNYYNNNYYNNYNNYYYYNNYYYYYYYYYNYNYYYNYYYNYN", "YNNNNYYNYNYYYYNYYNNNNYNNYNYNYYNNNNNYYNYYNNNNNNYYYN", "YYYYYYYYYNYYNYYYYNYYNNYYYYNYNNNYYNYYYYYYNYYNYNYYYY", "NNYYNNNNYYNNYNYNNYYYNYNYYYYNYYNYNNNNYYNNYNYNNNYNYN", "YNNNNNNYYYYYNNYYNNNYNNYYNNYNYYNYYNYYYNNYNNNYYNYYYY", "NNNYNYYYNYYYNNYYNYYYNNYYNYYYYNYYYNYYYYYNYYNYNYYNNY", "YYNNNNYYYNNYYYNNYNNNYNYYNYNNYNYYNYNYYYYYYYYYNYNNYN", "YYNYYNYNYNYNYNNYNNYYNYNNNYNNYNYNYNNYYYNYNYYNYNYYNN", "YNNNYNNNNYNNNNYNYYNYYNYYYYNYNYNYNNNNYYYNNNNYYYNNNN", "NYYYNYNNNYYYYNNNNNNYNYYYNYYYNNNYYYNNYYYYYYNNNYNYNN", "YYYYYYYNNNNYNYNNNYYNYYNNYYNYYNNYYYNYYNYNNNYNNNYNNN", "YYNNYYNNNNYYNNYNNYYNYYNYNYYYYYNNYNYYNNNYYNNYNNNYNN", "YYYNYNYNNYYYYYYNYYYNYNYYYYNYYYNYNNYYYYYNYYNYYNYNYY", "YNYNYNNNYYYYNNNYYYYYNYNYYYNYNNYNNNNNYNNYYYNYNNNNNY", "YNYNYNYNNYYYYYYYNYNNYYNYNNYNNNYNNYYYNYYYNYYYNNYYYN", "YYYYYNNYNYNYNNYYYNYYYYNYYNYYNYYYNNNNYNYYNNNNYNNYYN", "NYYNYNNNYNNNNYNYNYYYYNNNYNYYNYNYYNNNYYNYYNYNNYNNYY", "NNNNYNYNNYYNNYYNYNNNYYYNNNNNNYYNNYNYYNNYYNYNNNNYYN", "YYNNYNYNNNYYNYNYNYNYNYNNYNYYNNYNNYNYYNNYYYYYNYNYYN", "YYYNYNNYNNYYYYNNNYYYNYNNYYNNYNNNYYNYYNYNYYYNYNNYNN", "YNYYYYYNYYNNNYNNYYYNYNYNYNYYNYNYYNNYNNYYNYYNYNNNNY", "NNNYNYYYNNYYNNNYNNYNNNYYNYYNNNNNYNYYYYNYYNNNNNYNYN", "YYYYYYNYNNYYNYYYNNNNYYYYNNYYYNYNYYYYNNYNNNNNYYNYNN", "YNNNYYYNNNNYNNNNYYYNYYYYNNYYYYYYYNYYNNYYYNNYNNNYYN", "NNYNNNNNYNNYYYNNYNYNNYNNYNNYNYNYYYNNNYNYYYNNNNNNNY", "NYYNYYYNYNYYYNYNNNYYNNNNNYYNYYNYYNNYYNNYNYYNNYYNNY", "NYNYYNYYNYNYYNNNYYYNYYYNNYYYNYYNNNYYNYNYNNNNYNYNNY", "NYYYYYYYYYNYNNNYNNNYYYYYNYNYYNNNNYNNNYYNNYNYNYYNYY", "NNNYYYYYNYYNNNNYYNYYYYYYNYNYNYYYNNNYNNNYYYYNYNNNNN", "YYNNNYYNYNYYNNNNNYYYYYYNNNYYYYNNNNNNYYNYNNYNYYNYNY", "YYNNYYYNYNNYNYNNNYYYYYNNNNYNNNNNNNNNNYYNNNYYYNNNYN", "NNYYYNYNYYYYYNYYNYNNYNNYYNYYYYNNNYYNNNYNNNYYYNYNNN"};
    int qualified = 49;
    int selected = 49;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> points = {19093, -17162, -24691, -82461, 72573, -76434, -71275, -40590, 47855, -70292, -75939, 43805, -70237, -10588, -55392, -24626, -44286, 20501, 34595, -68639, 64000, -10031, -80935, 36796, -15667, 71806, -68360, -47274, -52607, -90731, 75033, -71143, -70075, -80473, -51195, 3299, -92555, 12833, 91620, -50075, 11994, 92484, 49021, -37842, 35072, -59082, -20441, 80643, 26550, 85240};
    vector<string> standings = {"NYYYNYNNYNYNYNNYNYNYNNYNNYNYYYNYNYYNNNNNYNNYYNNNYN", "NYNYNNNYYYYNYYNYNNYYYYYNYNYNYYNYYNNNYNYNNYYNNNYYYN", "YYYNNYNYNYYYNYNNYYNYNYYYYYNYNYYNYYNYNYYNYYYYYNYYYY", "NNNNNNNNNYNNYYNNNYNYNNNNNNNNNNYYYYNNNNNYNNYYNYNYNN", "YNYYYYYYYYNNYYYYNYYYNNYNNYYYNYYYNYNYNYYNNYYYYNNNNN", "NYNYYNYNYNNYNNYNYYNYYNNNYYYYNNYNNNYNNYYNYNYNNNYYYN", "YYYYYNNYNYNNYNNYNYYNNNYYNYYYYYYYNNNNYYYNNYNYNNYNYN", "YYYYYYYNNYNNNNNYNNYYNYYNNNYNNNYYYNNNNNYNNNYNYNYYYY", "NYNNYYNNNYYYNNYYNNYNNNNNYYYYYYNNNYYYYNNYNYNNYYNYNY", "YYYNNNNYYNYNNNNNYNYNNNYYYNYNYNYNYNNNYNNYYYYYYYYNNN", "YYYNNYYNNNYNYNNYNNYYNNYNNNNNNYYNNYYNNYYNYNNNNYYYYY", "YNYNYNNYYNYNYYYYNNNNYNNNNYNYNYNYNYYNYNYNNYNYYYNNYN", "NNNYNYYYYYYNYNYNYNNNNNNYNYNNNYYNNNNNNYNYNNYNYNNYNN", "YNNNNYYYYNNNYNYYNYYNYYYYYYYNYYNYNNYNNYYNYNNNNNYYYN", "NYYNNNYNNYNNYNNNNNYNYNYNNNNYNNYNYNNNYNYNNNNNNNNYYN", "NNNYYNYNNYYYYNNYYNYNNYYNYNYNYYYNNYNYYNYYNYNYYYNNNN", "YYYNYYYNNNYNNYNNNYYNNYYNYNNYYYNNNNYNYNYYNYYNYYNNYY", "NNNYNNYNNYYYYNNNNNNNYYNNYYNYYNNYYYNNNNNNNNNNNNNNNY", "YYNYYYNNNNNNNYNYNYNYYNNYNNYNYYNYYNYNNNYNNNNYNYYYNY", "NYYNNNNYNYNNYNNYYYNYNNNYNYYNNNYYYNNYYNNNYYNNNYNNYN", "NNNYNYYNNYNYNNYYYYNYYYYNYYNYYYYNNYYNNYNNYYNNNYNYNY", "NNYNYYNYYNYNYYNYYNNNNNNNNNYNNNYYYNYYYYNNYNNYNYYYYY", "YYNYNYNNNNYNYYYNNYNNYNYYNYYYNNYNNYYYNNNYNYNYYYNNYY", "YNYNYNNYYNYNYYNYNYYNNNNYNNNYNNNNNYNYNYYYYNYNYYYYYY", "NYNNYYYYYNYYNNYYYYNYNYNYNYNNYNNYNYNNYNNYYYYNNYYNNY", "NYNYYNNNNYNYNNYYYNNNYNYNYNYNNYYYNYYNYNYYNNYNNYNNNN", "YNYYNNNYYNYNNYYNYYNYYNNYNNYYNNNYNYYNYNNNNNNYYYNYNN", "NNYYNYNNYNYYNNNNNNYNNNYNNNYYNNNNYYNNYNYNYNYNYYNNNN", "YYYNNNNNYYYYYNNNYYYYYNNYNYNNYYNNYNNNNNYNNNNNNYNYNN", "YYNYNYNYYYYNYYYYNNYYNYYNYYYYYNYYNNNYNNYYNYYYNNYYNN", "YNNNNYNNNYYNNYYNNNYYNYNNYYNYYNYNYNNYYYNYYYNNYYYNNY", "YYNNNYNYNNNYYYYNYYNYNNYYNYNNYNNNYNYNYNYNYYNYNNYYNY", "YYNYYYYNYNYNYNNYNYNYNYYYNYNNNNNYYNYYNYNNNYNNNYNNYY", "YNNNYNNNYYNYNYNNNYNYYYYNNYNNYNYYNYYNNYNYYYYYYYNNNY", "NYNNYNNNYNNYYNNNNYYYYYNNNNNYYYYNYYNYYYNNNYNYNNNNYY", "YYYNYNNYYNYNNNYYYYNNYYNNNNNNNYYYYYNNNYYNNYYNYNNNYY", "NNYNYYNYNNYYNNYYYYYNNYNYYYNNYNYNNNYNNYNNYNNNYYNYYN", "NYNNNYYYNYYNYYYNYYNNYYYNNYNYNYYYNYNYYYNYNYNNNYNNNN", "NYYYNYYNYYYYYYYYYYYYNNYNNNYNYYYYNNYYNYNNNYNYYYNNNY", "NNNNNYNYYNYYYNNNYNYYNYYYNNNNNYYYYNYNYYYYYNNNNNYNYN", "NYNYYYYYYNNNYNYNYYNNYNNNYYYYNNNYYYYYNNYNYNYYYYYYNN", "YNYYYNNYYYNNYYYYYYYYYNNNNYNYYYYNYNYYYNNNNNNYYNYYNY", "YNNNYNNNYNYYNNNNNNNYYYNNYYNYNYNNYNYYYNYNYYNNNNNYYY", "NNYNYNNNYYNNYNNYNYNNYNYYYYNNNNNYYYNNYYNNNNYYNNNNYN", "NNYYYYYYYNYYYNYNYYNYNNYYYNYYYYYYNYNYNYYNNNYYYNNNNN", "NYNYNNNNYNNYNYNYNNNNYYNYYNYNNNNYYNNYYYNYYNNYNYNNYN", "NNYYNYNNYNNNNYYYYYNNNNYNYYNNNYNYNNYNYYNNYYYYNYNNYY", "NNYYYNYNYNNYYYNYNNNNNYYNYYNYNYNYNNNNNYNYNNYYNYYNNY", "YYYNYNYYNYYYYNNYYYYYNYNYNYNNNYYNNYYNNYYYYNNYYNNYYN", "NYYNYYYYYYYYYYYNNNYNNYNYYNYNYNNNNYNNYYYNYNYNNYYYYY"};
    int qualified = 50;
    int selected = 50;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> points = {-89686, -60510, -68292, 81007, 45011, -91251, -95832, 39264, -36123, -4524, 19873, -70657, -93741, 48304, -10260, -19101, 16204};
    vector<string> standings = {"NYYYNNYYNYYNNYYYY", "YYYYNYNYYYYNYYYYY", "NYNYYYYNNYNNNYNNY", "YYNYNYYYYYYNNYYNN", "NYYNYNNNYYNNYNNNN", "YYNNNNNNNYYNYYNYY", "YNNNYNNNNNYNNYNNN", "YYNNYYYYNNYNNYYNY", "YNNNNNYYNYNYYYYYY", "NNYNNNYNYYYNYYYNN", "YNNYYYYNNYYNNNYNY", "NNNYYNNYYNNNNYNYY", "NYYYYNYNNNYNYYNYY", "NNNNNYYNYYYNNNNNY", "YYNNYNNNNNYYYNYNN", "NNYNYNNNNNNNNNYYN", "YNYNYYYNNYYYNNYYN", "NYNYYNNNYNNNYNYYN", "NNYYYNYNNYYNNNNNY", "NNYYYNNYYYYNNYYNN", "NNYYYNYNNYYYYNNNY", "YNYYNYNYYNYNYYNNN", "NYNYNYNNNNNYNNNNY", "YNYYNYYYNYNYNYYNN", "NNYNYNNYYNNNNYYNN", "YNNNYYYNNNNYNYYNN", "NNYYYYNYNNNNYYYYN", "YYYYNNNNNNYNYYNNN", "YNYYNYYYNYNNNYNYY", "NYYNYYYYNYNNNNNNY", "YNNYNNYNYNNYYYNNN", "NYNYNYYYNNNNNYNYY", "NNYNYNNYYYNNNYYYY", "YYYYYNYYNYNNYYYYN", "NYYYNNYYNNNYYYYNY", "YNNYYNYNNNYNNYYNN", "YNYYNYYYNYYNNYNYN", "YNNYNNNNNYYYNNYYY", "YNYYYYNNYYNYYYNNY", "YNYYNNNNNNNYYYYNN", "NNNYNYNYNYYNYNNYY", "YYNYYYYNNYNNYNYNY"};
    int qualified = 29;
    int selected = 19;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 250325604620;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> points = {49182, 1140, 37080, 9765, -47256, 47366, 45906, 65136, 23755, 61292, -6127, 13523, 83839, 28570, 25612, 27000, -47478, 99641, 25592, 3135, -12326, 26035, 30011, -78876, -8134, 88685, 81141, -53439, -22547, -89324, 62310};
    vector<string> standings = {"NNNYNNYYNYNNNNNYYYYYYYNNNNYNNYN", "YNNYYNNNYYYNNNNNNNNYNYYNYYNNYYN", "YNYYNYNYNNYNNNYNNYYYYYNNYNNNNYN", "NYNNYNNNYYNNYNYYNNNNYYNNNNYYYNN", "YYYNYNYYNYNNYYNNYNNYNYYNNYYYYYN", "NNNYYNYYYYYYYNNYYNYNYNYYNYNYNYN", "YNNYNYNYNYYYYYNYYYYNYYYYNYYNYNN", "NYNNYYNYYNNNYNNYYNNNYNYNYNNYNYN", "YYYYYYNNNYYYNYNYYYYYNYYNNNNNNYN", "YYYNYNNYNYYYYNYYNNNYYYYYYYNYYNY", "YYNNNYNNNNYYNNNYNNYYYNNYYNNYNNN", "NYNNYYNYYYYNYNNYYNYYNYNNYNYYNYN", "YYNNYNNYYNYYNYNNNYNYNNYNYYNYNYY", "NYYYNNNNYNYYYNYNYYNYNYNNNNNYNYN", "NYYNNNNNNYNNNNYNNYNYYYYNNNNYNYN", "YYNNNNNNNNYNYYYNNNNYYNYNNNYNNNY", "YNYNYNYYYYNYYYYYYNYNNYYNNNNNYYN", "YYYNNNNYYYNYYYNYNYNNNYNNYNYYYYY", "YNNYYYYYYNNYNYYNNNYNYNNYNYNYNNY", "YNYYYNNNNNYNYYYYNNYYNYYYYNNNNNN", "NYNNYNNYYNYNNYNNYNNYYNNNYYYYNNY", "NNYYYYYYNYNNYNYYYNNYNNNNNNYNNNY", "NNYYYYYNYNNYNYNNNYYYYYYYYNYYYYY", "NNNNNYYNNNYNYYYYNNYNNNYYNYYNYNN", "YNNYNYNYNNNNNNYYNNYNYNNNYNNNNNY", "NYYNNNNNYYYYNYNNYYNNNYYNNYYNYYY", "NNNYYNYNNYYYNNYYNYYYYYYNYYNNNNN", "YNYYNYNYNNYYYNNNNYYYNNYNYNNYNNN", "NNYYYYYYYYYYNNYYYNNNNNNNYYYYYYY", "YYYNYNNYNNYNYNYNNYNYNNNNNYYYNNN", "YNYNNNNNYYYYYYYYYNYNYYYNNYNYNNN", "YYNYYYYNYYYYNNYYYYNYNYYYYNNNNYY", "YYNYNNYYNNYNNYYYNYYYNNYYYNYNYYN", "NNYYNNYYNNYYYYYNYYYYYYYNYNNNYYY"};
    int qualified = 26;
    int selected = 10;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 45898226;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> points = {95869, -71283, 33568, 10626, 36785, 48526, 91635, 52279, -36457, 41641, -12809, -70453, 3942, 46379, -51542, 23535, -922, -96699, 18528, 22102, -28217, 46779, 15398, 48503, 59279, 83553, -73660, 25697, 94187, -60204, 24935, 56566, 91238, 9343, -56110, -84540, -24523, -83269, -54125, -96313, 14195, -8340, -31625};
    vector<string> standings = {"NNNNYYYNNNYYNNNYNNNNNYYYNYNNNNNNNYNYNNYNNNN", "YNNYYYYYNNNYNNNNNNYNNYNYNYNYNYNYNYYYNYNYNYN", "YYYYNNNNYNYNYNNNNYYYNYNYYYNNYNNYNNNNNNNYYYN", "NNYYYYNYYYYYYNNYNNYYYYYYYYNNYNYNNYNYYNNYNNN", "NNYNNNYNNYNNYNYNNYNNYNYNNYNNYYYYYYYYYNYNNNN", "YYYNNNNNNYNNYNNNYYYYYYYNYYNNNYNNNNYNYNNYYNY", "NYNYYYNYNYNYYNYNNYYYNNNNNNYNYYYYYNNNNYNYNNY"};
    int qualified = 4;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> points = {-15532, 99223, -5300, 62723, -47157, 95089, -22814, 11456, 57355, -20819, 96210, 21052, -64206, 15662, -62784, 17473, 73525, -96867, -16801, 51958, -57595, -48580, -91036, -10825, 85486, -20213, -30800};
    vector<string> standings = {"YYYYYNYNYNNYNNNYNYYYNYNNNYN", "YNYYYNYYNYYNNNNYNYYYNYNYNYY", "YYNYNYNNNYNYYNNYNNYNNYYYNYN", "YNYNNNYNYNNYYNNYYNNNNYYYYNN", "YYYNNNYYNNYNYYNNYNNYNYNNNYY", "NNNYYYYNYNNYYNNNYNYYNYNNYYY", "YNYNNYYNYNNYYNYYNYNNYNNYYNN", "NNNYNNNNNYNNYYNNNNYYNNYNYNN"};
    int qualified = 1;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> points = {-2756, 5005, 57990, -83124};
    vector<string> standings = {"YNNY", "NNNY", "NNYY", "NNYN", "NYYY", "YNNN", "NNNY", "NNYY", "NYNY", "NYNN", "NNYY", "NYYY", "NNNN", "NYNN", "YYYN", "NNNY", "YYYN", "YYNN", "YNNN", "NNNY", "NNNY", "NNYN", "NYYN", "YYYN", "NYNY", "YNYY", "YYYY", "NNNY", "YYYN", "NNNN", "NYNY", "NYNY", "YYNN", "YNYY", "YYYN", "NNNN", "YYYY", "YYYN", "YNNN", "NYYN", "NNYN", "NYNN"};
    int qualified = 33;
    int selected = 23;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 6064193824;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> points = {19090, -29415, -3548, 39806, 22469, 33276};
    vector<string> standings = {"YYYYYY", "NYNNYY"};
    int qualified = 2;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> points = {98010, -77468, 9754, -15479, 59710, 73448, 34417, 50082, -35302, -78670, -60238, -1656, -13882, -36569, 3791, 19055, 37850, 45998, -75978, -18960, -67115, -76143, 92311, -25647, -86543, -79674, 16307, -33271, -18943, 16782, 65756, -81608, 64004, -40272, 69070, 36276, -11768, 71081, -85464};
    vector<string> standings = {"NNYNNYYYNNNNYYYNNYYYNNYYNNNNYNNNYNYNNYY", "YNYYNNNNYNNNYNNNYNNNNNNYNYYNNYYNNYNYNYN", "YNYYNNYYYNYYNNNNNYNNYYYNNYYYYNNNNNNYNYY", "YNYYNYNNYYNYYYNNYYNNNYYYNNYNYNYYNYYNYNY", "NNYYNNYNYNNNYYYNNYNYNYNYNNYYNYNYNYYNYNY", "NNNYNYYNYNYNNNNNYYYNNNNNYYYYYYNYYYNYNYN", "YYYYNNNYYYNYNYNYNYNNNNNYNYYNNNNYNYYYYNY", "YNNNNYNNNNNNYNNYNYYNYYYYYNNNYNNYYYNNYYN", "NYNYNYYYYYNNYNNYNYNNYYNNNNNYNYYYNNNYNNN", "YNNNNNNNYNYNYNYYYNNYNNNNNNYNYYNNNNNYNNN", "YYNYYNYNNNYYNNNYYNNNYYYYNNNYNNNYNNNNNYY", "YYYNYNYNNNNNYYYNNYYNNYYYYNYNNNNNNNYYNYN", "NNYYYYYNNYYYYNNNNNNNYYYYNYNYYNNNYYNYNYN", "NNYNNYYNNYNNNNYYNNYYNNNNNNYYNNNYNNNNYYY", "NNYYYYYYNNNNNYYNNYNNNYYNNYNYNYNNNNYYNNN", "NYNNNYNYNYNNNNNYNNNNNYNYNNYNYNNNNYYNYYN", "YYYNNNYNNYYNYNYNNNYYYNYNNYYYNYYYYYNYNNY", "YYYNNYYYYNNNYNNYNYYYNYYNNYNNNYYYYYYYNYY", "YYYYNNNNYYYNNYYYYNNNNYYYNYYYYNYNNNYYYYN", "YYYYNYYNYNNNNNNYNYNYYNNNNYNYYNYYNYNNNNN", "NYNYYYYYYNNYYYYYYNNNNYYNYYYNNYNYNNYNYNY", "NYNNNNNYNYYYYNYNNYNNNYYNNYYYNYYNYNNNNNN", "YNYNYYNNYNYNYNNYNYNYNNNYNYYYYYNNYYYYNNN", "YYYYNNYNNNYYYNYYYYNYYYNYYYYYNNYYYYYNNYN", "YNNYNYYNYYYYYYNNYNNNNNNYNYNYYNYYNNYYNYY", "NYYYYYNNNYYYNNYYNYYNYNNNNNYNYYYNNYYNYNN", "YNYYYYNNNYNNYYYYNYNYYYNYYYNNNYYYNYNNYYN", "NNNYYNNYNNNYYNYNNYYYYNYYYNNNNNYYNYYNYNN", "YNNYYNNNYNNYYNYNYYNYNYYYNNYNYYYYNYYYYYN", "YYNNNYNYNNNYYNYYYYYNYYNYYNYNYYNYNNYNYYN", "YNNYNYNNYNNYYNYNYNNNYNYYNNYYNYYYYYYNNNN", "NYYYNYYNYNNNYYNYNYNYYNYYNNYYNNYYYNYNNYY", "NYNYYYYNYNNNNYNNNYNNNYYYNYNNYNNYYNNYNYN", "YNNYNYYYYNYYYYNNNNNYYYYNNYYYNNNYYNNYNYY", "NYNNYNNYYNYNYNYYNYNYNYNNYYNYYYYNYNNNNYY", "YYYYYYYYYNYYYYNNNNNNYNYNYYNYNYNYYNNNYNN", "NNNNNNNYYNYYYNYYYNYYNNYNYNNYYYNYNYYYYYN", "YNNYNYNYYYYYYYNYYNNYNNNNYNNYYNYNYNNYNYY", "YNYYNNNYNNYYYNNYYYYNNNYYNYNYNNNYNYNNYNN", "YYNNYYYNYNYNNNYNYNNNNNNYYNYYNYYYNYYYNYN", "YYYYYNYNNNNYYNYYYNYYNYNYNNNYNNNNNYYYYNN", "YNYNYNNNNNYYYYNYNNNYYNNYYYNNNYYNYNYYYYN", "NYNNYYYNYYYYNNYYYNNYYNNNYNNYNYNNYNNYYYN", "YNYNYNYNYYNYNNNYYNYYYYYNYNNNYNYNNNNNNYY", "YNYYYNNNNNNYYYYNYNNYNNYNNNYNYYNNNNNYNNN", "NYYYYYNNNYNYNNYYNNYYNYYYNYYNNYYYYNNNNNN", "NYYYNYYNYNYYYYNNNYNYYNYYNYYNYYYNNYYYNYN", "YNYNYYYNNNYNNNYYYNYYYYYYYYNYYNYYYYYYYYN"};
    int qualified = 48;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 17296;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> points = {-38819, 51582, -88934, -48408, 97473, 48383, -4297, -61004, -39080};
    vector<string> standings = {"NYYNNNNNY", "YNNNNYNYN", "YYYYNNNNN", "YNNYYYYYY", "NYNNYNNYY", "NYNNNYYNN", "NNNYNNYYY", "YNYYNNYYN", "NNNNYYYYY", "YNNYNYYNN", "NNYYNYNNY", "YYNNNYYYN", "YYYNYYYYN", "NYNYYNNNN", "YYNNYYYNN"};
    int qualified = 4;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> points = {45903, 6026, 1197, -32445, 18197, 15638, 32846, -53851, 69695, -82189, 4262, -52523, 51076, 42747, -24334, 75433, 70594, 45225, -27137};
    vector<string> standings = {"YNNNNYYYNNNYNYNYYYN", "NNNNNNNNNYNNYNYYNYN", "YNNYYYYYNNNNYYYYYYY", "YYYNNNYNNYYYYNNYYNY", "YYNNNNYNYNNYNNYYYNY", "NYYYNNNNYYYNYYNYYYY", "NNYYNYYYNNNNNYYYYYY", "YNYYYNYNYYNNYYYNNNY", "YNYYNNNNNYYYNYNNYNY", "YNNNNYYNYYNYYNNNYYN", "YYYNYYYNYNYNYYYYNYN", "NNNYYYNYYYYNNYNYNYY", "NNNYYYNNNYYYYNNNYNY", "NYNYNYYNYNNNNNNYYYY", "NYYNNNNNNNYNNNNNNYN", "NNYNYYYYNYNNNNYNNNY", "NNNYYNNNNYYYNNNYYNN", "YYYNNYYYYYYYNYNYYYN", "NYYYNYNYNYNYYNYYNYY", "YYYYNYYYYNNNYNNNNYN", "YNYNNNYYNNYNYYYNYYN", "YYYYYNYNYYYNNYNNYNY", "NNNYNYNNYYYYYYYNYYN", "NYYNYYNYNYYYNYYNYNY", "YYYYNYNYYNNYYYYYNNN", "YYNNNNNNYYYYYYNNYYY"};
    int qualified = 22;
    int selected = 21;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1098;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> points = {-32391, -32416, 50237, -40499, 41433, -24143, 49187, 86566, 42462, -35793, -94417, 74072, -3499, -98313, -8146, 48205, -59551, 43666, -13489, 92184, -2178, 79223, 48063, -80633, 11632, -46542, -31327, -54693, 96266, 55333, 7920, -98411, 71324, 35044, -3032, 54248, 57528, 18876, 17397, -21174, -70239, 69270, -1892, 8687, 1173, -64012, 54432, -75764};
    vector<string> standings = {"YNYYYNNNYYNNNNNYYNNNYYNYNYNNYYYNNNYYYNNNYNNNYNYN", "NNYYYYYYYNNYYNNYYYYYNYYNNYNNNYNYNYYYNNNNYYYNYNYY", "NNYYNNNYYYYNNNNNYYNYNNNNNYYYYNYYNNNNYNNNNYNYNYNY", "NYYYNNYYYYYYYYYYYYYNYYYNYYYNNYNNYYYYNNYNYYYYNYNY", "YYNNNYNYNYYNYNNYYYYNYNYNYYNYYYYYNYNNNYNNNYNNNYYN"};
    int qualified = 2;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> points = {34839, -38408, -92767, 83110, 57156, -94337, 58635, -73545, 28672, -76273, 96825, 27420, -32434, 63477, -50742, -17907, -40540, -5064, 83625, -15146, -37944, -79738, -20412, -58306, -83675, -92176, -91213, 85216, -94803, 22029, -1886};
    vector<string> standings = {"YNNYYNNNYYYNYYYNNNNNNYNYNNNYNNN"};
    int qualified = 1;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> points = {-88877, -86707, -71983, 37304, 5854, -22520};
    vector<string> standings = {"YNNYNY", "YNNNYN", "YYNNYN", "YNYNNY", "YNNNNY", "NNYYYN", "NNYNYN", "NNYYYN", "YNNYYY", "YNNNNN", "YNNNYY", "NNNYYN", "YYYNNN", "NYYNYN", "NYNYNY", "NNYNYY", "YNYNYY", "NYNNYN", "YNYYYN", "YNYYNN", "YYYNYN", "NNYYYN", "YNYYYN", "NNNYYY", "NNNYYN", "NYYYNN", "YNYYYN", "YYNYNN", "NNNYYY", "NNNYYN", "YNYYYN", "YNYYYN", "NYYNNN", "YYNNNY", "NNNYNY", "NNYYYY", "NYYYNY", "NYYNNY", "NNNNYY", "NYNNYY", "NYYNNY", "NYYYYY", "YNYNYY", "YYNYNY", "YYYNNY"};
    int qualified = 30;
    int selected = 8;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 214545435;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> points = {15151, 10908, -85738, 83252, -81420, 81119, 90827, 22992, -39327, 88738, 53425, 1424, 63611, -73047, -59494, -24444, -28432, 44017};
    vector<string> standings = {"YYNNNYNYYYNNNYNYNN", "YNYNYNYYYNYNYNNNNN", "NNNNYYNNNNYYYYNNYN", "NNNNNNYYYNYYNNNNYN", "YNYNNYYYYNNNYYNYYN"};
    int qualified = 4;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> points = {-65503, -11999, 56810, 7102, -17384, -89267, 25274, 28494, -72270, 86039, 70022, -85253, 98536, 90516, 4718, -28653, -42960, 72525, -79175, -11956, -55677, -62357, 27371, 67842, -68951, -4273, 80349, 39643, -75715, -10560, -57452, 1610, 82564, -28995, 62253, -85647, 28131, -4048, -66920, 13090, 38720, -84541, -44588, 54462, -8968, -20981, -36500, 79870};
    vector<string> standings = {"NYYNYYNYNYNYNYYNYNYYYNNNYYNYYNYNNYYYYYNYYYNYYYYY", "NNYNNYNYYNYYYYYNYYYNNNYNYNYYYNNYNNNNYNYNNNNNNYYY", "YYYYNYNNNYYNNYYYNYYYYNYNYYNNNYYNYNYNYNNYNYYNYNNN", "YNYYYYYYYNYNYNYYYYNYNNYNYNNNNYNNYNYYNNNNYYYYYYYY", "YNYNYNYYYNYYYNNYYYYNNNYYNNNYYNNYNYNNNYNYYNYYYYYN", "NNYYNYYNNNNNYNYYNYYYNNYNNNNYYNNNYNYNYNNYYYYNYYYN", "YYYYYNYNNNNNYYYYYNYNYYNNNNNYNYYYNNYNNNNYNNYYNYYY", "NYYNNNNNYYNYNYNNYNNNNNYYNNYYYYNNYNNYYYNYNYNYYYYY", "NYYYNYNNNYNNYYYYNYYNNYYYYYNNNNNNNYYNNYYYNYYYYNYY", "NYYNYNNNNYYNYYYYNNNNYYNNYYYNNYYYNNNYYYNNYYNYYYNY", "NYYYNNNNNYYYNNNNYYNYYYYNNYYNYNYNNNYNYNYYYYYYNNNY", "YNYYNNNNNYNNNYNNYYNNYYYYNNNYNNNNYYNYNNYNYNNYYYYN", "YYNYNYYNYYNYNNYNNYYNNYNYNYNNNYYYYYYNYNNNNNYYNYYY", "NYYYYNYYNNNYNNYYNYYYNYNYNYNYNYNYNNYYNYNNNYYYYNYY", "NYNNYNNYYNYYNNNNYNNNNYYNYNNYNYNYYNNYYYYNYNNNNNYY", "YYNYYYYYNYYYYNNYNYYYNNYYYYNYNNNNYYNYNNYNNNYNYYNN", "YNNNYYNYYYNNNYYYNNYYYYYNNYYNYNNNYNYNNYYNYNYYNYYY", "NNNYYYNNYNNYNYYYNYNYYNNYNYYNYNNYNYYYNNYYNNNNYNYN", "NYNNYNNYYNNYNYYYNNNYNYNNNYYYNNNYYYNNNYNYNYNNNNYY", "YNYNYNYYNYNNNYYNNYYNNYYNNYNYNNYYYYNYNNNYYNYNYYYN", "YYNYNYYNYYYYNYNYNNYYYNNYYYYNNYNNNNNYYYYNYYNYNNYN", "YNYYNYYNYYYYNNYYNNYNNNYYNNNYNYYNYNYYYNYNNNNYNNYN", "YYYYNNYNYNNYYNYYYYYYNNYYNYNYYYNYNYYNNYYYYYYYNNYY", "YYNYNNNNNNYYNYYYNNNYYNYNYYYYYYYNYNYNYNNYYYYNYYNY", "NYNNYNNYYYNNYYYNNNYNNYYNYYYYYNYYYNNYYYYYYNNYYYNY", "YYNYYYNNYYYYNNNYYNYNYYNNYYNYNYNYYYNNNYNYYYNNYNYY", "NNYNNNYYNYYYNYYYYNNYYNYNYYYYYNNYYNYYYNNYNNNNNYYY", "YYYYNYYNYYYNNYYYNNNNYNNYYNYYYNNYNNNNYNNNYNNYNNNN", "NNYNYYYYYNNYNYYNNNNNNYYYNYNNYNNNYNNYYNYYNYNNNNYN", "YYYNYYYNNYNYYYNYYYNNNYYYNYYYNNNNYYNNYNNYNYYNNYNN", "NYNNYYNYNNNNNYYYYYNNNNNYNYNNYYNNYNYYNNNNYYYYNNYN", "YNNNYNYYYNYYNNYNYYYNYNNYNYNYYNYNYNNYYYYYNYYYNNNN", "YNNYNYYYNYYYYNNNYNNNNYNNYNNNYNNNNYYYNNNYNNYNYNYY", "YNYYNYNYYYYYYYNYYYYNNNYYNNYYNYYYYYYYYNNNYYNNYNNN", "NNNYYNNYYYYYYNNNNNNYNYNNNYNNNNNYYYNNYYYYYYNNYNYN", "YYNYYYYNNNNYNNNNNYNNYNYNNYYNYNYYNYNNYYNNNYNNYNYN", "NNNNNYNNNYNYNYYYNNNYNYNNYYNYNYYYYYNNNYYNNYYNNYYN", "NYNNYYYYNYYYYYYYNYYYNYYYYYYNYYYYNNYYYYNYNNNYYNNY", "YNYNNYYYYYNYYNYYYYNNNYNNNNYYYYNYYNYYYYYYNNNNYNYY", "NYYYNYYNYYNYNNNNNNYYYNYNNNYYYNYYNNYNYNNYNNYYYNYN", "YNNNYYYYNNYYNYNNNNYYNYNYNNYNYYYYYYYYNNYYYYNYYNYN", "YNNNNYYNNNNYYNYNYNYYYYYNYNNYYYNYNNNNYYNYNYYNYNYY", "NNNYNYYNNNNNNNYYYYNNNNYNNNYNNYYYNYNYYNNYNNYNYNNY", "YYYYYNYYYNNNYYYNYYYYNYNNYYNNNYYNNYNYNNYNYNYYYYYY", "YNNYNNNNNYNNYNNNYYYYNYNNYNYYYYYYNYNYNNYYYYYNNYYN", "YNYNYNYYYNNYYYYYNYYYYYNNNYNNNNYYNYNNNYNNNYYYYYYY"};
    int qualified = 38;
    int selected = 37;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 790615631;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> points = {72398, 90160, -61402, 2317, 52819, -69080, -29461, -22914, 30635, -65715, 81473, -55985, -37992, 83142, -97493, -83915, 21346, 76609, 70768};
    vector<string> standings = {"NYYNYYNYYNNYYYNYNYY", "YNNYYYYYYYNNNYNYYYY"};
    int qualified = 2;
    int selected = 1;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> points = {99098};
    vector<string> standings = {"Y", "Y", "N", "N", "Y", "Y", "N", "N", "Y", "N", "N", "N", "N", "N", "N", "Y", "Y", "N", "N", "N", "N", "Y", "N", "N", "Y", "N", "Y", "N", "N", "N", "N", "Y", "N", "Y", "N"};
    int qualified = 23;
    int selected = 13;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 1144066;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> points = {-69909, -98297, 89360, -87434, -30792, 8555, 34175, -35771, 31844, 5154, -15669, -43069, 34436, -78059, -15977, -82160, -77321, -83384, -63064, -2793, 29089, 14171, -63834, 77925, 31151, 80632, -9088, 91421, -41320, -43680};
    vector<string> standings = {"NYNYYYYYNYYNNNYYYYYNYNYYNYYYNY", "NNNYNNNNYNYYNNNNYYNYNYYNNNNYNN", "NNNYYYNYYYNYNNNYNNNYYNYNNYNNNN", "NNYNYNNYNYYYYNNYYYYNYNNNYNNYYY", "NNNYYNYYNNYNYNYNYNNNNYYYYYNYNN", "YYYYYYNNYYYNYYYNYYYYYYYYNNYYYN", "NNYYYNNNNYYNNNYNYYNYNNYNYYYYYY", "NNNYNYNYNNYNNYNNNNNNYNNYYNYYYN", "NNNNNYNYNYNNNYYYYYNNYNYNYNYYNY", "NYYNNNNYNNNYNNNNYNYNNNYYNYYNNN", "YYNYNNYNNYYYNYNYYYNYYYNYNNNNYY", "NNYYNYYNYYNNNNNNNYNYYNNNNYYNNY", "YNYYNNNYNNYYYNNYNYNNNYNNYNNYYN", "NYYYNNNYYNYNNNNYNYNNYNNYNYYYNY", "NNYNYYNYYYYNNYYYYYYNNYNYYYYYYY", "NYYYYYNNYYNNYNNNYNYYYYYYYNYNYY", "YYNNNYNYNYNNNNNNNYYNNYNNYNYYYY", "YYNYNYYNNYYNYNYNYNNNNNNNYYYYYY", "YNNNNYYYYYNYYNNYNYYYYNNYNYYNNN", "NYNNYYYYYYYNYYYYNYNNNYYNNNYYYN", "YNYYNNYNYYNYNNYYNYNNYYYYNNYNNN", "YYYNNNYYNYNNNYNYNNYYYYYYYNNNYN", "NNNNNYNYNYNYYYNNNYNNYNNYNNNNNN", "YNYNYNYNYNNNNYYYNYYNNYNNNNYNYY", "YNYNNYYYNNYNNNYNNYNNYYNNNYYNYY", "YYNYYYNNNYYYYNYYNNNNNNNNNNNYNY", "YYNNNNYYNYNYNYNYNYYNNNYNNNYYNN"};
    int qualified = 20;
    int selected = 19;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 2085479;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> points = {-85192, 45344, 71655, 40066, -93876, -11692, -64796, 13171, 35730, -49690, -36522, -41287, -33099, -52045, 20405, -51006, -15163, 25037, -66530, 77450, 72453, -33436, 59202, 99423, -29858, -42987, 61331, 53048, -25930, -55159, -86792, 73010, 79133, 19532, -21818, 37862, -61798, -92438, 36903, -55837, 30638, 95560, 76050, 67535, -38127, -51588, -34054, -86444};
    vector<string> standings = {"YYYYYYNNNYYYNNNNYYNYNYYNYYNYNNNYNYNYYNNYYYNYYYNY", "YNNNYYNNNNNYYYNNYYNYNYYNYYYNYYNNYYYNYYYNNNYNNYYY", "YNNYNYYYNNYNYYYNNYNNNNNYNNYNYNNNYYYYYNYYYYNNNYNY", "NNNYYNYNNYYYYNNYYYNYYNYYYYYNNYNNYNNNNNYYNYYYYNNY", "YYYYYYNNNNYYNNYNYYYYYNYNNYNNNYYNYNNNYYNYNYNNYNNY", "NYNNNYYYNNYNYNNNYNYYYYYNYNYNNYNNYYNYNYNNYYNYNNNY"};
    int qualified = 5;
    int selected = 3;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> points = {50323, -25444, 89537, 78492, -15551, 71733, -93941, -16489, -37954, 33739, -56342, 7052, 50401, -42198, -85877, 1186, 74655, 20551, -13807, -73571, 61310, 34368, 9617, 80628, -69596, 98067, -7499, -74685, 93068, -59934, -50749, -21262, -54574, -59810, 59513, 22119, 58543, 88143, -42738, -31971};
    vector<string> standings = {"NNNNYNYNNNNYNNNYYYYYNNYYNYYNYNNYYYYYYYYN", "YYYNNNNNNNNNNYYNNYNNNNYNNYNNNYNNYNYYYNNN", "NNYNYYYNYNYNYNNNNYYNYNNNNNNYNYYYNNYYYYNN", "YYNNYYNNYYYYYNYYNYYNNNYYYYNNYYNYYNYNYNYN", "NNNNNNYYYNNNYYYNYYYNYYNNNYNNYYNYNYNYYNNN", "YYNYYNNYNYYNYYYNNYNYNNYNNNYNNYYYNYNYNYYN", "NYYYNNNNNYYYNNYYNNNNNNNNYNYNYNNYNNNYYYYY", "NYNNYYYYYYNNYNNYYNNYNNYYYYYYYYNNYNNYYYNY"};
    int qualified = 6;
    int selected = 5;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> points = {-17499, 10372, 42345, 13737};
    vector<string> standings = {"YYYN", "NNYN", "NNYN", "NNYY", "YYNY", "YNNY", "NYYY", "YYYY", "YNNY", "NYNY", "NNYY", "YNYN", "YNNY", "NYNN", "YYNN"};
    int qualified = 12;
    int selected = 7;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 3032;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> points = {-57678, 52343, 89093, 35113, -24112, 48155, -33081, 3929, 10742, 90342, 19901, 5602, 4745, -5152, -38820, -4552, -97500, -43212, -47447};
    vector<string> standings = {"YNYNYNYYNNYNYYYYYNY", "YYNNNNNYYNNYYYYNNNN", "YYYYYYNNYYYNNNNYNNN", "YYYNNNNYYNNNNNNNYNY", "YYNYYNYYNYNYNYNYNNY", "YYNYNNNNYYNNYNYYNNN", "YNNNYNNYYYNNNNNNNYY", "YNNYYYYNNNYYNNNYYYN", "YYNNNNYYNNYNNYYYYNN", "YNYNYYYNYNNYYNYNYYN", "YNYNNNNYYYYNYYYYNNN", "YYYNYYNYYNNNYNNNYNY", "YYYYNYYYNNYYNYNYYNY", "NYNYYYYNYNYNYYNNYYN", "NNNYYNNYYYNYYNNNYYN", "NNNNNYYYYNNNNYYYYYN", "NNYYYYNNNYNYYYNYNNY", "NNYNNNYYNYYYNNNNNNN", "YYNYYNNNNYNNNYNNYNN", "NNYNYNYNNNNYYYNYYNY", "NNNNNNNNNYYNNYYNNYY", "YYYYNYNNYYYNNYYNNNY", "NNNNYNNNYYYYNYNNYYY", "NYYYNYYNYNYYNYYNYNY", "NYNNYYYNNYYNNYNYYYN", "YNNNYYNNNNYYYYYNYYY", "YYYYNYNYNNYNYYNNYNN", "YYNNYYYYYNYYNYYNYNY", "YNNYNYYYYYYYNNNNYNY", "NYNNNNYNNYNYNNNNYYY", "YNNNYYYYYNNYYYNYYYN", "NYYNYNYNYYYYNYYNNNN", "NYYNNYNYYYYNNYYNYNN", "NYNNNNNNNYYYYNNNNYN", "NYYNNYNNYNYNYNYNNYY", "NYYNNYNYYNYYNNNNNNN", "YNNNNYYYNNYNYYNNNNN", "NYNYNNNNYYNNNNYNYYN", "YNYYNYYNNNNYNNNYYYY", "YYNNYNYNYNNNYYYNNYN", "YNYYYNYNNYNYNNYNYNN", "YYYYYNYYYNNYNYYYNYY", "NYNNNYYYYNNYYYNYYYY", "YYYYYNNYYYYYYNNNNNN"};
    int qualified = 26;
    int selected = 9;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 530128462;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> points = {44287, 15043, 23041, -82703, 75269, -47982, 78993, -59963, 88797, -69323, -56514, -9975, -99134, 79227, -91953, 18193, 18144, -44349, 89773, -15480, -58913, 55766, -73649, -73067, -69647, -38832, 33351, -14631, 52188, -42568, 936, 75926, 97656, -66959, 38162, 54634, 91598, 18827, -27110, -69385, -82034, 7025, -20262, 33447, 40364, 59012, 5268};
    vector<string> standings = {"NYNNYNYYYYYNNNYYYYNYNNNNYNYYNNYNNYYYYYNYYNNYNNN", "NNYNNYNYNNYYYYNNNNYYNYNYYYNYYYNNYYYNNYYNYNYNYYY", "YNYNYNNYNYNNYNYNYNNYNYNYYYYNNNNNYYNYNYNNNNYYYYY", "YNNNYNNYNNNNYYNYYNYYYYNYNYYYNNYNNYNYNNNYYNNYNNY", "YNNYYNYYYNNNYYNNNNYYNYYYYYYYYNNYYNYNNNYNNYYNNNN", "NYYNYNNNYNNYNNYNYYNNYNYYYNNNNNNYNNNNYNNNYNYYYNY", "NYYYNYNYNYYNNNNNYNYNYYYYYYNNNNYYNYYYNNYNNNNNYYN", "YYNNYNYYYNYYNNYYNYNYYYYNNNNYYYNYYNYYNYYNYYNNNNN", "YNNNNNYYYYNNNNYYNNYYYYYNYNNYNYNYNNNYNNYYNYYNYYY"};
    int qualified = 9;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> points = {-4828, 33624, -65091, -15554, -6375, -46090, -15551, -80053, -18097, -28735, 58167, -40931, -36622, -28360, 6674, -77582, -67697, 71617};
    vector<string> standings = {"YYYYNYNNYNYYNNYYNN", "YNYNYYNNNYYYNNYYNN", "NNNNYYNYNNYYNYYYNN", "NYNYNNYNNNNYYNNNYN", "YNNYYNYNNYYYNYYYNY", "YNNNYNNYYYNNNYNNNY", "NNYNNYNNNYYYNYYNNN", "YNYYNYYNNYNNYNYNYY", "NNNYNYNNNNNNYYNYNY", "NYYYNYYYNYNYNNNYYY", "YNNNYYNYYNYNYNNNYY", "YNYYNNNYNYNYNNNYYY", "YNYNYYNYNYNYNNYYYY", "NNNYNNNNYYNNYNYNNY", "YNNYNYYNNYNYNNNNYY", "YYYNYYYYYYNYYYNYNY", "YNYYYYYNYYNNYNYYYN", "NYYNNYYNNYNYYNYNYY", "YYNYNNNNYNNYYNYYNN", "NYNYYNYNNYYNNYNYNY", "YYYYYNNNYNYYNYYNNY", "NYYYYNNNYNYYYNYYYY", "NNYNNYNYNYYNNYYNNN", "YYYNYNNYNYNYYYNNYN", "YYNNYNYNYNNYYYNNNN", "NNNYYYYYNYNYYYYNNY", "NNNYNYYYNYYNYYYYYN", "NYYNYYYNNYNYNNNNYN", "NNYNYNNYYNNNNYNYNN", "NNYNNYNYNNYNYNNNYY", "NNNNNNNYNNYNYNYNNN", "NNYNYNNYNNNNNYYNNN", "NYYYYNYNNYNYNNYNNY", "NNNYYNNNYNYNYYNYYY", "NYNNYYYNNYNNYNNYNN"};
    int qualified = 31;
    int selected = 10;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 183579396;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> points = {76684, 65627, -6842, -57629, 46606, 3399, 28483, 97899, -69083, -708, 41262, 84883, 14469, -55452, -24364, 96469, 85786, 66575, 20084, 99828, 76510, 99192, 77329};
    vector<string> standings = {"YYNYNYYNNYNYYYNYYYNYYNN", "YYYYNNNNYYNNNYYYNNYNNNN", "YNYNYNNYYYNNNNNYNYYNNNY", "YNNYYYYNNNYYNNYNYNYNYNN", "NYYYYNNYNNNYYYNNNYNYYNN", "YYYNYNNYYYNYYNYYYYYNYNN", "YYYNYYYNYNYYNNNYNNYYNNN", "NNYNYYYNNNYYNNNNNNYYNNY", "YNYYNYYYNYYNYNYNYNNNYNY", "YYNNNYYYYNNYYYNYNNNYYNY", "YYYYNNNYNYYYNYNYYNYNNNY", "YYYYYNYYYYYNNNNNYNYNNYY", "NNYYNNYYYNYYYYNNNNNNYYN", "NYYYYYYNYNYNNNNYNNNYYNN", "NYYYYYNYYNNNYYNYYNNYNNY", "NNNYYYNYNYNNNYNNNYYNNYY", "YYNNNNYNYNNYNNYNYNNNYYY", "NNYNYNYNNNYNNNYNYYNYNYY", "YNNNYYYYNYYYNYYYNNNNNYY", "NYNNNNNNYYYNYYYYNNYNNNY", "NNYYYYNYYYYNYNNNYYYYYYN", "YYYYNYNNYNNNNYNNNNYNNNN", "YNYYNNYNYYNNNYNNYNNNNYY", "YNYYYNNNYYYNNNYNYYYNYYN", "NNNNNYYYYNYYNYNYYYNNYNY", "NYNNNYNYNYNNNNYNNNYNYYN", "YYNYYYYYYNYYNNNYNNNNNNN", "NYNNYYNNNYNNYNYNNYNYNNY", "YNNYNNNYNNYNYNNYYNYYYYY", "YNNYYNYYYYYNYYNYNYNNYYY", "YNYYNYYYYYNYYNNYYYNNNNY", "NNNYYNNNNNNNNNNYNYNNYNY", "NYNNNNYYNNYNNYYYNYNNYYN", "YYNNYYNYYNNYNNNYNYYYYYN", "YNYYYYYYNNYNYYYYNYYNYNN", "NNYNYYNNYYYNNNYYNNNYYYN", "NYNYYNYNNYYNYYYNNNYYYYN", "NNYNNYYNNNYNYNNNNYYYNNY", "NNYYNYNNYNNYYYYNNNNYNYN", "YNNNYYNYNYYNNYNNNNYNYYN", "NYYYNYYYYYNNYNYYNNNNYNN", "YYNNYNNNYYNYYYYNYNNNYNY", "NYYYYNYYNYNNYNYYYNNYYNN", "YYNNNYYYNNYNYYYNNNYYNYY", "YYNYNNYYNNNYNYYNNNYNYYY", "YNNNYNYYNYNNNNYYNNYYNYN", "YNNNYNYYNNNYNNYNYYNYNNY", "NNNYNNNYYNYNYYNYNNYNYNN"};
    int qualified = 37;
    int selected = 19;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 460193864700;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> points = {43875, -29965, -58638, 86526, -76891, -49086, 93822, 91349, -6591, 56576, -19816, -30409, -14430, 91309, -4585};
    vector<string> standings = {"NNYYNNYNYYYYNYN", "NNYYNNNNNYNNYNY", "NNYYNNYNNNNNYNN", "YYYNNNYNNNYYNYN", "YYYYNYNNNYNYYYN", "NNYYNYNYYYNNYNN", "YNYNNYYNYNYYNNN", "NYNNYYYYNNYNNYY", "NNNYNNNYNYYNNYN", "NNNYYYNNYNNNNNN", "YNNNYYNYNNYNYNY", "YNYYNYNNNYNNNYN", "NYYYNYNYNYYYYNN", "NNNYNYYYYNYNYYY", "YNNYYNNNYYYNYNY", "NNNNNNYNYYNYNNY", "YNNYNNYNNYYNYYN", "YYNYNNYYNYNNNNN", "YNNNNYYNYYYYNNY", "NYYNNNYNNNYYYNN", "YYYYNNNYNNYYNNN", "NNYNYNNYNNYYNYY", "NNNYNNYNYYNYNNN", "NYYYNNYYNYNNNNY", "YNYYYNYNNYNYNYN", "NNYYNNNNYYNYYNY", "NNNNNYYNNYNYNNY", "YYNNYNNYNYYNNNN", "NYNNNNNNNYYNYYN", "YYNYYNYNYNNYYNY", "NYYNNYNYYNYNNYN", "YNYNYNYYYNNNNNN"};
    int qualified = 26;
    int selected = 22;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 14260226;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> points = {-11573, -39699, -55872, -58686, 68180, -691, -48989, -37599, 21307, 8063, -41900, 883, 94103};
    vector<string> standings = {"YNYYYNNYYNNYN", "YNNYNYNYNYNNY", "YYNNNYNYNNNYN", "NNYNYNYNYYYNY", "YNNYYYNNNYYNN", "YYNNYYNYNNNNY", "NNNNNYYYNYYYN", "NNNYNYYYYYNNY", "NYNYNNNYNNNYY", "YYNYNYYYYNNYY", "YNYNYYYNYYYNN", "YNYNYYYNNNYYY", "NNYYYNYYYYNYN", "NNYYNNYNYNYNN", "NNYNYNYYYNNYN", "YNNYYYYNYYYYN", "YNYNNYYNYYNYN", "NYNNYYNNYNNYY", "NNYNYNYNNNNNY", "NYNYYNNYNNNYY", "NNNYNYNNNNNYY", "NYNYYYNYNYYNY", "YYNNNYNYNNNYN", "NNYNNYYNYNYNY", "NNNYNNNNNYYNY", "NYNYNNYYYYNYY", "NYNNYNNNYYNYY", "YNNNYNYYNYYYN", "YYYYYYNNNNNNY", "NNNYNYYYYYYYY", "YYNYNYYNYYNYN", "NYNNYNNYYYYYN", "YYNNNYYYNYNYN", "YNYYYYYNNYYYY", "NYNYYYNNNNNNN"};
    int qualified = 33;
    int selected = 11;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 417225888;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> points = {71740, -49961, -52040, 33533, 92761, -94864, 87566, 4685, -59509, -21310, 43761, 62172, 23545, -79327, 99788, 97812, 53892, 19727, 26804, 21766, 61135, 27507, 57974, -88407, 55953};
    vector<string> standings = {"NYNNNNYYNNNNYNYYNNYYNNYNN", "NNYNYNNYYNNNYYYNNNNYYYNYY", "NYYNYYYNYYNYYYYNNYNNNNYNY", "NYYNYYNYNNYNYYNNYNYNNYYYY", "NNNYYNNYYYYYNNNNNYYNYYNNN", "NNNNNYYNYNYYNYNYYYNNYNYYY", "YNNYNYNYYNYNNNNYYNYNYYYYN", "YYYYNYNNYNYYNNYYYNNNNYYYN", "NNNYYNYNYNYNNYNNNNYNYNNNN", "YNNNNYNYYYNNNYYNNYNNYNYNY", "NNNNYYNNYYNYNYYYYNNNYNNNY", "NNYNYYYNNNYYYYYNNNYNNYYYN", "YNNNYNYYYYNYNYYNYNNYNYYYY"};
    int qualified = 3;
    int selected = 2;
    RabbitProgramming* pObj = new RabbitProgramming();
    clock_t start = clock();
    long result = pObj->getTeams(points, standings, qualified, selected);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22840779&rd=14156&pm=10880
********************************************************************************
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
#define psb push_back 
#define mpr make_pair 
#define infinity 1000000010 
#define mineps 1e-8 
#define sqr(x) ((x)*(x)) 
#define MIN(x,y) ((x)<(y)?(x):(y)) 
#define MAX(x,y) ((x)>(y)?(x):(y)) 
#define LL long long 
#define UC unsigned long 
#define UI unsigned int 
#define pi 3.1415926535898  
inline int cmp(double x) { 
  if (fabs(x) < mineps) return 0; 
  else if (x < 0) return -1; 
  else return 1;        
} 
////////////////////////////////////////////// 
//Start here 
 
#define maxn 55 
 
class rabbit { 
  public: 
    LL s0, s1; 
    int no; 
    rabbit() {} 
    rabbit(LL xs0, LL xs1, int xno) {s0=xs0, s1=xs1, no=xno; } 
    friend bool operator< (rabbit a, rabbit b) {return a.s1 < b.s1 || a.s1 == b.s1 && a.no > b.no; }       
}; 
 
int ps, n, Q, S;  
int a[maxn]; 
bool submit[maxn][maxn]; 
int success[maxn], fail[maxn]; 
LL ans; 
 
LL f[maxn][maxn][maxn]; //p, num, qualified 
vector<rabbit> rab; 
 
LL doit(int stp) { 
             
  LL lowscore = rab[stp].s1; 
  int lowno = rab[stp].no; 
   
  memset(f,0,sizeof(f)); 
  f[stp][1][1] = 1; 
  for(int i = stp+1; i < n; i++) { 
    LL s0 = rab[i].s0, s1 = rab[i].s1, no = rab[i].no; 
    for(int num = 0; num <= S; num++) 
      for(int qual = num; qual <= Q; qual++) 
        if (f[i-1][num][qual] > 0) { 
          LL orig = f[i-1][num][qual]; 
          //choose this one 
          if (num < S && qual < Q) f[i][num+1][qual+1] += orig; 
          //do not choose this one 
          int tqual = qual; 
          if (s0 > lowscore || s0 == lowscore && no < lowno) tqual ++; 
          if (tqual <= Q) f[i][num][tqual] += orig; 
        }         
  } 
   
  LL ans = 0; 
  for(int qual = S; qual <= Q; qual++) 
    ans += f[n-1][S][qual]; 
  return ans; 
             
} 
 
class RabbitProgramming{ 
public: 
  long long getTeams(vector <int> points, vector <string> standings, int qualified, int selected){ 
     
    ps = points.size(); Q = qualified; S = selected; n = standings.size(); 
    for(int i = 0; i < ps; i++)  a[i] = points[i]; 
    for(int i = 0; i < n; i++) 
      for(int j = 0; j < ps; j++) 
        if (standings[i][j] == 'Y') submit[i][j] = true; else submit[i][j] = false; 
         
      memset(success,0,sizeof(success)); 
      memset(fail,0,sizeof(fail)); 
      for(int i = 0; i < n; i++) { 
        int s0 = 0, s1 = 0; 
        for(int j = 0; j < ps; j++) 
          if (submit[i][j]) { 
            if (a[j] > 0) s0 += a[j], s1 += a[j]; 
            else s1 += -a[j];                   
          }         
        success[i] = s1; 
        fail[i] = s0; 
      } 
       
      ans = 0; 
      rab.clear(); 
      for(int i = 0; i < n; i++) 
        rab.psb(rabbit(fail[i], success[i], i)); 
      sort(rab.begin(), rab.end()); 
      for(int i = 0; i < n; i++) { 
        LL tans = doit(i); 
        ans += tans;         
      } 
      return ans; 
     
  } 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/