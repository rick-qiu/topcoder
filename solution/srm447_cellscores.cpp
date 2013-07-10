/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10581
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

class CellScores {
public:
    long countScores(int N, int M, int K, int X0, int A, int B, int Y0, int C, int D);
};

long CellScores::countScores(int N, int M, int K, int X0, int A, int B, int Y0, int C, int D) {
    long ret;
    return ret;
}


int test0() {
    int N = 10;
    int M = 0;
    int K = 1;
    int X0 = 0;
    int A = 1;
    int B = 1;
    int Y0 = 0;
    int C = 1;
    int D = 1;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 10;
    int M = 1;
    int K = 1;
    int X0 = 5;
    int A = 1;
    int B = 5;
    int Y0 = 5;
    int C = 1;
    int D = 5;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 7;
    int M = 4;
    int K = 3;
    int X0 = 0;
    int A = 1;
    int B = 1;
    int Y0 = 0;
    int C = 1;
    int D = 1;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 194;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 23;
    int M = 10;
    int K = 30;
    int X0 = 26;
    int A = 48;
    int B = 76;
    int Y0 = 231;
    int C = 463;
    int D = 707;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 8088;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 211;
    int M = 30;
    int K = 12;
    int X0 = 3;
    int A = 35;
    int B = 82;
    int Y0 = 0;
    int C = 43;
    int D = 15;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 18196443;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1498;
    int M = 19677;
    int K = 911056;
    int X0 = 215;
    int A = 114;
    int B = 610;
    int Y0 = 17;
    int C = 1071;
    int D = 637;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 7387463034;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 1416;
    int M = 7774;
    int K = 536097;
    int X0 = 302;
    int A = 658;
    int B = 101;
    int Y0 = 267;
    int C = 827;
    int D = 311;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 34425974016;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 1340;
    int M = 57012;
    int K = 919931;
    int X0 = 625;
    int A = 202;
    int B = 131;
    int Y0 = 816;
    int C = 516;
    int D = 261;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 295;
    int M = 27530;
    int K = 562253;
    int X0 = 157;
    int A = 1371;
    int B = 1219;
    int Y0 = 1008;
    int C = 532;
    int D = 1411;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 2738615;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 1381;
    int M = 260824;
    int K = 808034;
    int X0 = 250;
    int A = 1083;
    int B = 833;
    int Y0 = 1272;
    int C = 1382;
    int D = 502;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 98606712;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 1438;
    int M = 48578;
    int K = 523417;
    int X0 = 470;
    int A = 773;
    int B = 284;
    int Y0 = 833;
    int C = 720;
    int D = 664;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 36635148768;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 1431;
    int M = 46263;
    int K = 43977;
    int X0 = 1060;
    int A = 425;
    int B = 1392;
    int Y0 = 899;
    int C = 67;
    int D = 1145;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 189103509;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 1451;
    int M = 804634;
    int K = 685095;
    int X0 = 336;
    int A = 1;
    int B = 33;
    int Y0 = 749;
    int C = 724;
    int D = 320;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 7097842;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 1357;
    int M = 26856;
    int K = 500284;
    int X0 = 921;
    int A = 1231;
    int B = 517;
    int Y0 = 985;
    int C = 296;
    int D = 269;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 3268732180;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 1498;
    int M = 32568;
    int K = 350725;
    int X0 = 563;
    int A = 516;
    int B = 797;
    int Y0 = 1374;
    int C = 1499;
    int D = 1094;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 2904720860;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 1355;
    int M = 55590;
    int K = 281205;
    int X0 = 650;
    int A = 1356;
    int B = 421;
    int Y0 = 420;
    int C = 186;
    int D = 689;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 941581612;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 1133;
    int M = 28465;
    int K = 152038;
    int X0 = 97;
    int A = 207;
    int B = 181;
    int Y0 = 1435;
    int C = 1229;
    int D = 440;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 155054988;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 1401;
    int M = 336759;
    int K = 277837;
    int X0 = 503;
    int A = 468;
    int B = 606;
    int Y0 = 546;
    int C = 10;
    int D = 584;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 1357;
    int M = 4491;
    int K = 312356;
    int X0 = 1356;
    int A = 296;
    int B = 182;
    int Y0 = 567;
    int C = 781;
    int D = 1187;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 134280094752;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 1446;
    int M = 21373;
    int K = 427603;
    int X0 = 783;
    int A = 1267;
    int B = 71;
    int Y0 = 221;
    int C = 1;
    int D = 628;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 5264736220;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 1457;
    int M = 23276;
    int K = 310573;
    int X0 = 731;
    int A = 894;
    int B = 761;
    int Y0 = 167;
    int C = 265;
    int D = 162;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 2073438470;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 1494;
    int M = 10909;
    int K = 763019;
    int X0 = 1405;
    int A = 748;
    int B = 271;
    int Y0 = 472;
    int C = 199;
    int D = 1068;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 44471270100;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 1407;
    int M = 13282;
    int K = 869465;
    int X0 = 1026;
    int A = 1;
    int B = 573;
    int Y0 = 283;
    int C = 165;
    int D = 722;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 10563854508;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 1317;
    int M = 71915;
    int K = 177655;
    int X0 = 451;
    int A = 427;
    int B = 85;
    int Y0 = 1465;
    int C = 879;
    int D = 1002;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 36852672;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 1497;
    int M = 159115;
    int K = 93166;
    int X0 = 213;
    int A = 1210;
    int B = 1048;
    int Y0 = 749;
    int C = 1498;
    int D = 562;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 49745736;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 1393;
    int M = 64852;
    int K = 97218;
    int X0 = 1337;
    int A = 1492;
    int B = 1484;
    int Y0 = 265;
    int C = 1394;
    int D = 814;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 145044991;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 1359;
    int M = 25610;
    int K = 765505;
    int X0 = 1439;
    int A = 1209;
    int B = 1200;
    int Y0 = 1414;
    int C = 954;
    int D = 290;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 1493;
    int M = 418490;
    int K = 227658;
    int X0 = 1466;
    int A = 850;
    int B = 172;
    int Y0 = 916;
    int C = 1494;
    int D = 172;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 8111314;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 1309;
    int M = 53090;
    int K = 138211;
    int X0 = 1432;
    int A = 41;
    int B = 1100;
    int Y0 = 743;
    int C = 375;
    int D = 1311;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 1357;
    int M = 24968;
    int K = 710260;
    int X0 = 860;
    int A = 1146;
    int B = 210;
    int Y0 = 579;
    int C = 591;
    int D = 1486;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 4557019793;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 1498;
    int M = 43677;
    int K = 895536;
    int X0 = 73;
    int A = 857;
    int B = 775;
    int Y0 = 814;
    int C = 46;
    int D = 1197;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 1435;
    int M = 37508;
    int K = 160946;
    int X0 = 292;
    int A = 299;
    int B = 65;
    int Y0 = 1053;
    int C = 862;
    int D = 489;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 1199;
    int M = 34662;
    int K = 393736;
    int X0 = 1434;
    int A = 655;
    int B = 1122;
    int Y0 = 552;
    int C = 1221;
    int D = 349;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 1445;
    int M = 21740;
    int K = 773412;
    int X0 = 468;
    int A = 428;
    int B = 1152;
    int Y0 = 993;
    int C = 936;
    int D = 1143;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1543991306;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 1322;
    int M = 44088;
    int K = 722321;
    int X0 = 1497;
    int A = 662;
    int B = 1321;
    int Y0 = 933;
    int C = 877;
    int D = 653;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 201407438830;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 1076;
    int M = 47617;
    int K = 483582;
    int X0 = 5;
    int A = 1067;
    int B = 493;
    int Y0 = 1352;
    int C = 1077;
    int D = 1381;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 157427151;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 1471;
    int M = 920089;
    int K = 927510;
    int X0 = 546;
    int A = 1472;
    int B = 677;
    int Y0 = 54;
    int C = 207;
    int D = 789;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 916555;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 1474;
    int M = 19549;
    int K = 202911;
    int X0 = 250;
    int A = 117;
    int B = 320;
    int Y0 = 483;
    int C = 1207;
    int D = 1213;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 956673040;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 1235;
    int M = 25230;
    int K = 231210;
    int X0 = 176;
    int A = 1267;
    int B = 648;
    int Y0 = 994;
    int C = 1236;
    int D = 602;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 294434378;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 1450;
    int M = 10299;
    int K = 172817;
    int X0 = 758;
    int A = 627;
    int B = 535;
    int Y0 = 784;
    int C = 1;
    int D = 526;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 18493437726;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 1321;
    int M = 195533;
    int K = 462590;
    int X0 = 304;
    int A = 483;
    int B = 928;
    int Y0 = 23;
    int C = 1;
    int D = 1314;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 1414;
    int M = 30140;
    int K = 910545;
    int X0 = 145;
    int A = 351;
    int B = 1463;
    int Y0 = 659;
    int C = 607;
    int D = 177;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 34963908;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 1315;
    int M = 164570;
    int K = 101756;
    int X0 = 883;
    int A = 790;
    int B = 744;
    int Y0 = 1063;
    int C = 547;
    int D = 910;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 1494;
    int M = 4598;
    int K = 750294;
    int X0 = 639;
    int A = 9;
    int B = 759;
    int Y0 = 1228;
    int C = 1;
    int D = 271;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1442474625168;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 1446;
    int M = 62907;
    int K = 737984;
    int X0 = 369;
    int A = 483;
    int B = 725;
    int Y0 = 415;
    int C = 292;
    int D = 1173;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 747;
    int M = 16635;
    int K = 641759;
    int X0 = 353;
    int A = 778;
    int B = 697;
    int Y0 = 932;
    int C = 333;
    int D = 472;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 290597328;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 1415;
    int M = 66004;
    int K = 714481;
    int X0 = 750;
    int A = 850;
    int B = 1365;
    int Y0 = 825;
    int C = 676;
    int D = 83;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1310376890;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 1419;
    int M = 31079;
    int K = 677605;
    int X0 = 16;
    int A = 1365;
    int B = 571;
    int Y0 = 779;
    int C = 689;
    int D = 1418;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 232208361;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 893;
    int M = 139056;
    int K = 417538;
    int X0 = 339;
    int A = 11;
    int B = 1249;
    int Y0 = 328;
    int C = 1;
    int D = 732;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 841;
    int M = 30216;
    int K = 391610;
    int X0 = 282;
    int A = 755;
    int B = 453;
    int Y0 = 119;
    int C = 820;
    int D = 201;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 1492;
    int M = 127150;
    int K = 559609;
    int X0 = 1244;
    int A = 1105;
    int B = 1022;
    int Y0 = 968;
    int C = 1493;
    int D = 676;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 14507200;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 1371;
    int M = 270830;
    int K = 981047;
    int X0 = 799;
    int A = 458;
    int B = 346;
    int Y0 = 629;
    int C = 78;
    int D = 930;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 1497;
    int M = 84718;
    int K = 795446;
    int X0 = 971;
    int A = 1;
    int B = 987;
    int Y0 = 1329;
    int C = 394;
    int D = 1073;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 781847850;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 1495;
    int M = 40131;
    int K = 60975;
    int X0 = 451;
    int A = 1197;
    int B = 112;
    int Y0 = 1105;
    int C = 1480;
    int D = 326;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 1457;
    int M = 20256;
    int K = 508682;
    int X0 = 34;
    int A = 737;
    int B = 44;
    int Y0 = 1306;
    int C = 142;
    int D = 665;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 8173851824;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 3;
    int M = 0;
    int K = 100;
    int X0 = 0;
    int A = 0;
    int B = 0;
    int Y0 = 0;
    int C = 0;
    int D = 0;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 900;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 1500;
    int M = 1499;
    int K = 1000000;
    int X0 = 1498;
    int A = 1;
    int B = 1499;
    int Y0 = 0;
    int C = 1;
    int D = 1;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 750875250;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 1500;
    int M = 1499;
    int K = 1000000;
    int X0 = 1499;
    int A = 1;
    int B = 1499;
    int Y0 = 1;
    int C = 1;
    int D = 1;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 750875250;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 1500;
    int M = 1499;
    int K = 1000000;
    int X0 = 0;
    int A = 1;
    int B = 1;
    int Y0 = 1;
    int C = 1;
    int D = 1;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 750875250;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 1500;
    int M = 1499;
    int K = 1000000;
    int X0 = 1;
    int A = 1;
    int B = 1;
    int Y0 = 0;
    int C = 1;
    int D = 1;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 750875250;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 2;
    int M = 0;
    int K = 1;
    int X0 = 620;
    int A = 732;
    int B = 1030;
    int Y0 = 232;
    int C = 873;
    int D = 1132;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 10;
    int M = 4;
    int K = 8;
    int X0 = 346;
    int A = 680;
    int B = 1454;
    int Y0 = 1226;
    int C = 1041;
    int D = 19;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 700;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 7;
    int M = 3;
    int K = 17;
    int X0 = 1304;
    int A = 206;
    int B = 702;
    int Y0 = 853;
    int C = 314;
    int D = 1466;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 357;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 5;
    int M = 12;
    int K = 4;
    int X0 = 248;
    int A = 1016;
    int B = 291;
    int Y0 = 409;
    int C = 97;
    int D = 937;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 7;
    int M = 1;
    int K = 41;
    int X0 = 907;
    int A = 1095;
    int B = 726;
    int Y0 = 826;
    int C = 769;
    int D = 1011;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 4242;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 1;
    int M = 0;
    int K = 1;
    int X0 = 1220;
    int A = 719;
    int B = 1474;
    int Y0 = 176;
    int C = 892;
    int D = 363;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 3;
    int M = 1;
    int K = 1;
    int X0 = 1437;
    int A = 163;
    int B = 616;
    int Y0 = 757;
    int C = 1020;
    int D = 1418;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 4;
    int M = 1;
    int K = 2;
    int X0 = 299;
    int A = 531;
    int B = 30;
    int Y0 = 1166;
    int C = 140;
    int D = 815;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 1;
    int M = 0;
    int K = 1;
    int X0 = 849;
    int A = 1060;
    int B = 270;
    int Y0 = 620;
    int C = 94;
    int D = 245;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 3;
    int M = 0;
    int K = 5;
    int X0 = 843;
    int A = 10;
    int B = 496;
    int Y0 = 34;
    int C = 295;
    int D = 308;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 57;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 4;
    int M = 0;
    int K = 16;
    int X0 = 771;
    int A = 1359;
    int B = 1060;
    int Y0 = 1073;
    int C = 795;
    int D = 706;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 480;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 5;
    int M = 2;
    int K = 2;
    int X0 = 1340;
    int A = 1159;
    int B = 171;
    int Y0 = 1026;
    int C = 1295;
    int D = 1482;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 3;
    int M = 0;
    int K = 1;
    int X0 = 80;
    int A = 1417;
    int B = 168;
    int Y0 = 1439;
    int C = 720;
    int D = 610;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 5;
    int M = 1;
    int K = 8;
    int X0 = 1362;
    int A = 1405;
    int B = 1270;
    int Y0 = 300;
    int C = 1410;
    int D = 997;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 288;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 3;
    int M = 1;
    int K = 5;
    int X0 = 719;
    int A = 1153;
    int B = 170;
    int Y0 = 850;
    int C = 1362;
    int D = 623;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 2;
    int M = 0;
    int K = 1;
    int X0 = 1102;
    int A = 1233;
    int B = 806;
    int Y0 = 811;
    int C = 8;
    int D = 1144;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 9;
    int M = 5;
    int K = 74;
    int X0 = 298;
    int A = 427;
    int B = 817;
    int Y0 = 1449;
    int C = 211;
    int D = 1248;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 2460;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 2;
    int M = 0;
    int K = 2;
    int X0 = 800;
    int A = 214;
    int B = 1301;
    int Y0 = 447;
    int C = 1432;
    int D = 1405;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 3;
    int M = 3;
    int K = 8;
    int X0 = 59;
    int A = 535;
    int B = 749;
    int Y0 = 849;
    int C = 876;
    int D = 307;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 7;
    int M = 2;
    int K = 6;
    int X0 = 513;
    int A = 1180;
    int B = 627;
    int Y0 = 502;
    int C = 1428;
    int D = 1496;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 10;
    int M = 3;
    int K = 4;
    int X0 = 739;
    int A = 247;
    int B = 75;
    int Y0 = 283;
    int C = 1293;
    int D = 279;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 228;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 1;
    int M = 0;
    int K = 1;
    int X0 = 1259;
    int A = 1222;
    int B = 1328;
    int Y0 = 347;
    int C = 1201;
    int D = 1246;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 3;
    int M = 1;
    int K = 3;
    int X0 = 53;
    int A = 80;
    int B = 266;
    int Y0 = 970;
    int C = 1106;
    int D = 966;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 2;
    int M = 1;
    int K = 4;
    int X0 = 710;
    int A = 356;
    int B = 552;
    int Y0 = 860;
    int C = 1197;
    int D = 599;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 1;
    int M = 0;
    int K = 1;
    int X0 = 123;
    int A = 1237;
    int B = 1101;
    int Y0 = 1215;
    int C = 490;
    int D = 198;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 3;
    int M = 0;
    int K = 1;
    int X0 = 1332;
    int A = 716;
    int B = 1109;
    int Y0 = 1442;
    int C = 1257;
    int D = 21;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 7;
    int M = 14;
    int K = 49;
    int X0 = 548;
    int A = 1380;
    int B = 51;
    int Y0 = 1280;
    int C = 1066;
    int D = 791;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 276;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 5;
    int M = 2;
    int K = 6;
    int X0 = 1036;
    int A = 64;
    int B = 1289;
    int Y0 = 851;
    int C = 1101;
    int D = 347;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 88;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 6;
    int M = 1;
    int K = 14;
    int X0 = 852;
    int A = 25;
    int B = 703;
    int Y0 = 793;
    int C = 559;
    int D = 1476;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 830;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 2;
    int M = 0;
    int K = 3;
    int X0 = 536;
    int A = 1066;
    int B = 1063;
    int Y0 = 1459;
    int C = 686;
    int D = 504;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 2;
    int M = 1;
    int K = 4;
    int X0 = 1028;
    int A = 711;
    int B = 1436;
    int Y0 = 274;
    int C = 1066;
    int D = 341;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 4;
    int M = 2;
    int K = 15;
    int X0 = 159;
    int A = 274;
    int B = 548;
    int Y0 = 353;
    int C = 979;
    int D = 410;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 180;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 8;
    int M = 3;
    int K = 45;
    int X0 = 296;
    int A = 585;
    int B = 282;
    int Y0 = 1234;
    int C = 826;
    int D = 779;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 6214;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 10;
    int M = 1;
    int K = 23;
    int X0 = 1062;
    int A = 1394;
    int B = 1067;
    int Y0 = 644;
    int C = 49;
    int D = 1386;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 10350;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 2;
    int M = 0;
    int K = 1;
    int X0 = 430;
    int A = 1120;
    int B = 286;
    int Y0 = 1016;
    int C = 280;
    int D = 1456;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 7;
    int M = 0;
    int K = 10;
    int X0 = 180;
    int A = 549;
    int B = 1215;
    int Y0 = 737;
    int C = 884;
    int D = 881;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1728;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 7;
    int M = 10;
    int K = 44;
    int X0 = 24;
    int A = 543;
    int B = 710;
    int Y0 = 102;
    int C = 15;
    int D = 3;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 124;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 3;
    int M = 0;
    int K = 8;
    int X0 = 1416;
    int A = 150;
    int B = 449;
    int Y0 = 635;
    int C = 218;
    int D = 595;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 72;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 2;
    int M = 0;
    int K = 4;
    int X0 = 1001;
    int A = 980;
    int B = 836;
    int Y0 = 780;
    int C = 635;
    int D = 1092;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 5;
    int M = 1;
    int K = 16;
    int X0 = 105;
    int A = 623;
    int B = 645;
    int Y0 = 996;
    int C = 1144;
    int D = 1496;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 6;
    int M = 0;
    int K = 8;
    int X0 = 786;
    int A = 1461;
    int B = 655;
    int Y0 = 193;
    int C = 867;
    int D = 1492;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 760;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 1;
    int M = 0;
    int K = 1;
    int X0 = 1457;
    int A = 1072;
    int B = 1371;
    int Y0 = 492;
    int C = 1393;
    int D = 1424;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 4;
    int M = 0;
    int K = 11;
    int X0 = 89;
    int A = 877;
    int B = 852;
    int Y0 = 1286;
    int C = 870;
    int D = 1280;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 276;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 4;
    int M = 1;
    int K = 13;
    int X0 = 12;
    int A = 626;
    int B = 860;
    int Y0 = 865;
    int C = 375;
    int D = 19;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 2;
    int M = 0;
    int K = 4;
    int X0 = 647;
    int A = 1116;
    int B = 30;
    int Y0 = 1077;
    int C = 62;
    int D = 640;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 4;
    int M = 0;
    int K = 7;
    int X0 = 652;
    int A = 98;
    int B = 671;
    int Y0 = 744;
    int C = 337;
    int D = 531;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 188;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 6;
    int M = 0;
    int K = 9;
    int X0 = 1067;
    int A = 349;
    int B = 241;
    int Y0 = 734;
    int C = 385;
    int D = 685;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 732;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 6;
    int M = 0;
    int K = 28;
    int X0 = 1002;
    int A = 1042;
    int B = 699;
    int Y0 = 1052;
    int C = 240;
    int D = 794;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 3960;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 9;
    int M = 7;
    int K = 55;
    int X0 = 1355;
    int A = 1249;
    int B = 1417;
    int Y0 = 1036;
    int C = 1317;
    int D = 1317;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 852;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 3;
    int M = 2;
    int K = 1;
    int X0 = 351;
    int A = 838;
    int B = 485;
    int Y0 = 359;
    int C = 14;
    int D = 1142;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 1498;
    int M = 41;
    int K = 4580;
    int X0 = 1139;
    int A = 723;
    int B = 1075;
    int Y0 = 420;
    int C = 1461;
    int D = 1445;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 15640991606039;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 1491;
    int M = 9;
    int K = 1000000;
    int X0 = 1011;
    int A = 922;
    int B = 1159;
    int Y0 = 1234;
    int C = 919;
    int D = 1420;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 21829315775061514;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 1493;
    int M = 0;
    int K = 28;
    int X0 = 1292;
    int A = 894;
    int B = 608;
    int Y0 = 393;
    int C = 360;
    int D = 1402;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 3961348964953;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 1493;
    int M = 61;
    int K = 1301;
    int X0 = 1428;
    int A = 1479;
    int B = 270;
    int Y0 = 1299;
    int C = 456;
    int D = 1307;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 2103351658027;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 1499;
    int M = 0;
    int K = 77767;
    int X0 = 594;
    int A = 845;
    int B = 824;
    int Y0 = 1347;
    int C = 1452;
    int D = 1500;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 11318391040188715;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 1491;
    int M = 4;
    int K = 9;
    int X0 = 396;
    int A = 1188;
    int B = 1426;
    int Y0 = 1356;
    int C = 63;
    int D = 131;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 386210801760;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 1494;
    int M = 8;
    int K = 77;
    int X0 = 668;
    int A = 285;
    int B = 426;
    int Y0 = 160;
    int C = 207;
    int D = 749;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 2839258610448;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 1499;
    int M = 67;
    int K = 2;
    int X0 = 295;
    int A = 1024;
    int B = 1265;
    int Y0 = 298;
    int C = 428;
    int D = 1309;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 4086941400;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 1493;
    int M = 64;
    int K = 84;
    int X0 = 1375;
    int A = 259;
    int B = 1362;
    int Y0 = 863;
    int C = 1028;
    int D = 647;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 157357586889;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 1493;
    int M = 196;
    int K = 390235;
    int X0 = 805;
    int A = 1220;
    int B = 1190;
    int Y0 = 1332;
    int C = 893;
    int D = 990;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 102733363312109;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 1493;
    int M = 116;
    int K = 342;
    int X0 = 437;
    int A = 1359;
    int B = 593;
    int Y0 = 1041;
    int C = 407;
    int D = 1082;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 231513234652;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 1497;
    int M = 378;
    int K = 1000000;
    int X0 = 261;
    int A = 843;
    int B = 1127;
    int Y0 = 741;
    int C = 1160;
    int D = 1246;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 29833782946758;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 1499;
    int M = 443;
    int K = 1000000;
    int X0 = 805;
    int A = 234;
    int B = 315;
    int Y0 = 534;
    int C = 126;
    int D = 1421;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 62824123631887;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 1496;
    int M = 659;
    int K = 646755;
    int X0 = 858;
    int A = 52;
    int B = 1497;
    int Y0 = 1043;
    int C = 450;
    int D = 788;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 348921008128;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 1493;
    int M = 444;
    int K = 5513;
    int X0 = 767;
    int A = 884;
    int B = 1;
    int Y0 = 734;
    int C = 940;
    int D = 457;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 336581831721;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 1494;
    int M = 571;
    int K = 295770;
    int X0 = 964;
    int A = 1052;
    int B = 830;
    int Y0 = 648;
    int C = 826;
    int D = 1205;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 3771882712904;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 1500;
    int M = 190;
    int K = 617708;
    int X0 = 1300;
    int A = 609;
    int B = 362;
    int Y0 = 699;
    int C = 985;
    int D = 427;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 51055717723170;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int N = 1496;
    int M = 628;
    int K = 886;
    int X0 = 79;
    int A = 1406;
    int B = 960;
    int Y0 = 669;
    int C = 584;
    int D = 12;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 8030743608;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 1500;
    int M = 313;
    int K = 1000000;
    int X0 = 686;
    int A = 16;
    int B = 683;
    int Y0 = 651;
    int C = 263;
    int D = 359;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 118162999881060;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 1493;
    int M = 828;
    int K = 4568;
    int X0 = 860;
    int A = 221;
    int B = 1456;
    int Y0 = 1229;
    int C = 655;
    int D = 672;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 62649927755;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 1493;
    int M = 1341;
    int K = 1000000;
    int X0 = 1020;
    int A = 45;
    int B = 1247;
    int Y0 = 1109;
    int C = 135;
    int D = 1358;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1246715764228;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int N = 1499;
    int M = 264177;
    int K = 740768;
    int X0 = 1323;
    int A = 1500;
    int B = 1291;
    int Y0 = 1460;
    int C = 1298;
    int D = 1252;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 85909800;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int N = 1499;
    int M = 1285;
    int K = 381499;
    int X0 = 1306;
    int A = 1126;
    int B = 623;
    int Y0 = 864;
    int C = 1424;
    int D = 202;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 811395283185;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int N = 1493;
    int M = 1445;
    int K = 6259;
    int X0 = 1417;
    int A = 713;
    int B = 1332;
    int Y0 = 625;
    int C = 361;
    int D = 137;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 2477075695;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int N = 1498;
    int M = 5437;
    int K = 8529;
    int X0 = 706;
    int A = 178;
    int B = 267;
    int Y0 = 575;
    int C = 1285;
    int D = 752;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 3692121904;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int N = 1499;
    int M = 1377;
    int K = 7506;
    int X0 = 617;
    int A = 1429;
    int B = 776;
    int Y0 = 1123;
    int C = 692;
    int D = 484;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 6576450107;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int N = 1497;
    int M = 28912;
    int K = 278025;
    int X0 = 587;
    int A = 1;
    int B = 306;
    int Y0 = 1393;
    int C = 105;
    int D = 683;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 2027065968;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int N = 1496;
    int M = 6974;
    int K = 64369;
    int X0 = 113;
    int A = 58;
    int B = 832;
    int Y0 = 265;
    int C = 1310;
    int D = 1051;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 4108249600;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int N = 1494;
    int M = 4599;
    int K = 1000000;
    int X0 = 76;
    int A = 748;
    int B = 1048;
    int Y0 = 92;
    int C = 916;
    int D = 643;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 702852262556;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int N = 1494;
    int M = 44783;
    int K = 556080;
    int X0 = 950;
    int A = 738;
    int B = 1241;
    int Y0 = 763;
    int C = 250;
    int D = 154;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 552981780;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int N = 1498;
    int M = 10812;
    int K = 1000000;
    int X0 = 20;
    int A = 1028;
    int B = 1440;
    int Y0 = 1158;
    int C = 1499;
    int D = 848;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 9836141860244;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int N = 1494;
    int M = 42148;
    int K = 90975;
    int X0 = 1141;
    int A = 908;
    int B = 1500;
    int Y0 = 323;
    int C = 1495;
    int D = 1337;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 192477204;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int N = 1492;
    int M = 18574;
    int K = 1000000;
    int X0 = 1293;
    int A = 374;
    int B = 774;
    int Y0 = 1405;
    int C = 248;
    int D = 1121;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 10528677984;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int N = 1493;
    int M = 1000000;
    int K = 404874;
    int X0 = 1044;
    int A = 380;
    int B = 849;
    int Y0 = 1278;
    int C = 1;
    int D = 854;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 4104291;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int N = 1497;
    int M = 93038;
    int K = 1000000;
    int X0 = 59;
    int A = 999;
    int B = 587;
    int Y0 = 1336;
    int C = 511;
    int D = 31;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1366161492;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int N = 1490;
    int M = 13534;
    int K = 253203;
    int X0 = 733;
    int A = 378;
    int B = 1065;
    int Y0 = 140;
    int C = 150;
    int D = 1113;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 2839954560;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int N = 1493;
    int M = 978793;
    int K = 1000000;
    int X0 = 715;
    int A = 1494;
    int B = 1469;
    int Y0 = 726;
    int C = 894;
    int D = 857;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 9294732;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int N = 1492;
    int M = 64530;
    int K = 1000000;
    int X0 = 452;
    int A = 374;
    int B = 1485;
    int Y0 = 81;
    int C = 452;
    int D = 156;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 849209712;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int N = 1493;
    int M = 1000000;
    int K = 554771;
    int X0 = 619;
    int A = 1336;
    int B = 54;
    int Y0 = 745;
    int C = 1;
    int D = 472;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 3634182;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int N = 1493;
    int M = 1000000;
    int K = 650723;
    int X0 = 96;
    int A = 1186;
    int B = 837;
    int Y0 = 143;
    int C = 1494;
    int D = 1157;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 3971833;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int N = 1499;
    int M = 1000000;
    int K = 426717;
    int X0 = 1073;
    int A = 509;
    int B = 981;
    int Y0 = 527;
    int C = 1;
    int D = 1210;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 2835366;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int N = 1493;
    int M = 747640;
    int K = 570671;
    int X0 = 8;
    int A = 1494;
    int B = 1056;
    int Y0 = 1312;
    int C = 38;
    int D = 924;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 159051151;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int N = 1493;
    int M = 173992;
    int K = 1000000;
    int X0 = 1249;
    int A = 1207;
    int B = 1111;
    int Y0 = 713;
    int C = 1;
    int D = 903;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 364268991;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int N = 1499;
    int M = 275864;
    int K = 1000000;
    int X0 = 1146;
    int A = 1500;
    int B = 976;
    int Y0 = 19;
    int C = 415;
    int D = 1094;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 386123602;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int N = 1490;
    int M = 107163;
    int K = 1000000;
    int X0 = 433;
    int A = 1193;
    int B = 212;
    int Y0 = 36;
    int C = 961;
    int D = 384;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 12700320;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int N = 1499;
    int M = 1000000;
    int K = 1000000;
    int X0 = 493;
    int A = 1500;
    int B = 1041;
    int Y0 = 484;
    int C = 304;
    int D = 113;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 244849938;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int N = 1499;
    int M = 835700;
    int K = 1000000;
    int X0 = 405;
    int A = 1;
    int B = 1409;
    int Y0 = 488;
    int C = 1480;
    int D = 1424;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 2066568;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int N = 1493;
    int M = 120355;
    int K = 581218;
    int X0 = 1294;
    int A = 231;
    int B = 1053;
    int Y0 = 728;
    int C = 1;
    int D = 216;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 399677354;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int N = 1499;
    int M = 1000000;
    int K = 270118;
    int X0 = 609;
    int A = 1;
    int B = 214;
    int Y0 = 66;
    int C = 304;
    int D = 1121;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 780999967;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int N = 1499;
    int M = 732544;
    int K = 961087;
    int X0 = 969;
    int A = 1;
    int B = 1404;
    int Y0 = 28;
    int C = 923;
    int D = 87;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 42460335;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int N = 499;
    int M = 10000;
    int K = 1000000;
    int X0 = 1;
    int A = 154;
    int B = 985;
    int Y0 = 1;
    int C = 500;
    int D = 1166;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 1623652789;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int N = 1500;
    int M = 1000000;
    int K = 1000000;
    int X0 = 281;
    int A = 121;
    int B = 121;
    int Y0 = 198;
    int C = 118;
    int D = 918;
    CellScores* pObj = new CellScores();
    clock_t start = clock();
    long result = pObj->countScores(N, M, K, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13901&pm=10581
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
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;} 
 
class CellScores 
{ 
public: 
  int n,m; 
  int X[2000005],Y[2000005]; 
  bool G[1600][1600]; 
  int QC[1600][1600]; 
  int SU[1600][1600],SD[1600][1600]; 
  int64 delta[1600]; 
  int U[1600],D[1600]; 
  int sizeQ,length[1600],V1[1600],V2[1600],S[1600]; 
  int64 countScores(int _n, int _m, int k, int X0, int AA, int BB, int Y0, int CC, int DD) 
  { 
    n=_n; 
    m=_m; 
    X[0]=X0%n; 
    for (int i=1;i<m+k;i++) X[i]=(X[i-1]*AA+BB)%n; 
    Y[0]=Y0%n; 
    for (int i=1;i<m+k;i++) Y[i]=(Y[i-1]*CC+DD)%n; 
    memset(G,true,sizeof(G)); 
    for (int i=0;i<m;i++) G[X[i]][Y[i]]=false; 
    memset(QC,0,sizeof(QC)); 
    for (int i=m;i<m+k;i++) QC[X[i]][Y[i]]++; 
    for (int i=0;i<n;i++) for (int j=0;j<n;j++) 
      if (G[i][j]) SU[i][j]=(i==0)?1:(SU[i-1][j]+1); 
      else SU[i][j]=0; 
    for (int i=n-1;i>=0;i--) for (int j=0;j<n;j++) 
      if (G[i][j]) SD[i][j]=(i==n-1)?1:(SD[i+1][j]+1); 
      else SD[i][j]=0; 
    int64 R=0; 
    for (int key=0;key<n;key++) 
    { 
      memset(delta,0,sizeof(delta)); 
      for (int i=0;i<n;i++) 
      { 
        U[i]=SU[key][i]; 
        D[i]=SD[key][i]; 
      } 
      for (int step=0;step<2;step++) 
      { 
        sizeQ=0; 
        for (int rd=0;rd<n;rd++) 
        { 
          int i=(step==0)?(n-1-rd):(rd); 
          length[sizeQ]=1; 
          V1[sizeQ]=U[i]; 
          V2[sizeQ]=D[i]; 
          sizeQ++; 
          while (sizeQ>=2 && V1[sizeQ-1]<=V1[sizeQ-2] && V2[sizeQ-1]<=V2[sizeQ-2]) 
          { 
            sizeQ--; 
            checkmin(V1[sizeQ-1],V1[sizeQ]); 
            checkmin(V2[sizeQ-1],V2[sizeQ]); 
            length[sizeQ-1]+=length[sizeQ]; 
            S[sizeQ-1]=(sizeQ==1)?0:S[sizeQ-2]; 
            S[sizeQ-1]+=length[sizeQ-1]*V1[sizeQ-1]*V2[sizeQ-1]; 
          } 
          int k=sizeQ-1; 
          for (;k-1>=0 && (V1[k]<V1[k-1] || V2[k]<V2[k-1]);k--) 
          { 
            checkmin(V1[k-1],V1[k]); 
            checkmin(V2[k-1],V2[k]); 
          } 
          for (;k<sizeQ;k++) 
          { 
            S[k]=(k==0)?0:S[k-1]; 
            S[k]+=length[k]*V1[k]*V2[k]; 
          } 
          while (sizeQ>=2 && V1[sizeQ-1]<=V1[sizeQ-2] && V2[sizeQ-1]<=V2[sizeQ-2]) 
          { 
            sizeQ--; 
            checkmin(V1[sizeQ-1],V1[sizeQ]); 
            checkmin(V2[sizeQ-1],V2[sizeQ]); 
            length[sizeQ-1]+=length[sizeQ]; 
            S[sizeQ-1]=(sizeQ==1)?0:S[sizeQ-2]; 
            S[sizeQ-1]+=length[sizeQ-1]*V1[sizeQ-1]*V2[sizeQ-1]; 
          } 
          if (step==0) 
            delta[i]+=S[sizeQ-1]; 
          else 
            delta[i+1]-=S[sizeQ-1]; 
        } 
      } 
      int64 S=0; 
      for (int i=0;i<n;i++) 
      { 
        S+=delta[i]; 
        R+=S*QC[key][i]; 
      } 
    } 
    return R; 
  } 
};

********************************************************************************
*******************************************************************************/