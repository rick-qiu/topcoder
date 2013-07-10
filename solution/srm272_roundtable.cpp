/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4835
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

class RoundTable {
public:
    long arrangements(int countA, int countB, int chairs, int minDistance);
};

long RoundTable::arrangements(int countA, int countB, int chairs, int minDistance) {
    long ret;
    return ret;
}


int test0() {
    int countA = 1;
    int countB = 1;
    int chairs = 10;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 90;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int countA = 1;
    int countB = 1;
    int chairs = 10;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 70;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int countA = 1;
    int countB = 2;
    int chairs = 7;
    int minDistance = 3;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int countA = 5;
    int countB = 3;
    int chairs = 7;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int countA = 5;
    int countB = 3;
    int chairs = 11;
    int minDistance = 3;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int countA = 2;
    int countB = 1;
    int chairs = 3;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int countA = 2;
    int countB = 3;
    int chairs = 20;
    int minDistance = 4;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 180000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int countA = 1;
    int countB = 1;
    int chairs = 50;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 2450;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int countA = 1;
    int countB = 1;
    int chairs = 50;
    int minDistance = 25;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int countA = 1;
    int countB = 1;
    int chairs = 50;
    int minDistance = 26;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int countA = 1;
    int countB = 1;
    int chairs = 50;
    int minDistance = 50;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int countA = 1;
    int countB = 1;
    int chairs = 49;
    int minDistance = 24;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 98;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int countA = 1;
    int countB = 1;
    int chairs = 49;
    int minDistance = 25;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 37276043023296000;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int countA = 5;
    int countB = 5;
    int chairs = 12;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 172800;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int countA = 5;
    int countB = 5;
    int chairs = 11;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int countA = 5;
    int countB = 5;
    int chairs = 10;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 3628800;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int countA = 5;
    int countB = 5;
    int chairs = 9;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 21;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 720000;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 22;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 50;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 11997198325008000;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int countA = 1;
    int countB = 5;
    int chairs = 50;
    int minDistance = 23;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 6000;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int countA = 5;
    int countB = 1;
    int chairs = 50;
    int minDistance = 23;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 6000;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int countA = 4;
    int countB = 5;
    int chairs = 9;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 362880;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int countA = 4;
    int countB = 5;
    int chairs = 10;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int countA = 4;
    int countB = 5;
    int chairs = 11;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 31680;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int countA = 2;
    int countB = 2;
    int chairs = 4;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int countA = 2;
    int countB = 2;
    int chairs = 49;
    int minDistance = 23;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 784;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int countA = 2;
    int countB = 2;
    int chairs = 49;
    int minDistance = 24;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int countA = 5;
    int countB = 2;
    int chairs = 40;
    int minDistance = 17;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 67200;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int countA = 2;
    int countB = 5;
    int chairs = 40;
    int minDistance = 18;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int countA = 3;
    int countB = 4;
    int chairs = 45;
    int minDistance = 6;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 11350983600;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int countA = 3;
    int countB = 2;
    int chairs = 8;
    int minDistance = 3;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int countA = 3;
    int countB = 5;
    int chairs = 1;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int countA = 2;
    int countB = 3;
    int chairs = 43;
    int minDistance = 13;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 1578960;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int countA = 1;
    int countB = 5;
    int chairs = 13;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 393120;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int countA = 5;
    int countB = 3;
    int chairs = 8;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
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
    int countA = 5;
    int countB = 1;
    int chairs = 47;
    int minDistance = 12;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 239722560;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int countA = 4;
    int countB = 4;
    int chairs = 28;
    int minDistance = 9;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 5322240;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int countA = 4;
    int countB = 1;
    int chairs = 37;
    int minDistance = 15;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 62160;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int countA = 3;
    int countB = 5;
    int chairs = 23;
    int minDistance = 5;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 56833920;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int countA = 5;
    int countB = 2;
    int chairs = 9;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 2160;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int countA = 1;
    int countB = 2;
    int chairs = 36;
    int minDistance = 11;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 7560;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int countA = 4;
    int countB = 4;
    int chairs = 41;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 1586171662848;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int countA = 2;
    int countB = 5;
    int chairs = 13;
    int minDistance = 5;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int countA = 1;
    int countB = 5;
    int chairs = 48;
    int minDistance = 4;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 4316532480;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int countA = 4;
    int countB = 5;
    int chairs = 13;
    int minDistance = 3;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 37440;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int countA = 5;
    int countB = 5;
    int chairs = 44;
    int minDistance = 10;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 1294428960000;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int countA = 5;
    int countB = 5;
    int chairs = 22;
    int minDistance = 3;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 9517305600;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int countA = 1;
    int countB = 2;
    int chairs = 44;
    int minDistance = 18;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 3168;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int countA = 4;
    int countB = 1;
    int chairs = 40;
    int minDistance = 15;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 316800;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int countA = 4;
    int countB = 4;
    int chairs = 35;
    int minDistance = 10;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 230630400;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int countA = 5;
    int countB = 5;
    int chairs = 29;
    int minDistance = 14;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int countA = 3;
    int countB = 4;
    int chairs = 16;
    int minDistance = 6;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int countA = 2;
    int countB = 3;
    int chairs = 15;
    int minDistance = 4;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 12600;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int countA = 4;
    int countB = 4;
    int chairs = 1;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int countA = 5;
    int countB = 5;
    int chairs = 37;
    int minDistance = 8;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 265025376000;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int countA = 3;
    int countB = 2;
    int chairs = 47;
    int minDistance = 10;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 11666340;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int countA = 5;
    int countB = 2;
    int chairs = 39;
    int minDistance = 11;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 173759040;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int countA = 1;
    int countB = 3;
    int chairs = 10;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 2100;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int countA = 4;
    int countB = 4;
    int chairs = 11;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 50688;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int countA = 2;
    int countB = 3;
    int chairs = 20;
    int minDistance = 4;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 180000;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 1;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 37276043023296000;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int countA = 1;
    int countB = 1;
    int chairs = 50;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 2350;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 10;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 14519372400000;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 2;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 11997198325008000;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 19;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 514800000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 29;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
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
    int countA = 4;
    int countB = 5;
    int chairs = 50;
    int minDistance = 7;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 6495147648000;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 4;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 1302668806032000;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 5;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 492115179744000;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 3;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 3843379077120000;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 21;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 720000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 15;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 211629600000;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int countA = 5;
    int countB = 5;
    int chairs = 50;
    int minDistance = 50;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int countA = 5;
    int countB = 5;
    int chairs = 20;
    int minDistance = 30;
    RoundTable* pObj = new RoundTable();
    clock_t start = clock();
    long result = pObj->arrangements(countA, countB, chairs, minDistance);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=8069&pm=4835
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
typedef long long LL;
 
int mind;
LL cache[6][6][100][2];
 
LL f(int a,int b,int n,int left) {
  LL &res = cache[a][b][n][left];
  if(res!=-1) return res;
  res = 0;
  if(a>0) {
    int st = left==0 ? 0 : mind-1;
    FOR(p,st,n-1) res += a*f(a-1,b,n-1-p,0);
  }
  if(b>0) {
    int st = left==1 ? 0 : mind-1;
    FOR(p,st,n-mind) res += b*f(a,b-1,n-1-p,1);
  }
  if(a==0 && b==0) ++res;
  return res;
}
 
struct RoundTable {
 
  // MAIN
  long long arrangements(int countA, int countB, int chairs, int minDistance) {
    mind=minDistance;
    memset(cache,-1,sizeof(cache));
    return chairs * f(countA-1, countB, chairs-1, 0);
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/