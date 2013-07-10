/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12338
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

class PenguinEmperor {
public:
    int countJourneys(int numCities, long daysPassed);
};

int PenguinEmperor::countJourneys(int numCities, long daysPassed) {
    int ret;
    return ret;
}


int test0() {
    int numCities = 3;
    long daysPassed = 2;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int numCities = 5;
    long daysPassed = 7;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int numCities = 5;
    long daysPassed = 36;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 107374182;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int numCities = 300;
    long daysPassed = 751;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 413521250;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int numCities = 350;
    long daysPassed = 1000000000000000000;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 667009739;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int numCities = 350;
    long daysPassed = 576460752303423487;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 157219053;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int numCities = 300;
    long daysPassed = 750;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int numCities = 51;
    long daysPassed = 3453;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 681882592;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int numCities = 350;
    long daysPassed = 51;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 304806205;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int numCities = 323;
    long daysPassed = 1;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int numCities = 323;
    long daysPassed = 3;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int numCities = 323;
    long daysPassed = 4;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int numCities = 323;
    long daysPassed = 5;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int numCities = 2;
    long daysPassed = 576460752303423487;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
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
    int numCities = 2;
    long daysPassed = 1000000000000000000;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int numCities = 2;
    long daysPassed = 100000000001;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int numCities = 3;
    long daysPassed = 100010100101;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 301669435;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int numCities = 350;
    long daysPassed = 788129934789836450;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
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
    int numCities = 349;
    long daysPassed = 785878134976151203;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 909056360;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int numCities = 2;
    long daysPassed = 1;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int numCities = 32;
    long daysPassed = 213412342314123;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 453664493;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int numCities = 342;
    long daysPassed = 12341243;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 697501401;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int numCities = 333;
    long daysPassed = 1212121212;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 27013629;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int numCities = 350;
    long daysPassed = 350;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int numCities = 350;
    long daysPassed = 349;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int numCities = 350;
    long daysPassed = 351;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 310756132;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int numCities = 2;
    long daysPassed = 2;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int numCities = 2;
    long daysPassed = 3;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int numCities = 2;
    long daysPassed = 4;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int numCities = 7;
    long daysPassed = 1234132481234323;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 642755153;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int numCities = 347;
    long daysPassed = 781374535348780709;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 359419672;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int numCities = 349;
    long daysPassed = 233;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 713040368;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int numCities = 201;
    long daysPassed = 514496860578435780;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 988139060;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int numCities = 310;
    long daysPassed = 883890419249926660;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 667056628;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int numCities = 116;
    long daysPassed = 824378772965568000;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 740196544;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int numCities = 85;
    long daysPassed = 744833315135881860;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 524391913;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int numCities = 91;
    long daysPassed = 431567805524141440;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 418233654;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int numCities = 88;
    long daysPassed = 602506188315165180;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 860373109;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int numCities = 58;
    long daysPassed = 454737952532060860;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 260070945;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int numCities = 253;
    long daysPassed = 130164509677965216;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 703374640;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int numCities = 290;
    long daysPassed = 30793709076387564;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 947227231;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int numCities = 246;
    long daysPassed = 745643484792426110;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int numCities = 200;
    long daysPassed = 25112172927;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 847767337;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int numCities = 259;
    long daysPassed = 10012503288;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 12258986;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int numCities = 120;
    long daysPassed = 43118587248;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 716761497;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int numCities = 222;
    long daysPassed = 18539410826;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int numCities = 251;
    long daysPassed = 65088042107;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 495673673;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int numCities = 322;
    long daysPassed = 1269521214;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int numCities = 262;
    long daysPassed = 8361710989;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int numCities = 150;
    long daysPassed = 16177337542;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int numCities = 146;
    long daysPassed = 38480129952;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 221033522;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int numCities = 224;
    long daysPassed = 11954975280;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 189460651;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int numCities = 15;
    long daysPassed = 79056;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 601920383;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int numCities = 45;
    long daysPassed = 63574;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 500990433;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int numCities = 201;
    long daysPassed = 98166;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 300815399;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int numCities = 51;
    long daysPassed = 80799;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 703272657;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int numCities = 244;
    long daysPassed = 55390;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int numCities = 5;
    long daysPassed = 38316;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 354237861;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int numCities = 124;
    long daysPassed = 79552;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 716073185;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int numCities = 189;
    long daysPassed = 12685;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 271261413;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int numCities = 130;
    long daysPassed = 43068;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 923988205;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int numCities = 29;
    long daysPassed = 57228;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 38437960;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int numCities = 338;
    long daysPassed = 206;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int numCities = 123;
    long daysPassed = 738;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 333944189;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int numCities = 78;
    long daysPassed = 376;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 609529593;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int numCities = 142;
    long daysPassed = 485;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int numCities = 82;
    long daysPassed = 274;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int numCities = 319;
    long daysPassed = 392;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 811077399;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int numCities = 36;
    long daysPassed = 739;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 504483063;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int numCities = 197;
    long daysPassed = 733;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 341708807;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int numCities = 229;
    long daysPassed = 980;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 387321373;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int numCities = 177;
    long daysPassed = 605;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 604034094;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int numCities = 4;
    long daysPassed = 3;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int numCities = 51;
    long daysPassed = 51;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 468609660;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int numCities = 350;
    long daysPassed = 999999999999999999;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 921915152;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int numCities = 350;
    long daysPassed = 394064967394918050;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int numCities = 349;
    long daysPassed = 1000000000000000000;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 96071113;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int numCities = 350;
    long daysPassed = 788129934789836799;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 861127998;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int numCities = 350;
    long daysPassed = 985162418487295950;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int numCities = 3;
    long daysPassed = 3;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int numCities = 350;
    long daysPassed = 98516241848729250;
    PenguinEmperor* pObj = new PenguinEmperor();
    clock_t start = clock();
    int result = pObj->countJourneys(numCities, daysPassed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22732328&rd=15486&pm=12338
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
#include <queue> 
#include <iostream> 
#include <cmath> 
#include <sstream> 
#include <map> 
#include <set> 
#include <functional> 
using namespace std; 
#define pb push_back 
#define INF 1000000000 
#define L(s) (int)((s).size()) 
#define FOR(i,a,b) for (int _n(b), i(a); i <= _n; i++) 
#define rep(i,n) FOR(i,1,(n)) 
#define rept(i,n) FOR(i,0,(n)-1) 
#define C(a) memset((a),0,sizeof(a)) 
#define ll long long 
#define SORT(c) sort(all(c)) 
#define VI vector<int> 
#define MOD 1000000007 
 
int f[351], g[351], mem[351], tmp[351]; 
 
int n; 
inline void mul(int *a, int *b) { 
  C(tmp); 
  rept(i, n) { 
    int cur = 0; 
    rept(j, n) { 
      cur = (cur + (ll)a[j] * b[(i - j + n) % n]) % MOD; 
    } 
    tmp[i] = cur; 
  } 
  rept(i, n) a[i] = tmp[i]; 
} 
class PenguinEmperor  
  { 
    public: 
       int countJourneys( int n, long long daysPassed ) 
    { 
      //if (n != 4 || daysPassed != 3) return -1; 
      ::n = n; 
      C(f); 
      f[0] = 1; 
      rep(h, n) { 
        C(g); 
        rept(i, n) { 
          g[i] = f[(i - h + n) % n]; 
          if ((i + h) % n != (i - h + n) % n) { 
            g[i] = (g[i] + f[(i + h) % n]) % MOD; 
          } 
        } 
        memmove(f, g, sizeof(g)); 
      } 
 
      memmove(mem, f, sizeof(f)); 
       
      ll st = daysPassed / n; 
      C(f); 
      f[0] = 1; 
      memmove(g, mem, sizeof(g)); 
      while (st) { 
        if (st % 2) mul(f, g); 
        mul(g, g); 
        st /= 2; 
      } 
 
      int rem = daysPassed % n; 
      rep(h, rem) { 
        C(g); 
        rept(i, n) { 
          g[i] = f[(i - h + n) % n]; 
          if ((i + h) % n != (i - h + n) % n) { 
            g[i] = (g[i] + f[(i + h) % n]) % MOD; 
          } 
        } 
        memmove(f, g, sizeof(g)); 
      } 
 
      return f[0]; 
    } 
  }; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/