/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12163
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

class TheBrickTowerHardDivOne {
public:
    int find(int C, int K, long H);
};

int TheBrickTowerHardDivOne::find(int C, int K, long H) {
    int ret;
    return ret;
}


int test0() {
    int C = 2;
    int K = 0;
    long H = 2;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 19;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 1;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 47;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 19;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 26;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 15;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 42;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 32;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 19;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 12;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 43;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 15;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 33;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 11;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 24;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 15;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 43;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 10;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 39;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 45;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 44;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 46;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 44;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 4;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 8;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 9;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 1;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 17;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 6;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 47;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 47;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 10;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 23;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 12;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 21;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 19;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 26;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 29;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 34;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 8;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 23;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 6;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 21;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 7;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 4;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    long H = 7;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
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
    int C = 1915;
    int K = 2;
    long H = 270237332186251130;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 577774846;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int C = 436;
    int K = 0;
    long H = 168885346568379548;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 153124335;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int C = 446;
    int K = 2;
    long H = 207964594444828076;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1030353246;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int C = 4;
    int K = 7;
    long H = 288230376151711743;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 299956365;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int C = 5;
    int K = 7;
    long H = 288230376151711742;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 994419489;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int C = 6;
    int K = 7;
    long H = 288230376151711743;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 986187124;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int C = 5;
    int K = 7;
    long H = 288230376151711743;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 205582709;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int C = 12;
    int K = 7;
    long H = 288230376151711742;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1224459501;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int C = 2027;
    int K = 6;
    long H = 133181695103836835;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 472698391;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int C = 4667;
    int K = 4;
    long H = 73464431133633209;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 449435632;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int C = 670;
    int K = 4;
    long H = 413748111775473632;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 447024516;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int C = 2608;
    int K = 1;
    long H = 205759520386358386;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 314836316;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int C = 3995;
    int K = 4;
    long H = 105613179963725261;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 305888919;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int C = 3;
    int K = 2;
    long H = 472257534206452389;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 149730924;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int C = 2;
    int K = 0;
    long H = 451713629396661978;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 850637221;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int C = 3;
    int K = 2;
    long H = 460489846970080531;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 129067595;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int C = 3;
    int K = 5;
    long H = 452355762451943573;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 472496835;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int C = 2;
    int K = 3;
    long H = 445593500669332620;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 761672093;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int C = 4747;
    int K = 7;
    long H = 474747474747474747;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 473182063;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int C = 4747;
    int K = 0;
    long H = 474747474747474747;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1074025271;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int C = 2;
    int K = 7;
    long H = 474747474747474747;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 157811468;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int C = 3;
    int K = 7;
    long H = 474747474747474747;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 556349242;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int C = 7;
    int K = 7;
    long H = 288230376151711743;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 956141240;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int C = 6;
    int K = 7;
    long H = 288230376151711743;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 986187124;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int C = 5;
    int K = 7;
    long H = 288230376151711742;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 994419489;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int C = 6;
    int K = 7;
    long H = 288230376151711742;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 132703428;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int C = 4747;
    int K = 7;
    long H = 288230376151711742;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 117928610;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int C = 4747;
    int K = 7;
    long H = 12345678901357924;
    TheBrickTowerHardDivOne* pObj = new TheBrickTowerHardDivOne();
    clock_t start = clock();
    int result = pObj->find(C, K, H);
    clock_t end = clock();
    delete pObj;
    int expected = 886585892;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22877779&rd=15176&pm=12163
********************************************************************************
#include <map>
#include <set>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <vector>
#include <bitset>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
#define li        long long int
#define rep(i,to) for(li i=0;i<((li)(to));++i)
#define pb        push_back
#define sz(v)     ((li)(v).size())
#define bit(n)    (1ll<<(li)(n))
#define all(vec)  (vec).begin(),(vec).end()
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define MP        make_pair
#define F         first
#define S         second
 
 
 
 
 
//  p.180
//
#define MAT_MOD  1234567891
//check mod is not long long int
//
li mod = MAT_MOD;
 
template <class T> class MAT
{
public:
  int n,m;
  int mod;
  long long int mod2;
  vector<vector<T> > a;
  
  MAT();
  MAT(int N,int M,long long int num);
  void print();
  void setMod(long long int next_mod);
  long long int size();
  MAT<T> operator+(MAT<T> mat);
  MAT<T> operator-(MAT<T> mat);
  MAT<T> operator*(MAT<T> mat);
  MAT<T> operator*(T num);
  vector<T>& operator[](int num){ return a[num]; }
  MAT<T> transpose();
  MAT<T> pow(long long int m);
};
 
template <class T> long long int MAT<T>::size(){ return n; }
 
 
template <class T> void MAT<T>::print()
{
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++) printf("%d ",a[i][j]);
    printf("\n");
  }
}
 
