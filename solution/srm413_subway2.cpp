/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9840
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

class Subway2 {
public:
    double minTime(int length, int maxAcceleration, int maxVelocity);
};

double Subway2::minTime(int length, int maxAcceleration, int maxVelocity) {
    double ret;
    return ret;
}


int test0() {
    int length = 1;
    int maxAcceleration = 2;
    int maxVelocity = 10;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int length = 1;
    int maxAcceleration = 1;
    int maxVelocity = 1;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int length = 10;
    int maxAcceleration = 1;
    int maxVelocity = 1;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int length = 1;
    int maxAcceleration = 10;
    int maxVelocity = 1;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int length = 1;
    int maxAcceleration = 1;
    int maxVelocity = 1;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int length = 1;
    int maxAcceleration = 1;
    int maxVelocity = 1000;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int length = 1;
    int maxAcceleration = 1000;
    int maxVelocity = 1;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.001;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int length = 1;
    int maxAcceleration = 1000;
    int maxVelocity = 1000;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06324555320336758;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int length = 1000;
    int maxAcceleration = 1;
    int maxVelocity = 1;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1001.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int length = 1000;
    int maxAcceleration = 1;
    int maxVelocity = 1000;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 63.245553203367585;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int length = 1000;
    int maxAcceleration = 1000;
    int maxVelocity = 1;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.001;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int length = 1000;
    int maxAcceleration = 1000;
    int maxVelocity = 1000;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int length = 778;
    int maxAcceleration = 887;
    int maxVelocity = 384;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.458961621570838;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int length = 336;
    int maxAcceleration = 794;
    int maxVelocity = 916;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.301036207838119;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int length = 650;
    int maxAcceleration = 493;
    int maxVelocity = 387;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4645764213196637;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int length = 28;
    int maxAcceleration = 363;
    int maxVelocity = 422;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5554637206007079;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int length = 764;
    int maxAcceleration = 60;
    int maxVelocity = 691;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 7.136759301905405;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int length = 427;
    int maxAcceleration = 541;
    int maxVelocity = 927;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7768276368338702;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int length = 212;
    int maxAcceleration = 737;
    int maxVelocity = 173;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4601689398514521;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int length = 430;
    int maxAcceleration = 568;
    int maxVelocity = 369;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8149595404404748;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int length = 863;
    int maxAcceleration = 531;
    int maxVelocity = 783;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.549694416902874;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int length = 136;
    int maxAcceleration = 68;
    int maxVelocity = 124;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8284271247461903;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int length = 23;
    int maxAcceleration = 803;
    int maxVelocity = 930;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33848243845981674;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int length = 168;
    int maxAcceleration = 70;
    int maxVelocity = 59;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 3.690314769975787;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int length = 12;
    int maxAcceleration = 457;
    int maxVelocity = 394;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32408767757678103;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int length = 374;
    int maxAcceleration = 230;
    int maxVelocity = 43;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 8.884630940343781;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int length = 785;
    int maxAcceleration = 920;
    int maxVelocity = 422;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.318885225633629;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int length = 325;
    int maxAcceleration = 199;
    int maxVelocity = 538;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5559075328702554;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int length = 414;
    int maxAcceleration = 371;
    int maxVelocity = 316;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1618786038418234;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int length = 981;
    int maxAcceleration = 92;
    int maxVelocity = 527;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 6.530863182845241;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int length = 863;
    int maxAcceleration = 874;
    int maxVelocity = 957;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.987374335793859;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int length = 282;
    int maxAcceleration = 997;
    int maxVelocity = 171;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8206373506484366;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int length = 85;
    int maxAcceleration = 926;
    int maxVelocity = 306;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6059460589441044;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int length = 506;
    int maxAcceleration = 337;
    int maxVelocity = 328;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5159766953752625;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int length = 314;
    int maxAcceleration = 730;
    int maxVelocity = 847;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3116965903765547;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int length = 896;
    int maxAcceleration = 125;
    int maxVelocity = 858;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 5.354624169818083;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int length = 815;
    int maxAcceleration = 546;
    int maxVelocity = 583;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4657072487261167;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int length = 365;
    int maxAcceleration = 435;
    int maxVelocity = 368;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8378248375812094;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int length = 88;
    int maxAcceleration = 751;
    int maxVelocity = 44;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0585885486018642;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int length = 179;
    int maxAcceleration = 277;
    int maxVelocity = 809;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6077429972251018;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int length = 404;
    int maxAcceleration = 585;
    int maxVelocity = 789;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6620448737603815;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int length = 400;
    int maxAcceleration = 755;
    int maxVelocity = 652;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.455749050493678;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int length = 677;
    int maxAcceleration = 61;
    int maxVelocity = 933;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 6.662840432049294;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int length = 13;
    int maxAcceleration = 740;
    int maxVelocity = 369;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2650854018430103;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int length = 95;
    int maxAcceleration = 587;
    int maxVelocity = 227;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8052142980435125;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int length = 571;
    int maxAcceleration = 796;
    int maxVelocity = 540;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7357993672064023;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int length = 468;
    int maxAcceleration = 379;
    int maxVelocity = 435;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2224567451738775;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int length = 903;
    int maxAcceleration = 98;
    int maxVelocity = 602;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 6.07100838882165;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int length = 653;
    int maxAcceleration = 493;
    int maxVelocity = 318;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.698489545460344;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int length = 281;
    int maxAcceleration = 302;
    int maxVelocity = 757;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9292107983928977;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int length = 866;
    int maxAcceleration = 442;
    int maxVelocity = 287;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6667428697557822;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int length = 620;
    int maxAcceleration = 445;
    int maxVelocity = 690;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.360727368389914;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int length = 32;
    int maxAcceleration = 730;
    int maxVelocity = 441;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41873913807217095;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int length = 772;
    int maxAcceleration = 98;
    int maxVelocity = 118;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 7.7464545140089935;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int length = 710;
    int maxAcceleration = 676;
    int maxVelocity = 482;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1860467971224433;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int length = 857;
    int maxAcceleration = 568;
    int maxVelocity = 928;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4566666985176546;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int length = 587;
    int maxAcceleration = 354;
    int maxVelocity = 498;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.575416153087093;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int length = 684;
    int maxAcceleration = 307;
    int maxVelocity = 966;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.98530603410502;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int length = 529;
    int maxAcceleration = 625;
    int maxVelocity = 220;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7565454545454546;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int length = 830;
    int maxAcceleration = 733;
    int maxVelocity = 872;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.128222618600952;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int length = 271;
    int maxAcceleration = 20;
    int maxVelocity = 504;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 7.362064927722384;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int length = 716;
    int maxAcceleration = 709;
    int maxVelocity = 369;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 2.460830743709412;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int length = 1;
    int maxAcceleration = 2;
    int maxVelocity = 1;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int length = 200;
    int maxAcceleration = 300;
    int maxVelocity = 400;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 1.632993161855452;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int length = 100;
    int maxAcceleration = 3;
    int maxVelocity = 10;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 13.333333333333332;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int length = 6;
    int maxAcceleration = 1;
    int maxVelocity = 1;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int length = 40;
    int maxAcceleration = 3;
    int maxVelocity = 4;
    Subway2* pObj = new Subway2();
    clock_t start = clock();
    double result = pObj->minTime(length, maxAcceleration, maxVelocity);
    clock_t end = clock();
    delete pObj;
    double expected = 11.333333333333332;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22695599&rd=13504&pm=9840
********************************************************************************
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
 
class Subway2 {
public:
double minTime(int length, int maxAcceleration, int maxVelocity) {
  double len=length,a=maxAcceleration,vmax=maxVelocity;
  if((double)len > (double)vmax*(double)vmax/(double)a){
    len -= (double)vmax*(double)vmax/(double)a;
    return len/vmax + vmax/a*2;
  }else{
    return 2*sqrt(len/a);
  }
}
};
 
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/