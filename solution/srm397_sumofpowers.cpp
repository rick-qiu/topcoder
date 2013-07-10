/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8725
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

class SumOfPowers {
public:
    int value(int n, int k);
};

int SumOfPowers::value(int n, int k) {
    int ret;
    return ret;
}


int test0() {
    int n = 5;
    int k = 1;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 4;
    int k = 2;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 13;
    int k = 5;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1002001;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 1000000000;
    int k = 50;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16605204;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1000000000;
    int k = 49;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 642472098;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1000000000;
    int k = 40;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 405332886;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 1000000000;
    int k = 20;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 155104048;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 1000000000;
    int k = 1;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 1000000000;
    int k = 2;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 999999916;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 1000000000;
    int k = 3;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 441;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 1000000000;
    int k = 4;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 999997732;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 12345678;
    int k = 5;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 706711176;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 987654321;
    int k = 39;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 77272707;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 850631174;
    int k = 25;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 535145455;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 821724346;
    int k = 35;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 444575177;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 896737453;
    int k = 20;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 941145240;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 690526406;
    int k = 32;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 75646351;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 850139567;
    int k = 20;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 88624246;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 123456789;
    int k = 1;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 383478132;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 545023771;
    int k = 42;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 504219406;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 856849676;
    int k = 36;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 834404315;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 548664177;
    int k = 6;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 783137008;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 701407449;
    int k = 35;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 700164338;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 581795643;
    int k = 11;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 318434886;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 736038809;
    int k = 10;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 361657666;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 901047034;
    int k = 34;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 333530840;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 702128132;
    int k = 13;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 279021524;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 915161033;
    int k = 42;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 184504886;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 860078464;
    int k = 43;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 662131087;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 863368673;
    int k = 11;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 238376463;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 902707330;
    int k = 16;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 628896502;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 612766544;
    int k = 35;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 525223086;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 602123753;
    int k = 40;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 102814101;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 545304038;
    int k = 20;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 573971886;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 936381859;
    int k = 3;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 950945820;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 704027238;
    int k = 21;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 951756408;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 683308427;
    int k = 38;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 372992528;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 969888422;
    int k = 19;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 552895307;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 563882675;
    int k = 29;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 250724632;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 647032339;
    int k = 23;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 162923389;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 602071701;
    int k = 43;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 738791726;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 725331253;
    int k = 27;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 554255975;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 841611116;
    int k = 41;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 754756366;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 673725181;
    int k = 43;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 244189145;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 611317204;
    int k = 40;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 255781409;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 588525101;
    int k = 11;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 267011050;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 502232691;
    int k = 37;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 552280193;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 959774626;
    int k = 4;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 757145452;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 869230470;
    int k = 4;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 559524135;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 802681805;
    int k = 23;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 555832486;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 652955543;
    int k = 35;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 510981805;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 951360219;
    int k = 48;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6340981;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 611916815;
    int k = 22;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 380122611;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 573496201;
    int k = 49;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 598971277;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 530481772;
    int k = 48;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 993856504;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 680753686;
    int k = 42;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 32366462;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 999999999;
    int k = 1;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 641786019;
    int k = 47;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 980477989;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 751609937;
    int k = 42;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 936764622;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 869457677;
    int k = 4;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25186837;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 705121410;
    int k = 44;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 868713821;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 729468031;
    int k = 37;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 553640748;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 864307136;
    int k = 11;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 619970484;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 621124268;
    int k = 29;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 614223061;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 500000003;
    int k = 2;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 536870911;
    int k = 50;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 356514781;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 536870912;
    int k = 49;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 208977026;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 536870913;
    int k = 48;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 311884985;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 1;
    int k = 1;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 1;
    int k = 50;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 2;
    int k = 1;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 2;
    int k = 2;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 2;
    int k = 50;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 898961332;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 3;
    int k = 1;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 3;
    int k = 2;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 3;
    int k = 3;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 3;
    int k = 50;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 609065612;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 999999999;
    int k = 47;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 361818878;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 999999999;
    int k = 49;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 476716327;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 987654321;
    int k = 50;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 463175553;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 978653456;
    int k = 49;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 231751340;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 999999999;
    int k = 50;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 176895594;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 987654321;
    int k = 49;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 168309305;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 100000000;
    int k = 50;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 291807007;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 9999999;
    int k = 50;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 117128363;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 5;
    int k = 50;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 461562836;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 979597;
    int k = 49;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 913827245;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 1000000000;
    int k = 47;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 773364917;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 987946789;
    int k = 31;
    SumOfPowers* pObj = new SumOfPowers();
    clock_t start = clock();
    int result = pObj->value(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 123351620;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22285847&rd=12169&pm=8725
********************************************************************************
#include <algorithm> 
#include <cctype> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <functional> 
#include <iostream> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
#define VAR( a, b ) typeof(b) a = (b) 
#define FOREACH( it, c ) for( VAR( it, (c).begin()); it != (c).end(); ++it ) 
 
const int MOD = 1000000007; 
 
int choose[51][51]; 
map< pair<int, int>, int > Mpower; 
map< pair<int, int>, int > M; 
 
int power( int n, int k ) { 
    long long res = 1; 
 
    while( k-- )  
        res = ( res * n ) % MOD; 
 
    return ( int )res; 
} 
 
int calc( int n, int k ) { 
    if( n == 1 ) 
        return 1; 
    if( M.count( make_pair( n, k ) ) ) 
        return M[ make_pair( n, k ) ]; 
 
    long long res; 
 
    if( n%2 ) { 
        res = calc( n - 1, k ); 
        res = ( res + power( n, k ) ) % MOD; 
    } else { 
        res = ( calc( n / 2, k ) * 2 ) % MOD; 
        for( int i = 1; i <= k; ++i ) { 
            long long z = ( ( long long )choose[k][i] * power( n / 2, i ) ) % MOD; 
            long long zz = ( z * calc( n / 2, k - i ) ) % MOD; 
            res = ( res + zz ) % MOD; 
        } 
    } 
 
    return M[ make_pair( n, k ) ] = ( int )res; 
} 
 
class SumOfPowers { 
public: 
    int value(int n, int k) { 
        for( int i = 0; i <= k; ++i ) { 
            choose[i][0] = 1; 
            for( int j = 1; j <= i; ++j ) 
                choose[i][j] = ( choose[i-1][j-1] + choose[i-1][j] ) % MOD; 
        } 
 
        return calc( n, k ); 
    } 
     
  
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/