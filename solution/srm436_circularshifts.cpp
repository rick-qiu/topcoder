/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10336
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

class CircularShifts {
public:
    int maxScore(int N, int Z0, int A, int B, int M);
};

int CircularShifts::maxScore(int N, int Z0, int A, int B, int M) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    int Z0 = 1;
    int A = 1;
    int B = 0;
    int M = 13;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 4;
    int Z0 = 1;
    int A = 1;
    int B = 1;
    int M = 20;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 10;
    int Z0 = 23;
    int A = 11;
    int B = 51;
    int M = 4322;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 28886;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 1000;
    int Z0 = 3252;
    int A = 3458736;
    int B = 233421;
    int M = 111111111;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2585408;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 60000;
    int Z0 = 123121;
    int A = 289347322;
    int B = 231211112;
    int M = 989333333;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 149230883;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 141;
    int Z0 = 96478;
    int A = 24834;
    int B = 74860;
    int M = 92112;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 419992;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 927;
    int Z0 = 93846;
    int A = 49470;
    int B = 42066;
    int M = 57059;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2329410;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 1521;
    int Z0 = 61983;
    int A = 56293;
    int B = 84434;
    int M = 40219;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4785918;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 1994;
    int Z0 = 78455;
    int A = 79773;
    int B = 80504;
    int M = 86195;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 5989576;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 762;
    int Z0 = 64868;
    int A = 98272;
    int B = 84883;
    int M = 74677;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1941974;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 206;
    int Z0 = 54944;
    int A = 20813;
    int B = 48180;
    int M = 75505;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 564055;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 493;
    int Z0 = 56315;
    int A = 90892;
    int B = 4816;
    int M = 17358;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1350968;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 539;
    int Z0 = 45735;
    int A = 51566;
    int B = 73422;
    int M = 73587;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1733319;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 804;
    int Z0 = 93916;
    int A = 36799;
    int B = 49452;
    int M = 74973;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2175089;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 1673;
    int Z0 = 85650;
    int A = 68326;
    int B = 89940;
    int M = 91474;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4273672;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 9350;
    int Z0 = 9503874;
    int A = 7934487;
    int B = 3660674;
    int M = 9947931;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 24452943;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 12383;
    int Z0 = 3177214;
    int A = 6367106;
    int B = 230718;
    int M = 3890580;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 39400484;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 2900;
    int Z0 = 1473997;
    int A = 737814;
    int B = 2537759;
    int M = 1515009;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 7227768;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 6350;
    int Z0 = 7342650;
    int A = 671941;
    int B = 4465920;
    int M = 2756759;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 15742264;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 2053;
    int Z0 = 2837520;
    int A = 6155327;
    int B = 1755869;
    int M = 4178847;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 5254351;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 4421;
    int Z0 = 4712083;
    int A = 6143442;
    int B = 455285;
    int M = 6739796;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 11831901;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 4798;
    int Z0 = 8616880;
    int A = 581985;
    int B = 4503375;
    int M = 4393427;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 12102396;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 3587;
    int Z0 = 8578390;
    int A = 9148218;
    int B = 7416478;
    int M = 9360337;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 11501579;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 10009;
    int Z0 = 5981726;
    int A = 7875134;
    int B = 9845667;
    int M = 9287798;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 32165158;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 4888;
    int Z0 = 520918;
    int A = 3952503;
    int B = 374250;
    int M = 2251693;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 12177442;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 29869;
    int Z0 = 480267264;
    int A = 700158560;
    int B = 186907370;
    int M = 101317025;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 100104580;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 24389;
    int Z0 = 54366000;
    int A = 52744399;
    int B = 262355769;
    int M = 149347619;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 60145494;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 25002;
    int Z0 = 255976755;
    int A = 851296105;
    int B = 233609756;
    int M = 9005748;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 86055746;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 37189;
    int Z0 = 625830472;
    int A = 614736655;
    int B = 56836707;
    int M = 286757301;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 92100493;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 21718;
    int Z0 = 60582090;
    int A = 423205571;
    int B = 282533858;
    int M = 257245028;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 52797008;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 23195;
    int Z0 = 67339838;
    int A = 394395522;
    int B = 320535084;
    int M = 366449188;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 53315208;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 25786;
    int Z0 = 52914674;
    int A = 625353717;
    int B = 19821201;
    int M = 119739950;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 50764481;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 39558;
    int Z0 = 661662853;
    int A = 96144446;
    int B = 15411304;
    int M = 228498317;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 97413529;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 32044;
    int Z0 = 569484867;
    int A = 345500226;
    int B = 140045599;
    int M = 109619693;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 79637049;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 28022;
    int Z0 = 30409811;
    int A = 177881381;
    int B = 37008727;
    int M = 41137821;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 69366720;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 29334;
    int Z0 = 630621287;
    int A = 332159797;
    int B = 212745023;
    int M = 573536474;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 72385631;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 22668;
    int Z0 = 240433222;
    int A = 247733867;
    int B = 19713925;
    int M = 4052300;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 81652190;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 31023;
    int Z0 = 391478473;
    int A = 850491801;
    int B = 627063956;
    int M = 1223087;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 79941738;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 31286;
    int Z0 = 103224787;
    int A = 187403654;
    int B = 416256135;
    int M = 607775024;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 76751912;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 38896;
    int Z0 = 34011645;
    int A = 1919855;
    int B = 605884981;
    int M = 576562403;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 95718891;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 26302;
    int Z0 = 390261564;
    int A = 538891127;
    int B = 28997471;
    int M = 64843688;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 66031783;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 31060;
    int Z0 = 17358017;
    int A = 653543126;
    int B = 364046519;
    int M = 36608759;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 75900072;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 37086;
    int Z0 = 103122732;
    int A = 38019877;
    int B = 179748135;
    int M = 196860003;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 91073204;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 20123;
    int Z0 = 91928513;
    int A = 331593639;
    int B = 51236636;
    int M = 102268792;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 51176817;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 30771;
    int Z0 = 163802970;
    int A = 641095724;
    int B = 656986384;
    int M = 389135192;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 71550880;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 30900;
    int Z0 = 335820632;
    int A = 108815032;
    int B = 31276039;
    int M = 29405638;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 77952301;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 22324;
    int Z0 = 33105629;
    int A = 294800337;
    int B = 324321873;
    int M = 531393061;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 54920715;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 31111;
    int Z0 = 368448196;
    int A = 178232023;
    int B = 297776876;
    int M = 15223009;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 76762612;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 33357;
    int Z0 = 682725196;
    int A = 378652478;
    int B = 299499821;
    int M = 216617202;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 83822978;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 24423;
    int Z0 = 584626106;
    int A = 58607284;
    int B = 359859277;
    int M = 106573311;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 60416874;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 36972;
    int Z0 = 308338165;
    int A = 7727024;
    int B = 10609552;
    int M = 106827339;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 92779386;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 22223;
    int Z0 = 525967579;
    int A = 458821134;
    int B = 57432195;
    int M = 51939890;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 57012237;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 31783;
    int Z0 = 414964579;
    int A = 276806027;
    int B = 43441714;
    int M = 20306474;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 80817915;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 26962;
    int Z0 = 167513088;
    int A = 239866588;
    int B = 326655872;
    int M = 852565272;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 65879568;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 32678;
    int Z0 = 32340432;
    int A = 127246233;
    int B = 17575818;
    int M = 635303;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 108475784;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 58112;
    int Z0 = 404246286;
    int A = 530848205;
    int B = 372200319;
    int M = 393637904;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 143828916;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 60000;
    int Z0 = 498749784;
    int A = 3780189;
    int B = 85140424;
    int M = 347198873;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 148323057;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 53775;
    int Z0 = 603655533;
    int A = 518703805;
    int B = 204561350;
    int M = 816297774;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 135807777;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 59174;
    int Z0 = 125212492;
    int A = 71337471;
    int B = 144663616;
    int M = 42102959;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 145859544;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 58027;
    int Z0 = 41165086;
    int A = 386991347;
    int B = 777508091;
    int M = 480937230;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 142261079;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 52363;
    int Z0 = 199788199;
    int A = 221896902;
    int B = 159343738;
    int M = 213317105;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 129118042;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 50750;
    int Z0 = 125396414;
    int A = 3481964;
    int B = 152792896;
    int M = 53096858;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 122741932;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 60000;
    int Z0 = 618617586;
    int A = 33056644;
    int B = 119166504;
    int M = 45698101;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 147817674;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 53245;
    int Z0 = 722363414;
    int A = 271950255;
    int B = 664488831;
    int M = 850358812;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 131677605;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 60000;
    int Z0 = 50881521;
    int A = 377976100;
    int B = 628551;
    int M = 6157622;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 150382832;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 60000;
    int Z0 = 3252;
    int A = 3458736;
    int B = 233421;
    int M = 111111111;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 147727327;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 60000;
    int Z0 = 96478;
    int A = 24834;
    int B = 74860;
    int M = 92112;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 188580624;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 60000;
    int Z0 = 384657439;
    int A = 384657439;
    int B = 999999994;
    int M = 928475895;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 148791040;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 59987;
    int Z0 = 59987;
    int A = 59987;
    int B = 59987;
    int M = 59987;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 60000;
    int Z0 = 3123;
    int A = 12312;
    int B = 12312;
    int M = 131232;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 189076504;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 60000;
    int Z0 = 23;
    int A = 11;
    int B = 51;
    int M = 4322;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 187999552;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 60000;
    int Z0 = 1;
    int A = 2;
    int B = 3;
    int M = 929458781;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 147563238;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 60000;
    int Z0 = 1;
    int A = 1;
    int B = 3;
    int M = 100;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 197010000;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 60000;
    int Z0 = 666131342;
    int A = 6661313;
    int B = 123456789;
    int M = 999999999;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 148248144;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 60000;
    int Z0 = 999999999;
    int A = 123;
    int B = 123;
    int M = 999999999;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 149874710;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 60000;
    int Z0 = 1000000000;
    int A = 999999993;
    int B = 113;
    int M = 999999923;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 148983228;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 60000;
    int Z0 = 3;
    int A = 433;
    int B = 53;
    int M = 323453;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 196800249;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 59999;
    int Z0 = 999999999;
    int A = 888888889;
    int B = 777777779;
    int M = 987654322;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 147963665;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 59796;
    int Z0 = 981234597;
    int A = 856977717;
    int B = 543111211;
    int M = 241313333;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 147041218;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 60000;
    int Z0 = 1000000000;
    int A = 1000000000;
    int B = 1000000000;
    int M = 1000000000;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 60000;
    int Z0 = 32452345;
    int A = 1451234;
    int B = 14321324;
    int M = 312453425;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 151052350;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 60000;
    int Z0 = 1;
    int A = 2;
    int B = 3;
    int M = 999999937;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 148366844;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 60000;
    int Z0 = 123;
    int A = 99347;
    int B = 23423;
    int M = 3242357;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 147970298;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 60000;
    int Z0 = 2137189;
    int A = 2173892;
    int B = 12371892;
    int M = 121782378;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 144974976;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 59987;
    int Z0 = 3252;
    int A = 3458736;
    int B = 233421;
    int M = 111111111;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 147820211;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 60000;
    int Z0 = 57;
    int A = 239;
    int B = 17;
    int M = 999999991;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 147934006;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 60000;
    int Z0 = 431;
    int A = 432414315;
    int B = 123432543;
    int M = 1000000000;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 351380944;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 60000;
    int Z0 = 1;
    int A = 65536;
    int B = 1;
    int M = 999999937;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 147688589;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 60000;
    int Z0 = 999999999;
    int A = 999999998;
    int B = 999999997;
    int M = 999999996;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 157932344;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 60000;
    int Z0 = 239;
    int A = 239017;
    int B = 23917;
    int M = 1000003;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 150191075;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 60000;
    int Z0 = 3;
    int A = 999999131;
    int B = 999999113;
    int M = 999999137;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 147629209;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 55555;
    int Z0 = 213;
    int A = 343432;
    int B = 53432;
    int M = 999999999;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 137593876;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 60000;
    int Z0 = 389;
    int A = 1572869;
    int B = 6291473;
    int M = 12582917;
    CircularShifts* pObj = new CircularShifts();
    clock_t start = clock();
    int result = pObj->maxScore(N, Z0, A, B, M);
    clock_t end = clock();
    delete pObj;
    int expected = 147357663;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22679311&rd=13698&pm=10336
