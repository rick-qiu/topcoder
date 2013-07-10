/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11500
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

class PerfectMemory {
public:
    double getExpectation(int N, int M);
};

double PerfectMemory::getExpectation(int N, int M) {
    double ret;
    return ret;
}


int test0() {
    int N = 1;
    int M = 2;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
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
    int N = 2;
    int M = 2;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6666666666666665;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 2;
    int M = 3;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.333333333333334;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 4;
    int M = 4;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 12.392984792984793;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 50;
    int M = 50;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2016.6207229777651;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 49;
    int M = 50;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1976.2780813675422;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 48;
    int M = 50;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1935.9354397307177;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 50;
    int M = 47;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1895.5927980655927;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 46;
    int M = 36;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1335.6369274290305;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 46;
    int M = 46;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1706.789234637251;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 49;
    int M = 48;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1897.2065037327618;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 2;
    int M = 12;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 18.849790540892975;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 2;
    int M = 22;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 34.98841742770249;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 2;
    int M = 43;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 68.87713012093411;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 3;
    int M = 48;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 115.67496570129474;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 4;
    int M = 34;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 109.22011081919707;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 5;
    int M = 6;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 23.69160691896086;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 5;
    int M = 8;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 31.760820843903016;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 5;
    int M = 12;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 47.89855303785223;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 5;
    int M = 40;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 160.858877139804;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 6;
    int M = 25;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 120.51610458647065;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 6;
    int M = 30;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 144.7217769343189;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 7;
    int M = 14;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 78.55947739317146;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 8;
    int M = 27;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 173.76855143767952;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 8;
    int M = 28;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 180.22338701676645;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 9;
    int M = 46;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 333.5255837686135;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 11;
    int M = 18;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 159.2451675193959;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 11;
    int M = 20;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 176.99596934610258;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 12;
    int M = 8;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 76.94575483559984;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 12;
    int M = 27;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 260.90877734010786;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 13;
    int M = 2;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 20.463769550919906;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 13;
    int M = 10;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 104.37896702860029;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 14;
    int M = 27;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 304.47886421459447;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 17;
    int M = 10;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 136.65322294496434;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 17;
    int M = 20;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 273.81843385997223;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 17;
    int M = 38;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 520.7155058920074;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 18;
    int M = 15;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 217.33867656959313;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 18;
    int M = 27;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 391.6190148377305;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 20;
    int M = 1;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 15.621650038987498;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 20;
    int M = 2;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 31.760820843903016;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 20;
    int M = 31;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 499.73732750058963;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 22;
    int M = 15;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 265.7498986650561;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 24;
    int M = 39;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 754.7028610875919;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 25;
    int M = 28;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 564.2855674961802;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 27;
    int M = 22;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 478.75914866326076;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 29;
    int M = 34;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 795.0455063001342;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 30;
    int M = 9;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 217.33867656959313;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 30;
    int M = 12;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 289.95550308013884;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 30;
    int M = 31;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 749.8617436314158;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 32;
    int M = 23;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 593.3322744687753;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 32;
    int M = 30;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 774.0673308447905;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 32;
    int M = 49;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1264.633876667661;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 33;
    int M = 4;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 105.99268189876544;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 33;
    int M = 6;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 159.2451675193959;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 34;
    int M = 22;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 603.0145100091017;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 34;
    int M = 29;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 795.0455063001342;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 34;
    int M = 45;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1233.9734682900253;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 36;
    int M = 5;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 144.7217769343189;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 36;
    int M = 14;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 406.1423713496746;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 38;
    int M = 19;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 582.0363329332532;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 38;
    int M = 24;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 735.3383912202512;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 40;
    int M = 35;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1129.0825970154985;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 42;
    int M = 12;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 406.1423713496746;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 42;
    int M = 27;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 914.4597339359035;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 43;
    int M = 6;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 207.65642918602504;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 43;
    int M = 48;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1664.832887095386;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 44;
    int M = 10;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 354.5037682720973;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 44;
    int M = 16;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 567.5129794096994;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 45;
    int M = 8;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 289.95550308013884;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 46;
    int M = 41;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1521.2130816594033;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 47;
    int M = 30;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1137.151125606176;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 48;
    int M = 8;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 309.31998437589533;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 50;
    int M = 28;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1129.0825970154985;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 50;
    int M = 43;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1734.222231082574;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 45;
    int M = 46;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1669.6740041218345;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 48;
    int M = 49;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1897.2065037327618;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 50;
    int M = 48;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1935.9354397307177;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 50;
    int M = 49;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1976.2780813675422;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 48;
    int M = 48;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1858.4775677070973;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 48;
    int M = 46;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1781.0196955653944;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 47;
    int M = 48;
    PerfectMemory* pObj = new PerfectMemory();
    clock_t start = clock();
    double result = pObj->getExpectation(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1819.7486316519498;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22710119&rd=14538&pm=11500
********************************************************************************
#include <cstdio>  
#include <cmath>  
#include <iostream>  
#include <algorithm>  
#include <sstream>  
#include <cstring>  
#include <functional>  
#include <cstdlib>  
#include <queue>  
#include <map>  
#include <set>  
#include <cctype>  
#include <string>  
#include <vector>  
 
#define sz(a) int((a).size())  
#define all(X) (X).begin(), (X).end()  
 
using namespace std; 
 
class PerfectMemory 
{ 
public: 
  double getExpectation(int N, int M); 
}; 
 
double dp[1300][1300]; 
 
double getdp(int pair, int single) 
{ 
  double &ret = dp[pair][single]; 
  if (ret > 0.5) { 
    return ret; 
  } 
  ret = 0; 
  if (pair == 0 && single == 0) { 
    return ret; 
  } 
  double all = pair * 2 + single; 
  if (single != 0) { 
    double psingle = single / all; 
    ret += psingle * (1 + getdp(pair, single - 1)); 
  } 
  if (pair != 0) { 
    double ppair = pair * 2 / all; 
    double done = 1.0 / (all - 1); 
    ret += ppair * done * (1 + getdp(pair - 1, single)); 
    if (single != 0) { 
      double ps = single / (all - 1); 
      ret += ppair * ps * (2 + getdp(pair - 1, single)); 
    } 
    if (pair > 1) { 
      double pp = (pair - 1) * 2 / (all - 1); 
      ret += ppair * pp * (1 + getdp(pair - 2, single + 2)); 
    } 
  } 
  return ret; 
} 
 
double PerfectMemory::getExpectation(int N, int M) 
{ 
  int n = N * M / 2; 
  fill(&dp[0][0], &dp[1300][0], -1); 
  return getdp(n, 0); 
} 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/