/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2308
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

class SlayingDeer {
public:
    int getTime(int A, int B, int C);
};

int SlayingDeer::getTime(int A, int B, int C) {
    int ret;
    return ret;
}


int test0() {
    int A = 5;
    int B = 4;
    int C = 20;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int A = 5;
    int B = 4;
    int C = 47;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int A = 10;
    int B = 17;
    int C = 1;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A = 133;
    int B = 198;
    int C = 7515;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 7515;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A = 1;
    int B = 1000;
    int C = 15819;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A = 10;
    int B = 15;
    int C = 1;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int A = 1;
    int B = 1;
    int C = 100000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 300010;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A = 976;
    int B = 534;
    int C = 91938;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int A = 786;
    int B = 72;
    int C = 50338;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A = 262;
    int B = 388;
    int C = 15409;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 4635;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int A = 70;
    int B = 644;
    int C = 27135;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A = 634;
    int B = 75;
    int C = 547;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A = 41;
    int B = 60;
    int C = 98096;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 98100;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A = 751;
    int B = 714;
    int C = 7798;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A = 334;
    int B = 244;
    int C = 56991;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 346;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A = 492;
    int B = 733;
    int C = 35017;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 10530;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A = 111;
    int B = 165;
    int C = 26298;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 26325;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A = 381;
    int B = 571;
    int C = 73550;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 220680;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A = 272;
    int B = 406;
    int C = 80151;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 60120;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A = 354;
    int B = 530;
    int C = 74926;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 112410;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A = 440;
    int B = 744;
    int C = 3184;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A = 399;
    int B = 594;
    int C = 9327;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 3150;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A = 530;
    int B = 794;
    int C = 77304;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 115965;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A = 556;
    int B = 324;
    int C = 96689;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 292;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A = 519;
    int B = 782;
    int C = 28941;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A = 213;
    int B = 319;
    int C = 18864;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 56610;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A = 777;
    int B = 979;
    int C = 42613;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 358;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A = 162;
    int B = 239;
    int C = 68496;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 25695;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A = 113;
    int B = 983;
    int C = 83716;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 518;
    int B = 774;
    int C = 11100;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 5580;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A = 43;
    int B = 69;
    int C = 27473;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int A = 606;
    int B = 907;
    int C = 89127;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 66870;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int A = 342;
    int B = 508;
    int C = 69601;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 20925;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A = 196;
    int B = 290;
    int C = 40376;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 15165;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A = 460;
    int B = 534;
    int C = 80762;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 803;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A = 16;
    int B = 22;
    int C = 88458;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 66373;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int A = 384;
    int B = 572;
    int C = 88242;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 33120;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int A = 423;
    int B = 634;
    int C = 44930;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 134820;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int A = 599;
    int B = 219;
    int C = 23839;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int A = 184;
    int B = 273;
    int C = 20420;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 10215;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int A = 577;
    int B = 865;
    int C = 52801;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 158445;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A = 39;
    int B = 55;
    int C = 82504;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 35370;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int A = 288;
    int B = 430;
    int C = 90622;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 67995;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int A = 560;
    int B = 443;
    int C = 58028;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int A = 528;
    int B = 634;
    int C = 52834;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 533;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int A = 991;
    int B = 473;
    int C = 25755;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int A = 193;
    int B = 286;
    int C = 91635;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 39285;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int A = 689;
    int B = 604;
    int C = 55340;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int A = 14;
    int B = 971;
    int C = 55944;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int A = 652;
    int B = 975;
    int C = 53200;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 26640;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int A = 667;
    int B = 1000;
    int C = 100000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 300015;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int A = 2;
    int B = 3;
    int C = 1;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int A = 1;
    int B = 1;
    int C = 15;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int A = 133;
    int B = 198;
    int C = 7515;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 7515;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int A = 30;
    int B = 45;
    int C = 10000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 2;
    int B = 3;
    int C = 100000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 667;
    int B = 1000;
    int C = 100000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 300015;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int A = 1;
    int B = 1;
    int C = 1;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int A = 2;
    int B = 3;
    int C = 10;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 30;
    int B = 45;
    int C = 100000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int A = 30;
    int B = 45;
    int C = 1000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 1;
    int B = 1;
    int C = 100000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 300010;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int A = 30;
    int B = 45;
    int C = 50;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int A = 11;
    int B = 12;
    int C = 2;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int A = 1;
    int B = 1;
    int C = 2;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int A = 6;
    int B = 6;
    int C = 1;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int A = 1;
    int B = 1;
    int C = 10;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int A = 3;
    int B = 4;
    int C = 1;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int A = 30;
    int B = 45;
    int C = 100;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 10;
    int B = 15;
    int C = 1000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 30;
    int B = 45;
    int C = 9000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 2;
    int B = 3;
    int C = 100;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 30;
    int B = 45;
    int C = 30;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 5;
    int B = 4;
    int C = 32;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int A = 16;
    int B = 24;
    int C = 10000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 1000;
    int B = 1;
    int C = 1;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int A = 1;
    int B = 1000;
    int C = 15819;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 2;
    int B = 3;
    int C = 200;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 10;
    int B = 1;
    int C = 100;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int A = 2;
    int B = 3;
    int C = 300;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 4;
    int B = 2;
    int C = 7;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int A = 5;
    int B = 4;
    int C = 47;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int A = 2;
    int B = 3;
    int C = 10000;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 4;
    int B = 4;
    int C = 10;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int A = 3;
    int B = 4;
    int C = 6;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int A = 30;
    int B = 45;
    int C = 1;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
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
    int A = 3;
    int B = 4;
    int C = 16;
    SlayingDeer* pObj = new SlayingDeer();
    clock_t start = clock();
    int result = pObj->getTime(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7462740&rd=4730&pm=2308
********************************************************************************
#include <string>
#include <vector>
 
using namespace std;
 
class SlayingDeer {
  public:
  int getTime(int A, int B, int C) {
    
    int r = 0;
    for (int t = 0; t < 1000000; t++)
      {
        if (r >= C)
    return t;
        r += A;
        if (t % 45 < 30)
    C += B;
      }
    return -1;
 
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/