********************************************************************************
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <algorithm>
#include <functional>
#include <sstream>
#include <iostream>
#include <cmath>
 
using namespace std;
 
int count_bit(int a)
{
  int res = 0;
  for(; a; a >>= 1) res += a & 1;
  return res;
}
 
int max_bit(int a)
{
  int res = -1;
  for(int i = 0; a >> i; ++i) if((a >> i) & 1) res = i;
  return res;
}
 
int inverse_bit(int a, int s)
{
  int res = 0;
  for(int i = 0; a >> i; ++i) res |= ((a >> i) & 1) << (s - i - 1);
  return res;
}
 
 
 
void FFT_complex(const double* src_r, const double* src_i, double* res_r, double* res_i, int size, double theta)
{
  int max_b = max_bit(size);
  double *cos_t = new double[size], *sin_t = new double[size];
  for(int i = 0; i < size; ++i)
  {
    cos_t[i] = cos(i * theta / size);
    sin_t[i] = sin(i * theta / size);
    res_r[i] = src_r[inverse_bit(i, max_b)];
    res_i[i] = src_i[inverse_bit(i, max_b)];
  }
  int d = 1 << (max_b - 1);
  for(int i = 0; (1 << i) < size; ++i)
  {
    for(int k = 0; k < size; k += (2 << i))
    {
      for(int j = 0; j < (1 << i); ++j)
      {
        double r1 = res_r[j + k], r2 = res_r[j + k + (1 << i)];
        double i1 = res_i[j + k], i2 = res_i[j + k + (1 << i)];
        res_r[j + k] = r1 + r2 * cos_t[(size >> (i + 1)) * j] - i2 * sin_t[(size >> (i + 1)) * j];
        res_i[j + k] = i1 + r2 * sin_t[(size >> (i + 1)) * j] + i2 * cos_t[(size >> (i + 1)) * j];
        res_r[j + k + (1 << i)] = r1 + r2 * cos_t[d + (size >> (i + 1)) * j] - i2 * sin_t[d + (size >> (i + 1)) * j];
        res_i[j + k + (1 << i)] = i1 + r2 * sin_t[d + (size >> (i + 1)) * j] + i2 * cos_t[d + (size >> (i + 1)) * j];
      }
    }
  }
}
 
