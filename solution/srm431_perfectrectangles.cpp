/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10171
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

class PerfectRectangles {
public:
    int numberOfRectangles(int N, int M, int X0, int A, int B, int Y0, int C, int D);
};

int PerfectRectangles::numberOfRectangles(int N, int M, int X0, int A, int B, int Y0, int C, int D) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    int M = 1;
    int X0 = 2;
    int A = 0;
    int B = 0;
    int Y0 = 2;
    int C = 0;
    int D = 0;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
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
    int M = 4;
    int X0 = 0;
    int A = 1;
    int B = 1;
    int Y0 = 0;
    int C = 1;
    int D = 1;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 1;
    int M = 1000000;
    int X0 = 1;
    int A = 2;
    int B = 3;
    int Y0 = 1;
    int C = 4;
    int D = 7;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    int M = 20;
    int X0 = 4;
    int A = 76;
    int B = 2;
    int Y0 = 6;
    int C = 2;
    int D = 43;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 91;
    int M = 2511;
    int X0 = 440;
    int A = 936;
    int B = 329;
    int Y0 = 467;
    int C = 709;
    int D = 150;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 755;
    int M = 301848;
    int X0 = 431;
    int A = 823;
    int B = 931;
    int Y0 = 993;
    int C = 491;
    int D = 952;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 495;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 441;
    int M = 2029;
    int X0 = 876;
    int A = 699;
    int B = 698;
    int Y0 = 404;
    int C = 370;
    int D = 292;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 728;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 497;
    int M = 61594;
    int X0 = 885;
    int A = 18;
    int B = 273;
    int Y0 = 642;
    int C = 893;
    int D = 868;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 847;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 753;
    int M = 221641;
    int X0 = 862;
    int A = 225;
    int B = 704;
    int Y0 = 126;
    int C = 660;
    int D = 656;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2171;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 597;
    int M = 157089;
    int X0 = 778;
    int A = 502;
    int B = 732;
    int Y0 = 715;
    int C = 847;
    int D = 17;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 909;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 366;
    int M = 102581;
    int X0 = 626;
    int A = 245;
    int B = 934;
    int Y0 = 31;
    int C = 76;
    int D = 288;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 496;
    int M = 141588;
    int X0 = 545;
    int A = 369;
    int B = 70;
    int Y0 = 992;
    int C = 335;
    int D = 346;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 679;
    int M = 206268;
    int X0 = 282;
    int A = 918;
    int B = 369;
    int Y0 = 962;
    int C = 829;
    int D = 738;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2004;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 994;
    int M = 521050;
    int X0 = 525;
    int A = 907;
    int B = 80;
    int Y0 = 102;
    int C = 517;
    int D = 532;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 882;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 883;
    int M = 129679;
    int X0 = 364;
    int A = 642;
    int B = 304;
    int Y0 = 964;
    int C = 921;
    int D = 682;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4631;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 71;
    int M = 4723;
    int X0 = 496;
    int A = 92;
    int B = 558;
    int Y0 = 751;
    int C = 824;
    int D = 264;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 1000;
    int M = 768327;
    int X0 = 40;
    int A = 27;
    int B = 559;
    int Y0 = 632;
    int C = 743;
    int D = 333;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 580;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 400;
    int M = 143875;
    int X0 = 326;
    int A = 990;
    int B = 161;
    int Y0 = 76;
    int C = 427;
    int D = 953;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 507;
    int M = 164521;
    int X0 = 570;
    int A = 197;
    int B = 749;
    int Y0 = 177;
    int C = 901;
    int D = 931;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1163;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 472;
    int M = 2987;
    int X0 = 654;
    int A = 744;
    int B = 559;
    int Y0 = 900;
    int C = 139;
    int D = 397;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 715;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 460;
    int M = 53554;
    int X0 = 326;
    int A = 599;
    int B = 37;
    int Y0 = 568;
    int C = 477;
    int D = 527;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 828;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 341;
    int M = 109400;
    int X0 = 460;
    int A = 649;
    int B = 176;
    int Y0 = 321;
    int C = 998;
    int D = 592;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 331;
    int M = 33780;
    int X0 = 467;
    int A = 109;
    int B = 785;
    int Y0 = 894;
    int C = 911;
    int D = 392;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2479;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 778;
    int M = 303044;
    int X0 = 505;
    int A = 791;
    int B = 611;
    int Y0 = 296;
    int C = 419;
    int D = 790;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1764;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 359;
    int M = 8573;
    int X0 = 273;
    int A = 776;
    int B = 525;
    int Y0 = 503;
    int C = 244;
    int D = 580;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3583;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 274;
    int M = 23230;
    int X0 = 329;
    int A = 90;
    int B = 465;
    int Y0 = 192;
    int C = 670;
    int D = 975;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 604;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 573;
    int M = 236433;
    int X0 = 777;
    int A = 560;
    int B = 612;
    int Y0 = 445;
    int C = 175;
    int D = 441;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2045;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 848;
    int M = 213044;
    int X0 = 280;
    int A = 520;
    int B = 599;
    int Y0 = 452;
    int C = 130;
    int D = 982;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 88;
    int M = 1956;
    int X0 = 500;
    int A = 137;
    int B = 866;
    int Y0 = 796;
    int C = 185;
    int D = 951;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 252;
    int M = 3976;
    int X0 = 405;
    int A = 857;
    int B = 882;
    int Y0 = 336;
    int C = 624;
    int D = 308;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 919;
    int M = 556617;
    int X0 = 694;
    int A = 11;
    int B = 633;
    int Y0 = 312;
    int C = 967;
    int D = 860;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4174;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 607;
    int M = 269387;
    int X0 = 843;
    int A = 983;
    int B = 508;
    int Y0 = 598;
    int C = 702;
    int D = 70;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1563;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 911;
    int M = 152401;
    int X0 = 275;
    int A = 158;
    int B = 575;
    int Y0 = 998;
    int C = 407;
    int D = 240;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 8700;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 138;
    int M = 7744;
    int X0 = 172;
    int A = 696;
    int B = 152;
    int Y0 = 165;
    int C = 902;
    int D = 823;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 1000;
    int M = 215765;
    int X0 = 503;
    int A = 434;
    int B = 533;
    int Y0 = 431;
    int C = 545;
    int D = 404;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 195;
    int M = 2959;
    int X0 = 517;
    int A = 671;
    int B = 971;
    int Y0 = 263;
    int C = 411;
    int D = 123;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 599;
    int M = 173427;
    int X0 = 89;
    int A = 258;
    int B = 396;
    int Y0 = 294;
    int C = 172;
    int D = 193;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3054;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 538;
    int M = 207245;
    int X0 = 251;
    int A = 781;
    int B = 651;
    int Y0 = 285;
    int C = 690;
    int D = 96;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2239;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 363;
    int M = 14213;
    int X0 = 729;
    int A = 309;
    int B = 925;
    int Y0 = 831;
    int C = 798;
    int D = 912;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4188;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 371;
    int M = 22691;
    int X0 = 159;
    int A = 122;
    int B = 202;
    int Y0 = 173;
    int C = 140;
    int D = 481;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 755;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 585;
    int M = 234242;
    int X0 = 4;
    int A = 236;
    int B = 413;
    int Y0 = 266;
    int C = 638;
    int D = 32;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1463;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 204;
    int M = 7760;
    int X0 = 4;
    int A = 166;
    int B = 995;
    int Y0 = 470;
    int C = 305;
    int D = 173;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 837;
    int M = 637425;
    int X0 = 799;
    int A = 305;
    int B = 410;
    int Y0 = 451;
    int C = 622;
    int D = 192;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 384;
    int M = 99432;
    int X0 = 169;
    int A = 511;
    int B = 269;
    int Y0 = 480;
    int C = 42;
    int D = 822;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 823;
    int M = 676372;
    int X0 = 620;
    int A = 184;
    int B = 472;
    int Y0 = 99;
    int C = 972;
    int D = 175;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 9420;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 852;
    int M = 277311;
    int X0 = 167;
    int A = 48;
    int B = 943;
    int Y0 = 12;
    int C = 923;
    int D = 542;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 53;
    int M = 923;
    int X0 = 255;
    int A = 205;
    int B = 142;
    int Y0 = 484;
    int C = 18;
    int D = 703;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 114;
    int M = 317;
    int X0 = 803;
    int A = 235;
    int B = 141;
    int Y0 = 256;
    int C = 944;
    int D = 391;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 761;
    int M = 303988;
    int X0 = 603;
    int A = 693;
    int B = 681;
    int Y0 = 140;
    int C = 538;
    int D = 278;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 7190;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 69;
    int M = 1669;
    int X0 = 571;
    int A = 674;
    int B = 444;
    int Y0 = 354;
    int C = 276;
    int D = 636;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 901;
    int M = 805346;
    int X0 = 925;
    int A = 29;
    int B = 69;
    int Y0 = 798;
    int C = 129;
    int D = 98;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 947;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 60;
    int M = 2606;
    int X0 = 104;
    int A = 157;
    int B = 736;
    int Y0 = 31;
    int C = 197;
    int D = 567;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 932;
    int M = 480534;
    int X0 = 897;
    int A = 624;
    int B = 602;
    int Y0 = 623;
    int C = 460;
    int D = 548;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 473;
    int M = 202212;
    int X0 = 493;
    int A = 185;
    int B = 248;
    int Y0 = 734;
    int C = 572;
    int D = 123;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 605;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 314;
    int M = 65313;
    int X0 = 522;
    int A = 405;
    int B = 741;
    int Y0 = 983;
    int C = 306;
    int D = 25;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 985;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 203;
    int M = 7312;
    int X0 = 816;
    int A = 644;
    int B = 831;
    int Y0 = 936;
    int C = 742;
    int D = 158;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 950;
    int M = 90633;
    int X0 = 433;
    int A = 32;
    int B = 199;
    int Y0 = 466;
    int C = 995;
    int D = 357;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 353;
    int M = 22607;
    int X0 = 828;
    int A = 782;
    int B = 873;
    int Y0 = 92;
    int C = 103;
    int D = 471;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2869;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 510;
    int M = 122389;
    int X0 = 324;
    int A = 823;
    int B = 676;
    int Y0 = 80;
    int C = 534;
    int D = 386;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 281;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 122;
    int M = 5224;
    int X0 = 344;
    int A = 518;
    int B = 348;
    int Y0 = 625;
    int C = 193;
    int D = 536;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 387;
    int M = 141409;
    int X0 = 678;
    int A = 705;
    int B = 102;
    int Y0 = 588;
    int C = 9;
    int D = 884;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 142;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 635;
    int M = 81873;
    int X0 = 826;
    int A = 274;
    int B = 924;
    int Y0 = 553;
    int C = 561;
    int D = 205;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 359;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 103;
    int M = 146;
    int X0 = 961;
    int A = 510;
    int B = 355;
    int Y0 = 436;
    int C = 956;
    int D = 648;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 657;
    int M = 115404;
    int X0 = 120;
    int A = 221;
    int B = 926;
    int Y0 = 671;
    int C = 826;
    int D = 57;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 3;
    int M = 2;
    int X0 = 0;
    int A = 2;
    int B = 2;
    int Y0 = 1;
    int C = 1;
    int D = 2;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 1676;
    int M = 469443;
    int X0 = 1738;
    int A = 950;
    int B = 1755;
    int Y0 = 588;
    int C = 1002;
    int D = 403;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2323;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 1731;
    int M = 2384971;
    int X0 = 1809;
    int A = 1371;
    int B = 317;
    int Y0 = 1077;
    int C = 1549;
    int D = 967;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4865;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 1818;
    int M = 738605;
    int X0 = 1571;
    int A = 571;
    int B = 380;
    int Y0 = 917;
    int C = 1309;
    int D = 1437;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 8131;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 1003;
    int M = 709929;
    int X0 = 757;
    int A = 1973;
    int B = 1770;
    int Y0 = 1211;
    int C = 1012;
    int D = 1493;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 23009;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 1257;
    int M = 640687;
    int X0 = 1698;
    int A = 458;
    int B = 1125;
    int Y0 = 911;
    int C = 1866;
    int D = 1262;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2273;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 1401;
    int M = 411702;
    int X0 = 484;
    int A = 1909;
    int B = 543;
    int Y0 = 478;
    int C = 609;
    int D = 198;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4708;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 1668;
    int M = 524728;
    int X0 = 1208;
    int A = 604;
    int B = 429;
    int Y0 = 1708;
    int C = 845;
    int D = 333;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1774;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 1747;
    int M = 2943779;
    int X0 = 1900;
    int A = 409;
    int B = 1935;
    int Y0 = 532;
    int C = 924;
    int D = 103;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 22777;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 1945;
    int M = 2090182;
    int X0 = 1431;
    int A = 876;
    int B = 1688;
    int Y0 = 1122;
    int C = 883;
    int D = 626;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 21387;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 1205;
    int M = 1412820;
    int X0 = 1785;
    int A = 1024;
    int B = 1831;
    int Y0 = 1277;
    int C = 1187;
    int D = 1430;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 502;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 2000;
    int M = 6;
    int X0 = 511;
    int A = 1870;
    int B = 765;
    int Y0 = 1323;
    int C = 167;
    int D = 1405;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 2000;
    int M = 5;
    int X0 = 1438;
    int A = 1956;
    int B = 834;
    int Y0 = 1465;
    int C = 1332;
    int D = 1677;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 2000;
    int M = 9;
    int X0 = 375;
    int A = 601;
    int B = 36;
    int Y0 = 1701;
    int C = 1396;
    int D = 1489;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 2000;
    int M = 6;
    int X0 = 851;
    int A = 1460;
    int B = 1464;
    int Y0 = 1186;
    int C = 1247;
    int D = 1039;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 2000;
    int M = 4;
    int X0 = 1361;
    int A = 404;
    int B = 1306;
    int Y0 = 813;
    int C = 331;
    int D = 1583;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 2000;
    int M = 78;
    int X0 = 1460;
    int A = 447;
    int B = 446;
    int Y0 = 757;
    int C = 1725;
    int D = 63;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 373;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 2000;
    int M = 19;
    int X0 = 1446;
    int A = 1850;
    int B = 1967;
    int Y0 = 1383;
    int C = 1750;
    int D = 1606;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 2000;
    int M = 69;
    int X0 = 469;
    int A = 17;
    int B = 443;
    int Y0 = 1104;
    int C = 810;
    int D = 993;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 2000;
    int M = 56;
    int X0 = 1538;
    int A = 1955;
    int B = 1999;
    int Y0 = 1262;
    int C = 651;
    int D = 1638;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 2000;
    int M = 82;
    int X0 = 621;
    int A = 990;
    int B = 905;
    int Y0 = 1455;
    int C = 1309;
    int D = 1758;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 2000;
    int M = 538;
    int X0 = 213;
    int A = 1557;
    int B = 1372;
    int Y0 = 1951;
    int C = 1405;
    int D = 362;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 2000;
    int M = 718;
    int X0 = 1480;
    int A = 967;
    int B = 504;
    int Y0 = 90;
    int C = 521;
    int D = 1859;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 5328;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 2000;
    int M = 140;
    int X0 = 577;
    int A = 800;
    int B = 67;
    int Y0 = 859;
    int C = 65;
    int D = 1601;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 2000;
    int M = 982;
    int X0 = 1289;
    int A = 1626;
    int B = 1035;
    int Y0 = 1686;
    int C = 1062;
    int D = 1759;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 2000;
    int M = 591;
    int X0 = 1659;
    int A = 1981;
    int B = 1012;
    int Y0 = 333;
    int C = 1462;
    int D = 1046;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3165;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 2000;
    int M = 5407;
    int X0 = 1418;
    int A = 1138;
    int B = 1328;
    int Y0 = 1247;
    int C = 850;
    int D = 209;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 2000;
    int M = 6692;
    int X0 = 50;
    int A = 827;
    int B = 1375;
    int Y0 = 1406;
    int C = 56;
    int D = 251;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 141;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 2000;
    int M = 6559;
    int X0 = 1677;
    int A = 1769;
    int B = 1283;
    int Y0 = 91;
    int C = 658;
    int D = 142;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3446;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 2000;
    int M = 3332;
    int X0 = 1298;
    int A = 1610;
    int B = 703;
    int Y0 = 687;
    int C = 740;
    int D = 1107;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 2000;
    int M = 8145;
    int X0 = 1178;
    int A = 490;
    int B = 320;
    int Y0 = 25;
    int C = 564;
    int D = 190;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 2000;
    int M = 34825;
    int X0 = 670;
    int A = 1278;
    int B = 426;
    int Y0 = 791;
    int C = 963;
    int D = 1981;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1862;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 2000;
    int M = 71763;
    int X0 = 1835;
    int A = 536;
    int B = 753;
    int Y0 = 1352;
    int C = 1968;
    int D = 1790;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1095;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 2000;
    int M = 50604;
    int X0 = 1971;
    int A = 1368;
    int B = 1366;
    int Y0 = 576;
    int C = 1613;
    int D = 1548;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 2000;
    int M = 50076;
    int X0 = 833;
    int A = 1701;
    int B = 1281;
    int Y0 = 301;
    int C = 21;
    int D = 260;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 13617;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 2000;
    int M = 99436;
    int X0 = 354;
    int A = 1695;
    int B = 1819;
    int Y0 = 964;
    int C = 682;
    int D = 1685;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 2000;
    int M = 368644;
    int X0 = 1002;
    int A = 486;
    int B = 503;
    int Y0 = 234;
    int C = 1984;
    int D = 1816;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1428;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 2000;
    int M = 803585;
    int X0 = 451;
    int A = 1082;
    int B = 94;
    int Y0 = 378;
    int C = 1377;
    int D = 286;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 219;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 2000;
    int M = 433771;
    int X0 = 1472;
    int A = 1533;
    int B = 67;
    int Y0 = 336;
    int C = 1633;
    int D = 1758;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2955;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 2000;
    int M = 957330;
    int X0 = 1595;
    int A = 1312;
    int B = 37;
    int Y0 = 699;
    int C = 1564;
    int D = 547;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 683;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 2000;
    int M = 379869;
    int X0 = 237;
    int A = 1027;
    int B = 1286;
    int Y0 = 1251;
    int C = 503;
    int D = 212;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 942;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 2000;
    int M = 3153696;
    int X0 = 1187;
    int A = 848;
    int B = 1313;
    int Y0 = 612;
    int C = 940;
    int D = 60;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 2000;
    int M = 2788847;
    int X0 = 911;
    int A = 1614;
    int B = 4;
    int Y0 = 1948;
    int C = 1400;
    int D = 1459;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 2000;
    int M = 2630414;
    int X0 = 1073;
    int A = 1673;
    int B = 385;
    int Y0 = 738;
    int C = 1052;
    int D = 1681;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3717;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 2000;
    int M = 1681664;
    int X0 = 1632;
    int A = 1905;
    int B = 1203;
    int Y0 = 1614;
    int C = 1078;
    int D = 1586;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1106;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 2000;
    int M = 1440905;
    int X0 = 193;
    int A = 182;
    int B = 66;
    int Y0 = 634;
    int C = 74;
    int D = 1346;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 2000;
    int M = 4000000;
    int X0 = 653;
    int A = 1807;
    int B = 605;
    int Y0 = 113;
    int C = 1466;
    int D = 848;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 1999;
    int M = 4000000;
    int X0 = 1000;
    int A = 1;
    int B = 1;
    int Y0 = 0;
    int C = 1;
    int D = 1;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1002995;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 2000;
    int M = 4000000;
    int X0 = 1500;
    int A = 1;
    int B = 1;
    int Y0 = 500;
    int C = 1;
    int D = 1;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1003997;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 1999;
    int M = 91999;
    int X0 = 123;
    int A = 124;
    int B = 561;
    int Y0 = 512;
    int C = 123;
    int D = 125;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 22139;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 2000;
    int M = 100000;
    int X0 = 787;
    int A = 667;
    int B = 565;
    int Y0 = 444;
    int C = 367;
    int D = 447;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1801;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 1997;
    int M = 3999999;
    int X0 = 42;
    int A = 19;
    int B = 17;
    int Y0 = 17;
    int C = 13;
    int D = 98;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 26727;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 2000;
    int M = 20;
    int X0 = 4;
    int A = 76;
    int B = 2;
    int Y0 = 6;
    int C = 2;
    int D = 43;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 1999;
    int M = 500000;
    int X0 = 788;
    int A = 1566;
    int B = 1596;
    int Y0 = 1823;
    int C = 395;
    int D = 670;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 9809;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 2000;
    int M = 4000000;
    int X0 = 234;
    int A = 123;
    int B = 432;
    int Y0 = 1232;
    int C = 232;
    int D = 1234;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 1999;
    int M = 4000000;
    int X0 = 61;
    int A = 17;
    int B = 19;
    int Y0 = 11;
    int C = 7;
    int D = 3;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 21460;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 2000;
    int M = 2000000;
    int X0 = 2;
    int A = 4;
    int B = 7;
    int Y0 = 3;
    int C = 5;
    int D = 6;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 1989;
    int M = 3500000;
    int X0 = 4;
    int A = 76;
    int B = 2;
    int Y0 = 6;
    int C = 2;
    int D = 43;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 463;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 2000;
    int M = 937421;
    int X0 = 432;
    int A = 769;
    int B = 232;
    int Y0 = 123;
    int C = 212;
    int D = 943;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 662;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 2000;
    int M = 200000;
    int X0 = 0;
    int A = 1;
    int B = 1;
    int Y0 = 0;
    int C = 1;
    int D = 157;
    PerfectRectangles* pObj = new PerfectRectangles();
    clock_t start = clock();
    int result = pObj->numberOfRectangles(N, M, X0, A, B, Y0, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 37087;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22723672&rd=13522&pm=10171
********************************************************************************
#line 5 "PerfectRectangles.cpp" 
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
 
#define PB push_back 
#define MP make_pair 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef long long LL; 
typedef pair<int,int> PII; 
 
const int maxn = 2008; 
bool a[maxn][maxn]; 
int l[maxn][maxn],r[maxn][maxn],u[maxn][maxn]; 
 
 
set< pair<int,int> > hash; 
class PerfectRectangles 
{ 
  public: 
  int numberOfRectangles(int n, int M, int X0, int A, int B, int Y0, int C, int D) 
  { 
    for(int i=0;i<=n+1;i++) 
    for(int j=0;j<=n+1;j++) 
    { 
      a[i][j]=true; 
      l[i][j] = r[i][j] = u[i][j] = 0; 
    } 
    X0%=n;Y0%=n; 
    for(int i=0;i<M;i++) 
    { 
      a[X0+1][Y0+1] = false; 
      X0 = (X0*A+B)%n; 
      Y0 = (Y0*C+D)%n; 
    } 
    for(int i=1;i<=n;i++) 
    { 
      for(int j=1;j<=n;j++) if(a[i][j]) u[i][j] = u[i-1][j]+1; 
      for(int j=1;j<=n;j++) if(a[i][j]) l[i][j] = l[i][j-1]+1; 
      for(int j=n;j;j--) if(a[i][j]) r[i][j] = r[i][j+1]+1; 
    } 
 
    int ans = 0; 
    for(int i=1;i<=n;i++) 
    { 
      hash.clear(); 
    for(int j=1;j<=n;j++)if(a[i][j]) 
    { 
      if(u[i][j]>1) 
      { 
        l[i][j] = min(l[i][j],l[i-1][j]); 
        r[i][j] = min(r[i][j],r[i-1][j]); 
      } 
      if(r[i+1][j-l[i][j]+1]<l[i][j]+r[i][j]-1) 
      if(hash.find( MP(j-l[i][j],j+r[i][j]) )==hash.end()) 
      { 
        hash.insert( MP(j-l[i][j],j+r[i][j]) ); 
//        printf("At %d %d\n",i,j); 
//        printf("%d %d %d %d\n",i-u[i][j]+1,i,j-l[i][j]+1,j+r[i][j]-1); 
        ans++; 
      } 
    } 
    } 
 
    return ans; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/