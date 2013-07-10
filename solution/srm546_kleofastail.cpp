/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12049
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

class KleofasTail {
public:
    long countGoodSequences(long K, long A, long B);
};

long KleofasTail::countGoodSequences(long K, long A, long B) {
    long ret;
    return ret;
}


int test0() {
    long K = 3;
    long A = 4;
    long B = 8;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long K = 1;
    long A = 23457;
    long B = 123456;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 100000;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long K = 1234567890123456;
    long A = 10;
    long B = 1000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long K = 0;
    long A = 0;
    long B = 2;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long K = 7;
    long A = 123456789012;
    long B = 123456789034;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 23;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long K = 4;
    long A = 2;
    long B = 10;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long K = 1;
    long A = 0;
    long B = 12;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long K = 0;
    long A = 0;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000001;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long K = 1;
    long A = 0;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long K = 2;
    long A = 0;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999999;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long K = 3;
    long A = 0;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 423539247696576512;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long K = 4;
    long A = 0;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423486;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long K = 47;
    long A = 0;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 36028797018963967;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long K = 48;
    long A = 0;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 72057594037927934;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long K = 96;
    long A = 0;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 36028797018963966;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long K = 32532534;
    long A = 43534;
    long B = 43643643643262;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 4194302;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long K = 435324643263426;
    long A = 345435;
    long B = 346436346363263;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long K = 3253263263267326;
    long A = 325325256;
    long B = 3352353263263263;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long K = 8;
    long A = 8;
    long B = 8;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
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
    long K = 8;
    long A = 9;
    long B = 9;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long K = 8;
    long A = 4376437643743;
    long B = 5475475475477;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1077428964374;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long K = 5;
    long A = 81;
    long B = 28835084869372468;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 9007199254740975;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long K = 6638512153;
    long A = 72826464;
    long B = 823187539409;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 127;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long K = 7;
    long A = 73077371391;
    long B = 7656952776382984;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1125882726973440;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long K = 82653;
    long A = 28766948;
    long B = 18147573791;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 261632;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long K = 37701;
    long A = 658391;
    long B = 508545755473;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 16777184;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long K = 5545187;
    long A = 1511801;
    long B = 262443850;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 63;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long K = 981618;
    long A = 73;
    long B = 319841134745304143;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627774;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long K = 184777099346175;
    long A = 5;
    long B = 805;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long K = 1144372441;
    long A = 2575157442058;
    long B = 533555935488665724;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 536866816;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long K = 845473;
    long A = 87358662;
    long B = 550604675998880;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741696;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long K = 63108327;
    long A = 806068143224561;
    long B = 910750308707474040;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 17163091968;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long K = 7592812;
    long A = 156058969;
    long B = 528890271209816;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 268435392;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long K = 8706174;
    long A = 89497133;
    long B = 7223040061447801;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483616;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long K = 453229;
    long A = 912744455;
    long B = 85371512690174;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 268433408;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long K = 6360073847422;
    long A = 232896755;
    long B = 458353355613;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long K = 26;
    long A = 3;
    long B = 2226;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 254;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long K = 9;
    long A = 4470449;
    long B = 2427301214;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 279293279;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long K = 25;
    long A = 638;
    long B = 49789995431;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483616;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long K = 42;
    long A = 83125009949634858;
    long B = 84136392866282652;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long K = 650;
    long A = 4395903;
    long B = 49763674;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 245760;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long K = 32838314;
    long A = 645475049;
    long B = 843599986;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long K = 420052020;
    long A = 79329904;
    long B = 7181776464719;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 65534;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long K = 649;
    long A = 5376633372;
    long B = 479537200249959803;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899898454016;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long K = 126;
    long A = 51262;
    long B = 31598433624305724;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953420288;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long K = 2459852788813;
    long A = 69465373;
    long B = 62893420707898749;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 32767;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long K = 14549444143;
    long A = 643;
    long B = 2901352713764;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 255;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long K = 66001729947;
    long A = 747692189;
    long B = 88330477933;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long K = 8;
    long A = 2;
    long B = 51914222174524950;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 18014398509481982;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long K = 6449339;
    long A = 482292792;
    long B = 14557479981;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3968;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long K = 4672236029067222;
    long A = 7293;
    long B = 146528092457229537;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 62;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long K = 88;
    long A = 2;
    long B = 72641556994459;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2199023255550;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long K = 1663;
    long A = 859085;
    long B = 9425682;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 7168;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long K = 4696;
    long A = 496;
    long B = 741480593331063921;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953421310;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long K = 162065809;
    long A = 23554932;
    long B = 856943842958;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 8191;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long K = 154023;
    long A = 2202945;
    long B = 714911039;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 8176;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long K = 86938777568910;
    long A = 6429795;
    long B = 675074062685506;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long K = 3626434;
    long A = 5699994;
    long B = 379668764;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 252;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long K = 7565;
    long A = 308705;
    long B = 19088118364121;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 4294967232;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long K = 4;
    long A = 617601301555;
    long B = 57431178689028;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 34841648694221;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long K = 39511;
    long A = 7439766607003;
    long B = 80569917140590732;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2198754820096;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long K = 881;
    long A = 30043;
    long B = 829505387314376;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627712;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long K = 5769561727236040;
    long A = 7;
    long B = 216469881014;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long K = 403532;
    long A = 612069109660598;
    long B = 699801554194811;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long K = 888;
    long A = 407;
    long B = 8807399504809482;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 35184372088830;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long K = 353194;
    long A = 1525839;
    long B = 675851986478;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 4194288;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long K = 199632;
    long A = 654339;
    long B = 6757602337129;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 134217720;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long K = 495;
    long A = 13946908800;
    long B = 85058566399875;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 274844352512;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long K = 412184855405306;
    long A = 421872877046504;
    long B = 607941353126123;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long K = 8251;
    long A = 693596;
    long B = 1629332107;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 262016;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long K = 208;
    long A = 232085738;
    long B = 581424496978461;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 8796088827904;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long K = 2;
    long A = 3;
    long B = 3;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long K = 13;
    long A = 12345;
    long B = 67890123;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 8387584;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long K = 7;
    long A = 30;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 144115188075855866;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long K = 1;
    long A = 0;
    long B = 10;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long K = 3534545;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 549755813887;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long K = 6;
    long A = 48;
    long B = 99;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long K = 2;
    long A = 0;
    long B = 999999999999999;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999998;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long K = 2;
    long A = 1;
    long B = 100000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999999999999;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long K = 2;
    long A = 1;
    long B = 4;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long K = 1;
    long A = 0;
    long B = 999999999999999992;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999992;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long K = 5;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 288230376151711743;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long K = 3;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 423539247696576512;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long K = 1;
    long A = 0;
    long B = 7;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long K = 1;
    long A = 0;
    long B = 123456789101112;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 123456789101112;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long K = 1;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long K = 10000;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 281474976710654;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long K = 3;
    long A = 2;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 423539247696576512;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long K = 2;
    long A = 1;
    long B = 1000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long K = 1;
    long A = 0;
    long B = 2;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long K = 2;
    long A = 1;
    long B = 10000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999999999;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long K = 2;
    long A = 2;
    long B = 2;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long K = 1;
    long A = 0;
    long B = 0;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long K = 13;
    long A = 0;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 135308871544864768;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long K = 1;
    long A = 0;
    long B = 1;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long K = 777;
    long A = 100;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685247;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long K = 0;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long K = 1;
    long A = 1;
    long B = 10000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long K = 13;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 135308871544864768;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long K = 1352;
    long A = 123321;
    long B = 10000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 16128;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long K = 1;
    long A = 1;
    long B = 999999999999999900;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999900;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long K = 1;
    long A = 1;
    long B = 100000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000000000000;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long K = 24;
    long A = 1234;
    long B = 1000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 137438953344;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long K = 16;
    long A = 0;
    long B = 100;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long K = 2;
    long A = 1000000000000000000;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long K = 32;
    long A = 0;
    long B = 10000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1048574;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long K = 5328;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953421310;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long K = 822981258385599122;
    long A = 28316248989464292;
    long B = 836179613355295595;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long K = 2;
    long A = 0;
    long B = 1;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long K = 5;
    long A = 1000000000000000;
    long B = 1000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long K = 12370;
    long A = 3085281;
    long B = 12506503;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1536;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long K = 1;
    long A = 0;
    long B = 100000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000000000000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long K = 1;
    long A = 0;
    long B = 3;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long K = 5;
    long A = 18;
    long B = 999999999999999999;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 288230376151711740;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long K = 121;
    long A = 100000000000000000;
    long B = 900000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 7881299347898368;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long K = 6;
    long A = 10;
    long B = 10;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long K = 2;
    long A = 1;
    long B = 3;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long K = 8;
    long A = 4;
    long B = 4;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long K = 8;
    long A = 1000;
    long B = 2000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long K = 2;
    long A = 1;
    long B = 1;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long K = 12345;
    long A = 0;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488355327;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long K = 2;
    long A = 0;
    long B = 5;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long K = 2;
    long A = 1;
    long B = 99999999999999999;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999999999998;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long K = 1238;
    long A = 1;
    long B = 100000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 262142;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long K = 4;
    long A = 0;
    long B = 6;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long K = 6;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 423539247696576511;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long K = 2;
    long A = 1;
    long B = 10;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long K = 0;
    long A = 1;
    long B = 2;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long K = 4;
    long A = 1;
    long B = 5;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long K = 1;
    long A = 1;
    long B = 123456789123456789;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 123456789123456789;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long K = 1099511627776;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2097150;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long K = 2;
    long A = 0;
    long B = 13;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long K = 2;
    long A = 0;
    long B = 4;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long K = 40;
    long A = 34637;
    long B = 193431160843;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 17179867136;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long K = 3;
    long A = 1;
    long B = 10000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 4398046511103;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long K = 3;
    long A = 4;
    long B = 7;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long K = 1024;
    long A = 1;
    long B = 1;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long K = 120;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 18014398509481982;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long K = 1000000000000000000;
    long A = 1000000000000000000;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long K = 8;
    long A = 1;
    long B = 40;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long K = 10;
    long A = 1;
    long B = 10;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long K = 4;
    long A = 1;
    long B = 10;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long K = 4;
    long A = 8;
    long B = 12;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long K = 1;
    long A = 1;
    long B = 1;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long K = 10;
    long A = 19;
    long B = 1353;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 326;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long K = 6;
    long A = 0;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 423539247696576511;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long K = 2;
    long A = 0;
    long B = 0;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long K = 8;
    long A = 0;
    long B = 7;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long K = 33;
    long A = 999999999999999999;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long K = 16;
    long A = 20;
    long B = 100;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long K = 1;
    long A = 86248;
    long B = 120591;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 34344;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long K = 26;
    long A = 15;
    long B = 1547546;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 131070;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long K = 1;
    long A = 1;
    long B = 10;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    long K = 199;
    long A = 100000000000000000;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 8444249301319680;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    long K = 2;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999999;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    long K = 1;
    long A = 10;
    long B = 12;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    long K = 4;
    long A = 3;
    long B = 8;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    long K = 12;
    long A = 123;
    long B = 12345678;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2097120;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    long K = 100;
    long A = 100;
    long B = 100;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    long K = 4;
    long A = 13;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423480;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    long K = 1;
    long A = 100000000000000000;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 900000000000000001;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    long K = 14;
    long A = 14;
    long B = 103;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    long K = 30136;
    long A = 17078;
    long B = 49762;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    long K = 8;
    long A = 7;
    long B = 20;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    long K = 203;
    long A = 18;
    long B = 1182;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    long K = 2012;
    long A = 10000000000000000;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1108307720798208;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    long K = 123456;
    long A = 678910;
    long B = 123456789;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2032;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    long K = 1;
    long A = 0;
    long B = 18;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    long K = 1;
    long A = 0;
    long B = 6;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    long K = 4;
    long A = 1;
    long B = 1000000000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423486;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    long K = 40;
    long A = 0;
    long B = 45;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    long K = 100000000000000;
    long A = 400000000000000;
    long B = 8300000000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 248;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    long K = 10;
    long A = 1;
    long B = 1000000000;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 268435454;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    long K = 10;
    long A = 0;
    long B = 10;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    long K = 0;
    long A = 4;
    long B = 4;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    long K = 0;
    long A = 0;
    long B = 4;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    long K = 3;
    long A = 23;
    long B = 23;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    long K = 20;
    long A = 80;
    long B = 85;
    KleofasTail* pObj = new KleofasTail();
    clock_t start = clock();
    long result = pObj->countGoodSequences(K, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14738&pm=12049
********************************************************************************
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
 
class KleofasTail {
public:
  long long countGoodSequences(long long, long long, long long);
};
 
long long KleofasTail::countGoodSequences(long long K, long long A, long long B) {
  if (K == 0) return B-A+1;
  long long L = K, R = K, ans = 0, s, f;
  if (!(R & 1)) R++;
  while (L <= B) {
    if (L > A) s = L;
    else s = A;
    if (R < B) f = R;
    else f = B;
    if (s <= f) ans += f-s+1;
    L = L*2;
    R = R*2+1;
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/