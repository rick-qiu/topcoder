/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6104
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

class Taxi {
public:
    double maxDis(int maxX, int maxY, int taxiDis);
};

double Taxi::maxDis(int maxX, int maxY, int taxiDis) {
    double ret;
    return ret;
}


int test0() {
    int maxX = 10;
    int maxY = 3;
    int taxiDis = 3;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int maxX = 10;
    int maxY = 3;
    int taxiDis = 24;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int maxX = 7;
    int maxY = 10;
    int taxiDis = 13;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 10.44030650891055;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int maxX = 5;
    int maxY = 5;
    int taxiDis = 5;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int maxX = 4;
    int maxY = 4;
    int taxiDis = 7;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int maxX = 19;
    int maxY = 13;
    int taxiDis = 0;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int maxX = 1;
    int maxY = 20;
    int taxiDis = 21;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 20.024984394500787;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int maxX = 48;
    int maxY = 1;
    int taxiDis = 7;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int maxX = 12;
    int maxY = 12;
    int taxiDis = 17;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int maxX = 4;
    int maxY = 12;
    int taxiDis = 17;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int maxX = 4;
    int maxY = 12;
    int taxiDis = 16;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 12.649110640673518;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int maxX = 976421;
    int maxY = 976421;
    int taxiDis = 1000000;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 976705.6560100387;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int maxX = 1000000;
    int maxY = 22;
    int taxiDis = 24;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 24.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int maxX = 909;
    int maxY = 3292;
    int taxiDis = 4044;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 3376.798483771278;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int maxX = 7968;
    int maxY = 9804;
    int taxiDis = 5140;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 5140.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int maxX = 276;
    int maxY = 6051;
    int taxiDis = 3892;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 3892.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int maxX = 3691;
    int maxY = 1295;
    int taxiDis = 1245;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 1245.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int maxX = 5679;
    int maxY = 7879;
    int taxiDis = 4387;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 4387.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int maxX = 5256;
    int maxY = 7198;
    int taxiDis = 4869;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 4869.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int maxX = 5557;
    int maxY = 7452;
    int taxiDis = 2405;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 2405.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int maxX = 2982;
    int maxY = 4845;
    int taxiDis = 3820;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 3820.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int maxX = 8648;
    int maxY = 4609;
    int taxiDis = 6189;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 6189.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int maxX = 5042;
    int maxY = 1084;
    int taxiDis = 336;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 336.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int maxX = 1003;
    int maxY = 3822;
    int taxiDis = 2088;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 2088.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int maxX = 9055;
    int maxY = 2401;
    int taxiDis = 3352;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 3352.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int maxX = 9777;
    int maxY = 9637;
    int taxiDis = 12790;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 10230.733013816753;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int maxX = 2752;
    int maxY = 2185;
    int taxiDis = 3273;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 2800.8828965167395;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int maxX = 7268;
    int maxY = 255;
    int taxiDis = 3577;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 3577.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int maxX = 976421;
    int maxY = 976421;
    int taxiDis = 1000000;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 976705.6560100387;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int maxX = 999990;
    int maxY = 10;
    int taxiDis = 27;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 27.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int maxX = 10;
    int maxY = 200;
    int taxiDis = 50;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int maxX = 4;
    int maxY = 4;
    int taxiDis = 8;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 5.656854249492381;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int maxX = 1000000;
    int maxY = 1000000;
    int taxiDis = 999999;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 999999.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int maxX = 999990;
    int maxY = 10;
    int taxiDis = 999990;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 999990.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int maxX = 10;
    int maxY = 3;
    int taxiDis = 24;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int maxX = 10;
    int maxY = 3;
    int taxiDis = 7;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int maxX = 7;
    int maxY = 10;
    int taxiDis = 13;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 10.44030650891055;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int maxX = 976421;
    int maxY = 976422;
    int taxiDis = 1000000;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 976706.6315777733;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int maxX = 3;
    int maxY = 10;
    int taxiDis = 4;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int maxX = 10;
    int maxY = 10;
    int taxiDis = 1;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int maxX = 10;
    int maxY = 3;
    int taxiDis = 2;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int maxX = 6;
    int maxY = 1;
    int taxiDis = 5;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int maxX = 10;
    int maxY = 9;
    int taxiDis = 6;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int maxX = 3;
    int maxY = 4;
    int taxiDis = 7;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int maxX = 10;
    int maxY = 3;
    int taxiDis = 3;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int maxX = 4;
    int maxY = 4;
    int taxiDis = 3;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int maxX = 7;
    int maxY = 2;
    int taxiDis = 5;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int maxX = 490000;
    int maxY = 490000;
    int taxiDis = 1000000;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int maxX = 100;
    int maxY = 100;
    int taxiDis = 5;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int maxX = 499999;
    int maxY = 499999;
    int taxiDis = 999998;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 707105.3669729851;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int maxX = 1;
    int maxY = 7;
    int taxiDis = 5;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int maxX = 100;
    int maxY = 150;
    int taxiDis = 4;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int maxX = 5;
    int maxY = 10;
    int taxiDis = 13;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 10.44030650891055;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int maxX = 2;
    int maxY = 2;
    int taxiDis = 4;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8284271247461903;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int maxX = 1000000;
    int maxY = 1000000;
    int taxiDis = 888888;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 888888.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int maxX = 1;
    int maxY = 1;
    int taxiDis = 2;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int maxX = 3;
    int maxY = 3;
    int taxiDis = 6;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 4.242640687119285;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int maxX = 10;
    int maxY = 7;
    int taxiDis = 13;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 10.44030650891055;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int maxX = 4;
    int maxY = 2;
    int taxiDis = 3;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int maxX = 5;
    int maxY = 5;
    int taxiDis = 10;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0710678118654755;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int maxX = 1;
    int maxY = 6;
    int taxiDis = 5;
    Taxi* pObj = new Taxi();
    clock_t start = clock();
    double result = pObj->maxDis(maxX, maxY, taxiDis);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13396848&rd=9821&pm=6104
********************************************************************************
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<sstream>
#include<cmath>
#include<algorithm>
using namespace std;
 
//double PI =  3.14159265358979323846;
 
 
class Taxi {
  public:
  double maxDis(int maxX, int maxY, int taxiDis) {
    double ret=-1.0;
    for (int i=0;i<=maxX;i++) {
      int j = taxiDis-i;
      if (j>=0&&j<=maxY) {
        double val = sqrt(1.0*i*i+1.0*j*j);
        if (val>ret) ret=val;
      }
    }
    return ret;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/