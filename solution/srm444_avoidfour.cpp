/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10238
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

class AvoidFour {
public:
    int count(long n);
};

int AvoidFour::count(long n) {
    int ret;
    return ret;
}


int test0() {
    long n = 4;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 9998;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long n = 5;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 99980;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long n = 87;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 576334228;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long n = 88;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 576334228;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long n = 4128;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 547731225;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long n = 124235233;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 450715451;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long n = 12423442312;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 123527064;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long n = 40000000000;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 403544996;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long n = 12345612345;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 20960721;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long n = 5235533;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 765857807;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long n = 1212121212;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 768964375;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long n = 21990232555;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 403032192;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long n = 12228821822;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 477554622;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long n = 6447712037;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 376573559;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long n = 8073844796;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 761111360;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long n = 5783623550;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 587096534;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long n = 1807404079;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 490532649;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long n = 29611455945;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 191714315;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long n = 35180076445;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 782092064;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long n = 20120108249;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 822533749;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long n = 10893832830;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 255023821;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long n = 11651476690;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 766005837;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long n = 15468092273;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 812195616;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long n = 4884;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 210493466;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long n = 1;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long n = 34359738368;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 643694717;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long n = 34359738367;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 957658113;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long n = 9038402876;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 763474046;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long n = 31893635726;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 688734791;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long n = 74;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 278144199;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long n = 32;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 30190092;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long n = 7;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 9996299;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long n = 93;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 135211704;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long n = 85;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 949544466;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long n = 317;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 93343172;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long n = 243;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 688951137;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long n = 699;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 752702118;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long n = 946;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 264393876;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long n = 321;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 226136547;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long n = 3500;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 752802741;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long n = 4933;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 142178909;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long n = 4606;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 686144286;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long n = 6034;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 219915012;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long n = 8776;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 631585663;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long n = 51483;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 448697209;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long n = 50514;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 389370082;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long n = 72451;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 825438325;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long n = 66652;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 493196037;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long n = 93642;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 524340823;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long n = 281019;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 3209496;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long n = 376332;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 215058437;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long n = 784848;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 239219938;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long n = 409027;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 964656345;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long n = 268763;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 734441952;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long n = 3987451;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 535175259;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long n = 5857402;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 879937535;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long n = 7155817;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 806448713;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long n = 3972740;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 28191424;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long n = 4158281;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 92842090;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long n = 38077138;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 210733721;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long n = 46301347;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 169293426;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long n = 46312434;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 233207425;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long n = 42375156;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 384808146;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long n = 71781953;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 998641866;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long n = 966435215;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 450967466;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long n = 259677529;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 276608087;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long n = 334507712;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 399231167;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long n = 871452297;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 512943692;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long n = 497304209;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 792368826;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long n = 8208477840;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 781715876;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long n = 1154892128;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 943046852;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long n = 9170386076;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 89244117;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long n = 4334094703;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 871428832;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long n = 1320912122;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 629733010;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long n = 27655026219;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 615319089;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long n = 16946347606;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 938727117;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long n = 37744112749;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 242850654;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long n = 35459749691;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 887520760;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long n = 13741905231;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 760825989;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long n = 21349399602;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 903069362;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long n = 9907145697;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 631008825;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long n = 12885196370;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 151446149;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long n = 28805065336;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 851363187;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long n = 27559234713;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 678644655;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long n = 2633540365;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 115472565;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long n = 34166345646;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 900878584;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long n = 39358551595;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 622093845;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long n = 35802772425;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 653000819;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long n = 18784266286;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 831338744;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long n = 7847238840;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 674860310;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long n = 17956033142;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 337937489;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long n = 12701773268;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 455179837;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long n = 7887224628;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 946956564;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long n = 7214014953;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 124256406;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long n = 31810905501;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 336439205;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long n = 29288141115;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 749665702;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long n = 34374754809;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 461616098;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long n = 32175804742;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 412023161;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long n = 12649519850;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 468834453;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long n = 5656;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 317574755;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long n = 39999999997;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 512730467;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long n = 21704497;
    AvoidFour* pObj = new AvoidFour();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 893208456;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13898&pm=10238
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define SIZE(X) ((int)(X.size()))
typedef long long int64;
#define two(X) (1<<(X))
#define contain(S,X) (((S)&two(X))!=0)
template<class T> inline T gcd(T a,T b)
  {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
 
const int maxsize=10;
const int MODE=1000000007;
 
class AvoidFour
{
public:
  int m;
  int A[maxsize][maxsize];
  int C[maxsize][maxsize];
  int R[maxsize][maxsize];
  int D[maxsize][maxsize];
  int G[maxsize][maxsize];
  int multiply(int a,int b)
  {
    return ((int64)a*(int64)b)%MODE;
  }
  void addIt(int &a,int b)
  {
    a+=b;
    if (a>=MODE) a-=MODE;
  }
  void delIt(int &a,int b)
  {
    a-=b;
    if (a<0) a+=MODE;
  }
  void multiply(int C[maxsize][maxsize],int A[maxsize][maxsize],int B[maxsize][maxsize])
  {
    for (int i=1;i<=m;i++) for (int j=1;j<=m;j++)
    {
      R[i][j]=0;
      for (int k=1;k<=m;k++) if (A[i][k]>0 && B[k][j]>0)
        addIt(R[i][j],multiply(A[i][k],B[k][j]));
    }
    for (int i=1;i<=m;i++) for (int j=1;j<=m;j++) C[i][j]=R[i][j];
  }
  void mypower(int64 e)
  {
    if (e==0)
    {
      for (int i=1;i<=m;i++) for (int j=1;j<=m;j++) C[i][j]=(int)(i==j);
      return;
    }
    if (e%2==0)
    {
      mypower(e/2);
      multiply(C,C,C);
    }
    else
    {
      mypower(e-1);
      multiply(C,C,A);
    }
  }
  void mypower2(int64 e)
  {
    if (e==0)
    {
      memset(D,0,sizeof(D));
      for (int i=1;i<=m;i++) for (int j=1;j<=m;j++) C[i][j]=(int)(i==j);
      return;
    }
    if (e%2==0)
    {
      mypower2(e/2);
      for (int i=1;i<=m;i++) for (int j=1;j<=m;j++)
      {
        G[i][j]=C[i][j];
        if (i==j) addIt(G[i][j],1);
      }
      multiply(D,D,G);
      multiply(C,C,C);
    }
    else
    {
      mypower2(e-1);
      multiply(C,C,A);
      for (int i=1;i<=m;i++) for (int j=1;j<=m;j++)
        addIt(D[i][j],C[i][j]);
    }
  }
  int solve(int64 n,int64 DD)
  {
    if (DD>n) return 0;
    m=5;
    memset(A,0,sizeof(A));
    addIt(A[1][1],9);
    addIt(A[1][2],1);
    addIt(A[2][1],9);
    addIt(A[2][3],1);
    addIt(A[3][1],9);
    addIt(A[3][4],1);
    addIt(A[4][1],9);
    addIt(A[5][1],8);
    addIt(A[5][2],1);
    mypower(DD);
    memcpy(A,C,sizeof(A));
    mypower2(n/DD);
    int R=0;
    for (int i=1;i<=m;i++) addIt(R,D[5][i]);
    return R;
  }
  int count(int64 n)
  {
    vector<int64> S;
    for (int64 p=44;p<=n;p=p*10+4) S.push_back(p);
    int R=0;
    for (int set=0;set<two(SIZE(S));set++)
    {
      int op=1;
      int64 D=1;
      for (int i=0;i<SIZE(S);i++)
        if (contain(set,i))
        {
          int64 a=D;
          int64 b=S[i]/gcd(D,S[i]);
          if (b>n/a+2)
          {
            D=n+1;
            break;
          }
          D=a*b;
          op=-op;
        }
      if (D>n) 
        continue;
      int t=solve(n,D);
      if (op==1)
        addIt(R,t);
      else
        delIt(R,t);
    }
    return R;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/