void cyclic_convo(const double* a, const double* b, double* res, int size)
{
  int n = 1 << (max_bit(size) + 2);
  if(count_bit(size) == 1) n = size;
  double *a_r = new double[n], *a_i = new double[n];
  double *ar_r = new double[n], *ar_i = new double[n];
  memset(a_r, 0, n * sizeof(double));
  memset(a_i, 0, n * sizeof(double));
  memcpy(a_r, a, size * sizeof(double));
  memcpy(a_i, b, size * sizeof(double));
  FFT_complex(a_r, a_i, ar_r, ar_i, n, -M_PI * 2);
  for(int i = 0; i < n; ++i)
  {
    double p = ar_r[i], q = ar_i[i], r = ar_r[(n - i) % n], s = ar_i[(n - i) % n];
    a_r[i] = (p * q + r * s) / 2;
    a_i[i] = ((r * r + q * q) - (p * p + s * s)) / 4;
  }
  FFT_complex(a_r, a_i, ar_r, ar_i, n, M_PI * 2);
  memcpy(res, ar_r, size * sizeof(double));
  for(int i = size; i < n; ++i) res[i % size] += ar_r[i];
  for(int i = 0; i < size; ++i) res[i] /= n;
  delete[] a_r;
  delete[] a_i;
  delete[] ar_r;
  delete[] ar_i;
}
 
 
 
double x[600000], y[600000];
double res[600000];
 
class CircularShifts {
public:
  int maxScore(int N, int Z0, int A, int B, int M)
  {
    Z0 %= M;
    for(int i = 0; i < 2 * N; ++i) {
      if(i < N) x[i] = Z0 % 100;
      else y[i - N] = Z0 % 100;
      Z0 = ((long long)Z0 * A + B) % M;
    }
    reverse(y, y + N);
    cyclic_convo(x, y, res, N);
    double r = 0;
    for(int i = 0; i < N; ++i) r = max(r, res[i]);
    return (int)(r + 0.5);
  }
};
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/