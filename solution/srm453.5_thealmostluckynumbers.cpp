/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10420
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

class TheAlmostLuckyNumbers {
public:
    long count(long a, long b);
};

long TheAlmostLuckyNumbers::count(long a, long b) {
    long ret;
    return ret;
}


int test0() {
    long a = 1;
    long b = 10;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long a = 14;
    long b = 14;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
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
    long a = 1;
    long b = 100;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 39;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long a = 1234;
    long b = 4321;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1178;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long a = 1;
    long b = 3;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long a = 1;
    long b = 10000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3823045312;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long a = 123456789;
    long b = 987654321;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 330386840;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long a = 1;
    long b = 1;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long a = 1000000000;
    long b = 1000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long a = 4;
    long b = 4;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long a = 2;
    long b = 2;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long a = 3;
    long b = 3;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long a = 999970000;
    long b = 999999999;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 11462;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long a = 44;
    long b = 77;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long a = 48;
    long b = 73;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long a = 757148;
    long b = 167851001;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 63880759;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long a = 301413357;
    long b = 336971125;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 13593801;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long a = 160567226;
    long b = 659598369;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 190781558;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long a = 4890852;
    long b = 391749388;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 147897472;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long a = 26239573;
    long b = 35766291;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3642006;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long a = 597007;
    long b = 473038165;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 180616328;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long a = 3615545;
    long b = 326051437;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 123268713;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long a = 118341523;
    long b = 392289611;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 104731438;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long a = 37215529;
    long b = 170427799;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 50927765;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long a = 168544291;
    long b = 675016434;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 193626376;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long a = 683447134;
    long b = 950090227;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 101939155;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long a = 82426873;
    long b = 116752252;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 13122652;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long a = 194041605;
    long b = 706221269;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 195808401;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long a = 69909135;
    long b = 257655784;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 71776471;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long a = 21417563;
    long b = 84970744;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 24296649;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long a = 4735993214;
    long b = 5788109700;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 402228932;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long a = 3788115833;
    long b = 8956428880;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1975870108;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long a = 1662213698;
    long b = 6214162788;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1740230313;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long a = 3951218642;
    long b = 6331312118;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 909920679;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long a = 1543831757;
    long b = 5048844734;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1339982138;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long a = 1284888887;
    long b = 5105102205;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1460485012;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long a = 4565962192;
    long b = 7762163387;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1221922073;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long a = 8735993214;
    long b = 9788109700;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 402229076;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long a = 8788115833;
    long b = 9956428880;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 446651414;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long a = 8662213698;
    long b = 9214162788;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 211012663;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long a = 8951218642;
    long b = 9331312118;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 145311415;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long a = 8543831757;
    long b = 9048844734;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 193068806;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long a = 8284888887;
    long b = 9105102205;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 313571473;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long a = 8565962192;
    long b = 9762163387;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 457313225;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long a = 5000000000;
    long b = 10000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1911522647;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long a = 9000000000;
    long b = 10000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 382304516;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long a = 4444444444;
    long b = 7777777777;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1274348603;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long a = 999;
    long b = 10000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3823044930;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long a = 1000000000;
    long b = 10000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3440740760;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long a = 3;
    long b = 1234567891;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 471980733;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long a = 123;
    long b = 9991999997;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3819986852;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long a = 9999;
    long b = 10000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3823041489;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long a = 5;
    long b = 10000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3823045311;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long a = 9999999999;
    long b = 10000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long a = 2341243;
    long b = 10000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3822150237;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long a = 5;
    long b = 9987654321;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3818325523;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long a = 515151515;
    long b = 10000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3626100495;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long a = 1;
    long b = 1000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 382304553;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long a = 4745;
    long b = 4474745457;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1710713382;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long a = 100;
    long b = 10000000000;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3823045274;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long a = 1234567890;
    long b = 9876543210;
    TheAlmostLuckyNumbers* pObj = new TheAlmostLuckyNumbers();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3303866595;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=14174&pm=10420
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
#define MP(X,Y) make_pair(X,Y) 
typedef long long int64; 
#define two(X) (1<<(X)) 
#define contain(S,X) (((S)&two(X))!=0) 
template<class T> inline T gcd(T a,T b) 
  {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);} 
 
