/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10699
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

class SilverDistance {
public:
    int minSteps(int sx, int sy, int gx, int gy);
};

int SilverDistance::minSteps(int sx, int sy, int gx, int gy) {
    int ret;
    return ret;
}


int test0() {
    int sx = 1;
    int sy = 0;
    int gx = 1;
    int gy = 9;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int sx = 0;
    int sy = 0;
    int gx = -4;
    int gy = 3;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int sx = 0;
    int sy = 0;
    int gx = 5;
    int gy = 8;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int sx = -487617;
    int sy = 826524;
    int gx = 892309;
    int gy = -918045;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1744571;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int sx = -27857;
    int sy = 31475;
    int gx = -27857;
    int gy = 31475;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int sx = 765193;
    int sy = 377201;
    int gx = 765191;
    int gy = 377199;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
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
    int sx = -784373;
    int sy = 390934;
    int gx = -784375;
    int gy = 390933;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int sx = -330706;
    int sy = 475232;
    int gx = -330708;
    int gy = 475232;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int sx = 349530;
    int sy = -113416;
    int gx = 349528;
    int gy = -113415;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int sx = -583109;
    int sy = -842787;
    int gx = -583111;
    int gy = -842785;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int sx = 699638;
    int sy = -732089;
    int gx = 699637;
    int gy = -732091;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int sx = 771899;
    int sy = -921638;
    int gx = 771898;
    int gy = -921639;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
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
    int sx = 753056;
    int sy = -453698;
    int gx = 753055;
    int gy = -453698;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int sx = 117356;
    int sy = -862744;
    int gx = 117355;
    int gy = -862743;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int sx = 931180;
    int sy = 957388;
    int gx = 931179;
    int gy = 957390;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int sx = 225981;
    int sy = 669490;
    int gx = 225981;
    int gy = 669488;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int sx = -62771;
    int sy = -967730;
    int gx = -62771;
    int gy = -967731;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int sx = 206592;
    int sy = -293811;
    int gx = 206592;
    int gy = -293811;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int sx = 637628;
    int sy = -432514;
    int gx = 637628;
    int gy = -432513;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int sx = 487223;
    int sy = -224313;
    int gx = 487223;
    int gy = -224311;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int sx = -873913;
    int sy = 949777;
    int gx = -873912;
    int gy = 949775;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int sx = -484806;
    int sy = -458089;
    int gx = -484805;
    int gy = -458090;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int sx = 40211;
    int sy = 604450;
    int gx = 40212;
    int gy = 604450;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int sx = -572756;
    int sy = -281687;
    int gx = -572755;
    int gy = -281686;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int sx = -731157;
    int sy = 998155;
    int gx = -731156;
    int gy = 998157;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int sx = -63277;
    int sy = 642461;
    int gx = -63275;
    int gy = 642459;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int sx = 914348;
    int sy = 266372;
    int gx = 914350;
    int gy = 266371;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int sx = 350865;
    int sy = -249640;
    int gx = 350867;
    int gy = -249640;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int sx = -420991;
    int sy = -440652;
    int gx = -420989;
    int gy = -440651;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int sx = -500280;
    int sy = -30094;
    int gx = -500278;
    int gy = -30092;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int sx = -732513;
    int sy = -542725;
    int gx = 58853;
    int gy = -776738;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 791367;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int sx = -571559;
    int sy = 252635;
    int gx = -156169;
    int gy = -159253;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 415390;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int sx = 674079;
    int sy = 934097;
    int gx = 686838;
    int gy = -858508;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1792605;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int sx = -330110;
    int sy = 230031;
    int gx = 964597;
    int gy = -370703;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1294708;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int sx = -46250;
    int sy = -598134;
    int gx = -469307;
    int gy = 35292;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 633426;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int sx = 653128;
    int sy = -124996;
    int gx = 337064;
    int gy = -873188;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 748192;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int sx = 565990;
    int sy = -966563;
    int gx = 656244;
    int gy = -570391;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 396172;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int sx = 653164;
    int sy = 287035;
    int gx = 218540;
    int gy = 91958;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 434625;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int sx = 98554;
    int sy = -419937;
    int gx = 221228;
    int gy = 622379;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1042316;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int sx = -574481;
    int sy = 579426;
    int gx = 442096;
    int gy = 426106;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1016578;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int sx = -20853;
    int sy = 170601;
    int gx = 638444;
    int gy = -783689;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 954292;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int sx = 636591;
    int sy = 227526;
    int gx = -113385;
    int gy = 160718;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 749976;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int sx = 839931;
    int sy = -701149;
    int gx = 81406;
    int gy = -904628;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 758525;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int sx = 758207;
    int sy = 205845;
    int gx = 400672;
    int gy = 486463;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 357536;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int sx = 885971;
    int sy = -715746;
    int gx = -117854;
    int gy = 833476;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1549222;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int sx = 170184;
    int sy = 784167;
    int gx = 999772;
    int gy = -17176;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 829589;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int sx = -539857;
    int sy = 748436;
    int gx = -896740;
    int gy = 12797;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 735639;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int sx = 168858;
    int sy = 569210;
    int gx = 997844;
    int gy = 997385;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 828987;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int sx = 670859;
    int sy = -973579;
    int gx = 323107;
    int gy = -590101;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 383478;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int sx = -1000000;
    int sy = -1000000;
    int gx = 1000000;
    int gy = 1000000;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int sx = -1000000;
    int sy = -1000000;
    int gx = 1000000;
    int gy = 999999;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000001;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int sx = -1000000;
    int sy = -1000000;
    int gx = 999999;
    int gy = 1000000;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int sx = 1000000;
    int sy = 1000000;
    int gx = -1000000;
    int gy = -1000000;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int sx = 1000000;
    int sy = 1000000;
    int gx = -1000000;
    int gy = -999999;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000001;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int sx = 1000000;
    int sy = 1000000;
    int gx = -999999;
    int gy = -1000000;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000002;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int sx = 1000000;
    int sy = -1000000;
    int gx = -1000000;
    int gy = 1000000;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int sx = -1000000;
    int sy = 1000000;
    int gx = 1000000;
    int gy = -999999;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000001;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int sx = -1000000;
    int sy = 1000000;
    int gx = 999999;
    int gy = -1000000;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000002;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int sx = 1000000;
    int sy = -1000000;
    int gx = -1000000;
    int gy = 1000000;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int sx = 1000000;
    int sy = -1000000;
    int gx = -999999;
    int gy = 1000000;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int sx = 1000000;
    int sy = -1000000;
    int gx = -1000000;
    int gy = 999999;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000001;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int sx = 0;
    int sy = 0;
    int gx = 1;
    int gy = -4;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int sx = 0;
    int sy = 1;
    int gx = 0;
    int gy = -1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int sx = 0;
    int sy = 0;
    int gx = 8;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int sx = 1;
    int sy = 10;
    int gx = 11;
    int gy = 10;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int sx = 0;
    int sy = 0;
    int gx = 1;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int sx = 800000;
    int sy = 800000;
    int gx = 500000;
    int gy = 600000;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 300000;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int sx = 999999;
    int sy = 999999;
    int gx = -999999;
    int gy = -999999;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1999998;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int sx = 0;
    int sy = 0;
    int gx = 0;
    int gy = -1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int sx = 0;
    int sy = 0;
    int gx = -3;
    int gy = -1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int sx = 0;
    int sy = 0;
    int gx = 1;
    int gy = -1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int sx = -1000000;
    int sy = -1000000;
    int gx = 1000000;
    int gy = 999001;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000001;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int sx = 5;
    int sy = 10;
    int gx = 5;
    int gy = 9;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int sx = -48761;
    int sy = 82654;
    int gx = 892309;
    int gy = -918045;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1000701;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int sx = 0;
    int sy = 0;
    int gx = 10;
    int gy = -10;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int sx = 1000000;
    int sy = 1000000;
    int gx = -999999;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int sx = -999999;
    int sy = 999999;
    int gx = 999999;
    int gy = 999998;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int sx = 1;
    int sy = 1;
    int gx = -9;
    int gy = 1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int sx = 0;
    int sy = 0;
    int gx = 3;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int sx = -900000;
    int sy = -500000;
    int gx = 1000000;
    int gy = 700000;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1900000;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int sx = -999999;
    int sy = -999997;
    int gx = 999999;
    int gy = 999104;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int sx = 0;
    int sy = 0;
    int gx = 10001;
    int gy = -3;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 10001;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int sx = 0;
    int sy = 0;
    int gx = 300;
    int gy = -1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int sx = -478617;
    int sy = 826582;
    int gx = 896365;
    int gy = -914745;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1741329;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int sx = 0;
    int sy = 0;
    int gx = 2;
    int gy = 1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int sx = 0;
    int sy = 0;
    int gx = 0;
    int gy = -2;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int sx = 4;
    int sy = 1;
    int gx = 1;
    int gy = 4;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int sx = 0;
    int sy = 0;
    int gx = 3;
    int gy = 3;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int sx = -1000000;
    int sy = -1000000;
    int gx = 999999;
    int gy = 666666;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int sx = 0;
    int sy = 1;
    int gx = 3;
    int gy = 1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int sx = 987654;
    int sy = 989898;
    int gx = -998877;
    int gy = -897976;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1986532;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int sx = 0;
    int sy = 0;
    int gx = 1;
    int gy = -3;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int sx = -643039;
    int sy = 155704;
    int gx = -426405;
    int gy = 83934;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 216634;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int sx = 10;
    int sy = 2;
    int gx = 4;
    int gy = 2;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int sx = 0;
    int sy = 0;
    int gx = 1;
    int gy = -2;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int sx = -99999;
    int sy = 123;
    int gx = -999991;
    int gy = 99998;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 899993;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int sx = 0;
    int sy = 0;
    int gx = 2;
    int gy = -1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int sx = 0;
    int sy = 0;
    int gx = 5;
    int gy = -8;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int sx = -483649;
    int sy = 640827;
    int gx = 201850;
    int gy = -510648;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1151475;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int sx = 0;
    int sy = 0;
    int gx = 4;
    int gy = -3;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int sx = 10;
    int sy = 10;
    int gx = 20;
    int gy = 30;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int sx = 0;
    int sy = 1;
    int gx = 3;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int sx = 2;
    int sy = 0;
    int gx = 0;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
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
    int sx = 100;
    int sy = 1;
    int gx = 0;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int sx = 0;
    int sy = 2;
    int gx = 0;
    int gy = -3;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int sx = 999999;
    int sy = 0;
    int gx = 0;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int sx = 0;
    int sy = 0;
    int gx = 0;
    int gy = -5;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int sx = 0;
    int sy = 1;
    int gx = 0;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int sx = 12345;
    int sy = -12345;
    int gx = 12245;
    int gy = -12444;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int sx = 0;
    int sy = 0;
    int gx = -30;
    int gy = -27;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int sx = -1000000;
    int sy = -1000000;
    int gx = 999991;
    int gy = -892344;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1999992;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int sx = -16563;
    int sy = -15432;
    int gx = 875581;
    int gy = 509110;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 892144;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int sx = 100;
    int sy = 101;
    int gx = -100000;
    int gy = -99999;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 100100;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int sx = -487617;
    int sy = 826524;
    int gx = 892309;
    int gy = -918049;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1744575;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int sx = 0;
    int sy = 0;
    int gx = 19233;
    int gy = 9382;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 19234;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int sx = -1000000;
    int sy = 1000000;
    int gx = 999997;
    int gy = -1000000;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000002;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int sx = 0;
    int sy = 0;
    int gx = -1;
    int gy = -2;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int sx = 960864;
    int sy = 17412;
    int gx = -825303;
    int gy = -522786;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1786168;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int sx = 0;
    int sy = 0;
    int gx = 4;
    int gy = 2;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int sx = -1000000;
    int sy = -1000000;
    int gx = 999999;
    int gy = 999998;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int sx = 0;
    int sy = 0;
    int gx = 8;
    int gy = -5;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int sx = 0;
    int sy = 0;
    int gx = 10;
    int gy = -20;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int sx = 23422;
    int sy = 23423;
    int gx = -23423;
    int gy = -23492;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 46915;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int sx = 0;
    int sy = 0;
    int gx = 5;
    int gy = 2;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int sx = 0;
    int sy = 0;
    int gx = 2;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int sx = 0;
    int sy = 0;
    int gx = -1;
    int gy = -4;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int sx = 2;
    int sy = 3;
    int gx = 0;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int sx = 0;
    int sy = 0;
    int gx = -2;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int sx = 28703;
    int sy = 31322;
    int gx = 23811;
    int gy = 30333;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 4893;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int sx = 100;
    int sy = 0;
    int gx = 0;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int sx = 368690;
    int sy = -479941;
    int gx = -102237;
    int gy = 513926;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 993867;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int sx = -999998;
    int sy = 1;
    int gx = 999998;
    int gy = -1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1999996;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int sx = 5;
    int sy = 5;
    int gx = 8;
    int gy = 4;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int sx = 0;
    int sy = 0;
    int gx = 7;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int sx = 0;
    int sy = 0;
    int gx = 30;
    int gy = -31;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int sx = -99999;
    int sy = -99998;
    int gx = 99999;
    int gy = 99999;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 199999;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int sx = 0;
    int sy = 0;
    int gx = 3;
    int gy = 1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int sx = 0;
    int sy = 0;
    int gx = 1;
    int gy = 1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int sx = 1;
    int sy = 1;
    int gx = 0;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int sx = 0;
    int sy = 2;
    int gx = 0;
    int gy = 0;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int sx = 1;
    int sy = 1;
    int gx = 5;
    int gy = 3;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int sx = 0;
    int sy = -3;
    int gx = 0;
    int gy = -5;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int sx = 0;
    int sy = 0;
    int gx = -4;
    int gy = -1;
    SilverDistance* pObj = new SilverDistance();
    clock_t start = clock();
    int result = pObj->minSteps(sx, sy, gx, gy);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22696883&rd=13909&pm=10699
********************************************************************************
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<deque>
#include<functional>
#include<iomanip>
#include<iostream>
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<string>
#include<utility>
#include<vector>
 
using namespace std;
 
#define fore(i, a) for(int i = 0; i < (a); i++)
#define fort(i, a) for(typeof(a.begin()) i = a.begin(); i != a.end(); i++)
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define inf (1<<29)
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
 
class SilverDistance 
{
  public:
    int minSteps(int sx, int sy, int gx, int gy)
    {
      int S = sx + sy, G = gx + gy;
      if((S&1) == (G&1)) return max(abs(sx-gx), abs(sy-gy));
      return 1 + minSteps(sx,sy+1,gx,gy);
    }
};
 
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/