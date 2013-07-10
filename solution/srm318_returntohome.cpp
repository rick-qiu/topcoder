/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6684
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

class ReturnToHome {
public:
    double goHome(int X, int Y, int D, int T);
};

double ReturnToHome::goHome(int X, int Y, int D, int T) {
    double ret;
    return ret;
}


int test0() {
    int X = 6;
    int Y = 8;
    int D = 5;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int X = 3;
    int Y = 4;
    int D = 6;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int X = 400;
    int Y = 300;
    int D = 150;
    int T = 10;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int X = 318;
    int Y = 445;
    int D = 1200;
    int T = 800;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 546.9451526432975;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int X = 387;
    int Y = 717;
    int D = 413;
    int T = 192;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 384.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int X = 587;
    int Y = 628;
    int D = 361;
    int T = 205;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 547.6237549067615;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int X = 165;
    int Y = 555;
    int D = 489;
    int T = 216;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 306.0077719685635;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int X = 408;
    int Y = 211;
    int D = 495;
    int T = 99;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 134.6689646888641;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int X = 224;
    int Y = 494;
    int D = 430;
    int T = 87;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 174.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int X = 564;
    int Y = 468;
    int D = 425;
    int T = 86;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 172.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int X = 617;
    int Y = 616;
    int D = 294;
    int T = 240;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 720.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int X = 651;
    int Y = 426;
    int D = 333;
    int T = 218;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 547.9955012723402;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int X = 520;
    int Y = 301;
    int D = 369;
    int T = 81;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 162.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int X = 31;
    int Y = 563;
    int D = 106;
    int T = 142;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 563.8528176749674;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int X = 965;
    int Y = 827;
    int D = 138;
    int T = 145;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1270.8870917591382;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int X = 910;
    int Y = 193;
    int D = 180;
    int T = 252;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 930.2413665280641;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int X = 369;
    int Y = 469;
    int D = 224;
    int T = 44;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 132.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int X = 108;
    int Y = 401;
    int D = 136;
    int T = 219;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 415.2890559598218;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int X = 259;
    int Y = 294;
    int D = 402;
    int T = 277;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 287.1875448636172;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int X = 420;
    int Y = 303;
    int D = 486;
    int T = 82;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 113.88898424276215;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int X = 917;
    int Y = 420;
    int D = 19;
    int T = 10;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 531.607455851879;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int X = 635;
    int Y = 256;
    int D = 73;
    int T = 294;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 684.6612300985065;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int X = 634;
    int Y = 50;
    int D = 274;
    int T = 134;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 355.96855268165575;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int X = 531;
    int Y = 134;
    int D = 429;
    int T = 288;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 406.64678397667967;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int X = 114;
    int Y = 460;
    int D = 5770;
    int T = 9416;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 473.91560430101896;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int X = 633;
    int Y = 51;
    int D = 4686;
    int T = 9670;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 635.0511790399258;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int X = 21;
    int Y = 556;
    int D = 5415;
    int T = 9995;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 556.3964413976782;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int X = 600;
    int Y = 61;
    int D = 7785;
    int T = 4824;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 603.0928618380423;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int X = 283;
    int Y = 235;
    int D = 8780;
    int T = 4465;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 367.85051311640166;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int X = 898;
    int Y = 958;
    int D = 3010;
    int T = 7780;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1313.0757784682496;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int X = 617;
    int Y = 831;
    int D = 5699;
    int T = 4165;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1035.0120772242226;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int X = 881;
    int Y = 817;
    int D = 3156;
    int T = 8756;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1201.5198708302746;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int X = 413;
    int Y = 675;
    int D = 6107;
    int T = 2132;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 791.3242066308852;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int X = 387;
    int Y = 896;
    int D = 2444;
    int T = 6982;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 976.0046106448473;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int X = 738;
    int Y = 226;
    int D = 760;
    int T = 391;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 402.8289966048179;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int X = 408;
    int Y = 250;
    int D = 1776;
    int T = 74;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 148.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int X = 19;
    int Y = 481;
    int D = 1387;
    int T = 744;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 481.375113606842;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int X = 56;
    int Y = 484;
    int D = 1045;
    int T = 531;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 487.22889897870385;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int X = 398;
    int Y = 153;
    int D = 764;
    int T = 876;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 426.39535644751106;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int X = 834;
    int Y = 355;
    int D = 270;
    int T = 307;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 906.4110546545645;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int X = 465;
    int Y = 867;
    int D = 1672;
    int T = 5;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int X = 953;
    int Y = 676;
    int D = 120;
    int T = 952;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1168.4113145634974;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int X = 224;
    int Y = 509;
    int D = 1035;
    int T = 63;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 126.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int X = 74;
    int Y = 137;
    int D = 1806;
    int T = 533;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 155.7080601638849;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int X = 38;
    int Y = 86;
    int D = 4;
    int T = 7;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 94.02127418834527;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int X = 434;
    int Y = 375;
    int D = 6;
    int T = 7;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 573.5686532578293;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int X = 922;
    int Y = 391;
    int D = 14;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 216.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int X = 44;
    int Y = 625;
    int D = 16;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int X = 565;
    int Y = 172;
    int D = 10;
    int T = 7;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 413.60054182162753;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int X = 628;
    int Y = 147;
    int D = 9;
    int T = 5;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 360.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int X = 148;
    int Y = 919;
    int D = 16;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 59.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int X = 981;
    int Y = 955;
    int D = 7;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 196.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int X = 163;
    int Y = 119;
    int D = 1;
    int T = 10;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 201.81674856165927;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int X = 563;
    int Y = 388;
    int D = 18;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 114.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int X = 249;
    int Y = 645;
    int D = 833;
    int T = 52;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 104.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int X = 557;
    int Y = 445;
    int D = 550;
    int T = 79;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 158.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int X = 611;
    int Y = 174;
    int D = 763;
    int T = 50;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int X = 572;
    int Y = 149;
    int D = 416;
    int T = 98;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 196.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int X = 855;
    int Y = 96;
    int D = 209;
    int T = 77;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 332.3725937057735;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int X = 897;
    int Y = 604;
    int D = 822;
    int T = 95;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 190.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int X = 881;
    int Y = 487;
    int D = 993;
    int T = 69;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 82.64293570262544;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int X = 922;
    int Y = 214;
    int D = 130;
    int T = 48;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 372.50937660437364;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int X = 853;
    int Y = 871;
    int D = 452;
    int T = 85;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 255.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int X = 660;
    int Y = 584;
    int D = 809;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int X = 695;
    int Y = 958;
    int D = 865;
    int T = 17;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 34.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int X = 977;
    int Y = 6;
    int D = 368;
    int T = 43;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 129.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int X = 858;
    int Y = 461;
    int D = 388;
    int T = 54;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 162.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int X = 822;
    int Y = 578;
    int D = 169;
    int T = 75;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 450.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int X = 692;
    int Y = 554;
    int D = 519;
    int T = 100;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int X = 351;
    int Y = 210;
    int D = 624;
    int T = 17;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 34.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int X = 327;
    int Y = 568;
    int D = 31;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 22.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int X = 384;
    int Y = 778;
    int D = 396;
    int T = 57;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 171.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int X = 425;
    int Y = 132;
    int D = 384;
    int T = 51;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 102.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int X = 813;
    int Y = 101;
    int D = 421;
    int T = 64;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 128.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int X = 10;
    int Y = 10;
    int D = 10000;
    int T = 7;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 14.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int X = 10;
    int Y = 10;
    int D = 10000;
    int T = 8;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 14.142135623730951;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int X = 6;
    int Y = 8;
    int D = 3;
    int T = 2;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int X = 10;
    int Y = 10;
    int D = 1000;
    int T = 5;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int X = 6;
    int Y = 8;
    int D = 2;
    int T = 5;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int X = 10;
    int Y = 10;
    int D = 1000;
    int T = 5;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int X = 100;
    int Y = 120;
    int D = 1;
    int T = 11;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 156.20499351813308;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int X = 100;
    int Y = 100;
    int D = 1;
    int T = 100;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 141.4213562373095;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int X = 10;
    int Y = 1;
    int D = 11;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 3.95012437887911;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int X = 1000;
    int Y = 1000;
    int D = 10000;
    int T = 10000;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1414.213562373095;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int X = 1;
    int Y = 6;
    int D = 6;
    int T = 9;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.082762530298219;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int X = 1000;
    int Y = 1000;
    int D = 2;
    int T = 5000;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1414.213562373095;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int X = 3;
    int Y = 4;
    int D = 5;
    int T = 100;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int X = 1;
    int Y = 10;
    int D = 10;
    int T = 4;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4.04987562112089;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int X = 7;
    int Y = 7;
    int D = 5;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int X = 3;
    int Y = 4;
    int D = 10;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int X = 1000;
    int Y = 1000;
    int D = 2;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1414.213562373095;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int X = 30;
    int Y = 40;
    int D = 20;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int X = 6;
    int Y = 8;
    int D = 20;
    int T = 10;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int X = 898;
    int Y = 1;
    int D = 300;
    int T = 200;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 600.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int X = 1;
    int Y = 1;
    int D = 2;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int X = 663;
    int Y = 645;
    int D = 10000;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int X = 401;
    int Y = 300;
    int D = 150;
    int T = 10;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int X = 400;
    int Y = 300;
    int D = 150;
    int T = 10;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int X = 16;
    int Y = 12;
    int D = 3;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int X = 800;
    int Y = 600;
    int D = 1;
    int T = 999;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int X = 5;
    int Y = 4;
    int D = 1;
    int T = 2;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 6.4031242374328485;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int X = 3;
    int Y = 4;
    int D = 6;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int X = 55;
    int Y = 689;
    int D = 465;
    int T = 223;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 446.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int X = 318;
    int Y = 445;
    int D = 1200;
    int T = 800;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 546.9451526432975;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int X = 1;
    int Y = 1000;
    int D = 1;
    int T = 10000;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.000499999875;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int X = 1;
    int Y = 1;
    int D = 1;
    int T = 1000;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int X = 10;
    int Y = 10;
    int D = 1000;
    int T = 2;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int X = 3;
    int Y = 4;
    int D = 5;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int X = 1;
    int Y = 1;
    int D = 10;
    int T = 10000;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int X = 3;
    int Y = 4;
    int D = 3;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int X = 3;
    int Y = 4;
    int D = 7;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int X = 1000;
    int Y = 1000;
    int D = 1;
    int T = 100;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1414.213562373095;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int X = 10;
    int Y = 10;
    int D = 12;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int X = 30;
    int Y = 40;
    int D = 25;
    int T = 40;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int X = 99;
    int Y = 99;
    int D = 1000;
    int T = 4;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int X = 1000;
    int Y = 1000;
    int D = 93;
    int T = 91;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1384.213562373095;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int X = 2;
    int Y = 2;
    int D = 5;
    int T = 2;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8284271247461903;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int X = 1;
    int Y = 1;
    int D = 5000;
    int T = 499;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int X = 1000;
    int Y = 1000;
    int D = 1005;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int X = 6;
    int Y = 8;
    int D = 1010;
    int T = 2;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int X = 3;
    int Y = 3;
    int D = 2;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 4.242640687119285;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int X = 1;
    int Y = 3;
    int D = 2;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int X = 10;
    int Y = 10;
    int D = 1;
    int T = 5;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 14.142135623730951;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int X = 11;
    int Y = 11;
    int D = 1000;
    int T = 5;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int X = 591;
    int Y = 739;
    int D = 1890;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int X = 999;
    int Y = 1000;
    int D = 7;
    int T = 3;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 606.0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int X = 750;
    int Y = 1;
    int D = 300;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int X = 500;
    int Y = 1;
    int D = 240;
    int T = 13;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 39.0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int X = 200;
    int Y = 200;
    int D = 10;
    int T = 1000;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 282.842712474619;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int X = 5;
    int Y = 5;
    int D = 5;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int X = 1;
    int Y = 1;
    int D = 10;
    int T = 20;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int X = 100;
    int Y = 100;
    int D = 2;
    int T = 500;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 141.4213562373095;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int X = 900;
    int Y = 900;
    int D = 901;
    int T = 901;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 1272.7922061357856;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int X = 2;
    int Y = 2;
    int D = 100;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int X = 10;
    int Y = 10;
    int D = 1000;
    int T = 4;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int X = 3;
    int Y = 4;
    int D = 5;
    int T = 300;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int X = 30;
    int Y = 40;
    int D = 5;
    int T = 300;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int X = 30;
    int Y = 40;
    int D = 60;
    int T = 1;
    ReturnToHome* pObj = new ReturnToHome();
    clock_t start = clock();
    double result = pObj->goHome(X, Y, D, T);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=260835&rd=9998&pm=6684
********************************************************************************
#line 2 "ReturnToHome.cc"
#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
 
class ReturnToHome {
public:
    double goHome(int X, int Y, int D, int T) {
  double best = 1E10;
  double R = hypot(X, Y);
  for (int njumps = 0; njumps <= 2000; njumps++) {
      double option;
      option = njumps * T;
      if (njumps == 1) {
    option += fabsl(R - D);
      } else {
    option += 0 >? (R - D * njumps);
      }
      best <?= option;
  }
  return best;
    }
};
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/