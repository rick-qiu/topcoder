/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10570
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

class FunctionalEquation {
public:
    long minAbsSum(int C, int N, int xzero, int xprod, int xadd, int xmod, int yzero, int yprod, int yadd, int ymod);
};

long FunctionalEquation::minAbsSum(int C, int N, int xzero, int xprod, int xadd, int xmod, int yzero, int yprod, int yadd, int ymod) {
    long ret;
    return ret;
}


int test0() {
    int C = 3;
    int N = 10;
    int xzero = 0;
    int xprod = 1;
    int xadd = 1;
    int xmod = 456;
    int yzero = 1;
    int yprod = 1;
    int yadd = 1;
    int ymod = 456;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int C = 4;
    int N = 10;
    int xzero = 0;
    int xprod = 1;
    int xadd = 1;
    int xmod = 456;
    int yzero = 1;
    int yprod = 1;
    int yadd = 1;
    int ymod = 456;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int C = 16;
    int N = 10000;
    int xzero = 654816386;
    int xprod = 163457813;
    int xadd = 165911619;
    int xmod = 987654321;
    int yzero = 817645381;
    int yprod = 871564816;
    int yadd = 614735118;
    int ymod = 876543210;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 3150803357206;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int C = 1;
    int N = 5934;
    int xzero = 74927846;
    int xprod = 81480857;
    int xadd = 44270004;
    int xmod = 85377744;
    int yzero = 445349752;
    int yprod = 237936238;
    int yadd = 176941747;
    int ymod = 553475509;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 826192064195;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int C = 1;
    int N = 10000;
    int xzero = 147699711;
    int xprod = 68110231;
    int xadd = 265456603;
    int xmod = 812158120;
    int yzero = 47517990;
    int yprod = 182546393;
    int yadd = 576960918;
    int ymod = 686078706;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2560688375452;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int C = 2;
    int N = 7367;
    int xzero = 110025762;
    int xprod = 893294747;
    int xadd = 715669847;
    int xmod = 979932170;
    int yzero = 222156922;
    int yprod = 290269007;
    int yadd = 68706223;
    int ymod = 486937973;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2412152751798;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int C = 2;
    int N = 10000;
    int xzero = 212567592;
    int xprod = 196211064;
    int xadd = 121137619;
    int xmod = 843638550;
    int yzero = 373823875;
    int yprod = 136263086;
    int yadd = 498416072;
    int ymod = 928126552;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2969341761391;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int C = 3;
    int N = 636;
    int xzero = 458823023;
    int xprod = 111509468;
    int xadd = 155060020;
    int xmod = 941604921;
    int yzero = 620938878;
    int yprod = 361646331;
    int yadd = 65916225;
    int ymod = 659998485;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 172494922206;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int C = 3;
    int N = 10000;
    int xzero = 564817402;
    int xprod = 142750431;
    int xadd = 382045455;
    int xmod = 729267237;
    int yzero = 37853113;
    int yprod = 86806113;
    int yadd = 82137026;
    int ymod = 98560398;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1825669888536;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int C = 4;
    int N = 9345;
    int xzero = 439352155;
    int xprod = 327925359;
    int xadd = 398844030;
    int xmod = 718458135;
    int yzero = 73660030;
    int yprod = 131636287;
    int yadd = 67423694;
    int ymod = 185252728;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2619775228955;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int C = 4;
    int N = 10000;
    int xzero = 9275835;
    int xprod = 12319869;
    int xadd = 8400180;
    int xmod = 15934105;
    int yzero = 279749904;
    int yprod = 109805315;
    int yadd = 35610585;
    int ymod = 451230257;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2165187914265;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int C = 5;
    int N = 2491;
    int xzero = 95172609;
    int xprod = 164382895;
    int xadd = 344966675;
    int xmod = 518954510;
    int yzero = 592776277;
    int yprod = 108002669;
    int yadd = 120033497;
    int ymod = 843654050;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 596004732771;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int C = 5;
    int N = 10000;
    int xzero = 607525771;
    int xprod = 219218649;
    int xadd = 643287356;
    int xmod = 669566825;
    int yzero = 13380803;
    int yprod = 35821365;
    int yadd = 14142682;
    int ymod = 41654185;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1677351978846;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int C = 6;
    int N = 9307;
    int xzero = 510016244;
    int xprod = 238727332;
    int xadd = 292425665;
    int xmod = 807426510;
    int yzero = 589638738;
    int yprod = 401170801;
    int yadd = 142762906;
    int ymod = 944216784;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2746278190378;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int C = 6;
    int N = 10000;
    int xzero = 93919351;
    int xprod = 213421540;
    int xadd = 131636656;
    int xmod = 225161331;
    int yzero = 118506227;
    int yprod = 59723643;
    int yadd = 41744078;
    int ymod = 182095964;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 705661771196;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int C = 7;
    int N = 7107;
    int xzero = 141805243;
    int xprod = 402957063;
    int xadd = 289631603;
    int xmod = 593400969;
    int yzero = 139402177;
    int yprod = 533004090;
    int yadd = 346100850;
    int ymod = 668882481;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1505051655067;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int C = 7;
    int N = 10000;
    int xzero = 71772622;
    int xprod = 73164044;
    int xadd = 27005862;
    int xmod = 86000815;
    int yzero = 5748438;
    int yprod = 116253679;
    int yadd = 537894392;
    int ymod = 730103626;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 3254314678690;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int C = 8;
    int N = 8488;
    int xzero = 659169187;
    int xprod = 28409913;
    int xadd = 378183875;
    int xmod = 883570152;
    int yzero = 7347798;
    int yprod = 70060802;
    int yadd = 6364913;
    int ymod = 148026996;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 3203311970591;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int C = 8;
    int N = 10000;
    int xzero = 591635571;
    int xprod = 653962273;
    int xadd = 74652421;
    int xmod = 968295563;
    int yzero = 216467786;
    int yprod = 19740618;
    int yadd = 37577381;
    int ymod = 241418522;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 3833983696658;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int C = 9;
    int N = 7679;
    int xzero = 542938503;
    int xprod = 206695870;
    int xadd = 201610954;
    int xmod = 928854727;
    int yzero = 351329094;
    int yprod = 505684556;
    int yadd = 399462403;
    int ymod = 521884894;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2343982908067;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int C = 9;
    int N = 10000;
    int xzero = 212677188;
    int xprod = 433862532;
    int xadd = 276162929;
    int xmod = 525440094;
    int yzero = 49373640;
    int yprod = 478939469;
    int yadd = 217079209;
    int ymod = 533958747;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1767149750066;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int C = 10;
    int N = 5888;
    int xzero = 138865765;
    int xprod = 237123473;
    int xadd = 99354562;
    int xmod = 931858669;
    int yzero = 49959755;
    int yprod = 196796183;
    int yadd = 706140952;
    int ymod = 825207675;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1747727699689;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int C = 10;
    int N = 10000;
    int xzero = 9230700;
    int xprod = 1222330;
    int xadd = 3415086;
    int xmod = 9984371;
    int yzero = 114468298;
    int yprod = 71283494;
    int yadd = 189070372;
    int ymod = 232021906;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1106563559709;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int C = 11;
    int N = 143;
    int xzero = 399394688;
    int xprod = 227202703;
    int xadd = 208346752;
    int xmod = 471898586;
    int yzero = 68892498;
    int yprod = 56246726;
    int yadd = 295849487;
    int ymod = 338685732;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 18745735369;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int C = 11;
    int N = 10000;
    int xzero = 68043415;
    int xprod = 86105649;
    int xadd = 87899677;
    int xmod = 114316401;
    int yzero = 41486561;
    int yprod = 33169381;
    int yadd = 24337977;
    int ymod = 54969875;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 386790741588;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int C = 12;
    int N = 9269;
    int xzero = 19535542;
    int xprod = 18591734;
    int xadd = 16771103;
    int xmod = 23689366;
    int yzero = 333349106;
    int yprod = 368318229;
    int yadd = 148250950;
    int ymod = 817376090;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1882041785076;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int C = 12;
    int N = 10000;
    int xzero = 174332796;
    int xprod = 283046337;
    int xadd = 275817006;
    int xmod = 302247656;
    int yzero = 30457374;
    int yprod = 3823673;
    int yadd = 25720447;
    int ymod = 41127596;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 755011616901;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int C = 13;
    int N = 8731;
    int xzero = 58765573;
    int xprod = 86262417;
    int xadd = 33355022;
    int xmod = 220256096;
    int yzero = 137668077;
    int yprod = 58482455;
    int yadd = 76813188;
    int ymod = 145222949;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 542896026559;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int C = 13;
    int N = 10000;
    int xzero = 288380741;
    int xprod = 76964473;
    int xadd = 23634883;
    int xmod = 377520761;
    int yzero = 120469632;
    int yprod = 1506009;
    int yadd = 71668959;
    int ymod = 166723144;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1296255932305;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int C = 14;
    int N = 6136;
    int xzero = 228920379;
    int xprod = 263526060;
    int xadd = 200584307;
    int xmod = 934901150;
    int yzero = 1116921;
    int yprod = 2070187;
    int yadd = 2772385;
    int ymod = 3224418;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1424244849736;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int C = 14;
    int N = 10000;
    int xzero = 134707445;
    int xprod = 172761231;
    int xadd = 79172;
    int xmod = 209707627;
    int yzero = 95199961;
    int yprod = 181241457;
    int yadd = 495064395;
    int ymod = 509813596;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1778192202354;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int C = 15;
    int N = 1718;
    int xzero = 309016705;
    int xprod = 94994520;
    int xadd = 63674453;
    int xmod = 458914656;
    int yzero = 7905110;
    int yprod = 12128135;
    int yadd = 11496683;
    int ymod = 14238777;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 199633864720;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int C = 15;
    int N = 10000;
    int xzero = 325859158;
    int xprod = 466282452;
    int xadd = 501708870;
    int xmod = 631623003;
    int yzero = 35989158;
    int yprod = 130019381;
    int yadd = 35011394;
    int ymod = 133968317;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1597511470051;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int C = 16;
    int N = 7481;
    int xzero = 30993756;
    int xprod = 44696234;
    int xadd = 33463367;
    int xmod = 81126605;
    int yzero = 601214124;
    int yprod = 287289792;
    int yadd = 40379410;
    int ymod = 818041955;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2781812799054;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int C = 16;
    int N = 10000;
    int xzero = 117429278;
    int xprod = 331165382;
    int xadd = 692893978;
    int xmod = 741274454;
    int yzero = 527723017;
    int yprod = 623540543;
    int yadd = 400089019;
    int ymod = 685894564;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2395599628795;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int C = 16;
    int N = 10000;
    int xzero = 0;
    int xprod = 1;
    int xadd = 32;
    int xmod = 1000000;
    int yzero = 527723017;
    int yprod = 623540543;
    int yadd = 400089019;
    int ymod = 685894564;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1732193269752;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int C = 16;
    int N = 10000;
    int xzero = 31;
    int xprod = 1;
    int xadd = 32;
    int xmod = 1000000;
    int yzero = 527723017;
    int yprod = 623540543;
    int yadd = 400089019;
    int ymod = 685894564;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1732193269752;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int C = 3;
    int N = 100;
    int xzero = 47;
    int xprod = 0;
    int xadd = 47;
    int xmod = 1000;
    int yzero = 23;
    int yprod = 1;
    int yadd = 1;
    int ymod = 1000;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2500;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int C = 3;
    int N = 101;
    int xzero = 47;
    int xprod = 0;
    int xadd = 47;
    int xmod = 1000;
    int yzero = 23;
    int yprod = 1;
    int yadd = 9;
    int ymod = 100000;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 22950;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int C = 4;
    int N = 9876;
    int xzero = 42;
    int xprod = 0;
    int xadd = 47;
    int xmod = 1000;
    int yzero = 23;
    int yprod = 1;
    int yadd = 9;
    int ymod = 100000;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 219410154;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int C = 7;
    int N = 9853;
    int xzero = 100;
    int xprod = 1;
    int xadd = 100;
    int xmod = 1000;
    int yzero = 32154215;
    int yprod = 3252151;
    int yadd = 24512515;
    int ymod = 141536326;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 347153664344;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int C = 16;
    int N = 10000;
    int xzero = 17;
    int xprod = 13;
    int xadd = 5;
    int xmod = 70;
    int yzero = 14;
    int yprod = 3;
    int yadd = 74;
    int ymod = 99;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 179976;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int C = 16;
    int N = 10000;
    int xzero = 47;
    int xprod = 34;
    int xadd = 32;
    int xmod = 79;
    int yzero = 29;
    int yprod = 12;
    int yadd = 8;
    int ymod = 77;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 267868;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int C = 16;
    int N = 10000;
    int xzero = 999999999;
    int xprod = 1;
    int xadd = 999999999;
    int xmod = 1000000000;
    int yzero = 999999999;
    int yprod = 1;
    int yadd = 999999999;
    int ymod = 1000000000;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 74968;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int C = 16;
    int N = 10000;
    int xzero = 999999999;
    int xprod = 1;
    int xadd = 999999999;
    int xmod = 1000000000;
    int yzero = 0;
    int yprod = 1;
    int yadd = 1;
    int ymod = 1000000000;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 9983900394646;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int C = 16;
    int N = 10000;
    int xzero = 999999999;
    int xprod = 1;
    int xadd = 999999999;
    int xmod = 1000000000;
    int yzero = 176435876;
    int yprod = 167435187;
    int yadd = 467351289;
    int ymod = 1000000000;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 4977459607130;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int C = 16;
    int N = 3;
    int xzero = 1;
    int xprod = 2;
    int xadd = 3;
    int xmod = 61754;
    int yzero = 5;
    int yprod = 6;
    int yadd = 9;
    int ymod = 3746;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int C = 2;
    int N = 3;
    int xzero = 1746;
    int xprod = 52486;
    int xadd = 16254;
    int xmod = 23659449;
    int yzero = 1263;
    int yprod = 28576;
    int yadd = 1965;
    int ymod = 9256197;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 12354086;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int C = 16;
    int N = 10000;
    int xzero = 999999999;
    int xprod = 1;
    int xadd = 0;
    int xmod = 1000000000;
    int yzero = 6;
    int yprod = 3;
    int yadd = 1;
    int ymod = 10;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 15000;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int C = 16;
    int N = 10000;
    int xzero = 999999999;
    int xprod = 1;
    int xadd = 1;
    int xmod = 1000000000;
    int yzero = 499999999;
    int yprod = 1;
    int yadd = 2;
    int ymod = 1000000000;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 4992049920040;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int C = 16;
    int N = 10000;
    int xzero = 121845875;
    int xprod = 306684394;
    int xadd = 227859661;
    int xmod = 481765934;
    int yzero = 553475508;
    int yprod = 445349752;
    int yadd = 532217555;
    int ymod = 812669701;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2262234548866;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int C = 16;
    int N = 10000;
    int xzero = 351323605;
    int xprod = 147699711;
    int xadd = 149851094;
    int xmod = 730417257;
    int yzero = 686078705;
    int yprod = 326208420;
    int yadd = 182546393;
    int ymod = 889772844;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2756104505611;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int C = 16;
    int N = 10000;
    int xzero = 220137366;
    int xprod = 81695507;
    int xadd = 140839601;
    int xmod = 949118331;
    int yzero = 715669847;
    int yprod = 613711054;
    int yadd = 322805950;
    int ymod = 873226918;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 3040228259681;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int C = 16;
    int N = 10000;
    int xzero = 68706223;
    int xprod = 289224587;
    int xadd = 212567592;
    int xmod = 777206981;
    int yzero = 81288004;
    int yprod = 44638386;
    int yadd = 418462262;
    int ymod = 883488165;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2792748689953;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int C = 16;
    int N = 10000;
    int xzero = 434026433;
    int xprod = 849040635;
    int xadd = 941604920;
    int xmod = 992516191;
    int yzero = 393007530;
    int yprod = 36130137;
    int yadd = 259570539;
    int ymod = 400427945;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 3504342498595;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int C = 16;
    int N = 10000;
    int xzero = 276956481;
    int xprod = 164039982;
    int xadd = 43643052;
    int xmod = 280937364;
    int yzero = 2639169;
    int yprod = 19133523;
    int yadd = 20243344;
    int ymod = 23351877;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 701552611665;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int C = 16;
    int N = 10000;
    int xzero = 260469815;
    int xprod = 35222838;
    int xadd = 72558668;
    int xmod = 910500676;
    int yzero = 439352155;
    int yprod = 327925359;
    int yadd = 398844030;
    int ymod = 718458135;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2745710005657;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int C = 16;
    int N = 10000;
    int xzero = 73660030;
    int xprod = 131636287;
    int xadd = 67423694;
    int xmod = 185252728;
    int yzero = 9275835;
    int yprod = 12319869;
    int yadd = 8400180;
    int ymod = 15934105;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 465649048881;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int C = 16;
    int N = 10000;
    int xzero = 279749904;
    int xprod = 109805315;
    int xadd = 35610585;
    int xmod = 451230257;
    int yzero = 28539563;
    int yprod = 117322137;
    int yadd = 186532423;
    int ymod = 248402491;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1476233089237;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int C = 16;
    int N = 10000;
    int xzero = 312151265;
    int xprod = 287803239;
    int xadd = 185905327;
    int xmod = 382875696;
    int yzero = 109131350;
    int yprod = 76757616;
    int yadd = 99185151;
    int ymod = 120033498;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 984558894210;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int C = 16;
    int N = 10000;
    int xzero = 111792113;
    int xprod = 143048379;
    int xadd = 105360174;
    int xmod = 643287357;
    int yzero = 616518298;
    int yprod = 807426509;
    int yadd = 428861746;
    int ymod = 888581008;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2746180421153;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int C = 16;
    int N = 10000;
    int xzero = 292425665;
    int xprod = 90636430;
    int xadd = 589638738;
    int xmod = 853580353;
    int yzero = 284638086;
    int yprod = 21648924;
    int yadd = 241374931;
    int ymod = 401170802;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2909204660772;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int C = 16;
    int N = 10000;
    int xzero = 131636656;
    int xprod = 164411375;
    int xadd = 193397423;
    int xmod = 339228196;
    int yzero = 71540614;
    int yprod = 69091682;
    int yadd = 136502684;
    int ymod = 152299428;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 908457458838;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int C = 16;
    int N = 10000;
    int xzero = 119346575;
    int xprod = 599422084;
    int xadd = 668882480;
    int xmod = 735206213;
    int yzero = 393601912;
    int yprod = 206698672;
    int yadd = 469431496;
    int ymod = 808284659;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2590763122294;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int C = 16;
    int N = 10000;
    int xzero = 37600868;
    int xprod = 77443501;
    int xadd = 6533929;
    int xmod = 361784848;
    int yzero = 1388645;
    int yprod = 3341438;
    int yadd = 348151;
    int ymod = 5748439;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1793414724283;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int C = 16;
    int N = 10000;
    int xzero = 659169187;
    int xprod = 28409913;
    int xadd = 378183875;
    int xmod = 883570152;
    int yzero = 7347798;
    int yprod = 70060802;
    int yadd = 6364913;
    int ymod = 148026996;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 3765129963191;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int C = 16;
    int N = 10000;
    int xzero = 591635571;
    int xprod = 653962273;
    int xadd = 74652421;
    int xmod = 968295563;
    int yzero = 216467786;
    int yprod = 19740618;
    int yadd = 37577381;
    int ymod = 241418522;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 3830554493342;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int C = 16;
    int N = 10000;
    int xzero = 145299368;
    int xprod = 542938503;
    int xadd = 243772918;
    int xmod = 891777679;
    int yzero = 47321621;
    int yprod = 42728262;
    int yadd = 54445332;
    int ymod = 59320409;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 4127838346458;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int C = 16;
    int N = 10000;
    int xzero = 560323007;
    int xprod = 212677188;
    int xadd = 519625634;
    int xmod = 965117086;
    int yzero = 533958746;
    int yprod = 583332387;
    int yadd = 375849286;
    int ymod = 852483212;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 3038180309783;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int C = 16;
    int N = 10000;
    int xzero = 45279047;
    int xprod = 195224988;
    int xadd = 48870213;
    int xmod = 217079210;
    int yzero = 66084108;
    int yprod = 113837252;
    int yadd = 40510787;
    int ymod = 237123474;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 760087510961;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int C = 16;
    int N = 10000;
    int xzero = 27;
    int xprod = 28;
    int xadd = 11;
    int xmod = 34;
    int yzero = 0;
    int yprod = 0;
    int yadd = 0;
    int ymod = 1;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 20000;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int C = 16;
    int N = 10000;
    int xzero = 40;
    int xprod = 0;
    int xadd = 23;
    int xmod = 57;
    int yzero = 37;
    int yprod = 40;
    int yadd = 29;
    int ymod = 44;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 99980;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int C = 16;
    int N = 10000;
    int xzero = 11;
    int xprod = 20;
    int xadd = 9;
    int xmod = 31;
    int yzero = 17;
    int yprod = 2;
    int yadd = 8;
    int ymod = 18;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 24663;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int C = 16;
    int N = 10000;
    int xzero = 79;
    int xprod = 60;
    int xadd = 21;
    int xmod = 81;
    int yzero = 19;
    int yprod = 1;
    int yadd = 37;
    int ymod = 65;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 162394;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int C = 16;
    int N = 10000;
    int xzero = 52;
    int xprod = 79;
    int xadd = 74;
    int xmod = 91;
    int yzero = 35;
    int yprod = 37;
    int yadd = 44;
    int ymod = 45;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 112534;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int C = 16;
    int N = 10000;
    int xzero = 37;
    int xprod = 22;
    int xadd = 36;
    int xmod = 64;
    int yzero = 54;
    int yprod = 34;
    int yadd = 10;
    int ymod = 77;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 190784;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int C = 16;
    int N = 10000;
    int xzero = 35;
    int xprod = 38;
    int xadd = 28;
    int xmod = 76;
    int yzero = 10;
    int yprod = 19;
    int yadd = 25;
    int ymod = 35;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 91647;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int C = 16;
    int N = 10000;
    int xzero = 10;
    int xprod = 19;
    int xadd = 10;
    int xmod = 28;
    int yzero = 0;
    int yprod = 4;
    int yadd = 0;
    int ymod = 5;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int C = 16;
    int N = 10000;
    int xzero = 14;
    int xprod = 19;
    int xadd = 17;
    int xmod = 57;
    int yzero = 72;
    int yprod = 60;
    int yadd = 23;
    int ymod = 91;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 209937;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int C = 16;
    int N = 10000;
    int xzero = 65;
    int xprod = 87;
    int xadd = 79;
    int xmod = 96;
    int yzero = 16;
    int yprod = 10;
    int yadd = 97;
    int ymod = 98;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 244589;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int C = 1;
    int N = 1;
    int xzero = 0;
    int xprod = 86522;
    int xadd = 4134;
    int xmod = 407635;
    int yzero = 1;
    int yprod = 0;
    int yadd = 21;
    int ymod = 2578;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int C = 16;
    int N = 1;
    int xzero = 0;
    int xprod = 135101200;
    int xadd = 293;
    int xmod = 1000000000;
    int yzero = 37619066;
    int yprod = 6499;
    int yadd = 79;
    int ymod = 1000000000;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int C = 6;
    int N = 955;
    int xzero = 0;
    int xprod = 0;
    int xadd = 12;
    int xmod = 93;
    int yzero = 0;
    int yprod = 0;
    int yadd = 0;
    int ymod = 2;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int C = 8;
    int N = 785;
    int xzero = 7;
    int xprod = 532;
    int xadd = 3804298;
    int xmod = 81380390;
    int yzero = 0;
    int yprod = 0;
    int yadd = 0;
    int ymod = 4;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 15848324277;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int C = 8;
    int N = 7674;
    int xzero = 50;
    int xprod = 9;
    int xadd = 187;
    int xmod = 4423;
    int yzero = 0;
    int yprod = 0;
    int yadd = 0;
    int ymod = 3;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 16766300;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int C = 3;
    int N = 1;
    int xzero = 71;
    int xprod = 42443;
    int xadd = 377060;
    int xmod = 705190426;
    int yzero = 7;
    int yprod = 80;
    int yadd = 0;
    int ymod = 4443;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int C = 9;
    int N = 7;
    int xzero = 0;
    int xprod = 254;
    int xadd = 677983;
    int xmod = 1000000000;
    int yzero = 0;
    int yprod = 640;
    int yadd = 286;
    int ymod = 6026;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1046973466;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int C = 3;
    int N = 10000;
    int xzero = 2;
    int xprod = 0;
    int xadd = 0;
    int xmod = 18;
    int yzero = 668737;
    int yprod = 34154;
    int yadd = 628;
    int ymod = 1000000000;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 2491194191182;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int C = 9;
    int N = 41;
    int xzero = 6;
    int xprod = 672;
    int xadd = 0;
    int xmod = 121172274;
    int yzero = 41171;
    int yprod = 606386504;
    int yadd = 0;
    int ymod = 1000000000;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 9172585980;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int C = 9;
    int N = 4;
    int xzero = 0;
    int xprod = 6;
    int xadd = 4236;
    int xmod = 9651;
    int yzero = 533;
    int yprod = 113478;
    int yadd = 399868028;
    int ymod = 538424133;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 40078590;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int C = 15;
    int N = 4;
    int xzero = 32876560;
    int xprod = 1;
    int xadd = 0;
    int xmod = 88039523;
    int yzero = 14;
    int yprod = 92;
    int yadd = 274588;
    int ymod = 18084460;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 16866178;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int C = 11;
    int N = 54;
    int xzero = 0;
    int xprod = 0;
    int xadd = 39;
    int xmod = 50;
    int yzero = 2132;
    int yprod = 0;
    int yadd = 9442;
    int ymod = 85546;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int C = 6;
    int N = 7;
    int xzero = 0;
    int xprod = 9;
    int xadd = 0;
    int xmod = 46;
    int yzero = 8552;
    int yprod = 3;
    int yadd = 2190;
    int ymod = 9390;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 18290;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int C = 9;
    int N = 6194;
    int xzero = 3452064;
    int xprod = 6;
    int xadd = 5;
    int xmod = 91100346;
    int yzero = 0;
    int yprod = 4;
    int yadd = 5;
    int ymod = 21;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 141389525959;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int C = 5;
    int N = 67;
    int xzero = 67242;
    int xprod = 3215;
    int xadd = 392115;
    int xmod = 578097;
    int yzero = 2;
    int yprod = 0;
    int yadd = 0;
    int ymod = 74;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 19016059;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int C = 9;
    int N = 919;
    int xzero = 417;
    int xprod = 1083;
    int xadd = 519;
    int xmod = 4653;
    int yzero = 0;
    int yprod = 0;
    int yadd = 0;
    int ymod = 4;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1014354;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int C = 1;
    int N = 10000;
    int xzero = 47;
    int xprod = 1013;
    int xadd = 24;
    int xmod = 543990368;
    int yzero = 35;
    int yprod = 18893;
    int yadd = 16;
    int ymod = 91693;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1365240944232;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int C = 6;
    int N = 2;
    int xzero = 61;
    int xprod = 548655;
    int xadd = 1845320;
    int xmod = 662967648;
    int yzero = 928;
    int yprod = 46;
    int yadd = 2950;
    int ymod = 5315;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int C = 12;
    int N = 8;
    int xzero = 0;
    int xprod = 1;
    int xadd = 69;
    int xmod = 620;
    int yzero = 82;
    int yprod = 0;
    int yadd = 7;
    int ymod = 230;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int C = 13;
    int N = 11;
    int xzero = 5;
    int xprod = 0;
    int xadd = 14;
    int xmod = 26;
    int yzero = 0;
    int yprod = 3451;
    int yadd = 320;
    int ymod = 829879;
    FunctionalEquation* pObj = new FunctionalEquation();
    clock_t start = clock();
    long result = pObj->minAbsSum(C, N, xzero, xprod, xadd, xmod, yzero, yprod, yadd, ymod);
    clock_t end = clock();
    delete pObj;
    long expected = 1594359;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=13909&pm=10570
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
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
typedef long long LL;
const LL INFLL = 1000000000000000000LL;
template<class T> inline int size(const T&c) { return c.size(); }
 
int C;
vector<LL> xs, ys;
vector<vector<LL> > wanted; // [0..2C-1] -> list of y
 
void pseudoRandom(vector<LL> &v, int N, LL xzero, LL xprod, LL xadd, LL xmod) {
  v.resize(N);
  LL x = xzero;
  REP(i,N) {
    v[i] = x;
    x = (x * xprod + xadd) % xmod;
  }
}
 
void fixYS() {
  REP(i, size(xs)) { ys[i] = 2*ys[i]+1-xs[i]; }
}
 
inline int mod2C(LL x) {
  return (int(x%(2*C)) + 2*C) % (2*C);
}
 
void calcWanted() {
  wanted.clear(); wanted.resize(2*C);
  REP(i,size(xs)) {
    LL x = xs[i], y = ys[i];
    int x1 = mod2C(x);
    wanted[x1].push_back(y - (x-x1));
  }
}
 
inline LL myabs(LL x) { return x>=0 ? x : -x; }
 
LL calcDiffs(int a, LL val) {
  LL res = 0;
  FOREACH(it, wanted[a]) res += myabs(val - *it);
  return res;
}
 
LL match(int a,int b,LL val) {
  LL res = calcDiffs(a, val);
  LL val2 = a + 2*C - (val-b);
  res += calcDiffs(b, val2);
  return res;
}
 
LL cacheMatch[32][32];
LL matchPair(int a, int b) { // a,b <= 2*C
  LL &res = cacheMatch[a][b];
  if(res != -1) return res;
  LL v = b;
  LL step = LL(2*C) << 32;
  res = match(a,b,v);
  while(step >= 2*C) {
    for(;;) {
      LL newval = match(a,b,v+step);
      if(newval < res) { res = newval; v += step; }
      else break;
    }
    for(;;) {
      LL newval = match(a,b,v-step);
      if(newval < res) { res = newval; v -= step; }
      else break;
    }
    step >>= 1;
  }
  //fprintf(stderr, "mp(%d,%d)=%lld\n", a, b, res);
  return res;
}
 
LL cacheCalc[1<<16];
 
LL calc(int done, int ss) {
  LL &res = cacheCalc[ss];
  if(res != -1) return res;
  if(done == C) res = 0;
  else {
    res = INFLL;
    REP(i,C) if((ss&(1<<i))==0) {
      res = min(res, matchPair(2*done, 2*i+1) + calc(done+1, ss^(1<<i)));
    }
  }
  return res;
}
 
struct FunctionalEquation {
long long minAbsSum(int C1, int N, int xzero, int xprod, int xadd, int xmod, int yzero, int yprod, int yadd, int ymod) {
  C = C1;
  pseudoRandom(xs, N, xzero, xprod, xadd, xmod);
  pseudoRandom(ys, N, yzero, yprod, yadd, ymod);
  fixYS();
  calcWanted();
  memset(cacheCalc, -1, sizeof(cacheCalc));
  memset(cacheMatch, -1, sizeof(cacheMatch));
  return calc(0,0)/2;
}
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/