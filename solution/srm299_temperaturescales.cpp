/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6038
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

class TemperatureScales {
public:
    double convert(int f1, int b1, int f2, int b2, int t);
};

double TemperatureScales::convert(int f1, int b1, int f2, int b2, int t) {
    double ret;
    return ret;
}


int test0() {
    int f1 = 0;
    int b1 = 100;
    int f2 = 0;
    int b2 = 100;
    int t = 28;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 28.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int f1 = 0;
    int b1 = 100;
    int f2 = 1;
    int b2 = 101;
    int t = 28;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 29.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int f1 = -1000;
    int b1 = -999;
    int f2 = -1000;
    int b2 = 1000;
    int t = 1000;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 3999000.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int f1 = -10;
    int b1 = 0;
    int f2 = 1;
    int b2 = 2;
    int t = 17;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int f1 = 17;
    int b1 = 98;
    int f2 = -123;
    int b2 = 12;
    int t = 22;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -114.66666666666667;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int f1 = -507;
    int b1 = 239;
    int f2 = -802;
    int b2 = -469;
    int t = -678;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -878.3310991957104;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int f1 = 341;
    int b1 = 537;
    int f2 = -27;
    int b2 = 890;
    int t = -412;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -3549.964285714286;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int f1 = -462;
    int b1 = 977;
    int f2 = -546;
    int b2 = 352;
    int t = 426;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 8.151494093120222;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int f1 = -540;
    int b1 = 368;
    int f2 = -59;
    int b2 = 313;
    int t = -742;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -141.75770925110132;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int f1 = -534;
    int b1 = 282;
    int f2 = -688;
    int b2 = 948;
    int t = -203;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -24.377450980392158;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int f1 = -933;
    int b1 = 506;
    int f2 = 378;
    int b2 = 379;
    int t = -820;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 378.07852675469076;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int f1 = -431;
    int b1 = -291;
    int f2 = 4;
    int b2 = 980;
    int t = 442;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 6090.057142857143;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int f1 = 213;
    int b1 = 561;
    int f2 = -58;
    int b2 = 36;
    int t = -115;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -146.5977011494253;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int f1 = -523;
    int b1 = 698;
    int f2 = 515;
    int b2 = 756;
    int t = -906;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 439.4037674037674;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int f1 = -675;
    int b1 = 474;
    int f2 = -395;
    int b2 = 417;
    int t = -744;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -443.76240208877283;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int f1 = -607;
    int b1 = 416;
    int f2 = -556;
    int b2 = 219;
    int t = 88;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -29.484848484848484;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int f1 = -934;
    int b1 = -411;
    int f2 = -462;
    int b2 = 281;
    int t = 788;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 1984.359464627151;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int f1 = -94;
    int b1 = 412;
    int f2 = -140;
    int b2 = 886;
    int t = 296;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 650.7905138339921;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int f1 = -850;
    int b1 = -258;
    int f2 = 7;
    int b2 = 637;
    int t = -25;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 884.956081081081;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int f1 = -853;
    int b1 = 241;
    int f2 = 671;
    int b2 = 963;
    int t = -224;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 838.8866544789762;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int f1 = 181;
    int b1 = 970;
    int f2 = -395;
    int b2 = 574;
    int t = 680;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 217.8403041825095;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int f1 = -27;
    int b1 = 550;
    int f2 = -443;
    int b2 = -414;
    int t = -52;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -444.25649913344887;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int f1 = -530;
    int b1 = -273;
    int f2 = -356;
    int b2 = 841;
    int t = 131;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 2722.6653696498056;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int f1 = -903;
    int b1 = -138;
    int f2 = -887;
    int b2 = 677;
    int t = -290;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 366.24444444444447;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int f1 = -394;
    int b1 = -340;
    int f2 = 599;
    int b2 = 638;
    int t = -931;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 211.16666666666666;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int f1 = 0;
    int b1 = 324;
    int f2 = 886;
    int b2 = 959;
    int t = 686;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 1040.5617283950617;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int f1 = -395;
    int b1 = 853;
    int f2 = -515;
    int b2 = 774;
    int t = 119;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 15.886217948717949;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int f1 = -896;
    int b1 = -456;
    int f2 = -262;
    int b2 = 877;
    int t = -677;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 304.91136363636366;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int f1 = -218;
    int b1 = 905;
    int f2 = -10;
    int b2 = 380;
    int t = -719;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -183.9893143365984;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int f1 = -783;
    int b1 = 321;
    int f2 = -635;
    int b2 = 866;
    int t = -644;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -446.0153985507246;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int f1 = -10;
    int b1 = 0;
    int f2 = 1;
    int b2 = 2;
    int t = 17;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int f1 = 17;
    int b1 = 98;
    int f2 = -123;
    int b2 = 12;
    int t = 22;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -114.66666666666667;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int f1 = 1;
    int b1 = 2;
    int f2 = 0;
    int b2 = 1;
    int t = 3;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int f1 = 0;
    int b1 = 100;
    int f2 = 0;
    int b2 = 100;
    int t = 28;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 28.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int f1 = -1000;
    int b1 = -999;
    int f2 = -1000;
    int b2 = 1000;
    int t = 1000;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 3999000.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int f1 = -20;
    int b1 = 20;
    int f2 = -7;
    int b2 = 60;
    int t = 0;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 26.5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int f1 = -1000;
    int b1 = 1000;
    int f2 = 10;
    int b2 = 11;
    int t = 20;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 10.51;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int f1 = 50;
    int b1 = 150;
    int f2 = 750;
    int b2 = 950;
    int t = 23;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 696.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int f1 = 3;
    int b1 = 6;
    int f2 = 4;
    int b2 = 24;
    int t = 2;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = -2.6666666666666665;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int f1 = 34;
    int b1 = 98;
    int f2 = 55;
    int b2 = 56;
    int t = 77;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 55.671875;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int f1 = 5;
    int b1 = 7;
    int f2 = 5;
    int b2 = 6;
    int t = 1;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int f1 = -1000;
    int b1 = -937;
    int f2 = -1000;
    int b2 = 666;
    int t = 347;
    TemperatureScales* pObj = new TemperatureScales();
    clock_t start = clock();
    double result = pObj->convert(f1, b1, f2, b2, t);
    clock_t end = clock();
    delete pObj;
    double expected = 34620.666666666664;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20287357&rd=9820&pm=6038
********************************************************************************
class TemperatureScales{
public:
  double convert(int f1,int b1,int f2,int b2,int t){
    return (t-f1)*1.0*(b2-f2)*1.0/(b1-f1) + f2;
  }
};

********************************************************************************
*******************************************************************************/