/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5883
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

class ManhattanDistance {
public:
    double minDistance(int distance, int width, string start, string target);
};

double ManhattanDistance::minDistance(int distance, int width, string start, string target) {
    double ret;
    return ret;
}


int test0() {
    int distance = 100;
    int width = 10;
    string start = "B1";
    string target = "B4";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 300.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int distance = 100;
    int width = 20;
    string start = "F3";
    string target = "G2";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 181.10770276274835;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int distance = 1000;
    int width = 1;
    string start = "E18";
    string target = "P9";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 19982.008508256098;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int distance = 8;
    int width = 4;
    string start = "B10";
    string target = "E13";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 35.27652763864304;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int distance = 120;
    int width = 30;
    string start = "C2";
    string target = "D48";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 5584.950296406279;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int distance = 750;
    int width = 120;
    string start = "R13";
    string target = "R13";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int distance = 1000;
    int width = 100;
    string start = "A1";
    string target = "Z50";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 69207.11557621435;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int distance = 1000;
    int width = 10;
    string start = "A50";
    string target = "Z1";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 73501.91610908862;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int distance = 1000;
    int width = 400;
    string start = "Z50";
    string target = "A1";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 58330.68063834228;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int distance = 800;
    int width = 100;
    string start = "C32";
    string target = "Y10";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 31201.81444767227;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int distance = 2;
    int width = 1;
    string start = "H30";
    string target = "G32";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 4.576491222541475;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int distance = 99;
    int width = 33;
    string start = "X50";
    string target = "G49";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1724.1214018374471;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int distance = 1000;
    int width = 1;
    string start = "Q1";
    string target = "Q50";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 49000.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int distance = 900;
    int width = 400;
    string start = "Z42";
    string target = "A42";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 22500.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int distance = 555;
    int width = 42;
    string start = "G5";
    string target = "P1";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 6888.885625199891;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int distance = 467;
    int width = 58;
    string start = "P22";
    string target = "L26";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 3356.469988244541;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int distance = 272;
    int width = 8;
    string start = "L29";
    string target = "Y45";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 7682.966333576751;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int distance = 759;
    int width = 334;
    string start = "I31";
    string target = "Y24";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 13877.80075181118;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int distance = 195;
    int width = 16;
    string start = "Q47";
    string target = "E29";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 5480.898437733431;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int distance = 596;
    int width = 5;
    string start = "H32";
    string target = "N45";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 11264.186565440377;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int distance = 799;
    int width = 199;
    string start = "A38";
    string target = "R10";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 30083.127280259974;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int distance = 771;
    int width = 221;
    string start = "T17";
    string target = "U45";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 21960.883123372972;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int distance = 647;
    int width = 12;
    string start = "F50";
    string target = "J24";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 19314.522591544606;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int distance = 415;
    int width = 132;
    string start = "J8";
    string target = "T38";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 14331.939957484847;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int distance = 818;
    int width = 309;
    string start = "U4";
    string target = "E44";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 37764.367305646316;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int distance = 273;
    int width = 13;
    string start = "U8";
    string target = "Y48";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 11909.423589715932;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int distance = 121;
    int width = 43;
    string start = "N1";
    string target = "S17";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2179.9329127395886;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int distance = 752;
    int width = 97;
    string start = "V13";
    string target = "B32";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 25909.648767696297;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int distance = 40;
    int width = 3;
    string start = "Q30";
    string target = "U15";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 736.6101241784766;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int distance = 241;
    int width = 1;
    string start = "U13";
    string target = "O14";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1685.002429345011;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int distance = 514;
    int width = 247;
    string start = "E48";
    string target = "Q6";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 23229.514669171138;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int distance = 183;
    int width = 28;
    string start = "R5";
    string target = "D15";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 3876.770800234099;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int distance = 252;
    int width = 10;
    string start = "M23";
    string target = "P35";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 3720.769867168054;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int distance = 851;
    int width = 299;
    string start = "U24";
    string target = "U24";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int distance = 675;
    int width = 236;
    string start = "Z14";
    string target = "F45";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 26979.98241654982;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int distance = 472;
    int width = 220;
    string start = "B22";
    string target = "S11";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 9892.453947334456;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int distance = 378;
    int width = 155;
    string start = "C12";
    string target = "X9";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 8302.296716584588;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int distance = 192;
    int width = 57;
    string start = "T47";
    string target = "N42";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1650.7915877787095;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int distance = 826;
    int width = 322;
    string start = "A17";
    string target = "W7";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 21288.019593736564;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int distance = 214;
    int width = 55;
    string start = "S9";
    string target = "Q32";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 5149.74734008027;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int distance = 403;
    int width = 151;
    string start = "H46";
    string target = "G23";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 9413.02981598612;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int distance = 63;
    int width = 20;
    string start = "J1";
    string target = "U11";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1008.9191257861272;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int distance = 113;
    int width = 26;
    string start = "P47";
    string target = "E8";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 5129.968023189821;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int distance = 558;
    int width = 136;
    string start = "Q50";
    string target = "E28";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 16101.145368072841;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int distance = 521;
    int width = 103;
    string start = "N8";
    string target = "G10";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 4308.310978428753;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int distance = 458;
    int width = 85;
    string start = "L21";
    string target = "P33";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 6697.849447392926;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int distance = 96;
    int width = 40;
    string start = "V2";
    string target = "K12";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1464.7285022255876;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int distance = 986;
    int width = 336;
    string start = "L40";
    string target = "X10";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 34662.02053208826;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int distance = 70;
    int width = 14;
    string start = "K2";
    string target = "F33";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2389.788462037948;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int distance = 307;
    int width = 62;
    string start = "V29";
    string target = "S15";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 4874.425198477547;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int distance = 704;
    int width = 175;
    string start = "U50";
    string target = "Z20";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 23049.873964975322;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int distance = 921;
    int width = 306;
    string start = "Q2";
    string target = "Z21";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 21187.74533744986;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int distance = 826;
    int width = 240;
    string start = "I47";
    string target = "C41";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 7764.675870778954;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int distance = 171;
    int width = 8;
    string start = "J19";
    string target = "U37";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 4786.613576563116;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int distance = 864;
    int width = 289;
    string start = "U12";
    string target = "T33";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 18500.885965256486;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int distance = 11;
    int width = 5;
    string start = "V22";
    string target = "I46";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 312.07424175196263;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int distance = 856;
    int width = 339;
    string start = "G9";
    string target = "N40";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 28608.55889240921;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int distance = 645;
    int width = 66;
    string start = "S14";
    string target = "B33";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 21099.540796409943;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int distance = 607;
    int width = 241;
    string start = "E14";
    string target = "W29";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 14839.153479536184;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int distance = 204;
    int width = 102;
    string start = "J26";
    string target = "F21";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1332.3008048715647;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int distance = 378;
    int width = 176;
    string start = "E6";
    string target = "X9";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 7478.79697530916;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int distance = 491;
    int width = 44;
    string start = "X17";
    string target = "K4";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 11718.879281220667;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int distance = 810;
    int width = 169;
    string start = "S7";
    string target = "G13";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 12742.277378749617;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int distance = 559;
    int width = 210;
    string start = "J44";
    string target = "Z19";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 17755.827982560648;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int distance = 697;
    int width = 55;
    string start = "R32";
    string target = "Z24";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 10361.05166748643;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int distance = 100;
    int width = 1;
    string start = "A1";
    string target = "Z13";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 3676.0899147673745;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int distance = 1000;
    int width = 500;
    string start = "A1";
    string target = "D50";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 49645.019201320465;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int distance = 100;
    int width = 20;
    string start = "F3";
    string target = "G2";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 181.10770276274835;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int distance = 1000;
    int width = 500;
    string start = "A50";
    string target = "Z24";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 36229.37110822501;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int distance = 121;
    int width = 39;
    string start = "C2";
    string target = "X47";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 6606.680462291629;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int distance = 1000;
    int width = 3;
    string start = "A3";
    string target = "Z49";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 70850.1782133365;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int distance = 8;
    int width = 4;
    string start = "B10";
    string target = "E13";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 35.27652763864304;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int distance = 917;
    int width = 317;
    string start = "Z7";
    string target = "A49";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 48739.62248628961;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int distance = 120;
    int width = 40;
    string start = "A7";
    string target = "F49";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 5291.358952474308;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int distance = 213;
    int width = 89;
    string start = "A3";
    string target = "F32";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 6512.522419441073;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int distance = 1000;
    int width = 1;
    string start = "A1";
    string target = "Z50";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 73950.01901601092;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int distance = 1000;
    int width = 500;
    string start = "A1";
    string target = "Z50";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 56332.108232870785;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int distance = 100;
    int width = 50;
    string start = "C5";
    string target = "Z9";
    ManhattanDistance* pObj = new ManhattanDistance();
    clock_t start = clock();
    double result = pObj->minDistance(distance, width, start, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2392.416121959579;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=8069&pm=5883
********************************************************************************
// I think it is good to submit wrong solutions sometimes to give others challenging opportunities. 
#include <algorithm> 
#include <string> 
#include <math.h> 
using namespace std; 
 
typedef long double ld; 
 
#define LS < 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
#line 3 "ManhattanDistance.cc" 
 
ld hypat(ld x, ld y) { 
  return hypot(x,y); // x+y; 
  } 
 
class ManhattanDistance { 
  public: 
  double minDistance(int distance, int width, string start, string target) { 
    // !FDI 
    int x0, y0, x1, y1; char c0, c1; 
    x0 = 0; x1 = 0; 
    sscanf(start .c_str(), "%c%d", &c0, &y0); x0 = c0; 
    sscanf(target.c_str(), "%c%d", &c1, &y1); x1 = c1; 
    x1 -= x0; y1 -= y0; 
    if(x1 < 0) x1 = -x1; 
    if(y1 < 0) y1 = -y1; 
    if(y1 > x1) swap(x1, y1); 
    if(y1 == 0) return distance * x1; 
    long double fr[80][80]; 
    distance *= 2; 
    FOR(y,0,y1) FOR(x,0,x1) { 
      if(x == 0) fr[y][x] = hypat(width, distance * (y+1) - width); 
      else { 
        fr[y][x] =  
          hypat(width, distance * x - width) + hypat(2*width, distance * (y+1) - width*2); 
        FOR(py,0,y) FOR(px,0,x) 
        fr[y][x] <?= 
          fr[py][px] 
          + hypat(2*width, distance * (y-py) - 2*width) 
          + hypat(2*width, distance * (x-px) - 2*width); 
        } 
      } 
    printf("v = %Lf\n", fr[0][0]); 
    ld best = 1000000000; 
    FOR(x,0,x1) best <?=  
      fr[y1-1][x] + hypat((x1-x) * distance - width, width); 
    return best/2; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/