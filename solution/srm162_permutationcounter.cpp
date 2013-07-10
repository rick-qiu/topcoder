/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1752
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

class PermutationCounter {
public:
    long count(string n);
};

long PermutationCounter::count(string n) {
    long ret;
    return ret;
}


int test0() {
    string n = "1020";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string n = "50000000000000";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string n = "1030000040000";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1414;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string n = "10101010101010101010101010101010101010101010101010";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 84859704298201;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string n = "98765432109876543210";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2360008843617599;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string n = "9999988888777776666655555444";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2042129794477893119;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string n = "1901712530271201432987123";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 141588146596382454;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string n = "6202528111465188657739980";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9199969922561799023;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string n = "754706171577635805626571261";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9221263653163756851;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string n = "50";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
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
    string n = "907082051609750";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1228293023;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string n = "59100250045245";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 34583442;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string n = "473004850000970439460030";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 201544492776877;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string n = "3680384070896";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 13484031;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string n = "500360511010643";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 168627869;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string n = "20327559000296885090040";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 547823994771227;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string n = "7398700";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 719;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string n = "10100801000038";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 118116;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string n = "20";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string n = "521080600800000000011300700695";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 12131588882550723;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string n = "2010006530";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 19007;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string n = "190103000577000";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5357451;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string n = "896340019040041352050004164";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2411274400627896724;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string n = "5640590684220610030096210";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 117728755582225319;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string n = "890486052230449607";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2439009581504;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string n = "400000";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string n = "2006480554300805091606330";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 19998330793650341;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string n = "4000005517097570160";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 22061183631;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string n = "4339";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string n = "8703020701340";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 12855669;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string n = "8";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
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
    string n = "97600084700002000098";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7477059451;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string n = "3050183570209753020008800796";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7881016280742567603;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string n = "280326680001247001674630121";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5333558791440143509;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string n = "68000250";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1443;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string n = "8902031";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2113;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string n = "5";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
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
    string n = "9096010070341920160180406";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 22856761370892710;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string n = "40";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string n = "500049740092";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 668347;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string n = "300810804080044760256000006204";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1010175649689803276;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string n = "849802103306606069009";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 14412450156335;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string n = "66101990710008147";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 10259838558;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string n = "3009800";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 131;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string n = "940900";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 54;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string n = "480036902046097075040402006";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 153943280562342707;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string n = "702003590447097925008409";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3030591666746774;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string n = "900";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string n = "6380549070000005040333100220";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 225248017678034372;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string n = "28203209730";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 277883;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string n = "60715150";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3945;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string n = "800005666";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2240;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string n = "4000029461700530109018005";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5192206038834273;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string n = "9177";
    PermutationCounter* pObj = new PermutationCounter();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4615&pm=1752
********************************************************************************
#include <algorithm> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
using namespace std; 
 
#define REP(i,n) for(int i=0;i<(n);++i) 
#define FOR(i,a,b) for(int i=(a);i<=(b);++i) 
#define FORD(i,a,b) for(int i=(a);i>=(b);--i) 
#define FOREACH(i,c) for(typeof((c).begin()) i=(c).begin();i!=(c).end();++i) 
typedef long long LL; 
const int INF = 1000000000; 
typedef vector<int> VI; 
template<class T> inline int size(const T&c) { return c.size(); } 
 
char buf1[1000]; 
 
string i2s(int x) { 
  sprintf(buf1,"%d",x); 
  return buf1; 
} 
 
 
struct PermutationCounter { 
  LL nw[100][100]; 
  int cnt[15]; 
   
  void cnw() { 
    nw[0][0]=1; 
    FOR(i,1,99) nw[0][i]=0; 
    FOR(n,1,99) { 
      nw[n][0]=1; 
      FOR(k,1,99) nw[n][k]=nw[n-1][k-1]+nw[n-1][k]; 
    } 
  } 
   
  LL komb(int ile) { 
    LL res=1; 
    FOR(i,0,9) { 
      res *= nw[ile][cnt[i]]; 
      ile-=cnt[i]; 
    } 
    return res; 
  } 
   
  // MAIN 
  long long count(string n) { 
    cnw(); 
    int ile=size(n); 
    REP(i,10) cnt[i]=0; 
    FOREACH(it,n) { 
      ++cnt[*it-'0']; 
    } 
    int len = size(n); 
    LL res = 0; 
    REP(i,len) { 
      FOR(j,0,n[i]-'0'-1) if(cnt[j]>0) { 
        --cnt[j]; 
        res+=komb(ile-1); 
        ++cnt[j]; 
      } 
      --ile; --cnt[n[i]-'0']; 
    } 
    return res; 
  } 
   
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/