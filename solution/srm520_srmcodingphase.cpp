/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11381
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

class SRMCodingPhase {
public:
    int countScore(vector<int> points, vector<int> skills, int luck);
};

int SRMCodingPhase::countScore(vector<int> points, vector<int> skills, int luck) {
    int ret;
    return ret;
}


int test0() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {10, 25, 40};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1310;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> points = {300, 600, 900};
    vector<int> skills = {30, 65, 90};
    int luck = 25;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 680;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> points = {250, 450, 1100};
    vector<int> skills = {50, 70, 90};
    int luck = 20;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 540;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> points = {250, 550, 950};
    vector<int> skills = {10, 25, 40};
    int luck = 75;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1736;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> points = {256, 512, 1024};
    vector<int> skills = {35, 30, 25};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1216;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> points = {300, 600, 1100};
    vector<int> skills = {80, 90, 100};
    int luck = 4;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> points = {250, 450, 900};
    vector<int> skills = {1, 1, 1};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1586;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> points = {271, 549, 942};
    vector<int> skills = {75, 100, 100};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> points = {256, 555, 999};
    vector<int> skills = {100, 75, 100};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 255;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> points = {300, 600, 1100};
    vector<int> skills = {100, 100, 75};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> points = {299, 460, 1002};
    vector<int> skills = {77, 77, 77};
    int luck = 1;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {26, 26, 26};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1188;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> points = {300, 500, 999};
    vector<int> skills = {75, 75, 75};
    int luck = 100;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1295;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> points = {300, 600, 1100};
    vector<int> skills = {100, 100, 100};
    int luck = 100;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1092;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {76, 76, 76};
    int luck = 1;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {40, 100, 35};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 890;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {100, 35, 40};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1040;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {25, 50, 100};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> points = {266, 457, 991};
    vector<int> skills = {80, 82, 61};
    int luck = 78;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1184;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> points = {253, 492, 1043};
    vector<int> skills = {75, 71, 30};
    int luck = 9;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 875;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> points = {275, 468, 1064};
    vector<int> skills = {92, 39, 72};
    int luck = 98;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1476;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> points = {296, 538, 930};
    vector<int> skills = {25, 74, 7};
    int luck = 54;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1602;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> points = {285, 564, 963};
    vector<int> skills = {33, 54, 94};
    int luck = 33;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 699;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> points = {288, 498, 910};
    vector<int> skills = {30, 12, 3};
    int luck = 28;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1654;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> points = {269, 600, 1098};
    vector<int> skills = {92, 46, 95};
    int luck = 17;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 484;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> points = {282, 501, 910};
    vector<int> skills = {35, 15, 97};
    int luck = 59;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1047;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> points = {296, 587, 958};
    vector<int> skills = {100, 36, 71};
    int luck = 5;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 463;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> points = {284, 503, 955};
    vector<int> skills = {12, 7, 13};
    int luck = 100;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1728;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> points = {284, 590, 923};
    vector<int> skills = {12, 62, 66};
    int luck = 92;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1625;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> points = {269, 479, 1053};
    vector<int> skills = {18, 94, 16};
    int luck = 20;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1288;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> points = {267, 599, 933};
    vector<int> skills = {52, 59, 4};
    int luck = 3;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1288;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> points = {256, 481, 994};
    vector<int> skills = {13, 95, 45};
    int luck = 99;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1537;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> points = {264, 466, 988};
    vector<int> skills = {54, 50, 29};
    int luck = 15;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1142;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> points = {266, 556, 922};
    vector<int> skills = {97, 15, 59};
    int luck = 16;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1074;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> points = {284, 475, 993};
    vector<int> skills = {52, 19, 45};
    int luck = 1;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1040;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> points = {261, 594, 937};
    vector<int> skills = {47, 26, 62};
    int luck = 14;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1043;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> points = {262, 514, 927};
    vector<int> skills = {80, 57, 68};
    int luck = 38;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 687;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> points = {293, 496, 997};
    vector<int> skills = {95, 34, 58};
    int luck = 77;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1429;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> points = {271, 529, 975};
    vector<int> skills = {47, 6, 28};
    int luck = 57;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1719;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> points = {252, 461, 1093};
    vector<int> skills = {79, 95, 45};
    int luck = 71;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1274;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> points = {296, 470, 902};
    vector<int> skills = {46, 15, 12};
    int luck = 34;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1582;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> points = {259, 561, 904};
    vector<int> skills = {80, 62, 2};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1201;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> points = {280, 476, 964};
    vector<int> skills = {43, 12, 29};
    int luck = 69;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1682;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> points = {253, 471, 919};
    vector<int> skills = {63, 98, 85};
    int luck = 90;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1050;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> points = {253, 517, 1033};
    vector<int> skills = {33, 79, 58};
    int luck = 80;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1318;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> points = {270, 504, 1050};
    vector<int> skills = {12, 35, 75};
    int luck = 10;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 650;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> points = {290, 536, 1034};
    vector<int> skills = {41, 42, 37};
    int luck = 54;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1674;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> points = {292, 581, 950};
    vector<int> skills = {14, 23, 86};
    int luck = 9;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 789;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> points = {264, 487, 1016};
    vector<int> skills = {19, 88, 89};
    int luck = 30;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 544;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> points = {257, 533, 1021};
    vector<int> skills = {3, 99, 99};
    int luck = 39;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 792;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> points = {272, 527, 1097};
    vector<int> skills = {39, 1, 32};
    int luck = 68;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1880;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> points = {287, 551, 1026};
    vector<int> skills = {16, 69, 70};
    int luck = 5;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 506;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> points = {274, 559, 906};
    vector<int> skills = {87, 86, 69};
    int luck = 94;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1217;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> points = {255, 554, 904};
    vector<int> skills = {82, 5, 97};
    int luck = 26;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 685;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> points = {291, 549, 1037};
    vector<int> skills = {6, 94, 26};
    int luck = 21;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1276;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> points = {252, 596, 980};
    vector<int> skills = {88, 96, 51};
    int luck = 15;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 692;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> points = {270, 555, 1072};
    vector<int> skills = {62, 96, 91};
    int luck = 30;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 584;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> points = {276, 491, 1027};
    vector<int> skills = {57, 98, 72};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 451;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> points = {278, 526, 1045};
    vector<int> skills = {56, 83, 78};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> points = {288, 547, 1022};
    vector<int> skills = {44, 21, 12};
    int luck = 1;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1397;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> points = {296, 490, 910};
    vector<int> skills = {13, 65, 1};
    int luck = 100;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1682;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> points = {257, 580, 907};
    vector<int> skills = {22, 49, 31};
    int luck = 32;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1504;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> points = {278, 499, 962};
    vector<int> skills = {13, 81, 34};
    int luck = 10;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1022;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> points = {294, 569, 1092};
    vector<int> skills = {94, 55, 82};
    int luck = 90;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1469;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> points = {279, 458, 976};
    vector<int> skills = {66, 99, 66};
    int luck = 41;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 776;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> points = {294, 571, 983};
    vector<int> skills = {55, 75, 34};
    int luck = 7;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 767;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> points = {285, 486, 1051};
    vector<int> skills = {82, 68, 50};
    int luck = 19;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 803;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> points = {271, 505, 919};
    vector<int> skills = {21, 30, 70};
    int luck = 23;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 772;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> points = {250, 550, 950};
    vector<int> skills = {10, 25, 40};
    int luck = 75;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1736;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> points = {300, 600, 1100};
    vector<int> skills = {80, 90, 100};
    int luck = 4;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> points = {300, 600, 900};
    vector<int> skills = {50, 50, 100};
    int luck = 25;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 700;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> points = {300, 600, 900};
    vector<int> skills = {80, 30, 30};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1140;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> points = {300, 600, 900};
    vector<int> skills = {30, 65, 90};
    int luck = 25;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 680;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {77, 2, 2};
    int luck = 4;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1488;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> points = {250, 500, 900};
    vector<int> skills = {25, 50, 100};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> points = {284, 568, 1066};
    vector<int> skills = {65, 46, 28};
    int luck = 68;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1760;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> points = {250, 450, 900};
    vector<int> skills = {100, 55, 3};
    int luck = 65;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1338;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> points = {250, 450, 1100};
    vector<int> skills = {74, 74, 100};
    int luck = 85;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 980;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> points = {300, 500, 1000};
    vector<int> skills = {10, 10, 10};
    int luck = 5;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1700;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> points = {250, 550, 950};
    vector<int> skills = {10, 25, 40};
    int luck = 55;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1686;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {76, 76, 75};
    int luck = 1;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 408;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {75, 75, 75};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {76, 76, 76};
    int luck = 75;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 992;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {30, 99, 99};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> points = {250, 450, 1100};
    vector<int> skills = {26, 26, 100};
    int luck = 25;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 644;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {1, 99, 40};
    int luck = 60;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1240;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {71, 71, 5};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 960;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> points = {250, 450, 900};
    vector<int> skills = {65, 100, 100};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> points = {300, 450, 1100};
    vector<int> skills = {1, 74, 1};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1390;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> points = {250, 450, 1100};
    vector<int> skills = {42, 32, 2};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1406;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {75, 100, 5};
    int luck = 10;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1104;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {10, 10, 10};
    int luck = 11;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1690;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> points = {250, 450, 900};
    vector<int> skills = {1, 1, 1};
    int luck = 1;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1586;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> points = {250, 450, 900};
    vector<int> skills = {10, 99, 99};
    int luck = 20;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 248;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {100, 100, 100};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> points = {250, 500, 1100};
    vector<int> skills = {30, 45, 30};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1180;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> points = {250, 550, 950};
    vector<int> skills = {60, 60, 60};
    int luck = 60;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1256;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {10, 100, 10};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1150;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> points = {250, 450, 900};
    vector<int> skills = {100, 100, 100};
    int luck = 50;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {90, 90, 10};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 920;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> points = {250, 450, 900};
    vector<int> skills = {60, 100, 100};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {10, 25, 40};
    int luck = 40;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1626;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> points = {250, 450, 1100};
    vector<int> skills = {35, 40, 76};
    int luck = 4;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 524;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> points = {300, 500, 1000};
    vector<int> skills = {15, 75, 60};
    int luck = 75;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1526;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {100, 45, 50};
    int luck = 10;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 680;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {20, 20, 20};
    int luck = 20;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1626;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {75, 100, 100};
    int luck = 1;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> points = {300, 600, 900};
    vector<int> skills = {31, 26, 21};
    int luck = 74;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1784;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> points = {250, 500, 990};
    vector<int> skills = {30, 65, 10};
    int luck = 11;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1230;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> points = {300, 600, 900};
    vector<int> skills = {65, 65, 65};
    int luck = 65;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1236;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> points = {300, 600, 900};
    vector<int> skills = {40, 40, 40};
    int luck = 100;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1752;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {80, 80, 80};
    int luck = 100;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1256;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> points = {266, 511, 1022};
    vector<int> skills = {11, 14, 50};
    int luck = 50;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1717;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {100, 100, 1};
    int luck = 1;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 992;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {30, 30, 30};
    int luck = 15;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1450;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {40, 40, 40};
    int luck = 20;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1180;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> points = {250, 450, 900};
    vector<int> skills = {10, 10, 10};
    int luck = 12;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1544;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> points = {256, 512, 1024};
    vector<int> skills = {35, 30, 25};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1216;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> points = {250, 550, 950};
    vector<int> skills = {20, 30, 40};
    int luck = 50;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1626;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> points = {300, 600, 900};
    vector<int> skills = {25, 51, 76};
    int luck = 1;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 650;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {1, 100, 1};
    int luck = 1;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1240;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> points = {300, 450, 1000};
    vector<int> skills = {40, 100, 40};
    int luck = 50;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1234;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> points = {250, 500, 1000};
    vector<int> skills = {75, 76, 75};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> points = {250, 450, 1100};
    vector<int> skills = {80, 90, 75};
    int luck = 75;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 1092;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> points = {300, 600, 900};
    vector<int> skills = {100, 100, 75};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> points = {300, 600, 900};
    vector<int> skills = {1, 1, 75};
    int luck = 0;
    SRMCodingPhase* pObj = new SRMCodingPhase();
    clock_t start = clock();
    int result = pObj->countScore(points, skills, luck);
    clock_t end = clock();
    delete pObj;
    int expected = 894;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14545&pm=11381
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
 
class SRMCodingPhase {
public:
  int countScore(vector <int>, vector <int>, int);
};
 
int SRMCodingPhase::countScore(vector <int> pts, vector <int> a, int luck) {
  int x,y,z,t,i,p,q,ans = 0,b[5],c[5];
  for (x=0;x<a[0];x++)
    for (y=0;y<a[1];y++)
      for (z=0;z<a[2];z++) {
        if (x+y+z > luck) continue;
        b[0] = a[0]-x; b[1] = a[1]-y; b[2] = a[2]-z;
        c[0] = pts[0]-b[0]*2;
        c[1] = pts[1]-b[1]*4;
        c[2] = pts[2]-b[2]*8;
        for (t=0;t<8;t++) {
          p = 0; q = 0;
          for (i=0;i<3;i++)
            if (t & (1 << i)) p += b[i], q += c[i];
          if (p <= 75 && q > ans) ans = q;
        }
      }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/