/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9837
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

class InfiniteSequence {
public:
    long calc(long n, int p, int q);
};

long InfiniteSequence::calc(long n, int p, int q) {
    long ret;
    return ret;
}


int test0() {
    long n = 0;
    int p = 2;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
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
    long n = 7;
    int p = 2;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long n = 10000000;
    int p = 3;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 32768;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long n = 256;
    int p = 2;
    int q = 4;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 89;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long n = 1;
    int p = 1000000;
    int q = 1000000;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long n = 1000000000000;
    int p = 2;
    int q = 2;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627776;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long n = 1000000000000;
    int p = 2;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4266563557;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long n = 1000000000000;
    int p = 3;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 67108864;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long n = 1000000000000;
    int p = 2;
    int q = 1000000000;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 96;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long n = 1000000000000;
    int p = 1000000000;
    int q = 1000000000;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long n = 987654321234;
    int p = 2;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4135435417;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long n = 1000000000000;
    int p = 2;
    int q = 4;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 267914296;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long n = 692777636915;
    int p = 846930888;
    int q = 4289385;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long n = 885386760492;
    int p = 424238337;
    int q = 157747795;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long n = 202362490027;
    int p = 289641423;
    int q = 596516651;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long n = 897763513926;
    int p = 202520061;
    int q = 783368692;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long n = 89172455736;
    int p = 640383428;
    int q = 465180542;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long n = 702567956429;
    int p = 521595370;
    int q = 35005213;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long n = 722862665123;
    int p = 861021532;
    int q = 336465784;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long n = 513929979802;
    int p = 468703137;
    int q = 345174069;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long n = 133069898167;
    int p = 635723060;
    int q = 415634024;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long n = 175011478042;
    int p = 289018458;
    int q = 159961395;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long n = 484421544919;
    int p = 753377375;
    int q = 231176231;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long n = 575198594324;
    int p = 756898539;
    int q = 608413786;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long n = 566413803526;
    int p = 238664372;
    int q = 149798317;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long n = 759956241873;
    int p = 524268982;
    int q = 412776093;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long n = 906996497281;
    int p = 42999172;
    int q = 137806864;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long n = 477084336327;
    int p = 284420927;
    int q = 511702307;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long n = 750846621729;
    int p = 259126507;
    int q = 572660338;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long n = 616124353895;
    int p = 533925859;
    int q = 200661315;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long n = 898814233367;
    int p = 201100547;
    int q = 39819584;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long n = 344043313750;
    int p = 685990366;
    int q = 610515436;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long n = 117276947178;
    int p = 356426810;
    int q = 577171089;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long n = 705403502651;
    int p = 709393586;
    int q = 880695790;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long n = 999932095060;
    int p = 574612401;
    int q = 752392756;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long n = 947739210012;
    int p = 43993370;
    int q = 511549678;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long n = 348094297539;
    int p = 849698588;
    int q = 855636228;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long n = 651434960378;
    int p = 463480572;
    int q = 136140797;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long n = 710097612902;
    int p = 92066603;
    int q = 317097469;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long n = 926652260756;
    int p = 603570494;
    int q = 430573319;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long n = 724286209441;
    int p = 485560282;
    int q = 59997303;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long n = 228444346619;
    int p = 894429691;
    int q = 294953867;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long n = 958031108117;
    int p = 270744731;
    int q = 221558442;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long n = 834481890675;
    int p = 207905773;
    int q = 314738099;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long n = 704567777856;
    int p = 791698929;
    int q = 710120711;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long n = 254586276965;
    int p = 524872355;
    int q = 355179499;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long n = 406219028624;
    int p = 803964685;
    int q = 269455308;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long n = 805732048829;
    int p = 240332873;
    int q = 160051530;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long n = 258270363368;
    int p = 515530021;
    int q = 378409505;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long n = 226340518149;
    int p = 277486717;
    int q = 509959710;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long n = 142618002245;
    int p = 289700725;
    int q = 200747798;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long n = 892921243555;
    int p = 439493453;
    int q = 150122848;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long n = 537764888228;
    int p = 722597490;
    int q = 331192381;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long n = 165193441500;
    int p = 438792352;
    int q = 347469843;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long n = 470124324914;
    int p = 116087766;
    int q = 342757036;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long n = 373743346491;
    int p = 182275858;
    int q = 8936989;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long n = 709859281936;
    int p = 841148367;
    int q = 350322229;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long n = 316437899228;
    int p = 286452553;
    int q = 771151434;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long n = 901474276121;
    int p = 213975409;
    int q = 576153277;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long n = 36029661237;
    int p = 330794397;
    int q = 653468860;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long n = 65818894428;
    int p = 450573795;
    int q = 705908237;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long n = 335928639529;
    int p = 187231013;
    int q = 889366145;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long n = 11111111110;
    int p = 2;
    int q = 2;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 17179869184;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long n = 999999999999;
    int p = 2;
    int q = 2;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627776;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long n = 999999999999;
    int p = 2;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4266563557;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long n = 1000000000000;
    int p = 13;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 102737;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long n = 100000000000;
    int p = 2;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 673272766;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long n = 1000000000000;
    int p = 4325435;
    int q = 2;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 212;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long n = 10000001111;
    int p = 3;
    int q = 2;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 110809534;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long n = 99999999999;
    int p = 2;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 673272766;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long n = 100000000000;
    int p = 2;
    int q = 2;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 137438953472;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long n = 999999998127;
    int p = 2;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 4266563557;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long n = 1000000000000;
    int p = 2;
    int q = 1000000;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 252;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long n = 99999989999;
    int p = 2;
    int q = 3;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 673272766;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long n = 1000000000000;
    int p = 3;
    int q = 7;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 585167;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long n = 99999999999;
    int p = 2;
    int q = 2;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 137438953472;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long n = 1000000000;
    int p = 2;
    int q = 2;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long n = 1000000000000;
    int p = 103;
    int q = 1007;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 37;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long n = 1000000000000;
    int p = 500;
    int q = 600000;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long n = 90000001111;
    int p = 3;
    int q = 2;
    InfiniteSequence* pObj = new InfiniteSequence();
    clock_t start = clock();
    long result = pObj->calc(n, p, q);
    clock_t end = clock();
    delete pObj;
    long expected = 615975622;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22678385&rd=13504&pm=9837
********************************************************************************
#line 5 "InfiniteSequence.cpp"
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <functional>
#include <list>
#include <utility>
#include <iterator>
#include <cctype>
#include <climits>
 
#define FOR(i,s,n) for (int i=(int)(s); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
#define MP make_pair
#define PB push_back
#define ALL(c) (c).begin(), (c).end()
#define SZ(c) (int)(c).size()
#define FOR_EACH(it,c) for (typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)
 
using namespace std;
class InfiniteSequence {
public:
  map<long long, long long> dic;
  long long dp(long long n, int p, int q) {
    if (dic.find(n) == dic.end()) {
      dic[n] = dp(n/p, p, q) + dp(n/q, p, q);
    }
    return dic[n];
  }
  long long calc(long long n, int p, int q) {
    dic.clear();
    dic[0] = 1;
    return dp(n, p, q);
  }
    
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/