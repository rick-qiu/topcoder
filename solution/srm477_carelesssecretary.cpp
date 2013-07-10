/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10875
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

class CarelessSecretary {
public:
    int howMany(int N, int K);
};

int CarelessSecretary::howMany(int N, int K) {
    int ret;
    return ret;
}


int test0() {
    int N = 2;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 3;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 9;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 133496;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 5;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 6;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 504;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 3;
    int K = 3;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 7;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2790;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 9;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 322560;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 4;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 3;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 35;
    int K = 7;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 165264376;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 12;
    int K = 7;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 264398280;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 39;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 853640439;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 82;
    int K = 8;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 816228267;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 8;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 35280;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 28;
    int K = 8;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 325247893;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 28;
    int K = 10;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 545742228;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 34;
    int K = 6;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 549243636;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 22;
    int K = 8;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 233312314;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 80;
    int K = 5;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 885821017;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 57;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 499972457;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 38;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 286941793;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 44;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 48254687;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 15;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 607719663;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 52;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 769124764;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 46;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 802141913;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 3;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 12;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 224406930;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 36;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 382568184;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 4;
    int K = 3;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 16;
    int K = 5;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 285736828;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 20;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 969845951;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 56;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 805995337;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 30;
    int K = 3;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 711564780;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 88;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 813089172;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 100;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 26120004;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 4;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 9;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 133496;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 15;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 544798427;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 50;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 492932547;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 454;
    int K = 6;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 264783526;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 435;
    int K = 5;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 707553019;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 1;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 551;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14453556;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 956;
    int K = 5;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 859696510;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 554;
    int K = 3;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 253845022;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 744;
    int K = 3;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 206947598;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 552;
    int K = 8;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 56551377;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 409;
    int K = 5;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 537704585;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 127;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 618115958;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 584;
    int K = 8;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 321140008;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 335;
    int K = 10;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 521902250;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 438;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 837019405;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 300;
    int K = 3;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 327737405;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 620;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 578650164;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 198;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 516897588;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 234;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 74500773;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 48;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 809901475;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 161;
    int K = 5;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 600697191;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 129;
    int K = 10;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 866029002;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 532;
    int K = 6;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 316241268;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 208;
    int K = 10;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 869800440;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 996;
    int K = 10;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 160364229;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 369;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 262374292;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 919;
    int K = 3;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 79877109;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 674;
    int K = 10;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 90244251;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 632;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 980800698;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 701;
    int K = 3;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 513106734;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 913;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 39212854;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 808;
    int K = 3;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 120406126;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 714;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 466134693;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 290;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 952802197;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 231;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 402927102;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 742;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 316005800;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 279;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 994114427;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 613;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 473211301;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 598;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 958575611;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 546;
    int K = 3;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 520095478;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 730;
    int K = 5;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 81533245;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 390;
    int K = 8;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 121386928;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 937;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 197578635;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 528;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 917417043;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 292;
    int K = 10;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 603021680;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 174;
    int K = 3;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 550385207;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 631;
    int K = 5;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 750126965;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 564;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 144546026;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 947;
    int K = 4;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 599997623;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 918;
    int K = 8;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 702131681;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 147;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 767319001;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 456;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 867928804;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 1;
    int K = 1;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 10;
    int K = 10;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1334961;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 1000;
    int K = 10;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 487930807;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 1000;
    int K = 9;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 325212876;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 1000;
    int K = 8;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 389510806;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 2;
    int K = 2;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 271;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 575654024;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 138;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 878192827;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 918;
    int K = 12;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 265160497;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 471;
    int K = 12;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 618229700;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 110;
    int K = 12;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 105989846;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 28;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 301237487;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 861;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 377628194;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 147;
    int K = 12;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 311361157;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 613;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 210780205;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 443;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8952148;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 938;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 189358954;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 699;
    int K = 12;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 611843088;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 330;
    int K = 12;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 57063700;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 682;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 730990318;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 994;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 825241079;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 418;
    int K = 12;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 147766199;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 51;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 708277193;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 417;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 633487548;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 367;
    int K = 12;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 152623713;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 587;
    int K = 11;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 316002078;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 1000;
    int K = 12;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 981713415;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 999;
    int K = 12;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 244490877;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 265;
    int K = 7;
    CarelessSecretary* pObj = new CarelessSecretary();
    clock_t start = clock();
    int result = pObj->howMany(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 334136939;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22830763&rd=14157&pm=10875
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
 
class CarelessSecretary {
public:
  int howMany(int, int);
};
 
int CarelessSecretary::howMany(int n, int k) {
  int i,j;
  int f[1020];
  f[0]=1;
  const int MODULO=1000000007;
  for (i=1; i<=n; ++i)
    f[i]=((long long)f[i-1]*i)%MODULO;
  int c[15][15];
  memset(c,0,sizeof(c));
  c[0][0]=1;
  for (i=1; i<=k; ++i)
  {
    c[i][0]=1;
    for (j=1; j<=i; ++j)
      c[i][j]=(c[i-1][j]+c[i-1][j-1])%MODULO;
  }
  int xx=-1;
  int ans=0;
  for (i=0; i<=k; ++i)
  {
    xx*=(-1);
    ans=((ans+(long long)xx*(long long)f[n-i]*c[k][i]%MODULO)%MODULO+MODULO)%MODULO;
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/