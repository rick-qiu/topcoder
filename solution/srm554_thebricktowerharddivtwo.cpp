/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12164
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

class TheBrickTowerHardDivTwo {
public:
    int find(int C, int K, int H);
};

int TheBrickTowerHardDivTwo::find(int C, int K, int H) {
    int ret;
    return ret;
}


int test0() {
    int C = 2;
    int K = 0;
    int H = 2;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int C = 1;
    int K = 7;
    int H = 19;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
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
    int C = 2;
    int K = 3;
    int H = 1;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int C = 4;
    int K = 7;
    int H = 47;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1008981254;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int C = 1;
    int K = 3;
    int H = 19;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int C = 3;
    int K = 6;
    int H = 26;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 63744861;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int C = 1;
    int K = 5;
    int H = 15;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
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
    int C = 4;
    int K = 2;
    int H = 42;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 546398371;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int C = 1;
    int K = 0;
    int H = 32;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int C = 4;
    int K = 2;
    int H = 19;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 948231878;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int C = 4;
    int K = 5;
    int H = 12;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 867619386;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int C = 1;
    int K = 3;
    int H = 43;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int C = 3;
    int K = 6;
    int H = 15;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 198242641;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int C = 1;
    int K = 5;
    int H = 33;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int C = 1;
    int K = 3;
    int H = 11;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int C = 2;
    int K = 6;
    int H = 24;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 16094;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int C = 1;
    int K = 4;
    int H = 15;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int C = 1;
    int K = 4;
    int H = 43;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int C = 3;
    int K = 1;
    int H = 10;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1220741998;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int C = 2;
    int K = 4;
    int H = 39;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 8426;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int C = 4;
    int K = 6;
    int H = 45;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 675895602;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int C = 3;
    int K = 4;
    int H = 44;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1175696211;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int C = 4;
    int K = 6;
    int H = 46;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 133331749;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int C = 4;
    int K = 5;
    int H = 44;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 485822408;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int C = 4;
    int K = 2;
    int H = 4;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 80001192;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int C = 4;
    int K = 0;
    int H = 8;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 978491432;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int C = 4;
    int K = 2;
    int H = 9;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 752462956;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int C = 4;
    int K = 5;
    int H = 1;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int C = 4;
    int K = 3;
    int H = 17;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 577534162;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int C = 4;
    int K = 6;
    int H = 6;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 941725416;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int C = 4;
    int K = 7;
    int H = 47;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1008981254;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int C = 4;
    int K = 0;
    int H = 47;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 699527058;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int C = 4;
    int K = 0;
    int H = 10;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 864059624;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int C = 1;
    int K = 0;
    int H = 23;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int C = 4;
    int K = 0;
    int H = 12;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 294638799;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int C = 4;
    int K = 0;
    int H = 21;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 160339243;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int C = 1;
    int K = 0;
    int H = 19;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int C = 3;
    int K = 0;
    int H = 26;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1122838812;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int C = 1;
    int K = 0;
    int H = 29;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int C = 1;
    int K = 0;
    int H = 34;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int C = 2;
    int K = 2;
    int H = 8;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int C = 1;
    int K = 0;
    int H = 23;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int C = 2;
    int K = 2;
    int H = 6;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int C = 2;
    int K = 5;
    int H = 21;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 3304;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int C = 1;
    int K = 3;
    int H = 7;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int C = 1;
    int K = 6;
    int H = 4;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int C = 1;
    int K = 5;
    int H = 7;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int C = 4;
    int K = 6;
    int H = 47;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 240414241;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int C = 4;
    int K = 5;
    int H = 47;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 734623669;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int C = 4;
    int K = 7;
    int H = 46;
    TheBrickTowerHardDivTwo* pObj = new TheBrickTowerHardDivTwo();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1064072547;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23004516&rd=15176&pm=12164
********************************************************************************
#include <cstdio> 
#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <cmath> 
#include <set> 
#include <algorithm> 
#include <map> 
#include <bitset> 
#include <vector> 
#include <ctime> 
 
#define maxlongint 2147483647 
#define bigp 1234567891 
 
using namespace std; 
 
class TheBrickTowerHardDivTwo { 
public: 
   int find( int C, int K, int H ) { 
       int f[50][5][5][5][5][8],ans=0,q; 
       memset(f,0,sizeof(f)); 
       f[0][0][0][0][0][0]=1; 
       for (int i=0;i<H;i++) 
       { 
           for (int i1=0;i1<=C;i1++) 
               for (int i2=0;i2<=C;i2++) 
                   for (int i3=0;i3<=C;i3++) 
                       for (int i4=0;i4<=C;i4++) 
                           for (int i5=0;i5<=K;i5++) 
                               if (f[i][i1][i2][i3][i4][i5]!=0) 
                               { 
                                   for (int j1=1;j1<=C;j1++) 
                                       for (int j2=1;j2<=C;j2++) 
                                           for (int j3=1;j3<=C;j3++) 
                                               for (int j4=1;j4<=C;j4++) 
                                               { 
                                                   q=i5+(j1==i1)+(j2==i2)+(j3==i3)+(j4==i4)+(j1==j2)+(j1==j3)+(j4==j2)+(j4==j3); 
                                                   if (q<=K) 
                                                   { 
                                                       f[i+1][j1][j2][j3][j4][q]= 
                                                       ((long long)(f[i][i1][i2][i3][i4][i5])+(f[i+1][j1][j2][j3][j4][q]))%bigp; 
                                                   } 
                                               } 
                               } 
       } 
       for (int i=1;i<=H;i++) 
           for (int i1=1;i1<=C;i1++) 
               for (int i2=1;i2<=C;i2++) 
                   for (int i3=1;i3<=C;i3++) 
                       for (int i4=1;i4<=C;i4++) 
                           for (int i5=0;i5<=K;i5++) 
                               ans=((long long)ans+f[i][i1][i2][i3][i4][i5])%bigp; 
        return ans; 
   } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/