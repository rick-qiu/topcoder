/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8711
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

class BinarySum {
public:
    int rearrange(int a, int b, int c);
};

int BinarySum::rearrange(int a, int b, int c) {
    int ret;
    return ret;
}


int test0() {
    int a = 7;
    int b = 6;
    int c = 9;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int a = 1;
    int b = 1;
    int c = 2;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = 1;
    int b = 1;
    int c = 4;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 3;
    int b = 3;
    int c = 9;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a = 334308079;
    int b = 476771809;
    int c = 343926580;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 524285;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 18172390;
    int b = 41867037;
    int c = 999427053;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 262111;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 683530770;
    int b = 137378236;
    int c = 675703779;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 65527;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a = 170016738;
    int b = 902057161;
    int c = 265484073;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 524031;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 500520964;
    int b = 537509546;
    int c = 592180714;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 523263;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = 430086116;
    int b = 887170523;
    int c = 6281675;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 131069;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = 787785777;
    int b = 423463137;
    int c = 310328573;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2095103;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a = 290851885;
    int b = 51934273;
    int c = 891027928;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 8187;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 511949054;
    int b = 442760166;
    int c = 901643062;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 4194271;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 643436451;
    int b = 83195948;
    int c = 955079174;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 65533;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a = 168908749;
    int b = 138562579;
    int c = 723957692;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 516095;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = 45179388;
    int b = 677490732;
    int c = 747468457;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 130943;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 96993927;
    int b = 335745781;
    int c = 899018129;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 258047;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = 396453200;
    int b = 169516336;
    int c = 693155749;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 65503;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 573964371;
    int b = 55031861;
    int c = 511623689;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 65471;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int a = 272264949;
    int b = 344362611;
    int c = 131920742;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 524223;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int a = 577323191;
    int b = 840480064;
    int c = 693103993;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1032191;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a = 594133114;
    int b = 139016882;
    int c = 762288915;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 523263;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a = 552100167;
    int b = 279010029;
    int c = 332440803;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 32763;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a = 118864300;
    int b = 485000945;
    int c = 597934037;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1048319;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a = 707809105;
    int b = 116402606;
    int c = 763510994;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 67582;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int a = 204650420;
    int b = 636233541;
    int c = 457934933;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 81918;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a = 431782887;
    int b = 361323438;
    int c = 750230794;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1114110;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a = 56395884;
    int b = 170314172;
    int c = 506151426;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 34814;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a = 166057945;
    int b = 469458319;
    int c = 482778608;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 8454142;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int a = 348338570;
    int b = 885811186;
    int c = 425280085;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 139262;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a = 275146495;
    int b = 189160767;
    int c = 645183519;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 327678;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int a = 463065908;
    int b = 779453393;
    int c = 238505068;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 163838;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a = 74798816;
    int b = 368808961;
    int c = 93985640;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 24574;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int a = 830661721;
    int b = 666606594;
    int c = 45115527;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 133118;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int a = 759631323;
    int b = 464930002;
    int c = 362013352;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 278526;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int a = 663921340;
    int b = 505544263;
    int c = 379966729;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 278526;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int a = 908828453;
    int b = 67074162;
    int c = 359668590;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1081342;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a = 284597365;
    int b = 450661594;
    int c = 285622582;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 4195326;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int a = 407680818;
    int b = 436137858;
    int c = 242487569;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 4196350;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a = 850183862;
    int b = 791364174;
    int c = 78578812;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 270334;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int a = 463369521;
    int b = 419558259;
    int c = 570912045;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 278526;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a = 163816063;
    int b = 4895939;
    int c = 457717825;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 67582;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int a = 595601367;
    int b = 255897532;
    int c = 206128265;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1049598;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int a = 842474456;
    int b = 122256606;
    int c = 815696142;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 532478;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int a = 775842374;
    int b = 663855624;
    int c = 674910300;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 69629;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int a = 32613170;
    int b = 799426463;
    int c = 777345314;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 540669;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int a = 753954787;
    int b = 148166354;
    int c = 226817449;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 294909;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int a = 433432006;
    int b = 642079787;
    int c = 208602097;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 98301;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int a = 820809451;
    int b = 471294884;
    int c = 599399146;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 196603;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a = 161236053;
    int b = 334227003;
    int c = 856858256;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 532477;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int a = 493105378;
    int b = 259764372;
    int c = 348681398;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 81917;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a = 103853069;
    int b = 558377207;
    int c = 696693002;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 12285;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 493397717;
    int b = 68573601;
    int c = 348623590;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 98287;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int a = 926794269;
    int b = 378544735;
    int c = 332477417;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 196599;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a = 609412229;
    int b = 536362060;
    int c = 549268260;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 139261;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int a = 252673000;
    int b = 47224135;
    int c = 347942665;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 294903;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int a = 805905811;
    int b = 362697427;
    int c = 74437218;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 81911;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 833460691;
    int b = 7701620;
    int c = 24520642;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 139259;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int a = 808082923;
    int b = 402025818;
    int c = 493867209;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 655357;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a = 828560563;
    int b = 428529673;
    int c = 714586624;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 40957;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = 46325286;
    int b = 936557597;
    int c = 114482845;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 393199;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 217340200;
    int b = 511007723;
    int c = 797664162;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1114103;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 92639369;
    int b = 861761590;
    int c = 588890197;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 69627;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int a = 24291185;
    int b = 652719266;
    int c = 898266435;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 98301;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a = 1073741824;
    int b = 1073741824;
    int c = 1073741824;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 1073741824;
    int b = 1073741824;
    int c = 3;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a = 1073741824;
    int b = 1;
    int c = 3;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a = 1073741824;
    int b = 2;
    int c = 6;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a = 1;
    int b = 1;
    int c = 1;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int a = 641466323;
    int b = 542463831;
    int c = 655632;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int a = 199520125;
    int b = 242107297;
    int c = 33029;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int a = 250551832;
    int b = 115435381;
    int c = 130;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int a = 729149929;
    int b = 231110416;
    int c = 16896;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int a = 310328573;
    int b = 313118170;
    int c = 32;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int a = 485000945;
    int b = 597934037;
    int c = 49192;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int a = 32517565;
    int b = 204650420;
    int c = 4096;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int a = 884897929;
    int b = 736457454;
    int c = 4486;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int a = 166057945;
    int b = 469458319;
    int c = 262147;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int a = 275146495;
    int b = 189160767;
    int c = 262145;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int a = 958706524;
    int b = 357678745;
    int c = 1;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int a = 531236552;
    int b = 352277811;
    int c = 128;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int a = 11621717;
    int b = 225784555;
    int c = 4096;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int a = 651619703;
    int b = 850183862;
    int c = 264209;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int a = 799426463;
    int b = 777345314;
    int c = 65538;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int a = 599399146;
    int b = 473927417;
    int c = 137352;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int a = 962818762;
    int b = 701444969;
    int c = 16576;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int a = 408628931;
    int b = 493397717;
    int c = 512;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int a = 595064042;
    int b = 239089639;
    int c = 524288;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int a = 932393998;
    int b = 736574814;
    int c = 2114;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int a = 268435456;
    int b = 268435455;
    int c = 536870912;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 268435456;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int a = 268435456;
    int b = 268435455;
    int c = 536870911;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 536870911;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int a = 1073741824;
    int b = 1073741823;
    int c = 1073741823;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1610612735;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int a = 978211420;
    int b = 794211960;
    int c = 739208423;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 393211;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int a = 987654321;
    int b = 987654321;
    int c = 987654321;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 262142;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int a = 121;
    int b = 211;
    int c = 1073741824;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int a = 23435535;
    int b = 2343434;
    int c = 1073741822;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int a = 135321;
    int b = 315236;
    int c = 31;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2078;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int a = 16383111;
    int b = 16383;
    int c = 32767;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 98301;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int a = 14650420;
    int b = 23455697;
    int c = 20123343;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 49149;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int a = 32517565;
    int b = 204650420;
    int c = 1073741824;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 536870912;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int a = 65536;
    int b = 65536;
    int c = 1;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int a = 16383;
    int b = 131071;
    int c = 67125247;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 163837;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int a = 1073741823;
    int b = 1073741823;
    int c = 1073741823;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int a = 1020414119;
    int b = 691966380;
    int c = 137768724;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 266238;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int a = 1073741824;
    int b = 1073741824;
    int c = 1;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int a = 268419072;
    int b = 16383;
    int c = 268435455;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 268435455;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int a = 1073741823;
    int b = 1;
    int c = 1073741824;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int a = 2;
    int b = 2;
    int c = 1;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int a = 32132154;
    int b = 123564655;
    int c = 981234564;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 327671;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int a = 31;
    int b = 15;
    int c = 112;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int a = 789789789;
    int b = 789789789;
    int c = 678678678;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1064958;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int a = 1073741824;
    int b = 1073741823;
    int c = 1;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int a = 234234;
    int b = 2342343;
    int c = 534534545;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 261631;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int a = 1048575;
    int b = 204650420;
    int c = 1048575;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2097119;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int a = 1073709056;
    int b = 1073709056;
    int c = 1073741822;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 805306367;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int a = 1073709056;
    int b = 32767;
    int c = 1073741823;
    BinarySum* pObj = new BinarySum();
    clock_t start = clock();
    int result = pObj->rearrange(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741823;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=12171&pm=8711
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
typedef long long LL;
const LL INFLL = 1000000000000000000LL;
 
int length(LL a) {
  int res = 0;
  while(a) { a>>=1; ++res; }
  return res;
}
 
int ones(LL a) {
  int res = 0;
  while(a) {
    if(a&1) ++res;
    a>>=1;
  }
  return res;
}
 
LL cache[32][32][32][32][2];
 
LL calc(int n, int a,int b,int c,int cc) {
  if(a<0 || b<0 || c<0) return INFLL;
  LL &res = cache[n][a][b][c][cc];
  if(res!=-1) return res;
  res = INFLL;
  if(n==0) {
    if(a==0 && b==0 && c==0 && cc==0) res = 0;
    else res = INFLL;
  }
  else {
    REP(x,2) REP(y,2) {
      int z = x+y+cc;
      int cc2 = 0;
      if(z>=2) { z-=2; ++cc2; }
      LL v = 2 * calc(n-1, a-x, b-y, c-z, cc2) + z;
      res = min(res, v);
    }
  }
  return res;
}
 
struct BinarySum {
int rearrange(int a, int b, int c) {
  memset(cache,-1,sizeof(cache));
  int n = max(length(a),max(length(b),length(c)));
  LL res = calc(n, ones(a), ones(b), ones(c),0);
  if (res==INFLL) res = -1;
  return int(res);
}
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/