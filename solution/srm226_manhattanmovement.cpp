/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3498
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

class ManhattanMovement {
public:
    double getDistance(int a, int b, int x0, int y0);
};

double ManhattanMovement::getDistance(int a, int b, int x0, int y0) {
    double ret;
    return ret;
}


int test0() {
    int a = 1;
    int b = 2;
    int x0 = -2;
    int y0 = 3;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int a = 37;
    int b = 37;
    int x0 = 42;
    int y0 = 19;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 60.97297297297297;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = -100;
    int b = 0;
    int x0 = -999999;
    int y0 = 314159;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 999998.99;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 0;
    int b = -2147483648;
    int x0 = 1;
    int y0 = 100000;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.00000000047;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a = -2147483648;
    int b = 2147483647;
    int x0 = 2147483647;
    int y0 = 2147483647;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = -2147483648;
    int b = 2147483647;
    int x0 = -2147483648;
    int y0 = 2147483647;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 4.294967294E9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 0;
    int b = 1266607226;
    int x0 = 319501161;
    int y0 = -1683299080;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.68329908E9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a = 0;
    int b = -1280895397;
    int x0 = -619845035;
    int y0 = -2129647650;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.12964765E9;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 1552476727;
    int b = 0;
    int x0 = 2113262842;
    int y0 = -506687009;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.113262842E9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = -217347990;
    int b = 1407742898;
    int x0 = -664375507;
    int y0 = 0;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0257603235422675E8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = -1113346878;
    int b = -1021908798;
    int x0 = 0;
    int y0 = -646591447;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 5.934875297695411E8;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a = 1062627157;
    int b = 1843502487;
    int x0 = -1303271978;
    int y0 = -2104708680;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8559374993511434E9;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 0;
    int b = -317229867;
    int x0 = 1987274807;
    int y0 = -1316239511;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.316239511E9;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 1397065508;
    int b = 0;
    int x0 = 1835962049;
    int y0 = 1922408784;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.835962049E9;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a = -1568147842;
    int b = 649492931;
    int x0 = -544210970;
    int y0 = 0;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 5.4421097E8;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = -851399272;
    int b = 0;
    int x0 = -762401940;
    int y0 = 559901120;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 7.6240194E8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = -457189178;
    int b = 0;
    int x0 = 0;
    int y0 = 1126486756;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.187278369918021E-9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = -169740581;
    int b = 2035575761;
    int x0 = 924505906;
    int y0 = -2073207966;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1502997513459206E9;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 0;
    int b = -1804341624;
    int x0 = 0;
    int y0 = -297546872;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.97546872E8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int a = 887352994;
    int b = 0;
    int x0 = -1593631248;
    int y0 = -1800776176;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.593631248E9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int a = 874039624;
    int b = -1736181805;
    int x0 = 109277531;
    int y0 = -2102562332;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1575755177342486E9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a = 2126901224;
    int b = 0;
    int x0 = -1402314328;
    int y0 = -1897487320;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.402314328E9;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a = 1937131179;
    int b = 1069415688;
    int x0 = 0;
    int y0 = 1477380511;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 8.156050105106777E8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a = -780521089;
    int b = -45114916;
    int x0 = 300425672;
    int y0 = 1277533513;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7426841364843214E8;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a = -719544233;
    int b = -845290711;
    int x0 = 1369238103;
    int y0 = -840333872;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 3.252146993926294E8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int a = 1657188665;
    int b = 989362243;
    int x0 = 0;
    int y0 = 0;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 6.034315954001532E-10;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a = 0;
    int b = -2130809015;
    int x0 = 0;
    int y0 = -514714893;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 5.14714893E8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a = -411639651;
    int b = 0;
    int x0 = 727041475;
    int y0 = -1528538211;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 7.27041475E8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a = 1760499823;
    int b = 1361204101;
    int x0 = 510990818;
    int y0 = -1685336722;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 7.920977864867821E8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int a = 594400399;
    int b = 711893226;
    int x0 = -1405775321;
    int y0 = -929447020;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.103209293876101E9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a = 0;
    int b = -1486085067;
    int x0 = -946121651;
    int y0 = -689273609;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 6.89273609E8;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int a = 912964595;
    int b = 972752948;
    int x0 = 0;
    int y0 = 0;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.028010248702942E-9;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a = 994056210;
    int b = -1393416347;
    int x0 = 10381251;
    int y0 = 132111755;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2470582277713172E8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int a = 2007302364;
    int b = -308112422;
    int x0 = -1413532684;
    int y0 = 1674579412;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6705735402836006E9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int a = 565185771;
    int b = 0;
    int x0 = 1013180833;
    int y0 = 0;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.013180833E9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int a = -1853480675;
    int b = 1984551007;
    int x0 = -101694228;
    int y0 = 0;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 9.49777988533423E7;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int a = 1535479008;
    int b = 1051733211;
    int x0 = -173568633;
    int y0 = -488466343;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 5.081458383621051E8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a = 270737482;
    int b = 1297953176;
    int x0 = 1930820191;
    int y0 = 792132870;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.194878829077725E9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int a = 0;
    int b = -303512880;
    int x0 = 600120122;
    int y0 = 1874317933;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.874317933E9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a = 1831418372;
    int b = 1525022416;
    int x0 = -328149196;
    int y0 = -1630067958;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6855070851417534E9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int a = 1784551678;
    int b = -1944783475;
    int x0 = 0;
    int y0 = -1520703866;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.520703866E9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a = 0;
    int b = -156171033;
    int x0 = -671173395;
    int y0 = 944139506;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 9.44139506E8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int a = 0;
    int b = -914266118;
    int x0 = -899831263;
    int y0 = 253347829;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.53347829E8;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int a = -768103699;
    int b = 1140575222;
    int x0 = 1301332296;
    int y0 = 683749690;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.926135089418782E8;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int a = -866525973;
    int b = -1572986981;
    int x0 = 0;
    int y0 = -981092426;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 9.81092426E8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int a = 2095200530;
    int b = 942570169;
    int x0 = 1871234403;
    int y0 = 1323239166;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4665214633388205E9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int a = 1116085719;
    int b = 942270053;
    int x0 = 2124143449;
    int y0 = 0;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.124143449E9;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int a = -1884084662;
    int b = 1768542953;
    int x0 = -43946883;
    int y0 = -6778570;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 3.758400958634381E7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int a = -663959488;
    int b = 571119000;
    int x0 = 655157794;
    int y0 = -530028964;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1110735800708454E9;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a = 1514025619;
    int b = -1491915732;
    int x0 = -1666374390;
    int y0 = 999601249;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.651378085046424E9;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int a = -100;
    int b = 0;
    int x0 = -999999;
    int y0 = 314159;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 999998.99;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a = 2000000000;
    int b = 2000000000;
    int x0 = 2000000000;
    int y0 = 2000000000;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0E9;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 0;
    int b = 1;
    int x0 = 1;
    int y0 = 1;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int a = -2147483648;
    int b = -2147483648;
    int x0 = 2147483647;
    int y0 = 2147483647;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 4.294967294E9;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a = 100;
    int b = -10000000;
    int x0 = 1;
    int y0 = -10000000;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.00000000000099E7;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int a = 2;
    int b = -2;
    int x0 = 2000000000;
    int y0 = 2000000000;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int a = 2147483647;
    int b = 2147483647;
    int x0 = 2147483647;
    int y0 = 2147483647;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 4.294967294E9;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 30000;
    int b = 30000;
    int x0 = 100000;
    int y0 = 100000;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 199999.99996666668;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int a = 123456789;
    int b = 123456789;
    int x0 = 123456789;
    int y0 = 123456789;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 2.46913578E8;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a = 348736273;
    int b = 348326273;
    int x0 = 332736273;
    int y0 = 328736273;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 6.610860594703065E8;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = -2147483648;
    int b = -2147483648;
    int x0 = 2147483647;
    int y0 = -2147483648;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 50000;
    int b = 50000;
    int x0 = 50000;
    int y0 = 50000;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 99999.99998;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 0;
    int b = -5;
    int x0 = -1;
    int y0 = -4;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int a = 1;
    int b = 0;
    int x0 = 1;
    int y0 = 0;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a = 0;
    int b = -2147483648;
    int x0 = 1;
    int y0 = 100000;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.00000000047;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 3000;
    int b = 3000;
    int x0 = 1000000;
    int y0 = 1000000;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1999999.9996666666;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a = 10;
    int b = 1;
    int x0 = 0;
    int y0 = -100;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 10.1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a = 1;
    int b = 33;
    int x0 = 4;
    int y0 = 5;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 5.090909090909091;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a = -2147483648;
    int b = -2147483648;
    int x0 = -2147483648;
    int y0 = -2147483648;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 4.294967296E9;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int a = 34534344;
    int b = 342432;
    int x0 = 10000000;
    int y0 = 45433443;
    ManhattanMovement* pObj = new ManhattanMovement();
    clock_t start = clock();
    double result = pObj->getDistance(a, b, x0, y0);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0450504134474799E7;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=279471&rd=6515&pm=3498
********************************************************************************
#include <string>
#include <vector>
#include <cmath>
using namespace std;
 
class ManhattanMovement {
  public:
  double getDistance(int a, int b, int x0, int y0) {
    if (a==0) return fabs(y0-1.0/b);
    if (b==0) return fabs(x0-1.0/a);
    return min(fabs(y0-(1.0-1.0*a*x0)/b), fabs(x0-(1.0-1.0*b*y0)/a));
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/