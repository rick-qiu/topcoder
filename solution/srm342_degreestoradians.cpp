/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7410
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

class DegreesToRadians {
public:
    double convertToRadians(int degrees, int minutes, int seconds);
};

double DegreesToRadians::convertToRadians(int degrees, int minutes, int seconds) {
    double ret;
    return ret;
}


int test0() {
    int degrees = 0;
    int minutes = 0;
    int seconds = 0;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int degrees = 180;
    int minutes = 0;
    int seconds = 0;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141592653589793;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int degrees = 359;
    int minutes = 59;
    int seconds = 59;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 6.283180459042776;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int degrees = 23;
    int minutes = 30;
    int seconds = 5;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41017661490272295;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int degrees = 198;
    int minutes = 49;
    int seconds = 40;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.470199366645837;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int degrees = 153;
    int minutes = 1;
    int seconds = 23;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6707561509066453;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int degrees = 164;
    int minutes = 55;
    int seconds = 17;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8784212430731038;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int degrees = 175;
    int minutes = 58;
    int seconds = 28;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0713334549233995;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int degrees = 128;
    int minutes = 29;
    int seconds = 58;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.242738392539091;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int degrees = 164;
    int minutes = 27;
    int seconds = 47;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.870421817334796;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int degrees = 231;
    int minutes = 26;
    int seconds = 53;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.039530616783198;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int degrees = 85;
    int minutes = 55;
    int seconds = 14;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4995965895871504;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int degrees = 216;
    int minutes = 52;
    int seconds = 15;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.785110093210536;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int degrees = 278;
    int minutes = 53;
    int seconds = 54;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.867694194991318;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int degrees = 305;
    int minutes = 34;
    int seconds = 15;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.333217139729506;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int degrees = 247;
    int minutes = 50;
    int seconds = 2;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.325517359132903;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int degrees = 148;
    int minutes = 46;
    int seconds = 39;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.596657227885864;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int degrees = 311;
    int minutes = 40;
    int seconds = 14;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.439677375964349;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int degrees = 223;
    int minutes = 46;
    int seconds = 34;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9056299261975553;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int degrees = 278;
    int minutes = 58;
    int seconds = 16;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.868964406835825;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int degrees = 198;
    int minutes = 7;
    int seconds = 47;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.458015998839554;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int degrees = 164;
    int minutes = 50;
    int seconds = 27;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.877015283397886;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int degrees = 161;
    int minutes = 8;
    int seconds = 48;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8125399119471286;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int degrees = 346;
    int minutes = 5;
    int seconds = 12;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 6.040351830585442;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int degrees = 323;
    int minutes = 6;
    int seconds = 53;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.639415764444667;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int degrees = 177;
    int minutes = 16;
    int seconds = 17;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0939694056944034;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int degrees = 17;
    int minutes = 19;
    int seconds = 53;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3024898000546728;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int degrees = 235;
    int minutes = 22;
    int seconds = 15;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.107996004829487;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int degrees = 326;
    int minutes = 58;
    int seconds = 15;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.706717599656292;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int degrees = 216;
    int minutes = 58;
    int seconds = 19;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7868748150097744;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int degrees = 198;
    int minutes = 2;
    int seconds = 3;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.456348239776537;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int degrees = 21;
    int minutes = 51;
    int seconds = 20;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.38145140429698293;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int degrees = 199;
    int minutes = 35;
    int seconds = 50;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.483628705612571;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int degrees = 227;
    int minutes = 45;
    int seconds = 50;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9752297782576402;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int degrees = 146;
    int minutes = 25;
    int seconds = 36;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5556274460535633;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int degrees = 289;
    int minutes = 13;
    int seconds = 28;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.047918832806977;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int degrees = 59;
    int minutes = 28;
    int seconds = 24;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 1.038005483802761;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int degrees = 223;
    int minutes = 4;
    int seconds = 14;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.893315658697373;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int degrees = 318;
    int minutes = 52;
    int seconds = 25;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.565394411612863;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int degrees = 155;
    int minutes = 29;
    int seconds = 22;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7138027576523607;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int degrees = 352;
    int minutes = 53;
    int seconds = 47;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 6.159203904509445;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int degrees = 238;
    int minutes = 51;
    int seconds = 25;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.168840121808733;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int degrees = 6;
    int minutes = 27;
    int seconds = 59;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11285977682548888;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int degrees = 334;
    int minutes = 4;
    int seconds = 32;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.830718394873679;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int degrees = 12;
    int minutes = 0;
    int seconds = 19;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20953162483873033;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int degrees = 95;
    int minutes = 30;
    int seconds = 44;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6670027536742729;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int degrees = 304;
    int minutes = 27;
    int seconds = 16;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.313732477885714;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int degrees = 241;
    int minutes = 6;
    int seconds = 51;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.208236081535694;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int degrees = 160;
    int minutes = 6;
    int seconds = 35;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7944418172313097;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int degrees = 171;
    int minutes = 34;
    int seconds = 3;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9944177644153713;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int degrees = 246;
    int minutes = 49;
    int seconds = 19;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.307855596730081;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int degrees = 217;
    int minutes = 29;
    int seconds = 14;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.795868108794356;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int degrees = 291;
    int minutes = 0;
    int seconds = 59;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.079194163375354;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int degrees = 170;
    int minutes = 22;
    int seconds = 43;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9736677388638832;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int degrees = 46;
    int minutes = 59;
    int seconds = 12;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8200720378704022;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int degrees = 87;
    int minutes = 36;
    int seconds = 16;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 1.52898599493601;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int degrees = 276;
    int minutes = 56;
    int seconds = 45;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.833616641346129;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int degrees = 182;
    int minutes = 56;
    int seconds = 54;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1930507777027586;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int degrees = 103;
    int minutes = 17;
    int seconds = 2;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8026439253750988;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int degrees = 294;
    int minutes = 41;
    int seconds = 38;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.143378646617445;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int degrees = 201;
    int minutes = 23;
    int seconds = 33;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5149622138226797;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int degrees = 342;
    int minutes = 35;
    int seconds = 0;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.979207129123907;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int degrees = 238;
    int minutes = 16;
    int seconds = 34;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.158702667736733;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int degrees = 66;
    int minutes = 29;
    int seconds = 43;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1605615342504403;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int degrees = 170;
    int minutes = 37;
    int seconds = 20;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.977919554847214;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int degrees = 301;
    int minutes = 28;
    int seconds = 31;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.261736210586715;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int degrees = 306;
    int minutes = 20;
    int seconds = 13;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.346588301054507;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int degrees = 110;
    int minutes = 7;
    int seconds = 40;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 1.922092320126866;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int degrees = 324;
    int minutes = 10;
    int seconds = 55;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.658042306072896;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int degrees = 183;
    int minutes = 13;
    int seconds = 59;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.198020117934132;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int degrees = 4;
    int minutes = 58;
    int seconds = 45;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08690285233888433;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int degrees = 263;
    int minutes = 56;
    int seconds = 28;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.606641420261078;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int degrees = 263;
    int minutes = 22;
    int seconds = 14;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.596683347251087;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int degrees = 56;
    int minutes = 38;
    int seconds = 57;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9887144768443543;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int degrees = 315;
    int minutes = 53;
    int seconds = 0;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.513204218841421;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int degrees = 93;
    int minutes = 54;
    int seconds = 32;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6390193080006306;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int degrees = 178;
    int minutes = 21;
    int seconds = 56;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1130662165933076;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int degrees = 228;
    int minutes = 43;
    int seconds = 33;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.992018876034463;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int degrees = 228;
    int minutes = 5;
    int seconds = 56;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9810766312518213;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int degrees = 0;
    int minutes = 11;
    int seconds = 42;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0034033920413889425;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int degrees = 266;
    int minutes = 27;
    int seconds = 16;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.650507362127868;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int degrees = 201;
    int minutes = 11;
    int seconds = 55;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.511578214328536;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int degrees = 337;
    int minutes = 20;
    int seconds = 3;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.887591887804638;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int degrees = 47;
    int minutes = 3;
    int seconds = 53;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.82143436431432;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int degrees = 212;
    int minutes = 1;
    int seconds = 58;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7006700943716884;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int degrees = 289;
    int minutes = 22;
    int seconds = 0;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.050401078854258;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int degrees = 233;
    int minutes = 10;
    int seconds = 32;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0696811796114;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int degrees = 90;
    int minutes = 42;
    int seconds = 48;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5832463421257894;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int degrees = 205;
    int minutes = 20;
    int seconds = 3;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5837572751721236;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int degrees = 143;
    int minutes = 52;
    int seconds = 10;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5109954985706193;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int degrees = 308;
    int minutes = 12;
    int seconds = 8;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.379143539741012;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int degrees = 257;
    int minutes = 26;
    int seconds = 32;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.49321441142869;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int degrees = 65;
    int minutes = 31;
    int seconds = 8;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1435203333594401;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int degrees = 193;
    int minutes = 21;
    int seconds = 46;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.374817123024347;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int degrees = 11;
    int minutes = 4;
    int seconds = 44;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1933630885737273;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int degrees = 114;
    int minutes = 14;
    int seconds = 41;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9939465558041107;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int degrees = 227;
    int minutes = 12;
    int seconds = 3;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.96540260494155;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int degrees = 266;
    int minutes = 49;
    int seconds = 25;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.6569505359498145;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int degrees = 340;
    int minutes = 28;
    int seconds = 20;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 5.942361289359582;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int degrees = 253;
    int minutes = 7;
    int seconds = 14;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 4.41778709892167;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int degrees = 359;
    int minutes = 59;
    int seconds = 59;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 6.283180459042776;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int degrees = 23;
    int minutes = 30;
    int seconds = 5;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41017661490272295;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int degrees = 45;
    int minutes = 35;
    int seconds = 27;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7957101503946482;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int degrees = 1;
    int minutes = 1;
    int seconds = 1;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 0.017749028865420114;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int degrees = 180;
    int minutes = 0;
    int seconds = 0;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141592653589793;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int degrees = 351;
    int minutes = 29;
    int seconds = 37;
    DegreesToRadians* pObj = new DegreesToRadians();
    clock_t start = clock();
    double result = pObj->convertToRadians(degrees, minutes, seconds);
    clock_t end = clock();
    delete pObj;
    double expected = 6.134720813613414;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22652321&rd=10666&pm=7410
********************************************************************************
double PI = 3.14159265358979323; 
 
class DegreesToRadians{ 
public: 
  double convertToRadians(int d,int m,int s){ 
    return (d+m/60.0+s/3600.0)*PI/180.0; 
  } 
};

********************************************************************************
*******************************************************************************/