template <> void MAT<double>::print()
{
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++) printf("%0.6lf ",(double)a[i][j]);
    printf("\n");
  }
}
 
template <class T> void MAT<T>::setMod(long long int next_mod)
{
  mod=next_mod;
  mod2=(long long int)mod*mod;
}
 
template <class T> MAT<T> MAT<T>::transpose()
{
  MAT res(m,n,0);
  for(int i=0;i<n;i++)for(int j=0;j<m;j++) res[j][i]=a[i][j];
  return res;
}
 
 
template <class T> MAT<T> MAT<T>::pow(long long int a)
{
  MAT<T> res(n,n,0);
  for(int i=0;i<n;i++) res[i][i]=1;
  MAT<T> base=*this;
  for(;a;a>>=1){
    if(a&1) res=res*base;
    base=base*base;
  }
  return res;
}
 
template <class T> MAT<T>::MAT()
{
  n=m=0;
  setMod(MAT_MOD);
}
 
template <class T> MAT<T>::MAT(int N,int M,long long int num)
{
  n=N; m=M;
  setMod(MAT_MOD);
  if(mod<=abs(num)) num%=mod;
  if(num<0) num+=mod;
  a=vector<vector<T> >(n,vector<T>(m,num));
}
 
template <class T> MAT<T> MAT<T>::operator+(MAT<T> mat)
{
  MAT<T> res=*this;
  for(int i=0;i<n;i++)for(int j=0;j<m;j++){
    res[i][j]=res[i][j]+mat[i][j];
    if(mod<=res[i][j]) res[i][j]-=mod;
  }
  return res;
}
 
template <> MAT<double> MAT<double>::operator+(MAT<double> mat)
{
  MAT<double> res=*this;
  for(int i=0;i<n;i++)for(int j=0;j<m;j++) res[i][j]=res[i][j]+mat[i][j];
  return res;
}
 
template <class T> MAT<T> MAT<T>::operator-(MAT<T> mat)
{
  MAT<T> res=*this;
  for(int i=0;i<n;i++)for(int j=0;j<m;j++){
    res[i][j]=res[i][j]-mat[i][j];
    if(res[i][j]<0) res[i][j]+=mod;
  }
  return res;
}
 
template <> MAT<double> MAT<double>::operator-(MAT<double> mat)
{
  MAT<double> res=*this;
  for(int i=0;i<n;i++)for(int j=0;j<m;j++) res[i][j]=res[i][j]-mat[i][j];
  return res;
}
 
template <class T> MAT<T> MAT<T>::operator*(MAT<T> mat)
{
  MAT<T> res=MAT<T>(n,mat.m,0);
  vector<long long int> b(mat.m);
  for(int i=0;i<n;i++){
    for(int j=0;j<mat.m;j++) b[j]=0;
    for(int j=0;j<m;j++){
      if(a[i][j]==0) continue;
      for(int k=0;k<mat.m;k++){
        b[k]+=(long long int)a[i][j]*mat[j][k];
        if(mod2<=b[k]) b[k]-=mod2;
      }
    }
    for(int j=0;j<mat.m;j++) res[i][j]=b[j]%mod;
  }
  return res;
}
 
