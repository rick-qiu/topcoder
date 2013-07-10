/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11626
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

class SumOfLuckiness {
public:
    long theSum(int A, int B);
};

long SumOfLuckiness::theSum(int A, int B) {
    long ret;
    return ret;
}


int test0() {
    int A = 1;
    int B = 10;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
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
    int A = 40;
    int B = 47;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int A = 58;
    int B = 526;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 231;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A = 4444;
    int B = 7777;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2338;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A = 585858585;
    int B = 858585858;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 287481025;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A = 1;
    int B = 1;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int A = 1;
    int B = 2000000000;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2008249560;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A = 2000000000;
    int B = 2000000000;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
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
    int A = 7;
    int B = 7;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
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
    int A = 4;
    int B = 4;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
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
    int A = 4;
    int B = 7;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A = 4;
    int B = 1000;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 492;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A = 12345;
    int B = 1234567890;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1221528868;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A = 2000000;
    int B = 2000000000;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2006673768;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A = 1819245736;
    int B = 2000000000;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 170834843;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A = 100;
    int B = 526;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 215;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A = 777777777;
    int B = 1777777777;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1004124789;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A = 444444444;
    int B = 1444444444;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1004124789;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A = 444444444;
    int B = 777777777;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 353825136;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A = 893274;
    int B = 1324238943;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1305462848;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A = 23;
    int B = 433;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 174;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A = 333333333;
    int B = 999999999;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 694239930;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A = 184382;
    int B = 323462173;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 301221058;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A = 111111;
    int B = 444444;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 256884;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A = 44;
    int B = 44;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A = 77;
    int B = 77;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A = 777777777;
    int B = 877777777;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 102846195;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A = 444444444;
    int B = 544444444;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 108830474;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A = 100;
    int B = 156;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int A = 45634;
    int B = 23456443;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 20005740;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A = 99;
    int B = 9999;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 6004;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int A = 3467;
    int B = 24567918;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 21209422;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int A = 7;
    int B = 9;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A = 927388;
    int B = 937354;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 5996;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A = 934345834;
    int B = 962817335;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 28249479;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A = 8712;
    int B = 923473;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 726150;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int A = 188888;
    int B = 818394;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 525145;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int A = 1;
    int B = 2;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int A = 1;
    int B = 1999999996;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2008249559;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int A = 3;
    int B = 2000000000;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2008249560;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int A = 1;
    int B = 1999999997;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2008249560;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A = 2;
    int B = 1999999999;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2008249560;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int A = 13;
    int B = 100000000;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 93769774;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int A = 1;
    int B = 199999999;
    SumOfLuckiness* pObj = new SumOfLuckiness();
    clock_t start = clock();
    long result = pObj->theSum(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 187539552;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22772215&rd=14551&pm=11626
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <cstring>
using namespace std;
 
typedef long long ll;
string upp = "";
ll dp[20][20][20][3];
ll calc(int idx, int f, int s, int iseq) {
  if(idx == 12) {
//    cout<<idx<<endl;
    if(iseq<=1)
      return abs(f - s);
    return 0;
  }
  ll &ret = dp[idx][f][s][iseq];
  if(ret!=-1)
    return ret;
  ret = 0;
  for (int i = 0; i < 10; ++i) {
    if(i < upp[idx] - '0')
      ret+=calc(idx+1, f+(i==4), s+(i==7), 0);
    else if(iseq == 1 && i == upp[idx] - '0')
      ret+=calc(idx+1, f+(i==4), s+(i==7), 1);
    else if(iseq == 0)
      ret+=calc(idx+1, f+(i==4), s+(i==7), 0);
  }
  return ret;
}
class SumOfLuckiness {
public:
  long long theSum(int A, int B) {
    A--;
    int tmp = A, cs = 0;
    vector<int>v;
    while(tmp)
      cs++,  v.push_back(tmp%10), tmp/=10;
    upp = "";
    while(cs+upp.size() < 12)
      upp+='0';
    
    reverse(v.begin(), v.end());
    for (int i = 0; i < (int)v.size(); ++i)
      upp+=(char)(v[i]+'0');
 
//    cout<<upp<<endl;
    memset(dp, -1, sizeof dp);
    ll sm = calc(0, 0, 0, 1);
    v.clear();
    tmp = B;
    cs = 0;
    while(tmp)
      cs++,  v.push_back(tmp%10), tmp/=10;
 
    upp = "";
    while(cs+upp.size() < 12)
      upp+='0';
    reverse(v.begin(), v.end());
    for (int i = 0; i < (int)v.size(); ++i) {
      upp+=(char)(v[i] + '0');
    }
//    cout<<upp<<endl;
 
    memset(dp, -1, sizeof dp);
    ll bg = calc(0, 0, 0, 1);
//    cout<<bg<<" "<<sm<<endl;
    return bg-sm;
    //calc();
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/