/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3455
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

class ArithSeq {
public:
    long minStart(int n, int delta);
};

long ArithSeq::minStart(int n, int delta) {
    long ret;
    return ret;
}


int test0() {
    int n = 3;
    int delta = 3;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 5;
    int delta = 12;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 6;
    int delta = 12;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 3661;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 30;
    int delta = 4130;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 1001001;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 30;
    int delta = 100000000;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 670380219057;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 30;
    int delta = 100;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 8412901;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 30;
    int delta = 4127;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 1001001;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 30;
    int delta = 421;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 149071891;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 30;
    int delta = 422;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 38613;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 30;
    int delta = 449;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 169559463;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 30;
    int delta = 3365;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 2687961;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 30;
    int delta = 3366;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 660157;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 5;
    int delta = 197073;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 6;
    int delta = 12345678;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 34411;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 20;
    int delta = 1010101;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 70790917;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 23;
    int delta = 100000000;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 37200659057;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 23;
    int delta = 98765432;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 36568808127;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 2;
    int delta = 1;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 30;
    int delta = 1;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 871;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 20;
    int delta = 19;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 130683;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 5;
    int delta = 5;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 421;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 10;
    int delta = 20;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 32581;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 20;
    int delta = 10;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 36291;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 8;
    int delta = 72788984;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 362359;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 9;
    int delta = 23943966;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 159601;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 17;
    int delta = 70943590;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 45304041;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 14;
    int delta = 49708334;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 14173803;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 17;
    int delta = 75093584;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 18100771;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 9;
    int delta = 92268860;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 636147;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 17;
    int delta = 35773335;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 278954098;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 26;
    int delta = 99727298;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 536457367057;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 20;
    int delta = 98294672;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 4939276741;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 22;
    int delta = 45307202;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 12794700279;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 20;
    int delta = 47871914;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 10449872309;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 9;
    int delta = 77995986;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 307471;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 25;
    int delta = 16297485;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 45786370507;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 21;
    int delta = 5558261;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 8525475223;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 26;
    int delta = 82361186;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 412991953381;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 29;
    int delta = 90794986;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 552581859523;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 15;
    int delta = 11975572;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 113565249;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 11;
    int delta = 51005214;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 1637857;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 19;
    int delta = 13364526;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 503952219;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 25;
    int delta = 25314000;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 82439904253;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 29;
    int delta = 27691612;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 113650905763;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 17;
    int delta = 14862332;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 1882496821;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 26;
    int delta = 36149331;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 141332763307;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 15;
    int delta = 6811730;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 1066057;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 27;
    int delta = 40799902;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 172790278081;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 26;
    int delta = 64698373;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 299811550051;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 28;
    int delta = 68352792;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 358575212533;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 26;
    int delta = 4878565;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 10265438443;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 4;
    int delta = 53583664;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 27723;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 15;
    int delta = 81639339;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 14061810;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 4;
    int delta = 82244019;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 31153;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 6;
    int delta = 72005180;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 121671;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 9;
    int delta = 12080287;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 202429;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 24;
    int delta = 85353684;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 30036254035;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 17;
    int delta = 44975677;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 4458729102;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 11;
    int delta = 22660161;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 78681;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 19;
    int delta = 93247632;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 11939918317;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 14;
    int delta = 75523134;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 12716335;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 30;
    int delta = 57951147;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 321937653421;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 30;
    int delta = 68778248;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 404544973483;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 30;
    int delta = 92187448;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 588829859257;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 30;
    int delta = 86079769;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 549385593231;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 30;
    int delta = 72640132;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 435009500257;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 30;
    int delta = 24924546;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 107179301307;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 30;
    int delta = 34526845;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 160673908123;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 30;
    int delta = 85502222;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 542035349131;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 30;
    int delta = 48670653;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 256313869351;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 30;
    int delta = 98050053;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 644475798057;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 30;
    int delta = 65164912;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 376970826421;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 30;
    int delta = 100000000;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 670380219057;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 9;
    int delta = 3144;
    ArithSeq* pObj = new ArithSeq();
    clock_t start = clock();
    long result = pObj->minStart(n, delta);
    clock_t end = clock();
    delete pObj;
    long expected = 81;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7462740&rd=5870&pm=3455
********************************************************************************
#include <string>
#include <vector>
#include <cmath>
 
using namespace std;
 
bool check(long long k)
{
  if (k <= 0)
    return false;
  long long n = (int) sqrt((double)k);
  if (n * n == k)
    return true;
  if (k > n * n + n)
    return true;
  return false;
}
 
class ArithSeq {
  public:
  long long minStart(int n, int delta) {
    
    long long best = 100000000000000000LL;
    for (long long m = 0; ; m++)
      {
        long long start = m*m + m + 1;
        if (start > best + delta * n)
    break;
        long long cur = start;
        int count = 1;
        while (check(cur - delta))
    {
      cur -= delta;
      count++;
    }
        long long base = cur;
        cur = start + delta;
        while (count < n)
    {
      if (check(cur))
        {
          cur += delta;
          count++;
        }
      else
        break;
    }
        if (count >= n)
    best <?= base;
      }
    return best;
      
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/