template <> MAT<double> MAT<double>::operator*(MAT<double> mat)
{
  MAT<double> res=MAT<double>(n,mat.m,0);
  for(int i=0;i<n;i++)for(int j=0;j<m;j++){
    if(a[i][j]==0) continue;
    for(int k=0;k<mat.m;k++) res[i][k]+=a[i][j]*mat[j][k];
  }
  return res;
}
 
 
 
 
 
class TheBrickTowerHardDivOne {
public:
 
  #define MAX 24
  li N;
  li C, K, H;
  vector<li> state[MAX];
  li INDEX[4][4][4][4];
 
  void reform(vector<li> &v)
  {
    if(sz(v) != 4) cout << "Erorr : " << __LINE__ << endl;
    map<li, li> mp;
    rep(i, 4){
      if(mp.find(v[i]) == mp.end()){
        li t = sz(mp);
        mp[v[i]] = t;
      }
      v[i] = mp[v[i]];
    }
  }
  
  void make(vector<li> v)
  {
    if(sz(v) == 4){
      INDEX[v[0]][v[1]][v[2]][v[3]] = N;
      state[N++] = v;
      return;
    }
 
    li maxi = 0;
    rep(i, sz(v)) maxi = max(maxi, v[i]);
    
    for(li i = 0; i <= maxi + 1; i++){
      v.pb(i);
      make(v);
      v.pop_back();
    }
 
  }
  
  li cnt[MAX][10];
  vector<li> base;
  bool debug;
  
  void recur(vector<li> v, li maxi, li way)
  {
    if(debug){
      rep(i, sz(v)) cout << v[i] << " "; cout << endl;
      cout << maxi << " " << way << endl;
      cout << endl;
    }
    
    if(sz(v) == 4){
      li sum = 0;
      rep(i, 4)if(v[i] == base[i]) sum++;
      if(v[0] == v[1]) sum++;
      if(v[0] == v[2]) sum++;
      if(v[1] == v[3]) sum++;
      if(v[2] == v[3]) sum++;
      reform(v);
      if(debug){
        cout << sum << endl;
      }
      li &t = cnt[INDEX[v[0]][v[1]][v[2]][v[3]]][sum];
      t = (t + way) % mod;
      return;
    }
 
    for(li i = 0; i <= maxi + 1; i++){
      v.pb(i);
      if(i == maxi + 1) recur(v, maxi + 1, way * (C - maxi - 1) % mod);
      else recur(v, maxi, way);
      v.pop_back();
    }
  }
  
  int find(int _C, int _K, long long _H){
    N = 0;
    C = _C;
    K = _K;
    H = _H;
    
    make(vector<li>(1, 0));
    MAT<li> left(N * 8 + 1, N * 8 + 1, 0); 
    MAT<li> right(N * 8 + 1, 1, 0);
    rep(i, N)rep(j, K + 1) left[N * 8][i + j * N] = 1;
    left[N * 8][N * 8] = 1;
    
    debug = false;
    rep(i, N){
      memset(cnt, 0, sizeof(cnt));
      base = state[i];
      li maxi = 0;
      rep(j, 4) maxi = max(maxi, base[j]);
      recur(vector<li>(), maxi, 1);
      rep(j, 8)rep(k, N){
        for(li l = 0; l + j < 8; l++){
          left[k + (j + l) * N][i + j * N] = cnt[k][l];
        }
      }
    }
    
//    debug = true;
//    left.print();
    memset(cnt, 0, sizeof(cnt));
    base = vector<li>(4, -1);
    recur(vector<li>(), -1, 1);
    rep(i, N)rep(j, 8) right[i + j * N][0] = cnt[i][j];
//    right.print();
    
//    cout << "  " << H << endl;
    left = left.pow(H);
    
    
    right = left * right;
    return right[8 * N][0];
  }
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/