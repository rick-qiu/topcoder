/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4622
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

class KthElement {
public:
    int find(int A, int B, int K);
};

int KthElement::find(int A, int B, int K) {
    int ret;
    return ret;
}


int test0() {
    int A = 0;
    int B = 12;
    int K = 5;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int A = 1;
    int B = 7;
    int K = 15;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int A = 15;
    int B = 21;
    int K = 500000001;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A = 79;
    int B = 4;
    int K = 700000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 478;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A = 293451;
    int B = 765339;
    int K = 900000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3993300;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A = 590;
    int B = 757;
    int K = 350;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4887;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int A = 838;
    int B = 864;
    int K = 121;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8406;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A = 455;
    int B = 786;
    int K = 569;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3061;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int A = 620;
    int B = 334;
    int K = 381;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4674;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A = 423;
    int B = 900;
    int K = 931;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4284;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int A = 664;
    int B = 464;
    int K = 166;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3120;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A = 648;
    int B = 938;
    int K = 39;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5474;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A = 416;
    int B = 600;
    int K = 201;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2680;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A = 966;
    int B = 264;
    int K = 357;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4128;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A = 180;
    int B = 294;
    int K = 143;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1734;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A = 752920;
    int B = 410368;
    int K = 402885;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3422048;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A = 664744;
    int B = 449680;
    int K = 564517;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7097120;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A = 120442;
    int B = 477795;
    int K = 567387;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2043541;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A = 194696;
    int B = 596652;
    int K = 522681;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3127700;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A = 22373;
    int B = 802738;
    int K = 564087;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1004095;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A = 417314;
    int B = 163056;
    int K = 16981;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3501568;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A = 541320;
    int B = 287376;
    int K = 916876;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7865856;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A = 345247;
    int B = 707575;
    int K = 279441;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4160045;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A = 201228;
    int B = 864468;
    int K = 58057;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2474292;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A = 951206;
    int B = 54554;
    int K = 22575;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12420232;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A = 270400;
    int B = 149477;
    int K = 91376641;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3664677;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A = 591328;
    int B = 117779;
    int K = 57287701;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7805043;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A = 734196;
    int B = 377456;
    int K = 530212964;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10656200;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A = 907240;
    int B = 461884;
    int K = 379233541;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11348764;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int A = 975264;
    int B = 418288;
    int K = 318889801;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10170928;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A = 776299;
    int B = 137570;
    int K = 48995416;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7900560;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int A = 620880;
    int B = 377947;
    int K = 278619309;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8449387;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int A = 378490;
    int B = 292702;
    int K = 114565761;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4077602;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A = 978350;
    int B = 137920;
    int K = 191680381;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9921420;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A = 558773;
    int B = 380172;
    int K = 81450739;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5967902;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A = 0;
    int B = 1;
    int K = 3;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int A = 5;
    int B = 0;
    int K = 6;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int A = 6;
    int B = 8;
    int K = 3;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int A = 4;
    int B = 2;
    int K = 10;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int A = 8;
    int B = 7;
    int K = 5;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int A = 6;
    int B = 8;
    int K = 3;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A = 4;
    int B = 5;
    int K = 3;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int A = 0;
    int B = 2;
    int K = 7;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int A = 8;
    int B = 0;
    int K = 4;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int A = 2;
    int B = 6;
    int K = 7;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int A = 60;
    int B = 66;
    int K = 1;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int A = 34;
    int B = 86;
    int K = 1;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int A = 10;
    int B = 20;
    int K = 10;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int A = 16;
    int B = 54;
    int K = 9;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int A = 32;
    int B = 0;
    int K = 9;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int A = 80;
    int B = 41;
    int K = 5;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 521;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int A = 28;
    int B = 20;
    int K = 4;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int A = 72;
    int B = 50;
    int K = 7;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 266;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int A = 83;
    int B = 68;
    int K = 5;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 483;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int A = 42;
    int B = 48;
    int K = 1;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int A = 590001;
    int B = 718520;
    int K = 982346342;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6028529;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int A = 277297;
    int B = 41473;
    int K = 993946237;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3369037;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int A = 724218;
    int B = 589138;
    int K = 923846374;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6382882;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int A = 969213;
    int B = 282151;
    int K = 993464664;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10943494;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int A = 544831;
    int B = 662659;
    int K = 912236463;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6110969;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int A = 792023;
    int B = 6928;
    int K = 963846465;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5551089;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int A = 530945;
    int B = 809969;
    int K = 991273634;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10897924;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int A = 657211;
    int B = 368091;
    int K = 971234644;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5625779;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int A = 229414;
    int B = 589498;
    int K = 942636464;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1507154;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int A = 732689;
    int B = 183023;
    int K = 934563456;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8242602;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int A = 590001;
    int B = 718520;
    int K = 5;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9568535;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int A = 277297;
    int B = 41473;
    int K = 3;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2814443;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int A = 724218;
    int B = 589138;
    int K = 9;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12900844;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int A = 969213;
    int B = 282151;
    int K = 11;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7066642;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int A = 544831;
    int B = 662659;
    int K = 12;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8835124;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int A = 792023;
    int B = 6928;
    int K = 10;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5551089;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int A = 530945;
    int B = 809969;
    int K = 1;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 809969;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int A = 657211;
    int B = 368091;
    int K = 3;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10883467;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int A = 229414;
    int B = 589498;
    int K = 2;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3571880;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int A = 732689;
    int B = 183023;
    int K = 11;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9707980;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int A = 0;
    int B = 0;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int A = 0;
    int B = 0;
    int K = 1;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int A = 0;
    int B = 0;
    int K = 2;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int A = 0;
    int B = 1;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int A = 0;
    int B = 1;
    int K = 1;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int A = 0;
    int B = 1;
    int K = 2;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
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
    int A = 1;
    int B = 0;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int A = 1;
    int B = 0;
    int K = 1;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int A = 1;
    int B = 0;
    int K = 2;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int A = 1000000;
    int B = 1000000;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8000000;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int A = 1000000;
    int B = 1000000;
    int K = 999999999;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8000000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int A = 999999;
    int B = 1000000;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16999984;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int A = 1000000;
    int B = 999999;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16999999;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int A = 999999;
    int B = 999999;
    int K = 999999999;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13999986;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int A = 999999;
    int B = 799993;
    int K = 999999999;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12799981;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int A = 219469;
    int B = 524287;
    int K = 934754745;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3157915;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int A = 542392;
    int B = 524287;
    int K = 934875475;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8660167;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int A = 99999;
    int B = 48585;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1148574;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int A = 99998;
    int B = 48595;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2048555;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int A = 99997;
    int B = 48605;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1148572;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int A = 99996;
    int B = 48615;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1048575;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int A = 99994;
    int B = 48635;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 948581;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int A = 99968;
    int B = 73343;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1572863;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int A = 99158;
    int B = 85493;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1572863;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int A = 699050;
    int B = 699050;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14680050;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int A = 293451;
    int B = 765339;
    int K = 999999999;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4286751;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int A = 1000000;
    int B = 1000000;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8000000;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int A = 293451;
    int B = 765339;
    int K = 900000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3993300;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int A = 5;
    int B = 12;
    int K = 500000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int A = 856785;
    int B = 789485;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11070905;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int A = 293451;
    int B = 765339;
    int K = 1000000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3993300;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int A = 351431;
    int B = 751534;
    int K = 9787412;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6374430;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int A = 79;
    int B = 4;
    int K = 700000000;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 478;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int A = 1;
    int B = 7;
    int K = 2;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int A = 15;
    int B = 21;
    int K = 1;
    KthElement* pObj = new KthElement();
    clock_t start = clock();
    int result = pObj->find(A, B, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11802052&rd=7228&pm=4622
********************************************************************************
#include <iostream> 
#include <vector> 
 
using namespace std; 
 
 
class KthElement 
        {  
        public:  
  int numOnes(int t) 
  { 
    int tmp,c=0; 
    tmp=t; 
    while (tmp!=0) 
    { 
      if (tmp & 1) c++; 
      tmp>>=1; 
    } 
    return c; 
  } 
        int find(int A, int B, int K)  
            { 
        vector<int> seq; 
        vector<bool> mark(32*1000000); 
        int c=1,tmp,q,period; 
        seq.push_back(0); 
        mark[0]=true; 
        while (1) 
        { 
          tmp=A*numOnes(seq[c-1])+B; 
          if (c==K) return tmp; 
          seq[c]=tmp; 
          if (mark[tmp]) break; 
          mark[seq[c]]=true; 
          c++; 
        } 
        q=c-1; 
        while (seq[q]!=seq[c]) q--; 
        period=c-q; 
        return seq[q+((K-q)%period)]; 
            }  
         
  
        };  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/