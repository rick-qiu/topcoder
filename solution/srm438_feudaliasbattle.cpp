/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10360
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

class FeudaliasBattle {
public:
    double getMinimumTime(vector<int> baseX, vector<int> baseY, vector<int> siloX, vector<int> siloY, int takeOffTime, int rechargeTime, int missileSpeed);
};

double FeudaliasBattle::getMinimumTime(vector<int> baseX, vector<int> baseY, vector<int> siloX, vector<int> siloY, int takeOffTime, int rechargeTime, int missileSpeed) {
    double ret;
    return ret;
}


int test0() {
    vector<int> baseX = {100, 500};
    vector<int> baseY = {100, 100};
    vector<int> siloX = {100, 500};
    vector<int> siloY = {300, 300};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 200.1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 500};
    vector<int> siloX = {100, 500};
    vector<int> siloY = {300, 300};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 210.2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 500};
    vector<int> siloX = {100, 500};
    vector<int> siloY = {300, 300};
    int takeOffTime = 6;
    int rechargeTime = 20;
    int missileSpeed = 20;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 22.4606797749979;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 200};
    vector<int> siloX = {100, 100};
    vector<int> siloY = {300, 400};
    int takeOffTime = 30;
    int rechargeTime = 500;
    int missileSpeed = 10;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 20.5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 200};
    vector<int> siloX = {100, 100};
    vector<int> siloY = {400, 300};
    int takeOffTime = 30;
    int rechargeTime = 500;
    int missileSpeed = 10;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 20.5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {1000, 100};
    vector<int> siloX = {1000, 1000};
    vector<int> siloY = {1000, 100};
    int takeOffTime = 59;
    int rechargeTime = 500;
    int missileSpeed = 30;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 30.983333333333334;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> baseX = {0, 0};
    vector<int> baseY = {0, 1};
    vector<int> siloX = {1000000, 1000000};
    vector<int> siloY = {999999, 1000000};
    int takeOffTime = 30;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1414213.3552664907;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> baseX = {401, 208};
    vector<int> baseY = {622, 603};
    vector<int> siloX = {51, 387};
    vector<int> siloY = {411, 828};
    int takeOffTime = 59;
    int rechargeTime = 518;
    int missileSpeed = 1941;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1111118724871378;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> baseX = {901, 411};
    vector<int> baseY = {123, 218};
    vector<int> siloX = {965, 300};
    vector<int> siloY = {430, 367};
    int takeOffTime = 40;
    int rechargeTime = 86;
    int missileSpeed = 691;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1205017806688429;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> baseX = {916, 90};
    vector<int> baseY = {142, 186};
    vector<int> siloX = {937, 847};
    vector<int> siloY = {667, 699};
    int takeOffTime = 58;
    int rechargeTime = 741;
    int missileSpeed = 196;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 5.6322256524398915;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> baseX = {668, 131};
    vector<int> baseY = {68, 187};
    vector<int> siloX = {910, 928};
    vector<int> siloY = {882, 159};
    int takeOffTime = 8;
    int rechargeTime = 335;
    int missileSpeed = 475;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9211468046748625;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> baseX = {472, 989};
    vector<int> baseY = {257, 165};
    vector<int> siloX = {360, 658};
    vector<int> siloY = {942, 628};
    int takeOffTime = 39;
    int rechargeTime = 30;
    int missileSpeed = 888;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4316394309814018;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> baseX = {358, 157};
    vector<int> baseY = {872, 469};
    vector<int> siloX = {41, 579};
    vector<int> siloY = {302, 154};
    int takeOffTime = 9;
    int rechargeTime = 706;
    int missileSpeed = 866;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.903139170511309;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> baseX = {484, 125};
    vector<int> baseY = {111, 439};
    vector<int> siloX = {257, 299};
    vector<int> siloY = {266, 676};
    int takeOffTime = 43;
    int rechargeTime = 704;
    int missileSpeed = 329;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6103302099008272;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> baseX = {714, 368};
    vector<int> baseY = {264, 617};
    vector<int> siloX = {592, 263};
    vector<int> siloY = {932, 165};
    int takeOffTime = 57;
    int rechargeTime = 107;
    int missileSpeed = 741;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.573128233414221;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> baseX = {793, 325};
    vector<int> baseY = {896, 465};
    vector<int> siloX = {197, 22};
    vector<int> siloY = {345, 150};
    int takeOffTime = 44;
    int rechargeTime = 953;
    int missileSpeed = 667;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9502380226015523;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> baseX = {656, 725};
    vector<int> baseY = {981, 385};
    vector<int> siloX = {454, 92};
    vector<int> siloY = {416, 840};
    int takeOffTime = 11;
    int rechargeTime = 98;
    int missileSpeed = 966;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7851530985632403;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> baseX = {46, 91};
    vector<int> baseY = {49, 61};
    vector<int> siloX = {55, 88};
    vector<int> siloY = {96, 15};
    int takeOffTime = 23;
    int rechargeTime = 927;
    int missileSpeed = 1131;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4256445132237149;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> baseX = {98, 26};
    vector<int> baseY = {7, 36};
    vector<int> siloX = {24, 6};
    vector<int> siloY = {91, 97};
    int takeOffTime = 18;
    int rechargeTime = 858;
    int missileSpeed = 868;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.42897052506135047;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> baseX = {53, 53};
    vector<int> baseY = {61, 28};
    vector<int> siloX = {81, 31};
    vector<int> siloY = {84, 18};
    int takeOffTime = 10;
    int rechargeTime = 842;
    int missileSpeed = 1340;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1937079665651643;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> baseX = {14, 960};
    vector<int> baseY = {483, 197};
    vector<int> siloX = {869, 475};
    vector<int> siloY = {983, 218};
    int takeOffTime = 41;
    int rechargeTime = 396;
    int missileSpeed = 1719;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.143630178278794;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> baseX = {29, 98};
    vector<int> baseY = {770, 928};
    vector<int> siloX = {515, 89};
    vector<int> siloY = {774, 540};
    int takeOffTime = 23;
    int rechargeTime = 613;
    int missileSpeed = 1633;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6555487891803413;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> baseX = {250, 155};
    vector<int> baseY = {444, 723};
    vector<int> siloX = {986, 909};
    vector<int> siloY = {628, 67};
    int takeOffTime = 50;
    int rechargeTime = 1000;
    int missileSpeed = 782;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9029146346369683;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> baseX = {512, 569};
    vector<int> baseY = {750, 807};
    vector<int> siloX = {248, 17};
    vector<int> siloY = {313, 317};
    int takeOffTime = 38;
    int rechargeTime = 777;
    int missileSpeed = 761;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4975356537210573;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> baseX = {626, 580};
    vector<int> baseY = {14, 950};
    vector<int> siloX = {523, 361};
    vector<int> siloY = {970, 491};
    int takeOffTime = 56;
    int rechargeTime = 551;
    int missileSpeed = 1206;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3857946911047354;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> baseX = {580, 734};
    vector<int> baseY = {121, 542};
    vector<int> siloX = {96, 472};
    vector<int> siloY = {628, 538};
    int takeOffTime = 10;
    int rechargeTime = 175;
    int missileSpeed = 1101;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7513806951097703;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> baseX = {102, 99};
    vector<int> baseY = {102, 99};
    vector<int> siloX = {100, 1000};
    vector<int> siloY = {100, 1000};
    int takeOffTime = 5;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 6.580880229039762;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> baseX = {110, 99};
    vector<int> baseY = {110, 99};
    vector<int> siloX = {100, 1000};
    vector<int> siloY = {100, 1000};
    int takeOffTime = 5;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 14.225468957064285;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> baseX = {99, 110};
    vector<int> baseY = {99, 110};
    vector<int> siloX = {100, 1000};
    vector<int> siloY = {100, 1000};
    int takeOffTime = 5;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 14.225468957064285;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> baseX = {99, 102};
    vector<int> baseY = {99, 102};
    vector<int> siloX = {100, 1000};
    vector<int> siloY = {100, 1000};
    int takeOffTime = 5;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 6.580880229039762;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> baseX = {110, 99};
    vector<int> baseY = {110, 99};
    vector<int> siloX = {1000, 100};
    vector<int> siloY = {1000, 100};
    int takeOffTime = 5;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 14.225468957064285;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> baseX = {102, 99};
    vector<int> baseY = {102, 99};
    vector<int> siloX = {1000, 100};
    vector<int> siloY = {1000, 100};
    int takeOffTime = 60;
    int rechargeTime = 75;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 78.41421356237309;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> baseX = {99, 110};
    vector<int> baseY = {99, 110};
    vector<int> siloX = {1000, 100};
    vector<int> siloY = {1000, 100};
    int takeOffTime = 5;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 14.225468957064285;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> baseX = {99, 102};
    vector<int> baseY = {99, 102};
    vector<int> siloX = {1000, 100};
    vector<int> siloY = {1000, 100};
    int takeOffTime = 5;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 6.580880229039762;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> baseX = {110, 99};
    vector<int> baseY = {110, 99};
    vector<int> siloX = {1000, 100};
    vector<int> siloY = {1000, 100};
    int takeOffTime = 5;
    int rechargeTime = 5;
    int missileSpeed = 1000;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3419834038453877;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> baseX = {99, 110};
    vector<int> baseY = {99, 110};
    vector<int> siloX = {100, 1000};
    vector<int> siloY = {100, 1000};
    int takeOffTime = 5;
    int rechargeTime = 5;
    int missileSpeed = 1000;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3419834038453877;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> baseX = {99, 110};
    vector<int> baseY = {99, 110};
    vector<int> siloX = {1000, 100};
    vector<int> siloY = {1000, 100};
    int takeOffTime = 5;
    int rechargeTime = 5;
    int missileSpeed = 1000;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3419834038453877;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> baseX = {1, 499};
    vector<int> baseY = {1, 499};
    vector<int> siloX = {500, 100};
    vector<int> siloY = {500, 100};
    int takeOffTime = 5;
    int rechargeTime = 5;
    int missileSpeed = 1000;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22334047600826973;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> baseX = {666, 592};
    vector<int> baseY = {467, 945};
    vector<int> siloX = {324, 72};
    vector<int> siloY = {277, 39};
    int takeOffTime = 18;
    int rechargeTime = 5;
    int missileSpeed = 12;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 60.279626170521894;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> baseX = {311, 158};
    vector<int> baseY = {665, 792};
    vector<int> siloX = {327, 72};
    vector<int> siloY = {282, 277};
    int takeOffTime = 39;
    int rechargeTime = 75;
    int missileSpeed = 4;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 131.1828023908167;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> baseX = {493, 898};
    vector<int> baseY = {892, 825};
    vector<int> siloX = {444, 842};
    vector<int> siloY = {510, 995};
    int takeOffTime = 43;
    int rechargeTime = 428;
    int missileSpeed = 16;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 24.787282181231305;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> baseX = {549, 138};
    vector<int> baseY = {861, 510};
    vector<int> siloX = {784, 527};
    vector<int> siloY = {170, 950};
    int takeOffTime = 4;
    int rechargeTime = 54;
    int missileSpeed = 4;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 146.8916049435139;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> baseX = {580, 655};
    vector<int> baseY = {435, 102};
    vector<int> siloX = {35, 692};
    vector<int> siloY = {5, 861};
    int takeOffTime = 8;
    int rechargeTime = 299;
    int missileSpeed = 10;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 62.887536379822585;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> baseX = {799, 593};
    vector<int> baseY = {253, 772};
    vector<int> siloX = {548, 290};
    vector<int> siloY = {602, 980};
    int takeOffTime = 31;
    int rechargeTime = 5;
    int missileSpeed = 100;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.815526980749924;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> baseX = {805, 689};
    vector<int> baseY = {138, 126};
    vector<int> siloX = {926, 633};
    vector<int> siloY = {244, 563};
    int takeOffTime = 42;
    int rechargeTime = 11;
    int missileSpeed = 19;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 20.866489263160574;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> baseX = {20, 9170};
    vector<int> baseY = {9630, 310};
    vector<int> siloX = {250, 200};
    vector<int> siloY = {690, 80};
    int takeOffTime = 25;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 8943.374790240767;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> baseX = {77, 72};
    vector<int> baseY = {700, 23};
    vector<int> siloX = {934, 1};
    vector<int> siloY = {373, 5};
    int takeOffTime = 45;
    int rechargeTime = 17;
    int missileSpeed = 3;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 233.79768229317838;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> baseX = {940, 828};
    vector<int> baseY = {696, 892};
    vector<int> siloX = {672, 213};
    vector<int> siloY = {722, 761};
    int takeOffTime = 32;
    int rechargeTime = 7;
    int missileSpeed = 8;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 36.90782649077915;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> baseX = {509, 352};
    vector<int> baseY = {432, 436};
    vector<int> siloX = {531, 638};
    vector<int> siloY = {617, 38};
    int takeOffTime = 36;
    int rechargeTime = 9;
    int missileSpeed = 8;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 33.48793947518758;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> baseX = {37, 91};
    vector<int> baseY = {197, 192};
    vector<int> siloX = {105, 277};
    vector<int> siloY = {989, 490};
    int takeOffTime = 27;
    int rechargeTime = 18;
    int missileSpeed = 20;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 36.464168070250295;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> baseX = {587, 867};
    vector<int> baseY = {669, 520};
    vector<int> siloX = {0, 467};
    vector<int> siloY = {631, 525};
    int takeOffTime = 11;
    int rechargeTime = 12;
    int missileSpeed = 18;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 22.780332901208872;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> baseX = {629, 606};
    vector<int> baseY = {468, 899};
    vector<int> siloX = {543, 742};
    vector<int> siloY = {957, 912};
    int takeOffTime = 41;
    int rechargeTime = 18;
    int missileSpeed = 11;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 42.33368826718356;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> baseX = {760, 8};
    vector<int> baseY = {358, 520};
    vector<int> siloX = {653, 794};
    vector<int> siloY = {517, 518};
    int takeOffTime = 50;
    int rechargeTime = 15;
    int missileSpeed = 15;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 43.833798447096925;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> baseX = {594, 39};
    vector<int> baseY = {744, 537};
    vector<int> siloX = {470, 552};
    vector<int> siloY = {315, 101};
    int takeOffTime = 46;
    int rechargeTime = 6;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 485.5810641426492;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> baseX = {0, 1};
    vector<int> baseY = {1, 0};
    vector<int> siloX = {1000, 999};
    vector<int> siloY = {999, 1000};
    int takeOffTime = 43;
    int rechargeTime = 123;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1413.5160154773887;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> baseX = {456815, 832534};
    vector<int> baseY = {38213, 948216};
    vector<int> siloX = {935874, 645040};
    vector<int> siloY = {755098, 570249};
    int takeOffTime = 20;
    int rechargeTime = 364;
    int missileSpeed = 1200;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 470.6250246751418;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> baseX = {160402, 709404};
    vector<int> baseY = {937929, 37793};
    vector<int> siloX = {314873, 741583};
    vector<int> siloY = {485621, 999906};
    int takeOffTime = 44;
    int rechargeTime = 116;
    int missileSpeed = 17;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 35108.31034775473;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> baseX = {96633, 359328};
    vector<int> baseY = {572914, 636714};
    vector<int> siloX = {941859, 416968};
    vector<int> siloY = {205095, 435289};
    int takeOffTime = 23;
    int rechargeTime = 429;
    int missileSpeed = 8;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 43581.33402605285;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> baseX = {679249, 397219};
    vector<int> baseY = {464037, 753847};
    vector<int> siloX = {224027, 156094};
    vector<int> siloY = {520748, 676981};
    int takeOffTime = 53;
    int rechargeTime = 494;
    int missileSpeed = 611;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 751.6867586771623;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> baseX = {503361, 632342};
    vector<int> baseY = {61996, 617604};
    vector<int> siloX = {772566, 403575};
    vector<int> siloY = {713756, 187929};
    int takeOffTime = 25;
    int rechargeTime = 256;
    int missileSpeed = 203;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 837.9706615896297;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> baseX = {393690, 709881};
    vector<int> baseY = {772448, 124151};
    vector<int> siloX = {997788, 687241};
    vector<int> siloY = {642480, 390246};
    int takeOffTime = 27;
    int rechargeTime = 382;
    int missileSpeed = 7;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 68846.70853586929;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> baseX = {582822, 642804};
    vector<int> baseY = {704059, 885958};
    vector<int> siloX = {683440, 745942};
    vector<int> siloY = {803280, 487038};
    int takeOffTime = 40;
    int rechargeTime = 32;
    int missileSpeed = 1147;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 123.86715905788805;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> baseX = {467047, 900730};
    vector<int> baseY = {52247, 211993};
    vector<int> siloX = {920976, 853308};
    vector<int> siloY = {706141, 493165};
    int takeOffTime = 54;
    int rechargeTime = 425;
    int missileSpeed = 865;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 678.5640007445002;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> baseX = {221720, 723910};
    vector<int> baseY = {898487, 601444};
    vector<int> siloX = {284996, 768025};
    vector<int> siloY = {813997, 53194};
    int takeOffTime = 38;
    int rechargeTime = 100;
    int missileSpeed = 200;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2438.994859056088;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> baseX = {118773, 180409};
    vector<int> baseY = {334539, 375263};
    vector<int> siloX = {655599, 724842};
    vector<int> siloY = {189468, 413533};
    int takeOffTime = 43;
    int rechargeTime = 884;
    int missileSpeed = 296;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1879.3737688880644;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> baseX = {608639, 950449};
    vector<int> baseY = {166498, 336403};
    vector<int> siloX = {34440, 781674};
    vector<int> siloY = {24640, 884863};
    int takeOffTime = 37;
    int rechargeTime = 416;
    int missileSpeed = 723;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 818.6840930323223;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> baseX = {749284, 801100};
    vector<int> baseY = {54567, 174404};
    vector<int> siloX = {212147, 841827};
    vector<int> siloY = {672840, 944056};
    int takeOffTime = 60;
    int rechargeTime = 201;
    int missileSpeed = 5;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 163803.0340896901;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> baseX = {976129, 299109};
    vector<int> baseY = {962696, 243879};
    vector<int> siloX = {625246, 462700};
    vector<int> siloY = {275819, 652959};
    int takeOffTime = 39;
    int rechargeTime = 47;
    int missileSpeed = 187;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3207.1838868209497;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> baseX = {572549, 495146};
    vector<int> baseY = {175895, 498390};
    vector<int> siloX = {33026, 20417};
    vector<int> siloY = {320019, 948575};
    int takeOffTime = 46;
    int rechargeTime = 43;
    int missileSpeed = 601;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 929.9536848276779;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> baseX = {264098, 283229};
    vector<int> baseY = {239275, 760039};
    vector<int> siloX = {182762, 653970};
    vector<int> siloY = {227052, 668401};
    int takeOffTime = 22;
    int rechargeTime = 59;
    int missileSpeed = 94;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4063.1159399327607;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> baseX = {592834, 619309};
    vector<int> baseY = {186537, 575962};
    vector<int> siloX = {95779, 420445};
    vector<int> siloY = {760856, 536982};
    int takeOffTime = 34;
    int rechargeTime = 175;
    int missileSpeed = 498;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 784.8045472525982;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> baseX = {892557, 306610};
    vector<int> baseY = {201181, 528206};
    vector<int> siloX = {744029, 524910};
    vector<int> siloY = {737292, 725724};
    int takeOffTime = 33;
    int rechargeTime = 351;
    int missileSpeed = 24;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 23179.936911927747;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> baseX = {241691, 979646};
    vector<int> baseY = {602283, 757268};
    vector<int> siloX = {179490, 643265};
    vector<int> siloY = {37072, 763623};
    int takeOffTime = 41;
    int rechargeTime = 307;
    int missileSpeed = 690;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 795.9623548203563;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> baseX = {547064, 170057};
    vector<int> baseY = {157667, 972261};
    vector<int> siloX = {191936, 214052};
    vector<int> siloY = {97778, 338030};
    int takeOffTime = 6;
    int rechargeTime = 469;
    int missileSpeed = 1466;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 433.76649366782016;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> baseX = {62912, 24566};
    vector<int> baseY = {246734, 758519};
    vector<int> siloX = {202358, 654540};
    vector<int> siloY = {247786, 486300};
    int takeOffTime = 10;
    int rechargeTime = 104;
    int missileSpeed = 188;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2876.730703581372;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> baseX = {794605, 186168};
    vector<int> baseY = {59047, 552034};
    vector<int> siloX = {142006, 927171};
    vector<int> siloY = {57602, 529563};
    int takeOffTime = 59;
    int rechargeTime = 327;
    int missileSpeed = 1296;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 384.00827717893907;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> baseX = {306889, 740796};
    vector<int> baseY = {524410, 545881};
    vector<int> siloX = {212671, 864319};
    vector<int> siloY = {814695, 943768};
    int takeOffTime = 59;
    int rechargeTime = 704;
    int missileSpeed = 196;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2126.594181531546;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> baseX = {593118, 238289};
    vector<int> baseY = {288823, 871738};
    vector<int> siloX = {124882, 395261};
    vector<int> siloY = {661000, 289161};
    int takeOffTime = 3;
    int rechargeTime = 15;
    int missileSpeed = 1026;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 233.3004528499303;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> baseX = {209364, 989328};
    vector<int> baseY = {928794, 389607};
    vector<int> siloX = {228333, 967076};
    vector<int> siloY = {207697, 816830};
    int takeOffTime = 38;
    int rechargeTime = 19;
    int missileSpeed = 1300;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 555.5152208505549;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> baseX = {389365, 699171};
    vector<int> baseY = {665090, 224884};
    vector<int> siloX = {113621, 353563};
    vector<int> siloY = {861415, 470545};
    int takeOffTime = 45;
    int rechargeTime = 407;
    int missileSpeed = 838;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 506.742221095199;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> baseX = {231093, 783966};
    vector<int> baseY = {742150, 734066};
    vector<int> siloX = {915285, 594725};
    vector<int> siloY = {503157, 858524};
    int takeOffTime = 10;
    int rechargeTime = 121;
    int missileSpeed = 1722;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 221.88552155903008;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> baseX = {174423, 978758};
    vector<int> baseY = {878814, 738914};
    vector<int> siloX = {851163, 631609};
    vector<int> siloY = {910449, 153711};
    int takeOffTime = 44;
    int rechargeTime = 330;
    int missileSpeed = 1703;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 400.2768727529473;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> baseX = {621540, 414716};
    vector<int> baseY = {783127, 345609};
    vector<int> siloX = {164556, 149};
    vector<int> siloY = {598738, 144818};
    int takeOffTime = 27;
    int rechargeTime = 725;
    int missileSpeed = 1207;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 408.7197381123967;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> baseX = {395543, 763176};
    vector<int> baseY = {816796, 802454};
    vector<int> siloX = {49115, 105261};
    vector<int> siloY = {797205, 601051};
    int takeOffTime = 54;
    int rechargeTime = 70;
    int missileSpeed = 1955;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 352.8446681689904;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> baseX = {391934, 831708};
    vector<int> baseY = {458846, 72545};
    vector<int> siloX = {383500, 814951};
    vector<int> siloY = {855266, 630382};
    int takeOffTime = 9;
    int rechargeTime = 179;
    int missileSpeed = 1686;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 331.1634205385538;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> baseX = {490161, 730050};
    vector<int> baseY = {205491, 895812};
    vector<int> siloX = {518467, 301297};
    vector<int> siloY = {338609, 421703};
    int takeOffTime = 41;
    int rechargeTime = 903;
    int missileSpeed = 1796;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 332.54428673927265;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> baseX = {320189, 163674};
    vector<int> baseY = {628521, 195334};
    vector<int> siloX = {222000, 871182};
    vector<int> siloY = {1413, 795031};
    int takeOffTime = 17;
    int rechargeTime = 479;
    int missileSpeed = 1562;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 368.7872037808962;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> baseX = {152262, 990915};
    vector<int> baseY = {760631, 292707};
    vector<int> siloX = {60200, 638898};
    vector<int> siloY = {555509, 203034};
    int takeOffTime = 37;
    int rechargeTime = 193;
    int missileSpeed = 689;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 527.8433097746101;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> baseX = {944143, 110213};
    vector<int> baseY = {366744, 217435};
    vector<int> siloX = {832173, 269809};
    vector<int> siloY = {104560, 1229};
    int takeOffTime = 9;
    int rechargeTime = 274;
    int missileSpeed = 1289;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 221.32338641495315;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> baseX = {542920, 544149};
    vector<int> baseY = {481257, 833575};
    vector<int> siloX = {904568, 768513};
    vector<int> siloY = {578254, 352994};
    int takeOffTime = 47;
    int rechargeTime = 276;
    int missileSpeed = 107;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4128.733738579277;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> baseX = {821735, 475477};
    vector<int> baseY = {830329, 839413};
    vector<int> siloX = {870081, 395167};
    vector<int> siloY = {942794, 925984};
    int takeOffTime = 28;
    int rechargeTime = 289;
    int missileSpeed = 260;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 471.2979839181147;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 500};
    vector<int> siloX = {100, 500};
    vector<int> siloY = {300, 300};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 210.2;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 500};
    vector<int> siloX = {100, 500};
    vector<int> siloY = {300, 300};
    int takeOffTime = 60;
    int rechargeTime = 60;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 262.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {500, 100};
    vector<int> siloX = {100, 500};
    vector<int> siloY = {300, 300};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 210.2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> baseX = {102, 103};
    vector<int> baseY = {0, 0};
    vector<int> siloX = {0, 100};
    vector<int> siloY = {0, 0};
    int takeOffTime = 2;
    int rechargeTime = 6;
    int missileSpeed = 2;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 7.066666666666666;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 500};
    vector<int> siloX = {100, 9500};
    vector<int> siloY = {200, 300};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 300.1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> baseX = {100, 500};
    vector<int> baseY = {100, 100};
    vector<int> siloX = {100, 500};
    vector<int> siloY = {300, 300};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 200.1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 500};
    vector<int> siloX = {500, 100};
    vector<int> siloY = {300, 300};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 210.2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> baseX = {0, 1000000};
    vector<int> baseY = {1, 1000000};
    vector<int> siloX = {0, 0};
    vector<int> siloY = {0, 1000000};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1000000.0166666667;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> baseX = {401, 208};
    vector<int> baseY = {622, 603};
    vector<int> siloX = {51, 387};
    vector<int> siloY = {411, 828};
    int takeOffTime = 59;
    int rechargeTime = 518;
    int missileSpeed = 1941;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1111118724871378;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> baseX = {2, 1};
    vector<int> baseY = {1, 1};
    vector<int> siloX = {1000000, 1000000};
    vector<int> siloY = {1000000, 99999};
    int takeOffTime = 1;
    int rechargeTime = 10;
    int missileSpeed = 3;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 335005.15767728887;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> baseX = {50, 100};
    vector<int> baseY = {0, 0};
    vector<int> siloX = {10000, 0};
    vector<int> siloY = {10000, 0};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 100.01666666666667;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> baseX = {0, 0};
    vector<int> baseY = {14324, 12341};
    vector<int> siloX = {1000000, 1000000};
    vector<int> siloY = {12343, 41341};
    int takeOffTime = 60;
    int rechargeTime = 5;
    int missileSpeed = 100;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 10004.648925712057;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> baseX = {0, 0};
    vector<int> baseY = {3, 7};
    vector<int> siloX = {0, 1000000};
    vector<int> siloY = {0, 1000000};
    int takeOffTime = 60;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> baseX = {0, 0};
    vector<int> baseY = {99, 100};
    vector<int> siloX = {0, 500};
    vector<int> siloY = {0, 500};
    int takeOffTime = 60;
    int rechargeTime = 50;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 151.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> baseX = {0, 0};
    vector<int> baseY = {0, 1};
    vector<int> siloX = {1000000, 1000000};
    vector<int> siloY = {100001, 100002};
    int takeOffTime = 6;
    int rechargeTime = 6;
    int missileSpeed = 37;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 27161.92869233245;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> baseX = {401123, 208786};
    vector<int> baseY = {622345, 603321};
    vector<int> siloX = {513, 387111};
    vector<int> siloY = {41122, 828134};
    int takeOffTime = 60;
    int rechargeTime = 1000;
    int missileSpeed = 2000;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 300.76881013958075;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> baseX = {0, 100000};
    vector<int> baseY = {0, 100000};
    vector<int> siloX = {0, 1};
    vector<int> siloY = {500, 0};
    int takeOffTime = 60;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 141069.24589538213;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> baseX = {544, 534};
    vector<int> baseY = {234, 199};
    vector<int> siloX = {244, 234};
    vector<int> siloY = {242, 888};
    int takeOffTime = 34;
    int rechargeTime = 29;
    int missileSpeed = 99;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 7.877286247610533;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {101, 1};
    vector<int> siloX = {100, 500};
    vector<int> siloY = {100, 500};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 99.1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> baseX = {100, 500};
    vector<int> baseY = {500, 500};
    vector<int> siloX = {101, 10000};
    vector<int> siloY = {500, 10000};
    int takeOffTime = 10;
    int rechargeTime = 20;
    int missileSpeed = 30;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 20.366666666666667;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> baseX = {999999, 1000000};
    vector<int> baseY = {1000000, 1000000};
    vector<int> siloX = {1, 2};
    vector<int> siloY = {2, 1};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1414211.457719595;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> baseX = {1, 1};
    vector<int> baseY = {1, 1000000};
    vector<int> siloX = {2, 1};
    vector<int> siloY = {1, 1000};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 999000.1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> baseX = {0, 0};
    vector<int> baseY = {1000, 5000};
    vector<int> siloX = {0, 1000000};
    vector<int> siloY = {0, 0};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 1000;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 6.033333333333333;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 560};
    vector<int> siloX = {100, 600};
    vector<int> siloY = {300, 600};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 260.1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 500};
    vector<int> siloX = {100, 50050};
    vector<int> siloY = {200, 30030};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 300.1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> baseX = {2000, 12};
    vector<int> baseY = {2000, 10};
    vector<int> siloX = {1000000, 10};
    vector<int> siloY = {1000000, 10};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2814.301655789126;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {200, 500};
    vector<int> siloX = {100, 500};
    vector<int> siloY = {300, 300};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 200.1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> baseX = {0, 0};
    vector<int> baseY = {3, 7};
    vector<int> siloX = {1000000, 0};
    vector<int> siloY = {1000000, 0};
    int takeOffTime = 60;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> baseX = {0, 1};
    vector<int> baseY = {1, 0};
    vector<int> siloX = {0, 1000000};
    vector<int> siloY = {0, 1000000};
    int takeOffTime = 6;
    int rechargeTime = 20;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 21.200000000000003;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 101};
    vector<int> siloX = {500, 95};
    vector<int> siloY = {500, 95};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 5;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 11.614213562373095;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {150, 200};
    vector<int> siloX = {100, 100000};
    vector<int> siloY = {100, 100000};
    int takeOffTime = 60;
    int rechargeTime = 49;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 101.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> baseX = {6, 1};
    vector<int> baseY = {0, 0};
    vector<int> siloX = {0, 1000000};
    vector<int> siloY = {0, 1000000};
    int takeOffTime = 60;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> baseX = {100, 500};
    vector<int> baseY = {500, 500};
    vector<int> siloX = {499, 10000};
    vector<int> siloY = {500, 10000};
    int takeOffTime = 10;
    int rechargeTime = 20;
    int missileSpeed = 30;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 20.366666666666667;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> baseX = {0, 0};
    vector<int> baseY = {1000, 10000};
    vector<int> siloX = {0, 1000000};
    vector<int> siloY = {0, 0};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 1000;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 10.016666666666667;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> baseX = {50, 100};
    vector<int> baseY = {2000, 1000};
    vector<int> siloX = {10000, 0};
    vector<int> siloY = {10000, 0};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.6415690409224;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> baseX = {1000000, 1000000};
    vector<int> baseY = {1000000, 999999};
    vector<int> siloX = {1, 1};
    vector<int> siloY = {1, 0};
    int takeOffTime = 60;
    int rechargeTime = 1000;
    int missileSpeed = 2000;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 708.1060740797662;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> baseX = {100, 10100};
    vector<int> baseY = {100, 10100};
    vector<int> siloX = {500, 10200};
    vector<int> siloY = {100, 10100};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 400.1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {100, 400};
    vector<int> siloX = {100, 500};
    vector<int> siloY = {300, 300};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 200.1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> baseX = {99, 100};
    vector<int> baseY = {1, 1};
    vector<int> siloX = {1, 1000};
    vector<int> siloY = {1, 1000};
    int takeOffTime = 10;
    int rechargeTime = 5;
    int missileSpeed = 2;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 54.33333333333333;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> baseX = {100, 0};
    vector<int> baseY = {0, 200};
    vector<int> siloX = {0, 1000000};
    vector<int> siloY = {0, 1000000};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 200.1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> baseX = {100, 100};
    vector<int> baseY = {90, 315};
    vector<int> siloX = {100, 500};
    vector<int> siloY = {210, 500};
    int takeOffTime = 6;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 120.1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> baseX = {1, 1000000};
    vector<int> baseY = {1, 1000000};
    vector<int> siloX = {765432, 523423};
    vector<int> siloY = {574354, 858565};
    int takeOffTime = 60;
    int rechargeTime = 1000;
    int missileSpeed = 2000;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 479.4783130848252;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> baseX = {0, 1};
    vector<int> baseY = {0, 0};
    vector<int> siloX = {999999, 1000000};
    vector<int> siloY = {999999, 1000000};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1414212.8719331573;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> baseX = {600000, 999999};
    vector<int> baseY = {600000, 999999};
    vector<int> siloX = {0, 500000};
    vector<int> siloY = {0, 500000};
    int takeOffTime = 30;
    int rechargeTime = 500;
    int missileSpeed = 10;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 70711.0366972985;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> baseX = {0, 1};
    vector<int> baseY = {0, 0};
    vector<int> siloX = {1000000, 999999};
    vector<int> siloY = {1000000, 1000000};
    int takeOffTime = 60;
    int rechargeTime = 1000;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1414213.8552664907;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> baseX = {0, 1000000};
    vector<int> baseY = {0, 1000000};
    vector<int> siloX = {0, 1};
    vector<int> siloY = {1, 0};
    int takeOffTime = 2;
    int rechargeTime = 10;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1414212.8885998242;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> baseX = {0, 0};
    vector<int> baseY = {1, 1000};
    vector<int> siloX = {0, 100000};
    vector<int> siloY = {0, 100000};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0166666666667;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> baseX = {1000000, 1000000};
    vector<int> baseY = {0, 1};
    vector<int> siloX = {0, 0};
    vector<int> siloY = {0, 1};
    int takeOffTime = 34;
    int rechargeTime = 22;
    int missileSpeed = 3;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 333333.89999999997;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> baseX = {0, 10};
    vector<int> baseY = {1, 10};
    vector<int> siloX = {0, 100000};
    vector<int> siloY = {0, 100000};
    int takeOffTime = 1;
    int rechargeTime = 5;
    int missileSpeed = 1;
    FeudaliasBattle* pObj = new FeudaliasBattle();
    clock_t start = clock();
    double result = pObj->getMinimumTime(baseX, baseY, siloX, siloY, takeOffTime, rechargeTime, missileSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 14.158802290397619;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22748595&rd=13803&pm=10360
********************************************************************************
#include<iostream> 
#include<algorithm> 
#include<math.h> 
#include<vector> 
#include<set> 
#include<list> 
#include<map> 
#include<deque> 
#include<stack> 
#include<queue> 
#include<string> 
#include<sstream> 
#include<time.h> 
#include<numeric> 
#include<functional> 
 
using namespace std; 
#define INF  ((1 << 31) - 1) 
#define eps 0.00000001 
#define PI 3.14159265358979323846 
#define sz(v) ((int)(v).size()) 
#define MP make_pair 
#define PB push_back 
#define all(v) (v).begin(), (v).end() 
typedef long long ll; 
 
double sqr(int x) { 
  return 1.0 * x * x; 
}; 
 
class FeudaliasBattle{ 
public: 
  double getMinimumTime(vector <int> bX, vector <int> bY, vector <int> sX, vector <int> sY, int TO, int recharge, int speed) { 
    double d[2][2]; 
    double takeOff = 1.0 * TO / 60.0; 
    for (int i = 0; i < 2; ++i) 
      for (int j = 0; j < 2; ++j) { 
        d[i][j] = sqrt(sqr(sX[i] - bX[j]) + sqr(sY[i] - bY[j])); 
      }; 
    vector<double> res; 
    res.PB(takeOff + max(d[0][0] / speed, recharge + takeOff + d[0][1] / speed)); 
    res.PB(takeOff + max(d[0][1] / speed, recharge + takeOff + d[0][0] / speed)); 
    res.PB(takeOff + max(d[1][0] / speed, recharge + takeOff + d[1][1] / speed)); 
    res.PB(takeOff + max(d[1][1] / speed, recharge + takeOff + d[1][0] / speed)); 
    res.PB(max(takeOff + d[0][0]/ speed, takeOff + d[1][1]/ speed)); 
    res.PB(max(takeOff + d[0][1]/ speed, takeOff + d[1][0]/ speed)); 
    return *min_element(all(res)); 
  }; 
};

********************************************************************************
*******************************************************************************/