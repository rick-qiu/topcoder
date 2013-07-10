/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8741
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

class ModuleSequence {
public:
    long countElements(long K, long N, long A, long B, long lower, long upper);
};

long ModuleSequence::countElements(long K, long N, long A, long B, long lower, long upper) {
    long ret;
    return ret;
}


int test0() {
    long K = 6;
    long N = 4;
    long A = 0;
    long B = 6;
    long lower = 1;
    long upper = 3;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long K = 2;
    long N = 7;
    long A = 1;
    long B = 5;
    long lower = 2;
    long upper = 5;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long K = 9;
    long N = 1;
    long A = 0;
    long B = 7;
    long lower = 0;
    long upper = 0;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long K = 36;
    long N = 73;
    long A = 1;
    long B = 69;
    long lower = 28;
    long upper = 34;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long K = 30;
    long N = 83;
    long A = 2;
    long B = 24;
    long lower = 57;
    long upper = 60;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long K = 2;
    long N = 30;
    long A = 2;
    long B = 59;
    long lower = 27;
    long upper = 29;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long K = 456;
    long N = 394;
    long A = 11;
    long B = 43;
    long lower = 107;
    long upper = 259;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long K = 919;
    long N = 422;
    long A = 84;
    long B = 538;
    long lower = 324;
    long upper = 338;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long K = 370;
    long N = 316;
    long A = 13;
    long B = 527;
    long lower = 100;
    long upper = 143;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 72;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long K = 1873;
    long N = 9957;
    long A = 862;
    long B = 9171;
    long lower = 1741;
    long upper = 2425;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 572;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long K = 925;
    long N = 2306;
    long A = 84;
    long B = 6328;
    long lower = 1769;
    long upper = 2132;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 985;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long K = 1729;
    long N = 847;
    long A = 313;
    long B = 5858;
    long lower = 318;
    long upper = 726;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 2656;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long K = 545;
    long N = 19583;
    long A = 8814;
    long B = 33368;
    long lower = 2360;
    long upper = 15409;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 16368;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long K = 13750;
    long N = 44044;
    long A = 1087;
    long B = 26809;
    long lower = 19138;
    long upper = 21124;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1172;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long K = 93584;
    long N = 95789;
    long A = 2652;
    long B = 5403;
    long lower = 36533;
    long upper = 65948;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 844;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long K = 95060;
    long N = 999933;
    long A = 49676;
    long B = 993369;
    long lower = 10987;
    long upper = 342940;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 313283;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long K = 698586;
    long N = 636227;
    long A = 48094;
    long B = 297540;
    long lower = 307314;
    long upper = 363239;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 21927;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long K = 960378;
    long N = 651435;
    long A = 66602;
    long B = 97467;
    long lower = 227942;
    long upper = 620897;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 18619;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long K = 3570492;
    long N = 573318;
    long A = 260757;
    long B = 926652;
    long lower = 262969;
    long upper = 533252;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 313926;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long K = 3209441;
    long N = 2724287;
    long A = 953865;
    long B = 4429690;
    long lower = 1898273;
    long upper = 2205701;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 392238;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long K = 744729;
    long N = 1558441;
    long A = 958031;
    long B = 3108118;
    long lower = 633763;
    long upper = 1492101;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1184193;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long K = 22890675;
    long N = 69834482;
    long A = 120709;
    long B = 91698928;
    long lower = 3194229;
    long upper = 9936482;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 8841531;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long K = 24872353;
    long N = 55179498;
    long A = 7254586;
    long B = 72276966;
    long lower = 48579743;
    long upper = 48737314;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 185670;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long K = 28624;
    long N = 52406220;
    long A = 51528;
    long B = 40332872;
    long lower = 7993292;
    long upper = 19518209;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 8858695;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long K = 515530019;
    long N = 378409504;
    long A = 13258270;
    long B = 573363369;
    long lower = 185439195;
    long upper = 274731196;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 132166091;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long K = 631518149;
    long N = 373226341;
    long A = 747796;
    long B = 289700724;
    long lower = 168002245;
    long upper = 370689936;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 156921378;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long K = 439493451;
    long N = 150122847;
    long A = 90892921;
    long B = 760243556;
    long lower = 30209603;
    long upper = 121369018;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 406451209;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long K = 897617218;
    long N = 1000000000;
    long A = 98172345;
    long B = 987651234;
    long lower = 345781920;
    long upper = 689102934;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 305376803;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long K = 20;
    long N = 12;
    long A = 21;
    long B = 30;
    long lower = 1;
    long upper = 11;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long K = 30;
    long N = 89;
    long A = 112;
    long B = 200;
    long lower = 80;
    long upper = 88;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long K = 890;
    long N = 1000;
    long A = 1000;
    long B = 10000;
    long lower = 456;
    long upper = 980;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 4770;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long K = 789817231;
    long N = 1000000000;
    long A = 112130;
    long B = 901030000;
    long lower = 10;
    long upper = 999999989;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 900917853;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long K = 67845;
    long N = 999999937;
    long A = 19827119;
    long B = 987123469;
    long lower = 198276;
    long upper = 987172189;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 954696369;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long K = 2317;
    long N = 999999937;
    long A = 127890182;
    long B = 589123123;
    long lower = 981234;
    long upper = 89372612;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 40743198;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long K = 10000000000;
    long N = 179882778;
    long A = 9;
    long B = 10000000000;
    long lower = 482349;
    long upper = 66707728;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 3681585348;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long K = 10000000000;
    long N = 42046;
    long A = 9361;
    long B = 9762861596;
    long lower = 756;
    long upper = 36321;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 8258231524;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long K = 36;
    long N = 6074;
    long A = 96;
    long B = 8143895786;
    long lower = 5;
    long upper = 286;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 378099866;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long K = 3818987;
    long N = 484373601;
    long A = 8812;
    long B = 9999585582;
    long lower = 0;
    long upper = 0;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long K = 7733999;
    long N = 26882058;
    long A = 1;
    long B = 10000000000;
    long lower = 8;
    long upper = 778539;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 289608037;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long K = 66;
    long N = 61;
    long A = 2;
    long B = 2;
    long lower = 0;
    long upper = 28;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long K = 3102916;
    long N = 36698;
    long A = 105;
    long B = 12297;
    long lower = 2970;
    long upper = 2986;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long K = 610;
    long N = 3;
    long A = 0;
    long B = 463;
    long lower = 0;
    long upper = 0;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 155;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long K = 0;
    long N = 3;
    long A = 0;
    long B = 9;
    long lower = 0;
    long upper = 0;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long K = 45;
    long N = 4;
    long A = 0;
    long B = 105;
    long lower = 0;
    long upper = 0;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long K = 283;
    long N = 3;
    long A = 978;
    long B = 9574;
    long lower = 0;
    long upper = 0;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 2866;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long K = 3;
    long N = 8753;
    long A = 618;
    long B = 56924;
    long lower = 8;
    long upper = 24;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 107;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long K = 6;
    long N = 43;
    long A = 0;
    long B = 297;
    long lower = 0;
    long upper = 2;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long K = 4;
    long N = 6;
    long A = 0;
    long B = 0;
    long lower = 2;
    long upper = 3;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long K = 8863;
    long N = 7299;
    long A = 175590;
    long B = 343799;
    long lower = 0;
    long upper = 5238;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 120734;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long K = 8229093;
    long N = 6444334183;
    long A = 346;
    long B = 4720366958;
    long lower = 65;
    long upper = 990216849;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 725317114;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long K = 122491;
    long N = 61;
    long A = 9;
    long B = 3089;
    long lower = 7;
    long upper = 9;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 151;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long K = 96;
    long N = 6327;
    long A = 8;
    long B = 827;
    long lower = 0;
    long upper = 954;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 122;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long K = 4;
    long N = 23356376;
    long A = 34592;
    long B = 59850882;
    long lower = 0;
    long upper = 3190834;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 8740207;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long K = 0;
    long N = 7;
    long A = 0;
    long B = 3;
    long lower = 0;
    long upper = 0;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long K = 0;
    long N = 19;
    long A = 0;
    long B = 5;
    long lower = 0;
    long upper = 0;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long K = 96740;
    long N = 66;
    long A = 0;
    long B = 8;
    long lower = 15;
    long upper = 55;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long K = 0;
    long N = 580;
    long A = 31;
    long B = 54;
    long lower = 325;
    long upper = 523;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long K = 168;
    long N = 16714;
    long A = 0;
    long B = 65808;
    long lower = 0;
    long upper = 345;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1364;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long K = 938;
    long N = 17075;
    long A = 7144;
    long B = 9758;
    long lower = 415;
    long upper = 797;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long K = 9770;
    long N = 44761;
    long A = 0;
    long B = 10;
    long lower = 6;
    long upper = 4512;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long K = 6;
    long N = 592;
    long A = 1;
    long B = 3;
    long lower = 0;
    long upper = 7;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long K = 0;
    long N = 2;
    long A = 9;
    long B = 28;
    long lower = 0;
    long upper = 0;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long K = 9680;
    long N = 60252;
    long A = 55;
    long B = 99770;
    long lower = 0;
    long upper = 680;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1131;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long K = 0;
    long N = 38;
    long A = 0;
    long B = 1;
    long lower = 0;
    long upper = 1;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long K = 0;
    long N = 76;
    long A = 82;
    long B = 48103;
    long lower = 0;
    long upper = 0;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 48022;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long K = 4;
    long N = 816;
    long A = 628;
    long B = 3694347;
    long lower = 0;
    long upper = 4;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 36212;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long K = 4431;
    long N = 8;
    long A = 35;
    long B = 7985;
    long lower = 0;
    long upper = 1;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1988;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long K = 15;
    long N = 67;
    long A = 0;
    long B = 6;
    long lower = 0;
    long upper = 0;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long K = 7270;
    long N = 58;
    long A = 90;
    long B = 38005;
    long lower = 0;
    long upper = 4;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 3923;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long K = 0;
    long N = 10000000000;
    long A = 0;
    long B = 8041187738;
    long lower = 23;
    long upper = 393226;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long K = 71914641;
    long N = 8219710345;
    long A = 650;
    long B = 3594592;
    long lower = 1;
    long upper = 81087041;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 35455;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long K = 10000000000;
    long N = 10000000000;
    long A = 148;
    long B = 1957161979;
    long lower = 5;
    long upper = 22914188;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long K = 18;
    long N = 10000000000;
    long A = 37193769;
    long B = 590733710;
    long lower = 161;
    long upper = 830151;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 46111;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long K = 13463;
    long N = 7004183269;
    long A = 31700;
    long B = 51503;
    long lower = 23408;
    long upper = 96316177;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long K = 104587;
    long N = 10000000000;
    long A = 8;
    long B = 448727;
    long lower = 21;
    long upper = 582915;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long K = 0;
    long N = 2358585113;
    long A = 3124645;
    long B = 109468985;
    long lower = 0;
    long upper = 7233509;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 106344341;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long K = 0;
    long N = 6972907078;
    long A = 493;
    long B = 592;
    long lower = 0;
    long upper = 92;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long K = 35;
    long N = 10000000000;
    long A = 551404;
    long B = 93378353;
    long lower = 761;
    long upper = 81802;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
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
    long K = 263585;
    long N = 3748580475;
    long A = 784;
    long B = 10000000000;
    long lower = 6;
    long upper = 309921;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 826761;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long K = 81400091;
    long N = 7891627516;
    long A = 834;
    long B = 986207111;
    long lower = 1742;
    long upper = 375523920;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 46928514;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long K = 700345;
    long N = 7638450937;
    long A = 106637;
    long B = 76458819;
    long lower = 58;
    long upper = 2201346;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 22006;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long K = 91671;
    long N = 10000000000;
    long A = 1886754595;
    long B = 10000000000;
    long lower = 8;
    long upper = 55911377;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 45361702;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long K = 673488;
    long N = 6047147195;
    long A = 1145;
    long B = 17868200;
    long lower = 9;
    long upper = 83463;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 238;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long K = 24960757;
    long N = 1525239145;
    long A = 0;
    long B = 7;
    long lower = 4668;
    long upper = 672158330;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long K = 5690;
    long N = 2797706119;
    long A = 5216874;
    long B = 543383007;
    long lower = 0;
    long upper = 16647;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 3204;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long K = 713;
    long N = 2953494382;
    long A = 152;
    long B = 2356222934;
    long lower = 4889001;
    long upper = 51075304;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 36858355;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long K = 9;
    long N = 10000000000;
    long A = 67;
    long B = 568260;
    long lower = 0;
    long upper = 75457551;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 568194;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long K = 8862;
    long N = 10000000000;
    long A = 57;
    long B = 964;
    long lower = 57;
    long upper = 2020;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long K = 0;
    long N = 7434112013;
    long A = 217584;
    long B = 53228528;
    long lower = 3149;
    long upper = 5717705153;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long K = 20559572;
    long N = 2787210882;
    long A = 1074;
    long B = 1885;
    long lower = 48658;
    long upper = 4083252;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long K = 6980;
    long N = 4764566153;
    long A = 0;
    long B = 10000000000;
    long lower = 15766833;
    long upper = 3049648235;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 6367673720;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long K = 607781;
    long N = 10000000000;
    long A = 9;
    long B = 97669;
    long lower = 741;
    long upper = 2680161;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long K = 37;
    long N = 10000000000;
    long A = 308277;
    long B = 221192715;
    long lower = 9247;
    long upper = 64793070;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1442888;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long K = 10000000000;
    long N = 10000000000;
    long A = 9055281;
    long B = 6960003866;
    long lower = 98538;
    long upper = 1123767;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long K = 4751107922;
    long N = 1384396066;
    long A = 0;
    long B = 88515774;
    long lower = 6505;
    long upper = 37610339;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 2404316;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long K = 97346;
    long N = 2268906990;
    long A = 6234;
    long B = 1385024;
    long lower = 3092;
    long upper = 748957800;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 455392;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long K = 59170;
    long N = 6625230692;
    long A = 667;
    long B = 6676;
    long lower = 911;
    long upper = 28170463;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long K = 879596216;
    long N = 5041570717;
    long A = 289;
    long B = 8487699791;
    long lower = 89094;
    long upper = 8646937;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 14407495;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long K = 594;
    long N = 3866472085;
    long A = 4992;
    long B = 857855252;
    long lower = 67;
    long upper = 2240982;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 494210;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long K = 5538268747;
    long N = 9280620023;
    long A = 439;
    long B = 10000000000;
    long lower = 392290;
    long upper = 2117107941;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 2280791111;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long K = 3873832291;
    long N = 9243734047;
    long A = 844008683;
    long B = 8305999347;
    long lower = 65051;
    long upper = 3945850064;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 3185229126;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long K = 3066443058;
    long N = 9216962357;
    long A = 9799;
    long B = 9421599602;
    long lower = 428372;
    long upper = 2255956008;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 2305602998;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long K = 10000000000;
    long N = 9384639833;
    long A = 115848089;
    long B = 9679657372;
    long lower = 2;
    long upper = 7553259798;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 7697464942;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long K = 5395019831;
    long N = 9111685043;
    long A = 8;
    long B = 5814101024;
    long lower = 81053244;
    long upper = 7746793022;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 4891453695;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long K = 1401652739;
    long N = 9099070649;
    long A = 652;
    long B = 9042136466;
    long lower = 245495877;
    long upper = 6363128911;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 6079353676;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long K = 10000000000;
    long N = 9077365987;
    long A = 6059;
    long B = 10000000000;
    long lower = 991;
    long upper = 9015994850;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 9932383924;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long K = 3864996971;
    long N = 9006789191;
    long A = 53;
    long B = 6190180989;
    long lower = 7736;
    long upper = 5199594409;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 3573568961;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long K = 10000000000;
    long N = 9697157339;
    long A = 55;
    long B = 10000000000;
    long lower = 9662197;
    long upper = 3203235427;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 3293308647;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long K = 10000000000;
    long N = 9289332727;
    long A = 8890961;
    long B = 7764983158;
    long lower = 9067637;
    long upper = 2915291194;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 2426540040;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long K = 2405988971;
    long N = 9151501481;
    long A = 99169;
    long B = 6009407091;
    long lower = 247;
    long upper = 6787619871;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 4457071494;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long K = 7437275078;
    long N = 9560190569;
    long A = 540328;
    long B = 10000000000;
    long lower = 2809466;
    long upper = 8458630300;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 8844346650;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long K = 7446651281;
    long N = 9852474461;
    long A = 9358;
    long B = 10000000000;
    long lower = 58569184;
    long upper = 5110534923;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 5127606303;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long K = 3090604069;
    long N = 9557950481;
    long A = 29503;
    long B = 10000000000;
    long lower = 43956;
    long upper = 7376204016;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 7717280307;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long K = 9928575098;
    long N = 9038673443;
    long A = 159360161;
    long B = 3714853899;
    long lower = 6;
    long upper = 6113803058;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 2404953405;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long K = 3572904435;
    long N = 9028027969;
    long A = 467;
    long B = 8186477087;
    long lower = 614844498;
    long upper = 2356204718;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1579038595;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long K = 10000000000;
    long N = 9241576733;
    long A = 2486;
    long B = 2677159910;
    long lower = 99;
    long upper = 4922173734;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1425885788;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long K = 10000000000;
    long N = 9416544017;
    long A = 829;
    long B = 7959823592;
    long lower = 504;
    long upper = 1760271363;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1487960339;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long K = 5515062957;
    long N = 9584283431;
    long A = 70867266;
    long B = 10000000000;
    long lower = 2276;
    long upper = 3248094414;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 3364960793;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long K = 10000000000;
    long N = 9875961727;
    long A = 7;
    long B = 2815210226;
    long lower = 0;
    long upper = 4853625947;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1383559179;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long K = 2699372987;
    long N = 9243625331;
    long A = 698056;
    long B = 10000000000;
    long lower = 2157;
    long upper = 8320113879;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 9000290074;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long K = 9231000888;
    long N = 9400594519;
    long A = 680;
    long B = 10000000000;
    long lower = 0;
    long upper = 7498822204;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 7976965373;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long K = 10000000000;
    long N = 9345438317;
    long A = 561962;
    long B = 10000000000;
    long lower = 7708;
    long upper = 3930603934;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 4205661854;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long K = 6378355110;
    long N = 9144254909;
    long A = 40464;
    long B = 2972407256;
    long lower = 2041;
    long upper = 6485903516;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 2108261236;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long K = 5080559190;
    long N = 9667709567;
    long A = 9158129;
    long B = 10000000000;
    long lower = 85;
    long upper = 3110837967;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 3214814145;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long K = 10000000000;
    long N = 9679470391;
    long A = 8450025456;
    long B = 10000000000;
    long lower = 5071546561;
    long upper = 7461383579;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 382684832;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long K = 10000000000;
    long N = 9797407289;
    long A = 166567856;
    long B = 10000000000;
    long lower = 1881547;
    long upper = 8647732885;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 8677641950;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long K = 10000000000;
    long N = 9206563987;
    long A = 1678681913;
    long B = 8292854073;
    long lower = 807138848;
    long upper = 7586316523;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 4870291276;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long K = 10000000000;
    long N = 9807421177;
    long A = 233075;
    long B = 8436291959;
    long lower = 78461972;
    long upper = 4398821109;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 3716247464;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long K = 10000000000;
    long N = 9439683751;
    long A = 4722000;
    long B = 1786391879;
    long lower = 14;
    long upper = 5581785716;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1053520409;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long K = 9214971511;
    long N = 9875961727;
    long A = 1000000000;
    long B = 9000000000;
    long lower = 2500000000;
    long upper = 7500000000;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 4050238448;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long K = 9812648090;
    long N = 9875961727;
    long A = 2500000000;
    long B = 7500000000;
    long lower = 2500000000;
    long upper = 7500000000;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 2531399040;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long K = 3141592653;
    long N = 6234566789;
    long A = 1;
    long B = 5235252355;
    long lower = 252353255;
    long upper = 2362436161;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1771865935;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long K = 9342439234;
    long N = 8422544562;
    long A = 7934923495;
    long B = 8324943292;
    long lower = 32556456;
    long upper = 934556456;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 41768595;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long K = 2234567891;
    long N = 10000000000;
    long A = 7;
    long B = 10000000000;
    long lower = 1234567890;
    long upper = 9876543219;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 8641975325;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long K = 7154141414;
    long N = 9999999997;
    long A = 728738462;
    long B = 2227971615;
    long lower = 888917;
    long upper = 9918107716;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 1486822325;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long K = 10000000000;
    long N = 10000000000;
    long A = 1000000000;
    long B = 10000000000;
    long lower = 0;
    long upper = 9999999999;
    ModuleSequence* pObj = new ModuleSequence();
    clock_t start = clock();
    long result = pObj->countElements(K, N, A, B, lower, upper);
    clock_t end = clock();
    delete pObj;
    long expected = 9000000001;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=14426&pm=8741
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
 
class ModuleSequence
{
public:
  int64 L,R;
  int64 multiply(int64 a,int64 b,int64 m)
  {
    int64 e=a,r=0;
    while (b>0)
    {
      if (b&1) r=(r+e)%m;
      e=(e+e)%m;
      b/=2;
    }
    return r;
  }
  int64 solve2(int64 a,int64 d,int64 c,int64 m)
  {
    int64 r=0;
    for (int64 i=0;i<c;i++)
    {
      if (a>=L && a<=R) r++;
      a+=d;
      if (a>=m) a-=m;
    }
    return r;
  }
  int64 countElements(int64 K, int64 N, int64 A, int64 B, int64 lower, int64 upper)
  {
    int64 m=N;
    int64 a=multiply(K%m,A%m,m);
    int64 c=B-A+1;
    int64 d=K%m;
    L=lower;
    R=upper;
    int64 H=100000;
    int64 p1=L,p2=R;
    map<int64,int> M;
    M[m]=0;
    for (int i=0;i<H;i++)
    {
      if (p1<=p2)
      {
        if (p1-1>=0) M[p1-1]--;
        M[p2]++;
      }
      else
      {
        M[p2]++;
        if (p1-1>=0) M[p1-1]--;
        M[m-1]++;
      }
      p1-=d;
      p2-=d;
      if (p1<0) p1+=m;
      if (p2<0) p2+=m;
    }
    map<int64,int> M2;
    int s=0;
    for (map<int64,int>::iterator it=M.begin();it!=M.end();++it) s+=it->second;
    for (map<int64,int>::iterator it=M.begin();it!=M.end();++it)
    {
      M2[it->first]=s;
      s-=it->second;
    }
    int64 result=0;
    int64 p=a;
    int64 dp=multiply(d,H,m);
    for (;c>=H;c-=H)
    {
      map<int64,int>::iterator it=M2.lower_bound(p);
      result+=it->second;
      p=(p+dp)%m;
    }
    result+=solve2(p,d,c,m);
    return result;
  }
};

********************************************************************************
*******************************************************************************/