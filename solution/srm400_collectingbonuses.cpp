/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8764
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

class CollectingBonuses {
public:
    double expectedBuy(string n, string k);
};

double CollectingBonuses::expectedBuy(string n, string k) {
    double ret;
    return ret;
}


int test0() {
    string n = "1";
    string k = "1";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string n = "2";
    string k = "1";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string n = "2";
    string k = "2";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string n = "999999999999999999";
    string k = "999999999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9.999999995E8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string n = "999999999999999999";
    string k = "999999999999999999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.202374733879435E19;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string n = "12345";
    string k = "123";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 123.61182725183491;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string n = "123456789";
    string k = "123456789";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3714342296692758E9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string n = "123456789";
    string k = "12345";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 12345.617207203177;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string n = "1234567890123456";
    string k = "1234567890";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2345685072843559E9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string n = "7";
    string k = "3";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.566666666666667;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string n = "218";
    string k = "41";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 45.30366038127212;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string n = "1692038591";
    string k = "2359193";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2360839.2296567466;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string n = "198275398293849";
    string k = "112939489382893";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6715837985117944E14;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string n = "12397539298439";
    string k = "12397539298000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.983205152156711E14;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string n = "12345678";
    string k = "12345678";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0871643110346735E8;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string n = "56781234";
    string k = "56781234";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0465878505214562E9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string n = "123456789";
    string k = "123454321";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3358068774344294E9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string n = "123456789";
    string k = "123456780";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0221788928514185E9;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string n = "1234567890123";
    string k = "1234566789000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7197407941607326E13;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string n = "5555555512345";
    string k = "12345";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 12345.000013714802;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string n = "49000000";
    string k = "1";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string n = "8597705003058896";
    string k = "4263000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4263000.001056861;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string n = "17247006936141401";
    string k = "6006801";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6006801.001046026;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string n = "9158096943131503";
    string k = "49999999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999913649123E7;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string n = "4390464402";
    string k = "4389792928";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8572291205878876E10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string n = "9158096943131503";
    string k = "4999999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4999999.001364912;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string n = "9158096943131503";
    string k = "499999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 499999.00001364906;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string n = "999999999999999999";
    string k = "714095618";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.140956182549663E8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string n = "999999999999999999";
    string k = "635124699";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.351246992016917E8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string n = "999999999999999999";
    string k = "525848194";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.2584819413825816E8;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string n = "999999999999999999";
    string k = "133946281";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.339462810089708E8;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string n = "999999999999999999";
    string k = "513446915";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.134469151318139E8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string n = "999999999999999999";
    string k = "436935328";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.3693532809545624E8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string n = "999999999999999999";
    string k = "593242844";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.932428441759685E8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string n = "999999999999999999";
    string k = "132949346";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3294934600883776E8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string n = "999999999999999999";
    string k = "859519858";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 8.595198583693871E8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string n = "999999999999999999";
    string k = "497127650";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9712765012356794E8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string n = "999999999999999999";
    string k = "313332197";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1333219704908854E8;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string n = "999999999999999999";
    string k = "843442550";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 8.434425503556976E8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string n = "999999999999999999";
    string k = "580128563";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.801285631682745E8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string n = "999999999999999999";
    string k = "915226265";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9.152262654188195E8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string n = "999999999999999999";
    string k = "241876283";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4187628302925208E8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string n = "999999999999999999";
    string k = "504259864";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0425986412713903E8;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string n = "999999999999999999";
    string k = "989599133";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9.895991334896532E8;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string n = "999999999999999999";
    string k = "211899745";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1189974502245075E8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string n = "999999999999999999";
    string k = "182974866";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.829748660167399E8;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string n = "999999999999999999";
    string k = "723884458";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.238844582620044E8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string n = "4";
    string k = "3";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.333333333333333;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string n = "60506298085492492";
    string k = "60482287309403175";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7388532696195898E17;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string n = "4665942929939122";
    string k = "335743874596";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.35755954614849E11;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string n = "5319470233654";
    string k = "5126342963";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.128814664763474E9;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string n = "9813652408233";
    string k = "9813652407749";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3289443921309678E14;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string n = "573213573970";
    string k = "573213561362";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0107129728913447E13;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string n = "73129388";
    string k = "73045284";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.949342515358152E8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string n = "40728449215116";
    string k = "40721158848733";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.514102861854884E14;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string n = "71382128232039";
    string k = "71375745451819";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.654384071671254E14;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string n = "37379737142218905";
    string k = "8974356504341557";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0262613697449582E16;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string n = "39563965771";
    string k = "39563142909";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.265248795326505E11;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string n = "84628205771417595";
    string k = "84628145200144149";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.19748550865484467E18;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string n = "24536410";
    string k = "23878648";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 8.87989733711081E7;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string n = "5913563619733";
    string k = "521613038";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.2163604410755926E8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string n = "37791927064759";
    string k = "37791926967241";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.473474225307289E14;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string n = "37653154115181";
    string k = "66239351664";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.629768415224618E10;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string n = "3820594460558616";
    string k = "475687228";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.756872576129777E8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string n = "5807435335";
    string k = "1476954194";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.704252278823898E9;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string n = "64619176272";
    string k = "64618114013";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.118363321577192E11;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string n = "38910086";
    string k = "38909426";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.273793126816553E8;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string n = "74796428358507442";
    string k = "118414";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 118414.00000009373;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string n = "6252130839182";
    string k = "6252130838521";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4360790277529075E14;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string n = "543357237";
    string k = "543354085";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.551435604766216E9;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string n = "66540041012841108";
    string k = "66539244951890869";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5414078334731712E17;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string n = "905931919927123003";
    string k = "1";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string n = "486849920209";
    string k = "573694";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 573694.338014321;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string n = "87";
    string k = "37";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 47.8199468929702;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string n = "496739394316243";
    string k = "496739394316204";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4983030772153946E16;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string n = "535667913269973";
    string k = "215659429719";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1570285352247037E11;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string n = "94151983529";
    string k = "98551303";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9.860291711175844E7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string n = "379966603576794";
    string k = "374352261569526";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6014676495951338E15;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string n = "513583686136220168";
    string k = "7469960";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7469960.000054324;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string n = "978108330390709159";
    string k = "803040";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 803040.0000003297;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string n = "429426496696119737";
    string k = "429423507382296035";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0995092145787484E18;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string n = "210554823153328092";
    string k = "210554823153327331";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0016284277728819E18;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string n = "853690371508865930";
    string k = "853291399201239146";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.546466421561686E18;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string n = "326405084590734646";
    string k = "326396321135677028";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4355128206642739E18;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string n = "464036341552130300";
    string k = "791588715360";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.915893905370829E11;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string n = "474531252245507565";
    string k = "474444492582179939";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0842624684043228E18;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string n = "292525114927782994";
    string k = "292525114924319635";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.3598082386360238E18;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string n = "338187425126862149";
    string k = "21414";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 21414.000000000677;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string n = "309367936096480831";
    string k = "6019072547196";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.019131101590341E12;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string n = "193386337027428543";
    string k = "193385937127692660";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5312311811119585E18;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string n = "950469204046516353";
    string k = "950469204046515467";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2894266854380958E19;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string n = "509705434963486863";
    string k = "30974186471";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0974187412132072E10;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string n = "627596967838889090";
    string k = "619587611393956203";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7371309838323512E18;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string n = "844160530410783067";
    string k = "21843926295104";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.18442089222409E13;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string n = "277271702306922347";
    string k = "277921799310";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7792193859680334E11;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string n = "774354797031945431";
    string k = "738891232580620502";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3877418696483615E18;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string n = "166060830199166566";
    string k = "166060822608479443";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8065845607596708E18;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string n = "150619633367322726";
    string k = "2477022091";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4770221113679905E9;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string n = "196960745448280138";
    string k = "5833569075734";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.833655466552742E12;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string n = "349160207070283774";
    string k = "617527";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 617527.0000005461;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string n = "839197076132227748";
    string k = "10760876806063487";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0830464739248106E16;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string n = "137958372494407101";
    string k = "74702440931841191";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.07574846579969072E17;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string n = "939263848532610904";
    string k = "939263848532605400";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.078019441774887E19;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string n = "512676880019313111";
    string k = "512676601271567598";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.3952866345569577E18;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string n = "501610210123375766";
    string k = "6890";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6890.000000000047;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string n = "942865292384038211";
    string k = "942856480033102044";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0918874569992776E19;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string n = "389685216376644418";
    string k = "389684419787389003";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.1050753277104937E18;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string n = "112276843502786937";
    string k = "498";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 498.0000000000011;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string n = "1000000000000000000";
    string k = "498403686";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9840368612420315E8;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string n = "1000000000000000000";
    string k = "4971";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4971.000000000013;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string n = "1000000000000000000";
    string k = "2366";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2366.0000000000027;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string n = "1000000000000000000";
    string k = "999999999185105559";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.092796253070798E19;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string n = "1000000000000000000";
    string k = "119390";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 119390.00000000713;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string n = "1000000000000000000";
    string k = "788";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 788.0000000000003;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string n = "1000000000000000000";
    string k = "999999999440641158";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.130422991223281E19;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string n = "1000000000000000000";
    string k = "230046";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 230046.00000002646;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string n = "1000000000000000000";
    string k = "991917756477153814";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8180857812719821E18;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string n = "1000000000000000000";
    string k = "7337813760151";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.337840682038088E12;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string n = "1000000000000000000";
    string k = "999999999255054531";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.101771009552991E19;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string n = "1000000000000000000";
    string k = "29148703";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9148703000424825E7;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string n = "1000000000000000000";
    string k = "999999999999999997";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0190414005461025E19;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string n = "1000000000000000000";
    string k = "999999999409401374";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1249884472222515E19;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string n = "1000000000000000000";
    string k = "999999999999477768";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8280663503891202E19;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string n = "1000000000000000000";
    string k = "999999999999999955";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.762879922324303E19;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string n = "1000000000000000000";
    string k = "999750537587707974";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 8.2962023062580398E18;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string n = "1000000000000000000";
    string k = "999999999999999938";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7311354450961605E19;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string n = "1000000000000000000";
    string k = "694730772280";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.947310136055348E11;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string n = "1000000000000000000";
    string k = "999999999999993548";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2674308741299286E19;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string n = "1000000000000000000";
    string k = "862111303675314";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 8.624831353474951E14;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string n = "1000000000000000000";
    string k = "999999754920228772";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5221682082545816E19;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string n = "1000000000000000000";
    string k = "999999928483493014";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6453337546948065E19;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string n = "1000000000000000000";
    string k = "13214732800";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3214732887314583E10;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string n = "1000000000000000000";
    string k = "999999999999998070";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3880997347008344E19;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string n = "1000000000000000000";
    string k = "999999999999999994";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.957374733879435E19;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string n = "1000000000000000000";
    string k = "264295500303380793";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0692673585136877E17;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string n = "1000000000000000000";
    string k = "1843393311";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8433933126990495E9;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string n = "1000000000000000000";
    string k = "2634322";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2634322.0000034696;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string n = "1000000000000000000";
    string k = "999998486134095005";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3400843976887755E19;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string n = "1000000000000000000";
    string k = "1";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string n = "1000000000000000000";
    string k = "1000000000000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.202374733879435E19;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string n = "98675537619876512";
    string k = "986755376198";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9.867603100077731E11;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string n = "1000000000000000000";
    string k = "10000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.000000005E10;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string n = "923450342389412399";
    string k = "1234";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1234.000000000001;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string n = "1000000000000000000";
    string k = "12342364332";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2342364408166979E10;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string n = "1235345612332";
    string k = "1235345612332";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.510801279628695E13;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string n = "987605248730638741";
    string k = "590479265483902874";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 8.9973751949385613E17;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string n = "1000000000000000000";
    string k = "2345983459825";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3459862116485005E12;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string n = "1000000000000000000";
    string k = "1000000000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0005003335835335E15;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string n = "41415151223332";
    string k = "3213212315225";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3447089157931855E12;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string n = "1000000000000000000";
    string k = "100000000000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.05360515657826304E17;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string n = "1000045698467934";
    string k = "400084679847";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0016473141660626E11;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string n = "100000000000";
    string k = "50000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.931471805549454E10;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string n = "999999999999999999";
    string k = "199999999999999999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2314355131420976E17;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string n = "10000000";
    string k = "5000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6931471.305599478;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string n = "948494948948941651";
    string k = "489489415616516448";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.8843110151150208E17;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string n = "50000000";
    string k = "50000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9.152374619146976E8;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string n = "10000000000";
    string k = "1";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string n = "637843264384";
    string k = "2343434";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2343438.3048930094;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string n = "10000000000000";
    string k = "1000000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0536051565782074E12;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string n = "1337328974";
    string k = "666199233";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9.220443660135001E8;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string n = "100000000000000000";
    string k = "10000000000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.053605156578263E16;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string n = "34534643655675";
    string k = "4356456643454";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.65677585104082E12;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string n = "1000000000000000000";
    string k = "999999999999999999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.102374733879435E19;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string n = "1000000000000000000";
    string k = "500000000000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.9314718055994534E17;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string n = "1000000000000000";
    string k = "1000000000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.511599205981222E16;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string n = "1000000000000000";
    string k = "100000000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0536051565782625E14;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string n = "1000000000000000000";
    string k = "11000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.10000000000605E7;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string n = "500000000";
    string k = "50";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 50.00000245000016;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string n = "1000000000000000000";
    string k = "1000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000005E9;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string n = "300000000";
    string k = "299999999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.728952609756602E9;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string n = "100000000000000001";
    string k = "100000000000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.872116224580031E18;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string n = "987654321987654321";
    string k = "987654321987654321";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.149266653071088E19;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string n = "100000003";
    string k = "50000001";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.931471863543609E7;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string n = "10000000";
    string k = "10000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.669531136585985E8;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    string n = "100000000000000000";
    string k = "1000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.000000005E9;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    string n = "99999999999999999";
    string k = "123456789";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2345678907620789E8;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    string n = "1000000000000000";
    string k = "98745612382";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9.875048805095222E10;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    string n = "1000000000000000000";
    string k = "5";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    string n = "100000000000000000";
    string k = "99999999999999999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.872116224580031E18;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    string n = "10000000000";
    string k = "9000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3025850925440456E10;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    string n = "99999999999999999";
    string k = "999999999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.000000004E9;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    string n = "100000000";
    string k = "100000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8997896413853898E9;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    string n = "999999999999999999";
    string k = "999999999995999999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6244726629808665E19;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    string n = "100000000000";
    string k = "1";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    string n = "1000000000000000000";
    string k = "60000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.00000000018E7;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    string n = "1000000000000000000";
    string k = "4";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    string n = "100000000000000000";
    string k = "100000000000000000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.972116224580031E18;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    string n = "1000000000000000000";
    string k = "30000010";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.000001000045E7;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    string n = "10200000";
    string k = "10199999";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.602941627201915E8;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    string n = "1000000000000000000";
    string k = "14574857348957574";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4682114025218992E16;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    string n = "123456789123456789";
    string k = "1";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    string n = "1000000000000000000";
    string k = "2";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    string n = "1000000000000000";
    string k = "100000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.00000499995;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    string n = "1000000000000000000";
    string k = "99999999999998";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000500033335633E14;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    string n = "1000000000000000000";
    string k = "1000001";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1000001.0000005;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    string n = "1000000000000000000";
    string k = "10000001";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.000000100005E7;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    string n = "2000000";
    string k = "1500000";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2772587.222240406;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    string n = "50000001";
    string k = "1";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    string n = "92346278348723564";
    string k = "1111111";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1111111.0000066843;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    string n = "30000001";
    string k = "1";
    CollectingBonuses* pObj = new CollectingBonuses();
    clock_t start = clock();
    double result = pObj->expectedBuy(n, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22652597&rd=12172&pm=8764
********************************************************************************
#include<stdio.h> 
#include<stdlib.h> 
#include<ctype.h> 
#include<string.h> 
#include<math.h> 
 
#include<iostream> 
#include<sstream> 
#include<vector> 
#include<string> 
#include<set> 
#include<map> 
#include<list> 
#include<utility> 
#include<algorithm> 
using namespace std;  
 
#define M0 50000000LL 
//#define M 1000000000LL 
 
class CollectingBonuses { 
  public: 
  double expectedBuy(string n0, string k0) { 
    long long n = atoll( n0.c_str() ); 
    long long k = atoll( k0.c_str() ); 
    long long l = n - (k-1); 
 
    long double r = 0, r2 = 0; 
    long long M = M0; 
    if( M0 < k && k <= 2 * M0 ) 
      M = k / 2; 
    { 
      long long L = max(l,l+M), R = n;  // inclusive 
      if( L <= R ){ 
        printf( "%lld - %lld\n", L, R ); 
        r = (long double)n *  
          logl( 
            ( ((long double)R) + 0.5 ) / 
            ( ((long double)L) - 0.5 ) 
          ); 
      } 
    } 
    { 
      long long L = l, R = min(n,l+M-1);  // inclusive 
      for( long long t = R; t >= L; -- t ) 
        r2 += (long double)n / t; 
    } 
    printf( "%.100g\n", (double)(r + r2) ); 
    return r + r2; 
  } 
//BEGIN CUT HERE 
 
 
//END CUT HERE 
}; 
 
// Master Spark! 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/