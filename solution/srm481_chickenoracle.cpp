/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11004
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

class ChickenOracle {
public:
    string theTruth(int n, int eggCount, int lieCount, int liarCount);
};

string ChickenOracle::theTruth(int n, int eggCount, int lieCount, int liarCount) {
    string ret;
    return ret;
}


int test0() {
    int n = 10;
    int eggCount = 10;
    int lieCount = 0;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 60;
    int eggCount = 40;
    int lieCount = 0;
    int liarCount = 30;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 60;
    int eggCount = 20;
    int lieCount = 5;
    int liarCount = 25;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 1000;
    int eggCount = 500;
    int lieCount = 250;
    int liarCount = 250;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1;
    int eggCount = 1;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 396517;
    int eggCount = 28344;
    int lieCount = 199491;
    int liarCount = 161224;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 762085;
    int eggCount = 174382;
    int lieCount = 591906;
    int liarCount = 731022;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 245559;
    int eggCount = 225911;
    int lieCount = 154421;
    int liarCount = 4998;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 519706;
    int eggCount = 277311;
    int lieCount = 364769;
    int liarCount = 257393;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 72385;
    int eggCount = 31903;
    int lieCount = 7837;
    int liarCount = 10658;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 559116;
    int eggCount = 187570;
    int lieCount = 443186;
    int liarCount = 60279;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 621417;
    int eggCount = 180385;
    int lieCount = 641;
    int liarCount = 450302;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 498424;
    int eggCount = 25415;
    int lieCount = 45906;
    int liarCount = 448391;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 325835;
    int eggCount = 238497;
    int lieCount = 114888;
    int liarCount = 85492;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 497223;
    int eggCount = 236730;
    int lieCount = 70808;
    int liarCount = 471449;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 338919;
    int eggCount = 310645;
    int lieCount = 70422;
    int liarCount = 304279;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 560054;
    int eggCount = 91058;
    int lieCount = 139916;
    int liarCount = 12375;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 131781;
    int eggCount = 102924;
    int lieCount = 71553;
    int liarCount = 55554;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 756935;
    int eggCount = 331458;
    int lieCount = 620003;
    int liarCount = 751210;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 298057;
    int eggCount = 282337;
    int lieCount = 59551;
    int liarCount = 196826;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 348407;
    int eggCount = 128958;
    int lieCount = 128612;
    int liarCount = 125877;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 933615;
    int eggCount = 357697;
    int lieCount = 739848;
    int liarCount = 43938;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 768469;
    int eggCount = 426448;
    int lieCount = 235987;
    int liarCount = 333412;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 300410;
    int eggCount = 257594;
    int lieCount = 5989;
    int liarCount = 224034;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 765658;
    int eggCount = 438802;
    int lieCount = 505627;
    int liarCount = 145878;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 1;
    int eggCount = 0;
    int lieCount = 0;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 1;
    int eggCount = 0;
    int lieCount = 0;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 1;
    int eggCount = 0;
    int lieCount = 1;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 1;
    int eggCount = 0;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 1;
    int eggCount = 1;
    int lieCount = 0;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 1;
    int eggCount = 1;
    int lieCount = 0;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 1;
    int eggCount = 1;
    int lieCount = 1;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 1;
    int eggCount = 1;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 962850;
    int eggCount = 19055;
    int lieCount = 64313;
    int liarCount = 85888;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 862583;
    int eggCount = 486499;
    int lieCount = 301630;
    int liarCount = 493215;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 957641;
    int eggCount = 676883;
    int lieCount = 540997;
    int liarCount = 238519;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 813451;
    int eggCount = 375748;
    int lieCount = 414019;
    int liarCount = 259012;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 945090;
    int eggCount = 793978;
    int lieCount = 512433;
    int liarCount = 54330;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 835921;
    int eggCount = 339171;
    int lieCount = 513339;
    int liarCount = 776135;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 965509;
    int eggCount = 361898;
    int lieCount = 778610;
    int liarCount = 858544;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 849225;
    int eggCount = 184371;
    int lieCount = 641096;
    int liarCount = 611762;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 802246;
    int eggCount = 37329;
    int lieCount = 473034;
    int liarCount = 165902;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 969311;
    int eggCount = 361659;
    int lieCount = 296286;
    int liarCount = 208426;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 819514;
    int eggCount = 421564;
    int lieCount = 230281;
    int liarCount = 54819;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 925310;
    int eggCount = 874810;
    int lieCount = 775864;
    int liarCount = 411750;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 811502;
    int eggCount = 533611;
    int lieCount = 171872;
    int liarCount = 75650;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 916436;
    int eggCount = 817088;
    int lieCount = 178455;
    int liarCount = 579562;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 951774;
    int eggCount = 929187;
    int lieCount = 897231;
    int liarCount = 57006;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 852037;
    int eggCount = 577253;
    int lieCount = 340259;
    int liarCount = 177278;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 920552;
    int eggCount = 64517;
    int lieCount = 595740;
    int liarCount = 454457;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 950051;
    int eggCount = 8270;
    int lieCount = 743079;
    int liarCount = 430550;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 819775;
    int eggCount = 399440;
    int lieCount = 777548;
    int liarCount = 482922;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 892059;
    int eggCount = 795464;
    int lieCount = 486421;
    int liarCount = 142293;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 87;
    int eggCount = 49;
    int lieCount = 44;
    int liarCount = 44;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 7;
    int eggCount = 5;
    int lieCount = 4;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 97;
    int eggCount = 49;
    int lieCount = 42;
    int liarCount = 57;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 53;
    int eggCount = 26;
    int lieCount = 24;
    int liarCount = 25;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 100;
    int eggCount = 52;
    int lieCount = 57;
    int liarCount = 41;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 36;
    int eggCount = 25;
    int lieCount = 17;
    int liarCount = 16;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 64;
    int eggCount = 37;
    int lieCount = 29;
    int liarCount = 28;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 88;
    int eggCount = 48;
    int lieCount = 42;
    int liarCount = 40;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 4;
    int eggCount = 1;
    int lieCount = 2;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 58;
    int eggCount = 27;
    int lieCount = 30;
    int liarCount = 23;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 29;
    int eggCount = 17;
    int lieCount = 15;
    int liarCount = 12;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 90;
    int eggCount = 44;
    int lieCount = 44;
    int liarCount = 46;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 116434;
    int eggCount = 58220;
    int lieCount = 58285;
    int liarCount = 57939;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 244034;
    int eggCount = 122250;
    int lieCount = 121998;
    int liarCount = 122176;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 995016;
    int eggCount = 497109;
    int lieCount = 497790;
    int liarCount = 497099;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 535929;
    int eggCount = 267649;
    int lieCount = 267975;
    int liarCount = 268246;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 479389;
    int eggCount = 239192;
    int lieCount = 239314;
    int liarCount = 239727;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 142582;
    int eggCount = 71453;
    int lieCount = 71321;
    int liarCount = 70944;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 632259;
    int eggCount = 316275;
    int lieCount = 315904;
    int liarCount = 315926;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 494254;
    int eggCount = 246683;
    int lieCount = 247645;
    int liarCount = 247370;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 849338;
    int eggCount = 424843;
    int lieCount = 424517;
    int liarCount = 425628;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 91724;
    int eggCount = 46223;
    int lieCount = 45983;
    int liarCount = 45750;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 917800;
    int eggCount = 458527;
    int lieCount = 458464;
    int liarCount = 459925;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 914513;
    int eggCount = 457351;
    int lieCount = 456571;
    int liarCount = 456982;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 931608;
    int eggCount = 465692;
    int lieCount = 465780;
    int liarCount = 466326;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 926724;
    int eggCount = 464301;
    int lieCount = 463897;
    int liarCount = 463006;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 921449;
    int eggCount = 460204;
    int lieCount = 459308;
    int liarCount = 460862;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 899919;
    int eggCount = 449839;
    int lieCount = 450367;
    int liarCount = 449254;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 849424;
    int eggCount = 424813;
    int lieCount = 424458;
    int liarCount = 424837;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 894545;
    int eggCount = 447647;
    int lieCount = 447092;
    int liarCount = 448149;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 903469;
    int eggCount = 451657;
    int lieCount = 452056;
    int liarCount = 451551;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 998912;
    int eggCount = 499229;
    int lieCount = 498025;
    int liarCount = 499226;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 980666;
    int eggCount = 416750;
    int lieCount = 300673;
    int liarCount = 301195;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 891946;
    int eggCount = 512498;
    int lieCount = 273483;
    int liarCount = 273821;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 982760;
    int eggCount = 417827;
    int lieCount = 301373;
    int liarCount = 301904;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 864732;
    int eggCount = 368502;
    int lieCount = 265772;
    int liarCount = 266006;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 927095;
    int eggCount = 532371;
    int lieCount = 284804;
    int liarCount = 283940;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 950896;
    int eggCount = 913780;
    int lieCount = 19042;
    int liarCount = 18860;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 833259;
    int eggCount = 800804;
    int lieCount = 16670;
    int liarCount = 16409;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 985823;
    int eggCount = 947734;
    int lieCount = 19414;
    int liarCount = 19401;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 943694;
    int eggCount = 906696;
    int lieCount = 18872;
    int liarCount = 18914;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 932042;
    int eggCount = 36179;
    int lieCount = 18482;
    int liarCount = 18473;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 909322;
    int eggCount = 26763;
    int lieCount = 17953;
    int liarCount = 900154;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 888081;
    int eggCount = 862023;
    int lieCount = 17577;
    int liarCount = 879298;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 981719;
    int eggCount = 28783;
    int lieCount = 19506;
    int liarCount = 972012;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 936606;
    int eggCount = 909272;
    int lieCount = 18588;
    int liarCount = 927464;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 851974;
    int eggCount = 25238;
    int lieCount = 17057;
    int liarCount = 843425;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 909322;
    int eggCount = 26763;
    int lieCount = 17953;
    int liarCount = 900154;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 888081;
    int eggCount = 862023;
    int lieCount = 17577;
    int liarCount = 879298;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 981719;
    int eggCount = 28783;
    int lieCount = 19506;
    int liarCount = 972012;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 936606;
    int eggCount = 909272;
    int lieCount = 18588;
    int liarCount = 927464;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 851974;
    int eggCount = 25238;
    int lieCount = 17057;
    int liarCount = 843425;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 3;
    int eggCount = 2;
    int lieCount = 2;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 10;
    int eggCount = 8;
    int lieCount = 2;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 10;
    int eggCount = 7;
    int lieCount = 4;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 60;
    int eggCount = 23;
    int lieCount = 5;
    int liarCount = 25;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 60;
    int eggCount = 24;
    int lieCount = 20;
    int liarCount = 5;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 10;
    int eggCount = 3;
    int lieCount = 8;
    int liarCount = 7;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 6;
    int eggCount = 6;
    int lieCount = 4;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 999;
    int eggCount = 500;
    int lieCount = 250;
    int liarCount = 250;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 10;
    int eggCount = 7;
    int lieCount = 2;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 6;
    int eggCount = 0;
    int lieCount = 3;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 10;
    int eggCount = 7;
    int lieCount = 8;
    int liarCount = 9;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 60;
    int eggCount = 20;
    int lieCount = 5;
    int liarCount = 21;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 1000000;
    int eggCount = 1000000;
    int lieCount = 1000000;
    int liarCount = 1000000;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 2;
    int eggCount = 1;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 60;
    int eggCount = 22;
    int lieCount = 5;
    int liarCount = 25;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 60;
    int eggCount = 40;
    int lieCount = 40;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 12833;
    int eggCount = 3;
    int lieCount = 823;
    int liarCount = 283;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 10;
    int eggCount = 8;
    int lieCount = 3;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 10;
    int eggCount = 0;
    int lieCount = 10;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int n = 60;
    int eggCount = 20;
    int lieCount = 0;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int n = 6;
    int eggCount = 3;
    int lieCount = 3;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int n = 60;
    int eggCount = 20;
    int lieCount = 6;
    int liarCount = 25;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int n = 100;
    int eggCount = 96;
    int lieCount = 4;
    int liarCount = 5;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int n = 60;
    int eggCount = 20;
    int lieCount = 5;
    int liarCount = 23;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int n = 6;
    int eggCount = 3;
    int lieCount = 2;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int n = 5;
    int eggCount = 2;
    int lieCount = 2;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int n = 5;
    int eggCount = 3;
    int lieCount = 1;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int n = 60;
    int eggCount = 30;
    int lieCount = 20;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int n = 1000;
    int eggCount = 345;
    int lieCount = 234;
    int liarCount = 123;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int n = 500;
    int eggCount = 251;
    int lieCount = 250;
    int liarCount = 250;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int n = 100;
    int eggCount = 90;
    int lieCount = 99;
    int liarCount = 99;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int n = 10;
    int eggCount = 5;
    int lieCount = 3;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int n = 100;
    int eggCount = 40;
    int lieCount = 95;
    int liarCount = 35;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int n = 100;
    int eggCount = 50;
    int lieCount = 50;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int n = 100;
    int eggCount = 100;
    int lieCount = 100;
    int liarCount = 100;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int n = 501;
    int eggCount = 1;
    int lieCount = 2;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int n = 10000;
    int eggCount = 1000;
    int lieCount = 2000;
    int liarCount = 1004;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int n = 1000;
    int eggCount = 501;
    int lieCount = 799;
    int liarCount = 298;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int n = 60;
    int eggCount = 20;
    int lieCount = 7;
    int liarCount = 25;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int n = 4;
    int eggCount = 3;
    int lieCount = 4;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int n = 100;
    int eggCount = 55;
    int lieCount = 50;
    int liarCount = 10;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int n = 100;
    int eggCount = 90;
    int lieCount = 5;
    int liarCount = 5;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int n = 3;
    int eggCount = 1;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int n = 40;
    int eggCount = 25;
    int lieCount = 10;
    int liarCount = 5;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int n = 10;
    int eggCount = 10;
    int lieCount = 0;
    int liarCount = 10;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int n = 2;
    int eggCount = 1;
    int lieCount = 2;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int n = 10;
    int eggCount = 0;
    int lieCount = 10;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int n = 60;
    int eggCount = 4;
    int lieCount = 2;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int n = 5;
    int eggCount = 2;
    int lieCount = 2;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int n = 3;
    int eggCount = 1;
    int lieCount = 0;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int n = 10;
    int eggCount = 0;
    int lieCount = 10;
    int liarCount = 10;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int n = 3;
    int eggCount = 2;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int n = 5;
    int eggCount = 1;
    int lieCount = 4;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int n = 7;
    int eggCount = 5;
    int lieCount = 2;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int n = 10;
    int eggCount = 4;
    int lieCount = 2;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int n = 2;
    int eggCount = 0;
    int lieCount = 2;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int n = 80;
    int eggCount = 20;
    int lieCount = 10;
    int liarCount = 5;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int n = 3;
    int eggCount = 2;
    int lieCount = 0;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int n = 986;
    int eggCount = 466;
    int lieCount = 967;
    int liarCount = 735;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int n = 2;
    int eggCount = 1;
    int lieCount = 1;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int n = 10;
    int eggCount = 3;
    int lieCount = 1;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int n = 5;
    int eggCount = 1;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int n = 60;
    int eggCount = 40;
    int lieCount = 5;
    int liarCount = 15;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int n = 444136;
    int eggCount = 434320;
    int lieCount = 330890;
    int liarCount = 388736;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int n = 50;
    int eggCount = 41;
    int lieCount = 10;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int n = 40;
    int eggCount = 20;
    int lieCount = 20;
    int liarCount = 20;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int n = 100;
    int eggCount = 30;
    int lieCount = 30;
    int liarCount = 32;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int n = 100;
    int eggCount = 9;
    int lieCount = 10;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int n = 40;
    int eggCount = 12;
    int lieCount = 23;
    int liarCount = 35;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int n = 60;
    int eggCount = 20;
    int lieCount = 5;
    int liarCount = 24;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int n = 3;
    int eggCount = 1;
    int lieCount = 2;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int n = 9;
    int eggCount = 5;
    int lieCount = 3;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int n = 2;
    int eggCount = 1;
    int lieCount = 0;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int n = 10;
    int eggCount = 10;
    int lieCount = 10;
    int liarCount = 10;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int n = 1000;
    int eggCount = 200;
    int lieCount = 400;
    int liarCount = 400;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int n = 10;
    int eggCount = 4;
    int lieCount = 7;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int n = 1000;
    int eggCount = 500;
    int lieCount = 350;
    int liarCount = 300;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int n = 4;
    int eggCount = 0;
    int lieCount = 2;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int n = 9170;
    int eggCount = 6554;
    int lieCount = 2308;
    int liarCount = 1848;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int n = 4;
    int eggCount = 2;
    int lieCount = 1;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int n = 100;
    int eggCount = 10;
    int lieCount = 10;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int n = 10;
    int eggCount = 8;
    int lieCount = 0;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int n = 60;
    int eggCount = 40;
    int lieCount = 5;
    int liarCount = 25;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int n = 60;
    int eggCount = 59;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int n = 100;
    int eggCount = 2;
    int lieCount = 75;
    int liarCount = 25;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int n = 100;
    int eggCount = 5;
    int lieCount = 3;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int n = 60;
    int eggCount = 30;
    int lieCount = 0;
    int liarCount = 30;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int n = 10;
    int eggCount = 5;
    int lieCount = 4;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int n = 5;
    int eggCount = 2;
    int lieCount = 2;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int n = 60;
    int eggCount = 10;
    int lieCount = 7;
    int liarCount = 13;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int n = 100;
    int eggCount = 10;
    int lieCount = 90;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int n = 100;
    int eggCount = 100;
    int lieCount = 1;
    int liarCount = 100;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int n = 6;
    int eggCount = 2;
    int lieCount = 4;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int n = 10;
    int eggCount = 4;
    int lieCount = 4;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int n = 14;
    int eggCount = 4;
    int lieCount = 2;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int n = 4;
    int eggCount = 1;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int n = 60;
    int eggCount = 30;
    int lieCount = 5;
    int liarCount = 30;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int n = 10;
    int eggCount = 0;
    int lieCount = 1;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int n = 10;
    int eggCount = 10;
    int lieCount = 10;
    int liarCount = 0;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int n = 10;
    int eggCount = 1;
    int lieCount = 3;
    int liarCount = 6;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int n = 17;
    int eggCount = 10;
    int lieCount = 8;
    int liarCount = 7;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int n = 20;
    int eggCount = 15;
    int lieCount = 2;
    int liarCount = 5;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int n = 10;
    int eggCount = 5;
    int lieCount = 3;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int n = 10;
    int eggCount = 3;
    int lieCount = 5;
    int liarCount = 8;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int n = 10;
    int eggCount = 6;
    int lieCount = 0;
    int liarCount = 6;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int n = 100000;
    int eggCount = 19;
    int lieCount = 20;
    int liarCount = 13;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int n = 11;
    int eggCount = 10;
    int lieCount = 0;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int n = 60;
    int eggCount = 38;
    int lieCount = 5;
    int liarCount = 25;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int n = 60;
    int eggCount = 20;
    int lieCount = 60;
    int liarCount = 50;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int n = 8;
    int eggCount = 5;
    int lieCount = 2;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int n = 60;
    int eggCount = 8;
    int lieCount = 6;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    int n = 6;
    int eggCount = 6;
    int lieCount = 6;
    int liarCount = 6;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    int n = 1000000;
    int eggCount = 1000000;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    int n = 60;
    int eggCount = 60;
    int lieCount = 10;
    int liarCount = 20;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    int n = 100;
    int eggCount = 75;
    int lieCount = 56;
    int liarCount = 23;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    int n = 6;
    int eggCount = 4;
    int lieCount = 3;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    int n = 60;
    int eggCount = 20;
    int lieCount = 35;
    int liarCount = 25;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    int n = 10;
    int eggCount = 3;
    int lieCount = 4;
    int liarCount = 6;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    int n = 10;
    int eggCount = 10;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    int n = 60;
    int eggCount = 32;
    int lieCount = 5;
    int liarCount = 25;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    int n = 10;
    int eggCount = 4;
    int lieCount = 3;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    int n = 10;
    int eggCount = 10;
    int lieCount = 7;
    int liarCount = 7;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    int n = 4;
    int eggCount = 2;
    int lieCount = 2;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    int n = 30;
    int eggCount = 20;
    int lieCount = 5;
    int liarCount = 15;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    int n = 60;
    int eggCount = 40;
    int lieCount = 10;
    int liarCount = 20;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    int n = 60;
    int eggCount = 40;
    int lieCount = 8;
    int liarCount = 26;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    int n = 60;
    int eggCount = 20;
    int lieCount = 25;
    int liarCount = 5;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    int n = 271;
    int eggCount = 65;
    int lieCount = 239;
    int liarCount = 80;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    int n = 10;
    int eggCount = 2;
    int lieCount = 1;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    int n = 6;
    int eggCount = 3;
    int lieCount = 1;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    int n = 60;
    int eggCount = 10;
    int lieCount = 50;
    int liarCount = 30;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    int n = 4;
    int eggCount = 0;
    int lieCount = 2;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    int n = 16;
    int eggCount = 9;
    int lieCount = 8;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    int n = 700;
    int eggCount = 200;
    int lieCount = 400;
    int liarCount = 300;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    int n = 11;
    int eggCount = 0;
    int lieCount = 4;
    int liarCount = 9;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    int n = 10;
    int eggCount = 6;
    int lieCount = 5;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    int n = 6;
    int eggCount = 5;
    int lieCount = 4;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    int n = 20;
    int eggCount = 8;
    int lieCount = 10;
    int liarCount = 10;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    int n = 60;
    int eggCount = 20;
    int lieCount = 5;
    int liarCount = 35;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    int n = 100;
    int eggCount = 10;
    int lieCount = 100;
    int liarCount = 100;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    int n = 4;
    int eggCount = 1;
    int lieCount = 2;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    int n = 50;
    int eggCount = 50;
    int lieCount = 50;
    int liarCount = 50;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    int n = 10;
    int eggCount = 2;
    int lieCount = 2;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    int n = 8144;
    int eggCount = 7808;
    int lieCount = 4902;
    int liarCount = 7152;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    int n = 6;
    int eggCount = 5;
    int lieCount = 4;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    int n = 4;
    int eggCount = 2;
    int lieCount = 2;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    int n = 1000;
    int eggCount = 600;
    int lieCount = 700;
    int liarCount = 100;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    int n = 5;
    int eggCount = 3;
    int lieCount = 4;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The egg";
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    int n = 3282;
    int eggCount = 417;
    int lieCount = 115;
    int liarCount = 491;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    int n = 60;
    int eggCount = 40;
    int lieCount = 40;
    int liarCount = 30;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    int n = 30;
    int eggCount = 20;
    int lieCount = 6;
    int liarCount = 14;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    int n = 16;
    int eggCount = 8;
    int lieCount = 2;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    int n = 6;
    int eggCount = 3;
    int lieCount = 3;
    int liarCount = 4;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    int n = 20;
    int eggCount = 8;
    int lieCount = 10;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    int n = 5;
    int eggCount = 2;
    int lieCount = 3;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    int n = 240;
    int eggCount = 100;
    int lieCount = 120;
    int liarCount = 24;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    int n = 10;
    int eggCount = 0;
    int lieCount = 6;
    int liarCount = 6;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The chicken";
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    int n = 2;
    int eggCount = 2;
    int lieCount = 1;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    int n = 8;
    int eggCount = 0;
    int lieCount = 4;
    int liarCount = 2;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    int n = 8;
    int eggCount = 4;
    int lieCount = 3;
    int liarCount = 3;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    int n = 1000;
    int eggCount = 499;
    int lieCount = 300;
    int liarCount = 300;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "The oracle is a lie";
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    int n = 50;
    int eggCount = 25;
    int lieCount = 26;
    int liarCount = 1;
    ChickenOracle* pObj = new ChickenOracle();
    clock_t start = clock();
    string result = pObj->theTruth(n, eggCount, lieCount, liarCount);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguous";
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14234&pm=11004
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
 
class ChickenOracle {
public:
  string theTruth(int, int, int, int);
};
 
string ChickenOracle::theTruth(int n, int egg, int lie, int liar) {
  int flag = 0, x, a, b, p, q;
  for (x=1;x<=2;x++) {
    if (x == 1) a = n-lie, b = lie;
    else a = lie, b = n-lie;
    for (p=0;p<=a;p++) {
      q = liar-p;
      if (q >= 0 && q <= b)
        if (a-p+q == egg) flag |= x;
    }
  }
  if (flag == 0) return "The oracle is a lie";
  if (flag == 1) return "The egg";
  if (flag == 2) return "The chicken";
  return "Ambiguous";
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/