const int GLAST[]={ 
1,2,4,4,8,16,16,16,32,60, 
106,103,172,396,169,123,160,323,224,354, 
435,154,217,271,424,152,624,159,202,552, 
165,463,387,389,1573,117,478,121,364,283, 
257,124,186,209,157,125,483,109,363,265, 
184,112,854,3093,181,112,145,114,568,115, 
456,220,1117,135,183,140,260,89,316,302, 
265,1969,300,89,1137,89,402,297,517,85, 
1939,288,146,2861,453,126,281,397,114,2147, 
506,367,885,85,706,190,501,633,566,66, 
98,251,126,66,1158,246,126,2280,145,328, 
256,275,164,258,259,111,2644,255,849,261, 
587,65,386,65,98,1045,39,43,453,90, 
39,21,28,124,39,233,127,21,117,21, 
28,21,277,2147,26,43,34,21,61,105, 
146,44,26,61,34,21,164,90,34,21, 
52,21,163,43,26,71,108,105,71,43, 
34,21,26,61,214,21,26,21,108,21, 
318,509,78,170,82,90,121,44,26,21, 
48,18,90,18,22,18,21,18,22,33, 
187,18,22,18,21,18,109,18,43,18, 
22,117,21,78,44,18,21,33,22,78, 
90,18,22,17,21,44,108,17,21,94, 
47,17,43,17,22,33,21,17,145,17, 
47,233,116,17,43,17,22,17,90,94, 
141,17,21,33,8,8,40,18,8,8, 
8,8,8,8,8,34,8,8,18,40, 
87,255,8,8,8,8,8,34,8,18, 
62,8,8,8,87,8,8,8,180,8, 
8,8,8,18,18,8,8,32,8,8, 
8,8,8,8,8,181,108,8,164,8, 
8,8,205,37,40,18,8,8,8,8, 
18,33,8,18,8,8,8,37,8,18, 
8,8,8,8,8,8,8,8,8,34, 
40,18,18,8,38,8,8,8,8,8, 
8,8,8,8,8,8,18,8,8,40, 
8,8,8,8,8,18,8,18,87,8, 
8,8,8,261,8,8,34,8,224,8, 
8,240,40,13,8,6,8,6,8,59, 
8,6,8,6,18,6,40,6,8,6, 
8,13,8,29,40,6,8,219,8,31, 
87,6,18,6,8,6,18,29,62,13, 
8,6,8,6,40,13,8,6,8,6, 
8,59,8,6,34,6,8,13,87,6, 
8,220,8,6,41,29,18,6,8,40, 
8,6,87,6,8,13,8,6,40,6, 
8,6,8,6,396,6,40,33,8,32, 
8,6,8,13,41,221,8,44,8,424, 
40,6,141,6,41,6,8,26,18,6, 
8,13,230,6,181,6,8,6,43,6, 
18,29,8,25,48,6,8,6,40,13, 
17,3,32,3,4,3,30,17,4,3, 
4,3,4,3,17,3,4,3,4,3, 
4,13,4,24,4,3,4,3,17,4, 
4,3,4,4,4,13,4,3,4,3, 
4,3,17,3,4,3,4,3,4,13, 
4,4,4,3,4,3,17,3,4,3, 
48,3,4,13,43,3,4,3,4,348, 
17,3,4,23,4,3,4,3,4,4, 
4,4,4,3,17,3,4,3,4,3, 
4,3,4,3,4,3,4,3,17,25, 
4,3,4,3,4,4,18,3,4,24, 
4,32,17,3,4,3,4,4,4,13, 
4,116,4,4,4,3,17,3,4,3, 
4,3,4,17,4,3,4,3,4,4, 
17,3,4,3,43,9,33,3,4,3, 
4,4,4,3,4,3,4,3,4,3, 
4,13,4,3,226,3,4,3,17,25, 
4,19,4,3,4,17,4,4,4,25, 
4,3,31,9,4,3,42,3,4,13, 
4,3,4,3,4,3,17,3,4,3, 
4,19,4,3,21,4,4,3,4,3, 
4,3,4,3,43,3,4,3,4,25, 
4,9,4,4,17,3,4,4,4,3, 
4,13,33,3,4,3,4,3,17,21, 
4,3,4,31,4,13,4,3,4,4, 
4,3,17,3,4,3,4,3,3,17, 
4,3,3,3,4,3,13,3,4,3, 
4,19,4,7,3,23,4,3,3,3, 
17,41,3,3,18,3,3,7,4,3, 
3,19,4,3,3,4,41,3,3,9, 
4,3,3,3,43,3,3,3,4,3, 
3,3,4,3,4,62,4,4,3,3, 
4,19,17,3,4,4,3,3,4,3, 
23,4,4,3,3,3,17,3,3,3, 
4,3,24,17,43,3,3,3,4,3, 
13,3,4,3,3,3,4,3,4,3, 
4,3,3,3,21,31,3,4,4,4, 
3,7,4,9,25,3,4,3,13,21, 
4,3,3,3,4,17,9,3,4,3, 
3,3,17,3,3,3,33,3,3,7, 
4,3,3,4,4,3,3,3,4,3, 
3,3,4,7,4,3,4,3,4,3, 
4,4,3,3,4,3,3,17,4,3, 
3,3,4,3,3,3,4,3,32,4, 
48,7,3,3,43,3,3,3,17,3, 
3,3,4,3,3,7,4,4,3,3, 
4,3,52,3,4,3,4,3,19,17, 
3,3,4,3,3,4,17,3,3,3, 
4,3,3,7,4,3,3,22,4,3, 
17,3,4,4,3,3,4,7,3,3, 
4,3,4,3,17,3,3,3,4,3, 
3,17,2,1,2,6,2,1,4,1, 
2,1,7,1,2,1,2,3,2,13, 
2,1,2,1,2,1,7,1,2,1, 
4,1,2,6,4,68,2,1,2,1, 
2,1,2,3,2,1,2,5,2,1, 
2,1,4,1,2,3,2,1,2,1, 
2,13,2,1,2,1,2,1,7,3, 
2,1,2,1,2,1,8,1,2,1, 
4,1,17,1,2,1,2,1,2,6, 
2,3,2,1,2,1,7,1,2,1, 
2,69,2,1,2,3,4,1,2,1, 
2,1,2,1,2,1,2,6,4,1, 
2,1,2,1,17,1,2,3,2,1, 
2,6,2,1,18,1,2,1,7,1, 
4,1,2,3,2,6,2,1,2,1, 
2,1,4,5,2,1,2,1,2,6, 
2,3,2,1,2,3,2,71,2,1, 
2,1,2,6,2,1,4,1,4,1, 
2,1,2,1,2,1,2,13,2,1, 
2,1,2,1,7,3,2,1,2,1, 
105,6,2,1,2,1,4,1,7,1, 
2,1,2,3,2,6,2,1,2,1, 
2,1,7,1,4,1,2,1,4,6, 
2,3,2,73,2,1,7,3,2,1, 
2,1,2,6,2,1,2,1,2,3, 
17,1,2,1,2,1,2,6,2,1, 
4,1,2,3,2,1,2,1,2,9, 
2,1,2,1,2,1,2,1,2,1, 
2,3,4,1,2,6,2,1,2,1, 
2,1,2,1,2,1,4,1,2,74, 
2,1,2,1,2,3,2,3,2,1, 
2,1,2,1,2,1,2,1,4,1, 
2,1,2,1,2,1,4,1,2,1, 
2,1,4,1,2,3,2,1,2,1, 
2,6,2,5,4,1,2,1,7,1, 
2,1,2,3,2,1,2,3,2,1, 
2,1,2,1,2,75,2,1,4,1, 
4,1,2,1,2,1,2,1,2,3, 
8,1,2,1,2,1,4,1,2,1, 
2,1,2,1,2,3,2,6,2,1, 
2,1,2,1,4,1,2,3,2,1, 
2,6,2,3,47,1,2,1,2,1, 
2,1,4,1,2,1,2,1,4,1, 
2,3,2,1,2,1,2,1,8,1, 
4,1,2,1,2,1,2,1,2,3, 
2,1,2,6,2,1,2,3,4,1, 
7,1,2,1,107,1,2,6,2,1, 
4,1,2,1,7,1,4,1,2,3, 
2,6,2,3,2,1,2,1,2,1, 
2,5,2,1,4,1,2,77,2,1, 
2,3,2,1,2,1,2,1,2,6, 
2,1,4,1,2,1,6,1,2,1, 
5,3,4,1,1,1,2,1,1,1, 
7,1,1,1,4,1,1,1,2,1, 
3,1,2,3,6,1,2,3,1,1, 
2,1,1,1,2,1,1,1,4,1, 
1,1,2,94,1,3,2,1,1,1, 
2,1,6,1,2,1,3,1,2,1, 
1,1,2,1,3,1,2,1,1,1, 
2,1,1,3,2,3,95,1,2,1, 
6,1,2,1,1,1,4,1,1,1, 
4,1,1,1,2,1,1,1,2,3, 
1,1,2,1,1,1,2,1,13,96, 
2,3,1,1,2,1,1,3,2,1, 
1,1,7,1,3,1,2,3,1,1, 
2,1,1,3,2,1,6,1,2,1, 
1,1,2,1,1,3,4,1,1,1, 
7,1,5,1,2,1,1,1,2,1, 
3,1,2,1,6,1,2,1,1,3, 
2,3,1,1,2,97,1,1,7,1, 
1,1,4,1,1,1,2,1,1,1, 
4,1,6,1,2,1,3,1,2,3, 
1,1,2,5,1,1,7,1,3,1, 
2,1,1,1,2,1,1,3,2,1, 
6,3,8,1,1,1,2,1,1,1, 
2,1,3,1,17,1,1,1,2,1, 
1,5,2,3,1,1,2,1,6,1, 
2,1,1,3,2,1,1,1,2,1, 
1,1,2,1,3,1,18,1,1,1, 
2,1,1,1,2,3,6,1,2,1, 
1,1,2,1,1,1,2,1,1,3, 
4,1,1,1,2,1,1,1,2,1, 
1,1,4,1,5,1,2,99,3,1, 
2,3,1,1,2,1,3,1,2,3, 
1,1,2,1,1,3,2,1,1,1, 
2,1,6,1,2,1,1,3,4,1, 
100,1,8,1,1,1,2,1,1,1, 
2,1,3,1,2,1,1,5,2,1, 
1,3,2,3,1,1,2,1,1,1, 
2,1,1,101,4,1,1,1,2,3, 
1,1,2,1,1,1,2,1,6,1, 
4,1,1,1,2,1,1,3,2,1, 
1,1,7,1,1,1,2,1,3,1, 
2,1,3,1,2,9,1,1,2,1, 
1,3,2,1,1,1,2,1,1,1, 
2,1,1,3,4,1,1,1,2,102, 
1,1,4,1,26,1,2,1,1,1, 
2,3,1,1,2,1,1,1,7,1, 
3,1,2,3,1,1,2,1,1,3, 
2,1,6,1,2,1,1,1,4,1, 
1,1,2,1,3,1,2,3,1,1, 
2,1,1,1,2,1,3,1,2,1, 
6,1,2,1,1,3}; 
 
