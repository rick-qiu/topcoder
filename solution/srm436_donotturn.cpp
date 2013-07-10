/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10337
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

class DoNotTurn {
public:
    int minimumTurns(int N, int X0, int A, int B, int Y0, int C, int D, int P, int M);
};

int DoNotTurn::minimumTurns(int N, int X0, int A, int B, int Y0, int C, int D, int P, int M) {
    int ret;
    return ret;
}


int test0() {
    int N = 2;
    int X0 = 0;
    int A = 0;
    int B = 1;
    int Y0 = 0;
    int C = 0;
    int D = 1;
    int P = 10;
    int M = 2;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
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
    int N = 3;
    int X0 = 0;
    int A = 1;
    int B = 1;
    int Y0 = 1;
    int C = 1;
    int D = 0;
    int P = 3;
    int M = 3;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 3;
    int X0 = 0;
    int A = 1;
    int B = 1;
    int Y0 = 1;
    int C = 1;
    int D = 1;
    int P = 3;
    int M = 3;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 10;
    int X0 = 1;
    int A = 2;
    int B = 3;
    int Y0 = 5;
    int C = 7;
    int D = 1;
    int P = 997;
    int M = 30;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 10;
    int X0 = 911111;
    int A = 845499;
    int B = 866249;
    int Y0 = 688029;
    int C = 742197;
    int D = 312197;
    int P = 384409;
    int M = 40;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 15;
    int X0 = 185917;
    int A = 104311;
    int B = 3527;
    int Y0 = 27409;
    int C = 127541;
    int D = 46723;
    int P = 53299;
    int M = 16;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 101;
    int X0 = 887;
    int A = 1913;
    int B = 132661;
    int Y0 = 193057;
    int C = 208991;
    int D = 221261;
    int P = 223423;
    int M = 6161;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 57;
    int X0 = 122701;
    int A = 16069;
    int B = 223637;
    int Y0 = 295769;
    int C = 303691;
    int D = 188443;
    int P = 103561;
    int M = 1179;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
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
    int N = 13;
    int X0 = 354451;
    int A = 196181;
    int B = 44893;
    int Y0 = 165587;
    int C = 78583;
    int D = 328051;
    int P = 69163;
    int M = 137;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 57;
    int X0 = 385943;
    int A = 225221;
    int B = 138209;
    int Y0 = 90071;
    int C = 101737;
    int D = 319069;
    int P = 5927;
    int M = 2092;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 26;
    int X0 = 15797;
    int A = 1879;
    int B = 351691;
    int Y0 = 93629;
    int C = 92593;
    int D = 215723;
    int P = 257671;
    int M = 23;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 56;
    int X0 = 67547;
    int A = 279137;
    int B = 168193;
    int Y0 = 163901;
    int C = 364499;
    int D = 279511;
    int P = 33107;
    int M = 2524;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 39;
    int X0 = 224201;
    int A = 209441;
    int B = 126229;
    int Y0 = 48259;
    int C = 74821;
    int D = 150989;
    int P = 303817;
    int M = 947;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 54;
    int X0 = 120277;
    int A = 54421;
    int B = 243889;
    int Y0 = 177433;
    int C = 18181;
    int D = 261229;
    int P = 182549;
    int M = 1280;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 133;
    int X0 = 346043;
    int A = 258353;
    int B = 103991;
    int Y0 = 151517;
    int C = 20411;
    int D = 372061;
    int P = 254329;
    int M = 1017;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 121;
    int X0 = 213289;
    int A = 62467;
    int B = 57529;
    int Y0 = 309667;
    int C = 170851;
    int D = 49633;
    int P = 182179;
    int M = 10907;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 286;
    int X0 = 208009;
    int A = 253937;
    int B = 284159;
    int Y0 = 270163;
    int C = 170857;
    int D = 38197;
    int P = 128749;
    int M = 11860;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 250;
    int X0 = 246173;
    int A = 151391;
    int B = 31981;
    int Y0 = 364571;
    int C = 352711;
    int D = 200293;
    int P = 120431;
    int M = 4687;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 157;
    int X0 = 109201;
    int A = 163169;
    int B = 92243;
    int Y0 = 378919;
    int C = 101921;
    int D = 277231;
    int P = 207481;
    int M = 3537;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 122;
    int X0 = 140269;
    int A = 181001;
    int B = 339769;
    int Y0 = 7001;
    int C = 383839;
    int D = 209519;
    int P = 14033;
    int M = 14080;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 110;
    int X0 = 231271;
    int A = 244033;
    int B = 64879;
    int Y0 = 319831;
    int C = 38299;
    int D = 33623;
    int P = 278879;
    int M = 4343;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 191;
    int X0 = 116731;
    int A = 44171;
    int B = 274831;
    int Y0 = 316891;
    int C = 264643;
    int D = 220687;
    int P = 280627;
    int M = 30498;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 181;
    int X0 = 17389;
    int A = 305111;
    int B = 324223;
    int Y0 = 69497;
    int C = 35591;
    int D = 201809;
    int P = 3323;
    int M = 12023;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 228;
    int X0 = 255511;
    int A = 197837;
    int B = 21577;
    int Y0 = 155453;
    int C = 66361;
    int D = 259691;
    int P = 99109;
    int M = 46421;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 500;
    int X0 = 193451;
    int A = 232007;
    int B = 51329;
    int Y0 = 182279;
    int C = 370471;
    int D = 259531;
    int P = 354139;
    int M = 94231;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 500;
    int X0 = 384079;
    int A = 163697;
    int B = 385261;
    int Y0 = 29411;
    int C = 230551;
    int D = 28433;
    int P = 155783;
    int M = 6830;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 500;
    int X0 = 98993;
    int A = 75617;
    int B = 289721;
    int Y0 = 145463;
    int C = 66373;
    int D = 231779;
    int P = 222199;
    int M = 206841;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 398;
    int X0 = 234613;
    int A = 325021;
    int B = 314491;
    int Y0 = 230383;
    int C = 269713;
    int D = 206909;
    int P = 131611;
    int M = 22255;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 438;
    int X0 = 346039;
    int A = 81343;
    int B = 61553;
    int Y0 = 222461;
    int C = 260677;
    int D = 214363;
    int P = 122389;
    int M = 97491;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 402;
    int X0 = 225427;
    int A = 228797;
    int B = 257639;
    int Y0 = 304481;
    int C = 47389;
    int D = 210811;
    int P = 330331;
    int M = 102456;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 469;
    int X0 = 11821;
    int A = 248063;
    int B = 376099;
    int Y0 = 108533;
    int C = 208213;
    int D = 104971;
    int P = 56179;
    int M = 83973;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 357;
    int X0 = 279443;
    int A = 49409;
    int B = 113089;
    int Y0 = 23327;
    int C = 22447;
    int D = 237271;
    int P = 310867;
    int M = 60665;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 500;
    int X0 = 102217;
    int A = 167017;
    int B = 181141;
    int Y0 = 48647;
    int C = 111623;
    int D = 276763;
    int P = 108127;
    int M = 150300;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 500;
    int X0 = 271393;
    int A = 102679;
    int B = 362347;
    int Y0 = 39667;
    int C = 18947;
    int D = 296437;
    int P = 190313;
    int M = 132261;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 476;
    int X0 = 333667;
    int A = 242453;
    int B = 111253;
    int Y0 = 32027;
    int C = 182627;
    int D = 75541;
    int P = 99089;
    int M = 110345;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 345;
    int X0 = 35227;
    int A = 177787;
    int B = 133109;
    int Y0 = 179381;
    int C = 299993;
    int D = 184279;
    int P = 134363;
    int M = 7141;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 449;
    int X0 = 139333;
    int A = 1181;
    int B = 264601;
    int Y0 = 30553;
    int C = 229763;
    int D = 328481;
    int P = 177269;
    int M = 88099;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 488;
    int X0 = 296563;
    int A = 201673;
    int B = 124633;
    int Y0 = 367163;
    int C = 232937;
    int D = 57073;
    int P = 131251;
    int M = 137636;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 413;
    int X0 = 225373;
    int A = 7127;
    int B = 114217;
    int Y0 = 15731;
    int C = 236527;
    int D = 41213;
    int P = 321833;
    int M = 30275;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 421;
    int X0 = 324757;
    int A = 3449;
    int B = 39371;
    int Y0 = 264619;
    int C = 227501;
    int D = 72031;
    int P = 19031;
    int M = 215187;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 500;
    int X0 = 110233;
    int A = 128659;
    int B = 245383;
    int Y0 = 303619;
    int C = 305401;
    int D = 191099;
    int P = 225077;
    int M = 196700;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
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
    int N = 454;
    int X0 = 232669;
    int A = 142031;
    int B = 85427;
    int Y0 = 42793;
    int C = 325189;
    int D = 19087;
    int P = 151909;
    int M = 78263;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
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
    int N = 500;
    int X0 = 74941;
    int A = 107069;
    int B = 33857;
    int Y0 = 305839;
    int C = 42223;
    int D = 96763;
    int P = 297719;
    int M = 712025;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 500;
    int X0 = 226697;
    int A = 126143;
    int B = 325769;
    int Y0 = 76039;
    int C = 328637;
    int D = 76423;
    int P = 83843;
    int M = 762439;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 500;
    int X0 = 24001;
    int A = 190339;
    int B = 151579;
    int Y0 = 28537;
    int C = 87337;
    int D = 340393;
    int P = 77617;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 500;
    int X0 = 23603;
    int A = 12967;
    int B = 16649;
    int Y0 = 116789;
    int C = 349939;
    int D = 140617;
    int P = 153929;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 500;
    int X0 = 319819;
    int A = 258607;
    int B = 140281;
    int Y0 = 87509;
    int C = 823;
    int D = 190717;
    int P = 366841;
    int M = 116000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 500;
    int X0 = 85991;
    int A = 254753;
    int B = 362951;
    int Y0 = 154981;
    int C = 339811;
    int D = 1487;
    int P = 361159;
    int M = 150000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 500;
    int X0 = 44927;
    int A = 73819;
    int B = 134677;
    int Y0 = 811;
    int C = 148249;
    int D = 24229;
    int P = 244873;
    int M = 60000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 500;
    int X0 = 245759;
    int A = 257797;
    int B = 303727;
    int Y0 = 192547;
    int C = 255259;
    int D = 45061;
    int P = 256939;
    int M = 125000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 500;
    int X0 = 330731;
    int A = 238727;
    int B = 264029;
    int Y0 = 25409;
    int C = 201359;
    int D = 363959;
    int P = 16657;
    int M = 84000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 500;
    int X0 = 228619;
    int A = 99823;
    int B = 353161;
    int Y0 = 128657;
    int C = 258977;
    int D = 72421;
    int P = 49757;
    int M = 626871;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 500;
    int X0 = 32503;
    int A = 344963;
    int B = 157411;
    int Y0 = 23603;
    int C = 295153;
    int D = 55457;
    int P = 375247;
    int M = 41465;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 500;
    int X0 = 163367;
    int A = 683;
    int B = 281923;
    int Y0 = 35069;
    int C = 142969;
    int D = 106963;
    int P = 383041;
    int M = 520000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 500;
    int X0 = 83101;
    int A = 48947;
    int B = 228773;
    int Y0 = 337691;
    int C = 360197;
    int D = 63977;
    int P = 294181;
    int M = 241616;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 500;
    int X0 = 162901;
    int A = 352637;
    int B = 246641;
    int Y0 = 47947;
    int C = 235231;
    int D = 208319;
    int P = 149771;
    int M = 520000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 500;
    int X0 = 195053;
    int A = 86029;
    int B = 139987;
    int Y0 = 122027;
    int C = 9739;
    int D = 300743;
    int P = 64319;
    int M = 577530;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 500;
    int X0 = 20627;
    int A = 64811;
    int B = 49747;
    int Y0 = 238673;
    int C = 162527;
    int D = 222311;
    int P = 260191;
    int M = 380000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 500;
    int X0 = 317351;
    int A = 217463;
    int B = 65519;
    int Y0 = 364621;
    int C = 333787;
    int D = 137941;
    int P = 380819;
    int M = 197222;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 500;
    int X0 = 157543;
    int A = 231463;
    int B = 264839;
    int Y0 = 13757;
    int C = 97283;
    int D = 87803;
    int P = 144223;
    int M = 165337;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 500;
    int X0 = 342233;
    int A = 138617;
    int B = 140191;
    int Y0 = 345571;
    int C = 106109;
    int D = 136531;
    int P = 208697;
    int M = 135500;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 500;
    int X0 = 276079;
    int A = 277309;
    int B = 43867;
    int Y0 = 65677;
    int C = 92467;
    int D = 253307;
    int P = 348457;
    int M = 96000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 500;
    int X0 = 346961;
    int A = 66763;
    int B = 187633;
    int Y0 = 242819;
    int C = 156139;
    int D = 256093;
    int P = 27031;
    int M = 873697;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 500;
    int X0 = 123821;
    int A = 105527;
    int B = 260179;
    int Y0 = 45007;
    int C = 139199;
    int D = 19603;
    int P = 251263;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 500;
    int X0 = 1;
    int A = 1;
    int B = 11;
    int Y0 = 19;
    int C = 23;
    int D = 13;
    int P = 123612;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 500;
    int X0 = 0;
    int A = 0;
    int B = 0;
    int Y0 = 0;
    int C = 0;
    int D = 0;
    int P = 1;
    int M = 0;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 5;
    int X0 = 23;
    int A = 2;
    int B = 3;
    int Y0 = 35;
    int C = 5;
    int D = 7;
    int P = 9;
    int M = 3;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 5;
    int X0 = 285579;
    int A = 517262;
    int B = 509057;
    int Y0 = 883467;
    int C = 642170;
    int D = 174328;
    int P = 280287;
    int M = 8;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 5;
    int X0 = 787680;
    int A = 382519;
    int B = 350992;
    int Y0 = 365719;
    int C = 147717;
    int D = 750884;
    int P = 151621;
    int M = 14;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 5;
    int X0 = 232451;
    int A = 547944;
    int B = 933741;
    int Y0 = 47049;
    int C = 27632;
    int D = 460172;
    int P = 903287;
    int M = 16;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 10;
    int X0 = 476668;
    int A = 212942;
    int B = 438004;
    int Y0 = 782469;
    int C = 551887;
    int D = 949313;
    int P = 499293;
    int M = 42;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 10;
    int X0 = 843057;
    int A = 978778;
    int B = 542689;
    int Y0 = 64282;
    int C = 137049;
    int D = 355839;
    int P = 177071;
    int M = 36;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 10;
    int X0 = 231514;
    int A = 235685;
    int B = 852059;
    int Y0 = 757288;
    int C = 620325;
    int D = 573583;
    int P = 445011;
    int M = 40;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 50;
    int X0 = 43755;
    int A = 592;
    int B = 29007;
    int Y0 = 863409;
    int C = 249818;
    int D = 941221;
    int P = 387713;
    int M = 1201;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 50;
    int X0 = 355802;
    int A = 355896;
    int B = 974079;
    int Y0 = 179217;
    int C = 335344;
    int D = 153140;
    int P = 177169;
    int M = 1088;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 50;
    int X0 = 407538;
    int A = 821981;
    int B = 536292;
    int Y0 = 94640;
    int C = 466121;
    int D = 184998;
    int P = 207987;
    int M = 1106;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 500;
    int X0 = 793524;
    int A = 420491;
    int B = 500689;
    int Y0 = 502370;
    int C = 760667;
    int D = 765752;
    int P = 288009;
    int M = 141686;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 309;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 500;
    int X0 = 150641;
    int A = 938433;
    int B = 893954;
    int Y0 = 740218;
    int C = 379339;
    int D = 636398;
    int P = 133863;
    int M = 112737;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 310;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 500;
    int X0 = 401432;
    int A = 272036;
    int B = 57307;
    int Y0 = 344730;
    int C = 894126;
    int D = 652129;
    int P = 247685;
    int M = 177855;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 390;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 500;
    int X0 = 762761;
    int A = 530466;
    int B = 423248;
    int Y0 = 234589;
    int C = 714941;
    int D = 18436;
    int P = 965995;
    int M = 243196;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 494;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 2;
    int X0 = 0;
    int A = 0;
    int B = 0;
    int Y0 = 0;
    int C = 0;
    int D = 0;
    int P = 1;
    int M = 0;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 50;
    int X0 = 17;
    int A = 2;
    int B = 3;
    int Y0 = 4;
    int C = 5;
    int D = 677;
    int P = 7777;
    int M = 77;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 500;
    int X0 = 911111;
    int A = 845499;
    int B = 866249;
    int Y0 = 688029;
    int C = 742197;
    int D = 312197;
    int P = 384409;
    int M = 51935;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 500;
    int X0 = 911111;
    int A = 845499;
    int B = 866249;
    int Y0 = 688029;
    int C = 742197;
    int D = 312197;
    int P = 384409;
    int M = 40000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 500;
    int X0 = 911111;
    int A = 845499;
    int B = 866249;
    int Y0 = 688029;
    int C = 742197;
    int D = 312197;
    int P = 384409;
    int M = 40;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 500;
    int X0 = 911111;
    int A = 845499;
    int B = 866249;
    int Y0 = 688029;
    int C = 742197;
    int D = 312197;
    int P = 384409;
    int M = 51500;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 500;
    int X0 = 44162;
    int A = 93615;
    int B = 582302;
    int Y0 = 696024;
    int C = 544404;
    int D = 188109;
    int P = 878703;
    int M = 258895;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 426;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 500;
    int X0 = 800000;
    int A = 999999;
    int B = 999998;
    int Y0 = 999997;
    int C = 999996;
    int D = 899991;
    int P = 999999;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 500;
    int X0 = 911111;
    int A = 845499;
    int B = 866249;
    int Y0 = 688029;
    int C = 742197;
    int D = 312197;
    int P = 384409;
    int M = 51200;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 500;
    int X0 = 1;
    int A = 1;
    int B = 1;
    int Y0 = 1;
    int C = 1;
    int D = 1;
    int P = 1;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 300;
    int X0 = 100;
    int A = 100;
    int B = 100;
    int Y0 = 202;
    int C = 202;
    int D = 202;
    int P = 33333;
    int M = 100000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 500;
    int X0 = 1991;
    int A = 1992;
    int B = 1993;
    int Y0 = 1994;
    int C = 1995;
    int D = 1996;
    int P = 1000000;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 500;
    int X0 = 1000;
    int A = 1000000;
    int B = 1000000;
    int Y0 = 1024;
    int C = 999999;
    int D = 999999;
    int P = 4096;
    int M = 5000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 500;
    int X0 = 911111;
    int A = 845499;
    int B = 866249;
    int Y0 = 688029;
    int C = 742197;
    int D = 312197;
    int P = 384409;
    int M = 50000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 500;
    int X0 = 1000000;
    int A = 324345;
    int B = 234324;
    int Y0 = 234444;
    int C = 786873;
    int D = 924876;
    int P = 1000000;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 500;
    int X0 = 1000000;
    int A = 1000000;
    int B = 1000000;
    int Y0 = 1000000;
    int C = 1000000;
    int D = 1000000;
    int P = 999991;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
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
    int N = 500;
    int X0 = 911111;
    int A = 845499;
    int B = 866249;
    int Y0 = 688029;
    int C = 742197;
    int D = 312197;
    int P = 384409;
    int M = 10000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 2;
    int X0 = 0;
    int A = 0;
    int B = 0;
    int Y0 = 0;
    int C = 0;
    int D = 0;
    int P = 1;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 500;
    int X0 = 5;
    int A = 6;
    int B = 7;
    int Y0 = 8;
    int C = 9;
    int D = 9;
    int P = 6;
    int M = 10000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 500;
    int X0 = 1000;
    int A = 1;
    int B = 20;
    int Y0 = 1500;
    int C = 1;
    int D = 30;
    int P = 1000000;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 500;
    int X0 = 911111;
    int A = 845499;
    int B = 866249;
    int Y0 = 688029;
    int C = 742197;
    int D = 312197;
    int P = 384409;
    int M = 4000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 500;
    int X0 = 1;
    int A = 123;
    int B = 343243;
    int Y0 = 123;
    int C = 2343;
    int D = 3243;
    int P = 23434;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 500;
    int X0 = 1000000;
    int A = 999999;
    int B = 1000000;
    int Y0 = 999997;
    int C = 999857;
    int D = 365789;
    int P = 100009;
    int M = 999995;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 3;
    int X0 = 2;
    int A = 1;
    int B = 1;
    int Y0 = 2;
    int C = 1;
    int D = 1;
    int P = 7;
    int M = 0;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 500;
    int X0 = 123123;
    int A = 3231;
    int B = 123453;
    int Y0 = 132412;
    int C = 1234;
    int D = 1234;
    int P = 124324;
    int M = 20000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 500;
    int X0 = 132456;
    int A = 123;
    int B = 12345;
    int Y0 = 12347;
    int C = 1231;
    int D = 321324;
    int P = 10000;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 500;
    int X0 = 999999;
    int A = 1000000;
    int B = 1000000;
    int Y0 = 1000000;
    int C = 1000000;
    int D = 1000000;
    int P = 1000000;
    int M = 1000000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 5;
    int X0 = 4;
    int A = 1;
    int B = 5;
    int Y0 = 4;
    int C = 1;
    int D = 5;
    int P = 1000000;
    int M = 10;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 2;
    int X0 = 2;
    int A = 0;
    int B = 3;
    int Y0 = 2;
    int C = 0;
    int D = 3;
    int P = 10;
    int M = 2;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 499;
    int X0 = 921671;
    int A = 923979;
    int B = 921273;
    int Y0 = 953671;
    int C = 923577;
    int D = 925972;
    int P = 953679;
    int M = 923699;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 500;
    int X0 = 0;
    int A = 500001;
    int B = 600001;
    int Y0 = 0;
    int C = 700001;
    int D = 800001;
    int P = 999997;
    int M = 100000;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 7;
    int X0 = 15156;
    int A = 19102;
    int B = 28002;
    int Y0 = 23920;
    int C = 21595;
    int D = 18189;
    int P = 30678;
    int M = 9;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 2;
    int X0 = 0;
    int A = 0;
    int B = 1;
    int Y0 = 1;
    int C = 0;
    int D = 1;
    int P = 2;
    int M = 2;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 3;
    int X0 = 5;
    int A = 0;
    int B = 0;
    int Y0 = 5;
    int C = 0;
    int D = 0;
    int P = 6;
    int M = 1;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 500;
    int X0 = 911111;
    int A = 800496;
    int B = 800496;
    int Y0 = 688029;
    int C = 742197;
    int D = 312197;
    int P = 799997;
    int M = 40;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 2;
    int X0 = 1;
    int A = 1;
    int B = 1;
    int Y0 = 0;
    int C = 1;
    int D = 1;
    int P = 100;
    int M = 1;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 7;
    int X0 = 21077;
    int A = 3034;
    int B = 18443;
    int Y0 = 651;
    int C = 22863;
    int D = 10607;
    int P = 27898;
    int M = 5;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 500;
    int X0 = 498;
    int A = 1;
    int B = 1;
    int Y0 = 499;
    int C = 2;
    int D = 0;
    int P = 12345;
    int M = 2;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 2;
    int X0 = 1;
    int A = 1;
    int B = 1;
    int Y0 = 1;
    int C = 1;
    int D = 1;
    int P = 30;
    int M = 20;
    DoNotTurn* pObj = new DoNotTurn();
    clock_t start = clock();
    int result = pObj->minimumTurns(N, X0, A, B, Y0, C, D, P, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13698&pm=10337
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
typedef long long int64; 
 
const int maxm=1200000+5; 
const int maxn=600+5; 
 
const int MX[]={-1,0,1,0}; 
const int MY[]={0,1,0,-1}; 
 
class DoNotTurn 
{ 
public: 
  int n,X[maxm],Y[maxm]; 
  bool A[maxn][maxn]; 
  int Q[maxn*maxn*4]; 
  int sizeQ; 
  bool visited[maxn][maxn][4]; 
  void addnode(int x,int y,int d) 
  { 
    if (x<0 || x>=n || y<0 || y>=n || !A[x][y]) return; 
    if (visited[x][y][d]) return; 
    visited[x][y][d]=true; 
    Q[sizeQ++]=x*1000000+y*1000+d; 
  } 
  void init(int n,int X[],int64 X0,int64 P,int64 A,int64 B) 
  { 
    X[0]=(int)(X0%P); 
    for (int i=1;i<n;i++) 
      X[i]=(int)((A*(int64)X[i-1]+B)%P); 
  } 
  int minimumTurns(int _n, int X0, int AA, int B, int Y0, int CC, int D, int P, int M) 
  { 
    n=_n; 
    init(M,X,X0,P,AA,B); 
    init(M,Y,Y0,P,CC,D); 
    memset(A,true,sizeof(A)); 
    for (int i=0;i<M;i++) 
      A[X[i]%n][Y[i]%n]=false; 
    A[0][0]=A[n-1][n-1]=true; 
    memset(visited,false,sizeof(visited)); 
    sizeQ=0; 
    for (int k=0;k<4;k++) addnode(0,0,k); 
    for (int R=0,cl=0;cl<sizeQ;R++) 
    { 
      int _cl=cl; 
      for (;cl<sizeQ;cl++) 
      { 
        int x=Q[cl]/1000000; 
        int y=Q[cl]/1000%1000; 
        int d=Q[cl]%1000; 
        int x2=x+MX[d]; 
        int y2=y+MY[d]; 
        addnode(x2,y2,d); 
      } 
      int _sizeQ=sizeQ; 
      for (cl=_cl;cl<_sizeQ;cl++) 
      { 
        int x=Q[cl]/1000000; 
        int y=Q[cl]/1000%1000; 
        int d=Q[cl]%1000; 
        if (x==n-1 && y==n-1) return R; 
        for (int d2=0;d2<4;d2++) 
        { 
          int s=(d-d2+4)%4; 
          if (s==1 || s==3) 
          { 
            int x2=x+MX[d2]; 
            int y2=y+MY[d2]; 
            addnode(x2,y2,d2); 
          } 
        } 
      } 
 
    } 
    return -1; 
  } 
};

********************************************************************************
*******************************************************************************/