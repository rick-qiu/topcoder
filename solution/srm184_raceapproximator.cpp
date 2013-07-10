/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2353
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

class RaceApproximator {
public:
    string timeToBeat(int d1, int t1, int d2, int t2, int raceDistance);
};

string RaceApproximator::timeToBeat(int d1, int t1, int d2, int t2, int raceDistance) {
    string ret;
    return ret;
}


int test0() {
    int d1 = 800;
    int t1 = 118;
    int d2 = 5000;
    int t2 = 906;
    int raceDistance = 1500;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:03:57";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int d1 = 400;
    int t1 = 65;
    int d2 = 1600;
    int t2 = 350;
    int raceDistance = 800;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:02:30";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int d1 = 1600;
    int t1 = 299;
    int d2 = 10000;
    int t2 = 2360;
    int raceDistance = 5000;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:18:00";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int d1 = 100;
    int t1 = 17;
    int d2 = 10000;
    int t2 = 4500;
    int raceDistance = 9000;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:06:00";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int d1 = 1;
    int t1 = 1;
    int d2 = 10000;
    int t2 = 9999;
    int raceDistance = 5000;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:23:19";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int d1 = 1576;
    int t1 = 1382;
    int d2 = 7591;
    int t2 = 4085;
    int raceDistance = 5475;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:54:21";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int d1 = 900;
    int t1 = 186;
    int d2 = 9953;
    int t2 = 7887;
    int raceDistance = 4848;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:42:49";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int d1 = 822;
    int t1 = 812;
    int d2 = 7909;
    int t2 = 7867;
    int raceDistance = 5289;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:27:34";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int d1 = 6030;
    int t1 = 5200;
    int d2 = 9367;
    int t2 = 8053;
    int raceDistance = 8322;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:59:20";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int d1 = 2116;
    int t1 = 522;
    int d2 = 4723;
    int t2 = 1073;
    int raceDistance = 4399;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:16:46";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int d1 = 3616;
    int t1 = 2102;
    int d2 = 8316;
    int t2 = 3707;
    int raceDistance = 5965;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:49:16";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int d1 = 1853;
    int t1 = 1416;
    int d2 = 1982;
    int t2 = 1623;
    int raceDistance = 1900;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:24:49";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int d1 = 1866;
    int t1 = 1105;
    int d2 = 6686;
    int t2 = 5780;
    int raceDistance = 3123;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:35:54";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int d1 = 3835;
    int t1 = 2140;
    int d2 = 5760;
    int t2 = 4525;
    int raceDistance = 3967;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:37:57";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int d1 = 6248;
    int t1 = 5500;
    int d2 = 9593;
    int t2 = 6066;
    int raceDistance = 8652;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:38:44";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int d1 = 2213;
    int t1 = 2147;
    int d2 = 7729;
    int t2 = 3828;
    int raceDistance = 5758;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:55:40";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int d1 = 2266;
    int t1 = 1581;
    int d2 = 4246;
    int t2 = 4184;
    int raceDistance = 3263;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:46:21";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int d1 = 156;
    int t1 = 117;
    int d2 = 3863;
    int t2 = 2754;
    int raceDistance = 1755;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:21:06";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int d1 = 6677;
    int t1 = 2462;
    int d2 = 9160;
    int t2 = 5715;
    int raceDistance = 8404;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:15:43";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int d1 = 6762;
    int t1 = 2480;
    int d2 = 8097;
    int t2 = 7519;
    int raceDistance = 8045;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "2:00:26";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int d1 = 1931;
    int t1 = 1689;
    int d2 = 8294;
    int t2 = 6252;
    int raceDistance = 3470;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:47:38";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int d1 = 1944;
    int t1 = 822;
    int d2 = 6563;
    int t2 = 5797;
    int raceDistance = 2119;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:15:43";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int d1 = 656;
    int t1 = 616;
    int d2 = 7348;
    int t2 = 6303;
    int raceDistance = 1553;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:23:31";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int d1 = 4393;
    int t1 = 3099;
    int d2 = 9654;
    int t2 = 5036;
    int raceDistance = 6925;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:08:23";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int d1 = 2839;
    int t1 = 2117;
    int d2 = 7426;
    int t2 = 7140;
    int raceDistance = 3806;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:51:06";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int d1 = 6259;
    int t1 = 3297;
    int d2 = 9183;
    int t2 = 6650;
    int raceDistance = 7796;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:22:07";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int d1 = 3792;
    int t1 = 1691;
    int d2 = 8397;
    int t2 = 6070;
    int raceDistance = 7368;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:21:59";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int d1 = 1781;
    int t1 = 1376;
    int d2 = 9913;
    int t2 = 8999;
    int raceDistance = 4466;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:02:41";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int d1 = 3278;
    int t1 = 2020;
    int d2 = 7923;
    int t2 = 6401;
    int raceDistance = 7850;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:45:24";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int d1 = 4700;
    int t1 = 2061;
    int d2 = 7499;
    int t2 = 6518;
    int raceDistance = 5176;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:43:34";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int d1 = 800;
    int t1 = 118;
    int d2 = 5000;
    int t2 = 906;
    int raceDistance = 1500;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:03:57";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int d1 = 100;
    int t1 = 17;
    int d2 = 10000;
    int t2 = 4500;
    int raceDistance = 9000;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "1:06:00";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int d1 = 1000;
    int t1 = 299;
    int d2 = 10000;
    int t2 = 2360;
    int raceDistance = 5000;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:21:07";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int d1 = 400;
    int t1 = 65;
    int d2 = 1600;
    int t2 = 350;
    int raceDistance = 800;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:02:30";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int d1 = 156;
    int t1 = 117;
    int d2 = 3863;
    int t2 = 2754;
    int raceDistance = 1755;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:21:06";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int d1 = 1600;
    int t1 = 299;
    int d2 = 10000;
    int t2 = 2360;
    int raceDistance = 5200;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:18:49";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int d1 = 1600;
    int t1 = 299;
    int d2 = 10000;
    int t2 = 2360;
    int raceDistance = 5000;
    RaceApproximator* pObj = new RaceApproximator();
    clock_t start = clock();
    string result = pObj->timeToBeat(d1, t1, d2, t2, raceDistance);
    clock_t end = clock();
    delete pObj;
    string expected = "0:18:00";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287130&rd=4740&pm=2353
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <queue>
#include <climits>
using namespace std;
 
typedef vector<int> VI;
typedef vector<string> VS;
typedef long long ll;
 
char buffer[500];
string sval(int num)    { sprintf(buffer, "%d", num); return buffer; }
int    ival(string inp) { return atoi(inp.c_str()); }
float  fval(string inp) { return (float)atof(inp.c_str()); }
double dval(string inp) { return (double)atof(inp.c_str()); }
 
VS split(string inp, string sep) {
   VS ans;
   inp += sep;      // this is SO ugly...
   for (int i = 0, j = 0; i < inp.length(); i++)
      if (inp[i] == sep[0]) {
         ans.push_back(inp.substr(j, i - j));
         j = i + 1;
      }
   return ans;
}
 
// ****************************************** //
 
class RaceApproximator {
   public:
 
   string timeToBeat(int d1, int t1, int d2, int t2, int rd) {
    int ans = (int) (1.0*t1*(exp(log(1.0*t2/t1)*log(1.0*d1/rd)/log(1.0*d1/d2))));
    int hh = ans / 3600;
    ans = ans % 3600;
    int mm = ans / 60;
    ans = ans % 60;
    string blah;
    blah = sval(hh) + ":";
    if (mm < 10) blah = blah + "0" + sval(mm); else blah = blah + sval(mm);
    blah = blah + ":";
    if (ans < 10) blah = blah + "0" + sval(ans); else blah = blah + sval(ans);
    return blah;
   }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/