class TheAlmostLuckyNumbers 
{ 
public: 
  int n; 
  int64 A[10000]; 
  vector<pair<int64,int64> > Q; 
  map<int64,int64> M; 
  int64 count(int64 a, int64 b) 
  { 
    n=0; 
    for (int L=1;L<=10;L++) 
      for (int set=0;set<two(L);set++) 
      { 
        int64 key=0; 
        for (int i=0;i<L;i++) 
          if (contain(set,i)) 
            key=key*10+4; 
          else 
            key=key*10+7; 
        A[n++]=key; 
      } 
    sort(A,A+n); 
    a--; 
    Q.clear(); 
    M.clear(); 
    Q.push_back(MP(1,1)); 
    M[1]+=1; 
    for (int step=0;step<n;step++) 
    { 
      for (int i=0;i<GLAST[step];i++) 
      { 
        int64 state=Q[i].first; 
        int64 multiply=Q[i].second; 
        int64 v1=state; 
        int64 v2=A[step]/gcd(A[step],state); 
        if (v1<=100000LL*100000LL/v2) 
          M[v1*v2]-=multiply; 
      } 
      Q.clear(); 
      for (map<int64,int64>::iterator it=M.begin();it!=M.end();++it) 
        if (it->second!=0) 
          Q.push_back(*it); 
    } 
    int64 R=0; 
    for (int i=SIZE(Q)-1;i>=0;i--) 
    { 
      int64 state=Q[i].first; 
      int64 multiply=Q[i].second; 
      R+=multiply*(b/state-a/state); 
    } 
    R=(b-a)-R; 
    return R; 
  } 
};

********************************************************************************
*******************************************************************************/