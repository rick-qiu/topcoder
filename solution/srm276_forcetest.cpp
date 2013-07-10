/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5934
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

class ForceTest {
public:
    int fewestTests(int maxForce, int testUnits);
};

int ForceTest::fewestTests(int maxForce, int testUnits) {
    int ret;
    return ret;
}


int test0() {
    int maxForce = 1;
    int testUnits = 2;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
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
    int maxForce = 2;
    int testUnits = 2;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int maxForce = 10;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int maxForce = 30;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int maxForce = 100;
    int testUnits = 2;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int maxForce = 4;
    int testUnits = 3;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int maxForce = 5;
    int testUnits = 3;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int maxForce = 55;
    int testUnits = 3;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int maxForce = 55;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int maxForce = 53;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int maxForce = 54;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int maxForce = 100;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int maxForce = 7;
    int testUnits = 3;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int maxForce = 6;
    int testUnits = 3;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int maxForce = 8;
    int testUnits = 3;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int maxForce = 9;
    int testUnits = 3;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int maxForce = 100;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int maxForce = 22;
    int testUnits = 17;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int maxForce = 15;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int maxForce = 82;
    int testUnits = 13;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int maxForce = 54;
    int testUnits = 7;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int maxForce = 97;
    int testUnits = 3;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int maxForce = 37;
    int testUnits = 2;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int maxForce = 19;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int maxForce = 21;
    int testUnits = 12;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int maxForce = 76;
    int testUnits = 6;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int maxForce = 88;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int maxForce = 26;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int maxForce = 53;
    int testUnits = 6;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int maxForce = 19;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int maxForce = 99;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int maxForce = 99;
    int testUnits = 10;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int maxForce = 30;
    int testUnits = 11;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int maxForce = 23;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int maxForce = 57;
    int testUnits = 18;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int maxForce = 2;
    int testUnits = 9;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int maxForce = 5;
    int testUnits = 6;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int maxForce = 100;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int maxForce = 99;
    int testUnits = 7;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int maxForce = 100;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int maxForce = 100;
    int testUnits = 15;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int maxForce = 99;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int maxForce = 100;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int maxForce = 85;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int maxForce = 87;
    int testUnits = 13;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int maxForce = 93;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int maxForce = 99;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int maxForce = 56;
    int testUnits = 17;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int maxForce = 100;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int maxForce = 99;
    int testUnits = 7;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int maxForce = 100;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int maxForce = 100;
    int testUnits = 15;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int maxForce = 99;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int maxForce = 100;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int maxForce = 85;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int maxForce = 87;
    int testUnits = 13;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int maxForce = 93;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int maxForce = 99;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int maxForce = 56;
    int testUnits = 17;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int maxForce = 100;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int maxForce = 99;
    int testUnits = 7;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int maxForce = 100;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int maxForce = 100;
    int testUnits = 15;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int maxForce = 99;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int maxForce = 100;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int maxForce = 85;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int maxForce = 87;
    int testUnits = 13;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int maxForce = 93;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int maxForce = 99;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int maxForce = 56;
    int testUnits = 17;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int maxForce = 100;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int maxForce = 99;
    int testUnits = 7;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int maxForce = 100;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int maxForce = 100;
    int testUnits = 15;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int maxForce = 99;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int maxForce = 100;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int maxForce = 85;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int maxForce = 87;
    int testUnits = 13;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int maxForce = 93;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int maxForce = 99;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int maxForce = 56;
    int testUnits = 17;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int maxForce = 100;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int maxForce = 99;
    int testUnits = 7;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int maxForce = 100;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int maxForce = 100;
    int testUnits = 15;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int maxForce = 99;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int maxForce = 100;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int maxForce = 85;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int maxForce = 87;
    int testUnits = 13;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int maxForce = 93;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int maxForce = 99;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int maxForce = 56;
    int testUnits = 17;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int maxForce = 100;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int maxForce = 99;
    int testUnits = 7;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int maxForce = 100;
    int testUnits = 4;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int maxForce = 100;
    int testUnits = 15;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int maxForce = 99;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int maxForce = 100;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int maxForce = 85;
    int testUnits = 19;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int maxForce = 87;
    int testUnits = 13;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int maxForce = 93;
    int testUnits = 5;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int maxForce = 99;
    int testUnits = 20;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int maxForce = 56;
    int testUnits = 17;
    ForceTest* pObj = new ForceTest();
    clock_t start = clock();
    int result = pObj->fewestTests(maxForce, testUnits);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7421158&rd=8073&pm=5934
********************************************************************************
#include <sstream> 
#include <algorithm> 
#include <cmath> 
#include <iostream> 
#include <map> 
#include <set> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
typedef long long ll; 
typedef pair<int,int> pii; 
typedef pair<double,double> pdd; 
typedef vector<int> vi; 
typedef vector<string> vs; 
typedef map<string,int> msi; 
 
int best[110][110][25][2]; 
struct ForceTest { 
 
  int Best(int certain, int think, int units, bool badseed) { 
    if (certain == 0) return 0; 
    if (units == 0) return 1<<25; 
 
    int &r = best[certain][think][units][badseed]; 
    if (r == -1) { 
      r = 1<<25; 
      for (int i = 1; i <= think; ++i) { 
  r <?= 1 + max(Best(certain-i, think-i, units, badseed), 
          Best(badseed ? think : i-1, i-1, units-1, badseed)); 
      } 
      for (int i = think+1; i <= certain; ++i) { 
  r <?= 1 + max(Best(certain-i, certain-i, units, false), 
          Best(i-1, think, units-1, badseed)); 
      } 
      //      printf("best %d %d %d %d = %d\n", certain, think, units, badseed); 
    } 
    return r; 
  } 
 
   int fewestTests(int maxForce, int testUnits) { 
     memset(best, -1, sizeof(best)); 
     return Best(maxForce, maxForce, testUnits, true); 
   } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/