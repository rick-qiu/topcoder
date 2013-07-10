/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7613
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

class SumsOfPerfectPowers {
public:
    int howMany(int lowerBound, int upperBound);
};

int SumsOfPerfectPowers::howMany(int lowerBound, int upperBound) {
    int ret;
    return ret;
}


int test0() {
    int lowerBound = 0;
    int upperBound = 1;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
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
    int lowerBound = 5;
    int upperBound = 6;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int lowerBound = 25;
    int upperBound = 30;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int lowerBound = 103;
    int upperBound = 103;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int lowerBound = 1;
    int upperBound = 100000;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 33604;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int lowerBound = 0;
    int upperBound = 0;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int lowerBound = 1;
    int upperBound = 1;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int lowerBound = 1;
    int upperBound = 1000;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int lowerBound = 1000;
    int upperBound = 1001;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int lowerBound = 5000000;
    int upperBound = 5000000;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int lowerBound = 0;
    int upperBound = 41;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int lowerBound = 500;
    int upperBound = 1300;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 350;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int lowerBound = 1093;
    int upperBound = 3511;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1081;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int lowerBound = 1;
    int upperBound = 4999999;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1272866;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int lowerBound = 1;
    int upperBound = 5000000;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1272867;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int lowerBound = 0;
    int upperBound = 5000000;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1272868;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int lowerBound = 69;
    int upperBound = 69;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int lowerBound = 41;
    int upperBound = 4981533;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1268478;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int lowerBound = 134;
    int upperBound = 4973500;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1266539;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int lowerBound = 269;
    int upperBound = 4984276;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1268998;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int lowerBound = 278;
    int upperBound = 4970642;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1265775;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int lowerBound = 462;
    int upperBound = 4975536;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1266833;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int lowerBound = 305;
    int upperBound = 4971855;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1266033;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int lowerBound = 181;
    int upperBound = 4983173;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1268778;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int lowerBound = 361;
    int upperBound = 4999509;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1272538;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int lowerBound = 295;
    int upperBound = 4988058;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1269874;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int lowerBound = 827;
    int upperBound = 4994564;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1271166;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int lowerBound = 2667120;
    int upperBound = 3527738;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 211125;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int lowerBound = 1447812;
    int upperBound = 2897593;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 364444;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int lowerBound = 1509740;
    int upperBound = 3873701;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 586521;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int lowerBound = 70088;
    int upperBound = 3803618;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 961553;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int lowerBound = 3545190;
    int upperBound = 4072450;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 127519;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int lowerBound = 226763;
    int upperBound = 2070163;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 487065;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int lowerBound = 3952400;
    int upperBound = 4313097;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 87126;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int lowerBound = 1867681;
    int upperBound = 4809766;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 720422;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int lowerBound = 281184;
    int upperBound = 4357230;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1031970;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int lowerBound = 1820093;
    int upperBound = 4747784;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 717718;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int lowerBound = 2624342;
    int upperBound = 3835559;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 296334;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int lowerBound = 267522;
    int upperBound = 2962291;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 697094;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int lowerBound = 1490827;
    int upperBound = 2343501;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 215753;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int lowerBound = 3113484;
    int upperBound = 3239106;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 30850;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int lowerBound = 1318964;
    int upperBound = 1396710;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 20028;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int lowerBound = 4123011;
    int upperBound = 4149008;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 6315;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int lowerBound = 2945815;
    int upperBound = 4930466;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 479860;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int lowerBound = 1134330;
    int upperBound = 4554822;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 847735;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int lowerBound = 3475578;
    int upperBound = 4900017;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 343004;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int lowerBound = 1219657;
    int upperBound = 2669365;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 367018;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int lowerBound = 531848;
    int upperBound = 4997073;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1114349;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int lowerBound = 78519;
    int upperBound = 3380880;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 856218;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int lowerBound = 500261;
    int upperBound = 2875919;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 610244;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int lowerBound = 515113;
    int upperBound = 3994422;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 878572;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int lowerBound = 228245;
    int upperBound = 1422401;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 321461;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int lowerBound = 1478864;
    int upperBound = 1910053;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 110073;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int lowerBound = 1504852;
    int upperBound = 4742856;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 797104;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int lowerBound = 2006872;
    int upperBound = 4899147;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 706193;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int lowerBound = 802207;
    int upperBound = 1391400;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 154490;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int lowerBound = 814108;
    int upperBound = 3232936;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 612453;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int lowerBound = 2050366;
    int upperBound = 2063834;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3424;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int lowerBound = 1631031;
    int upperBound = 3563653;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 480212;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int lowerBound = 1037805;
    int upperBound = 3165895;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 536356;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int lowerBound = 930067;
    int upperBound = 2916795;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 503818;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int lowerBound = 403573;
    int upperBound = 2289857;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 491462;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int lowerBound = 1306841;
    int upperBound = 4528650;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 796792;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int lowerBound = 1894513;
    int upperBound = 3926061;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 500955;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int lowerBound = 1448325;
    int upperBound = 4596886;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 776673;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int lowerBound = 3138210;
    int upperBound = 3158712;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4988;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int lowerBound = 489869;
    int upperBound = 2142282;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 430606;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int lowerBound = 2805201;
    int upperBound = 3472427;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 163501;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int lowerBound = 4174086;
    int upperBound = 4568588;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 94859;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int lowerBound = 113146;
    int upperBound = 2716803;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 682403;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int lowerBound = 2151306;
    int upperBound = 4580820;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 594039;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int lowerBound = 100;
    int upperBound = 10000;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4114;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int lowerBound = 0;
    int upperBound = 4999998;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1272867;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int lowerBound = 7;
    int upperBound = 4999993;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1272861;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int lowerBound = 1;
    int upperBound = 500000;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 149070;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int lowerBound = 2;
    int upperBound = 4999992;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1272864;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int lowerBound = 0;
    int upperBound = 4999999;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1272867;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int lowerBound = 0;
    int upperBound = 1000;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int lowerBound = 43097;
    int upperBound = 4872343;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1227070;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int lowerBound = 0;
    int upperBound = 4;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int lowerBound = 27;
    int upperBound = 467;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int lowerBound = 3836417;
    int upperBound = 3965197;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 31136;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int lowerBound = 4000004;
    int upperBound = 4000004;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int lowerBound = 25;
    int upperBound = 25;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int lowerBound = 1;
    int upperBound = 27;
    SumsOfPerfectPowers* pObj = new SumsOfPerfectPowers();
    clock_t start = clock();
    int result = pObj->howMany(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15511417&rd=10674&pm=7613
********************************************************************************
#include <map>  
#include <set>  
#include <cmath>  
#include <string>  
#include <vector>  
#include <algorithm>  
using namespace std;  
#define FOR(i,a,b) for(int i=(a); i<(b); ++i)  
#define FORE(it,x) for(typeof(x.begin()) it=x.begin(); it!=x.end(); ++it)  
#define SET(x, v) memset(x, v, sizeof (x))  
#define pb push_back  
#define sz size()  
#define cs c_str()  
 
typedef long long i64;  
 
class   SumsOfPerfectPowers                    { public:  
//  
  int res ; 
  int cnt[5000000+10]; 
  int howMany(int lowerBound, int upperBound){ 
    SET(cnt,0); 
    i64 ii, jj; 
    FOR(i,0,2300){ 
      FOR(j,0,2300){ 
        ii= i*i; 
        FOR(k,2,5000000){ 
          jj=j*j; 
          FOR(l,2,5000000){ 
            if(jj+ii > 5000000) break; 
            cnt[jj+ii]=1; 
            jj*=j; 
            if(j<2)break; 
          }     
          ii*=i;       
          if(ii > 5000000 || i<2) break; 
        } 
      } 
    } 
    FOR(i,1,5000001) 
      cnt[i]+=cnt[i-1]; 
    if(lowerBound) 
      res = cnt[upperBound] - cnt[lowerBound-1]; 
    else 
      res = cnt[upperBound]; 
    return res; 
  } 
 
};

********************************************************************************
*******************************************************************************/