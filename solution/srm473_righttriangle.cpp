/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10976
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

class RightTriangle {
public:
    long triangleCount(int places, int points, int a, int b, int c);
};

long RightTriangle::triangleCount(int places, int points, int a, int b, int c) {
    long ret;
    return ret;
}


int test0() {
    int places = 9;
    int points = 3;
    int a = 0;
    int b = 3;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int places = 40;
    int points = 3;
    int a = 5;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int places = 4;
    int points = 4;
    int a = 16;
    int b = 24;
    int c = 17;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int places = 1000000;
    int points = 47000;
    int a = 0;
    int b = 2;
    int c = 5;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int places = 100000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 987654;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int places = 1000000;
    int points = 100000;
    int a = 123;
    int b = 456;
    int c = 789;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2016259674;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int places = 100008;
    int points = 100000;
    int a = 123;
    int b = 456;
    int c = 789;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999500008;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int places = 10;
    int points = 9;
    int a = 1664;
    int b = 2346;
    int c = 3346;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 28;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int places = 100020;
    int points = 99999;
    int a = 0;
    int b = 2;
    int c = 21312;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4998750033;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int places = 200000;
    int points = 700;
    int a = 123456;
    int b = 789012;
    int c = 345678;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 6980;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int places = 987654;
    int points = 98765;
    int a = 0;
    int b = 493827;
    int c = 132451;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4877114466;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int places = 200000;
    int points = 100000;
    int a = 800000;
    int b = 100000;
    int c = 77777;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int places = 1000000;
    int points = 100000;
    int a = 500000;
    int b = 500000;
    int c = 123456;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int places = 109998;
    int points = 100000;
    int a = 15714;
    int b = 47142;
    int c = 241444;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4500009998;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int places = 109998;
    int points = 92342;
    int a = 31428;
    int b = 47142;
    int c = 214223;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3448252620;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int places = 131072;
    int points = 100000;
    int a = 16384;
    int b = 65536;
    int c = 45;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3446331072;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int places = 97432;
    int points = 84640;
    int a = 580490;
    int b = 104276;
    int c = 344495;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3097666162;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int places = 115778;
    int points = 74501;
    int a = 370212;
    int b = 113967;
    int c = 950802;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2536765449;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int places = 68579;
    int points = 6175;
    int a = 981761;
    int b = 976111;
    int c = 140183;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int places = 143389;
    int points = 97930;
    int a = 372964;
    int b = 568534;
    int c = 346801;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int places = 96922;
    int points = 38264;
    int a = 245957;
    int b = 807322;
    int c = 818015;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 638860614;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int places = 54290;
    int points = 46095;
    int a = 628387;
    int b = 787168;
    int c = 707493;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1037230779;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int places = 140063;
    int points = 68247;
    int a = 346734;
    int b = 951535;
    int c = 219120;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int places = 586936;
    int points = 79415;
    int a = 164585;
    int b = 274339;
    int c = 155313;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2089197204;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int places = 60935;
    int points = 56060;
    int a = 691959;
    int b = 422247;
    int c = 359266;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int places = 141873;
    int points = 84815;
    int a = 690435;
    int b = 850522;
    int c = 545852;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int places = 633631;
    int points = 9948;
    int a = 683863;
    int b = 116463;
    int c = 244060;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int places = 114440;
    int points = 1628;
    int a = 973128;
    int b = 224770;
    int c = 808092;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 104064;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int places = 47058;
    int points = 27953;
    int a = 899432;
    int b = 384474;
    int c = 408342;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 220002321;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int places = 94903;
    int points = 36493;
    int a = 838091;
    int b = 612688;
    int c = 42522;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int places = 148537;
    int points = 58109;
    int a = 296802;
    int b = 146423;
    int c = 856454;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int places = 57842;
    int points = 56265;
    int a = 197686;
    int b = 969796;
    int c = 844441;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1538905576;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int places = 135130;
    int points = 82440;
    int a = 678194;
    int b = 600187;
    int c = 145531;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2842132488;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int places = 103489;
    int points = 51879;
    int a = 867634;
    int b = 374459;
    int c = 1022;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int places = 91241;
    int points = 60602;
    int a = 425976;
    int b = 411640;
    int c = 257603;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int places = 115415;
    int points = 85712;
    int a = 892818;
    int b = 263260;
    int c = 978073;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int places = 5375;
    int points = 986;
    int a = 693003;
    int b = 994488;
    int c = 191972;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int places = 124939;
    int points = 82501;
    int a = 769582;
    int b = 974304;
    int c = 135493;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int places = 26835;
    int points = 2904;
    int a = 825323;
    int b = 212071;
    int c = 732386;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int places = 16273;
    int points = 6551;
    int a = 670878;
    int b = 113447;
    int c = 235655;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int places = 57844;
    int points = 2783;
    int a = 224597;
    int b = 179507;
    int c = 477657;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int places = 40742;
    int points = 6139;
    int a = 472789;
    int b = 186244;
    int c = 867370;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 7714209;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int places = 137075;
    int points = 59919;
    int a = 241668;
    int b = 438589;
    int c = 208733;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int places = 121731;
    int points = 58696;
    int a = 403773;
    int b = 142774;
    int c = 8810;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int places = 28911;
    int points = 14718;
    int a = 618390;
    int b = 102626;
    int c = 166550;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int places = 119341;
    int points = 49547;
    int a = 167591;
    int b = 683434;
    int c = 153601;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int places = 38049;
    int points = 4258;
    int a = 885995;
    int b = 144776;
    int c = 472190;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int places = 36452;
    int points = 290;
    int a = 552887;
    int b = 34186;
    int c = 894654;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
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
    int places = 791761;
    int points = 89855;
    int a = 390699;
    int b = 374746;
    int c = 68048;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int places = 144401;
    int points = 9373;
    int a = 980441;
    int b = 739989;
    int c = 833666;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int places = 105446;
    int points = 80148;
    int a = 125598;
    int b = 487561;
    int c = 330543;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2835004458;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int places = 601663;
    int points = 80118;
    int a = 219643;
    int b = 490284;
    int c = 605673;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int places = 118434;
    int points = 27623;
    int a = 773881;
    int b = 373622;
    int c = 19585;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 150037272;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int places = 30970;
    int points = 17324;
    int a = 446288;
    int b = 902610;
    int c = 828784;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 80322114;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int places = 100145;
    int points = 77935;
    int a = 921952;
    int b = 428803;
    int c = 579454;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int places = 43406;
    int points = 27595;
    int a = 30356;
    int b = 606678;
    int c = 728994;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 243315074;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int places = 77471;
    int points = 47905;
    int a = 793504;
    int b = 335163;
    int c = 539877;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
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
    int places = 108412;
    int points = 3736;
    int a = 929434;
    int b = 96990;
    int c = 376773;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int places = 15685;
    int points = 13474;
    int a = 239237;
    int b = 355992;
    int c = 642185;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int places = 134063;
    int points = 67906;
    int a = 350197;
    int b = 992899;
    int c = 331460;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int places = 56005;
    int points = 8517;
    int a = 777967;
    int b = 946148;
    int c = 33235;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int places = 57773;
    int points = 35060;
    int a = 813983;
    int b = 809209;
    int c = 863200;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int places = 112995;
    int points = 61118;
    int a = 387329;
    int b = 826606;
    int c = 226700;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int places = 108243;
    int points = 93711;
    int a = 595168;
    int b = 49845;
    int c = 709473;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int places = 129948;
    int points = 46163;
    int a = 814937;
    int b = 131369;
    int c = 905219;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 907756065;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int places = 16441;
    int points = 8855;
    int a = 297853;
    int b = 261551;
    int c = 208073;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int places = 902917;
    int points = 86639;
    int a = 867712;
    int b = 967540;
    int c = 463169;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int places = 116519;
    int points = 60048;
    int a = 383502;
    int b = 939737;
    int c = 827346;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int places = 141196;
    int points = 64003;
    int a = 476527;
    int b = 749571;
    int c = 410188;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1911837872;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int places = 694603;
    int points = 75976;
    int a = 664839;
    int b = 75055;
    int c = 492182;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
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
    int places = 17976;
    int points = 2782;
    int a = 670123;
    int b = 704411;
    int c = 110180;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2449180;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int places = 133550;
    int points = 43750;
    int a = 652632;
    int b = 86544;
    int c = 150564;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 299805044;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int places = 73416;
    int points = 38562;
    int a = 379052;
    int b = 520642;
    int c = 621732;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 726200480;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int places = 36692;
    int points = 24572;
    int a = 44796;
    int b = 781965;
    int c = 783153;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 245208600;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int places = 25670;
    int points = 8931;
    int a = 528233;
    int b = 631578;
    int c = 685173;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 35269550;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int places = 121183;
    int points = 48257;
    int a = 461164;
    int b = 722948;
    int c = 506887;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int places = 123456;
    int points = 54321;
    int a = 123455;
    int b = 123455;
    int c = 213313;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1314302524;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int places = 1;
    int points = 0;
    int a = 3;
    int b = 2;
    int c = 1;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
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
    int places = 1000000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int places = 102346;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 47;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4882602346;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int places = 1;
    int points = 1;
    int a = 21421;
    int b = 435;
    int c = 354;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int places = 2;
    int points = 2;
    int a = 32;
    int b = 42;
    int c = 24;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int places = 3;
    int points = 3;
    int a = 142;
    int b = 14;
    int c = 144;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int places = 8;
    int points = 3;
    int a = 1;
    int b = 3;
    int c = 4;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int places = 557056;
    int points = 21525;
    int a = 16384;
    int b = 24576;
    int c = 4144;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 231458342;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int places = 120000;
    int points = 46332;
    int a = 0;
    int b = 48000;
    int c = 245214;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int places = 120000;
    int points = 66532;
    int a = 0;
    int b = 48000;
    int c = 35432;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 434573960;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int places = 117276;
    int points = 37635;
    int a = 0;
    int b = 337;
    int c = 324;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 707199336;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int places = 117276;
    int points = 97645;
    int a = 0;
    int b = 348;
    int c = 3535;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3808760501;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int places = 131070;
    int points = 100000;
    int a = 999983;
    int b = 998989;
    int c = 99907;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3753924920;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int places = 150000;
    int points = 100000;
    int a = 900000;
    int b = 600000;
    int c = 415641;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2499950000;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int places = 100000;
    int points = 100000;
    int a = 100000;
    int b = 100000;
    int c = 100000;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int places = 100000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int places = 100000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 1;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int places = 1000000;
    int points = 100000;
    int a = 0;
    int b = 500000;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int places = 100000;
    int points = 100000;
    int a = 100000;
    int b = 100000;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int places = 150000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2499950000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int places = 110000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4499910000;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int places = 1000000;
    int points = 100000;
    int a = 1000000;
    int b = 1000000;
    int c = 1000000;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int places = 100002;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999800002;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int places = 10;
    int points = 10;
    int a = 1;
    int b = 1;
    int c = 1;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int places = 100000;
    int points = 60000;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 599980000;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int places = 1000000;
    int points = 10000;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int places = 1000000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 1;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int places = 100006;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 4398;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999600006;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int places = 199998;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 99998;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int places = 1000000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 5;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int places = 100400;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4979900400;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int places = 999998;
    int points = 9999;
    int a = 99919;
    int b = 9992;
    int c = 23215;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 309907;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int places = 100000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 50000;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int places = 1000000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 999999;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int places = 100000;
    int points = 100000;
    int a = 0;
    int b = 100000;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int places = 1000000;
    int points = 100000;
    int a = 12311;
    int b = 131241;
    int c = 421423;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1441971160;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int places = 123456;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3827123456;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int places = 1000000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 100;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int places = 100000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 1000;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int places = 1000000;
    int points = 99999;
    int a = 2192;
    int b = 129817;
    int c = 276756;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1010769676;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int places = 1000000;
    int points = 100000;
    int a = 0;
    int b = 0;
    int c = 4;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int places = 100000;
    int points = 100000;
    int a = 100000;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int places = 99;
    int points = 56;
    int a = 13;
    int b = 69;
    int c = 13;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int places = 8;
    int points = 8;
    int a = 1023;
    int b = 1000000;
    int c = 1024;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int places = 5;
    int points = 5;
    int a = 0;
    int b = 0;
    int c = 1;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int places = 11;
    int points = 11;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int places = 1000000;
    int points = 98000;
    int a = 99991;
    int b = 9993;
    int c = 99998;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1507209240;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int places = 1000000;
    int points = 100000;
    int a = 12324;
    int b = 4234;
    int c = 7658;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1805663886;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int places = 99999;
    int points = 99999;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int places = 199999;
    int points = 99999;
    int a = 123456;
    int b = 789012;
    int c = 345678;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int places = 1000000;
    int points = 100000;
    int a = 0;
    int b = 1000000;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int places = 1000000;
    int points = 99999;
    int a = 0;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int places = 1000000;
    int points = 100000;
    int a = 0;
    int b = 999999;
    int c = 999999;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int places = 100006;
    int points = 100000;
    int a = 0;
    int b = 50003;
    int c = 4398;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int places = 100000;
    int points = 100000;
    int a = 12362;
    int b = 62361;
    int c = 37273;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999900000;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int places = 1000000;
    int points = 100000;
    int a = 999999;
    int b = 999999;
    int c = 999999;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1800963980;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int places = 4;
    int points = 4;
    int a = 1;
    int b = 6;
    int c = 4;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int places = 999999;
    int points = 99999;
    int a = 99999;
    int b = 99999;
    int c = 1233;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int places = 4;
    int points = 3;
    int a = 1;
    int b = 0;
    int c = 0;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int places = 427140;
    int points = 53954;
    int a = 800199;
    int b = 697862;
    int c = 878322;
    RightTriangle* pObj = new RightTriangle();
    clock_t start = clock();
    long result = pObj->triangleCount(places, points, a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 71108736;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22696883&rd=14155&pm=10976
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
 
 
int cnt[1000100];
 
class RightTriangle 
{
  public:
    long long triangleCount(int places, int points, int a, int b, int c)
    {
      if(places % 2) return 0;
      for(int n = 0; n < points; n++) cnt[(1LL*a*n%places*n%places+1LL*b*n%places+c)%places]++;
      fore(i,places) if(cnt[i] > 1)
      {
        cnt[i+1] += cnt[i] - 1;
        cnt[i] = 1;
      }
      cnt[0] += cnt[places];
      fore(i,places) if(cnt[i] > 1)
      {
        cnt[i+1] += cnt[i] - 1;
        cnt[i] = 1;
      }
      int res = 0;
      fore(i,places/2) if(cnt[i] && cnt[i+places/2]) res++;
      return 1LL * res * (points-2);
    }
};
 
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/