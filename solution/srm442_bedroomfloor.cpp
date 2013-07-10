/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4810
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

class BedroomFloor {
public:
    long numberOfSticks(int x1, int y1, int x2, int y2);
};

long BedroomFloor::numberOfSticks(int x1, int y1, int x2, int y2) {
    long ret;
    return ret;
}


int test0() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 5;
    int y2 = 5;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 10;
    int y2 = 2;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int x1 = 2;
    int y1 = 2;
    int x2 = 8;
    int y2 = 8;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int x1 = 8;
    int y1 = 5;
    int x2 = 20;
    int y2 = 16;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 1000000;
    int y2 = 1000000;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 200000000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int x1 = 9;
    int y1 = 3;
    int x2 = 10;
    int y2 = 9;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int x1 = 101;
    int y1 = 102;
    int x2 = 203;
    int y2 = 204;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 2142;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int x1 = 12;
    int y1 = 37;
    int x2 = 89;
    int y2 = 83;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 753;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int x1 = 49;
    int y1 = 51;
    int x2 = 64;
    int y2 = 70;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int x1 = 32;
    int y1 = 2;
    int x2 = 75;
    int y2 = 31;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 259;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int x1 = 68;
    int y1 = 21;
    int x2 = 78;
    int y2 = 94;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 148;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int x1 = 73;
    int y1 = 36;
    int x2 = 74;
    int y2 = 97;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int x1 = 10;
    int y1 = 82;
    int x2 = 15;
    int y2 = 91;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int x1 = 80;
    int y1 = 83;
    int x2 = 87;
    int y2 = 88;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int x1 = 42;
    int y1 = 34;
    int x2 = 67;
    int y2 = 80;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 230;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int x1 = 66;
    int y1 = 79;
    int x2 = 68;
    int y2 = 98;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int x1 = 27;
    int y1 = 56;
    int x2 = 74;
    int y2 = 69;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 136;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int x1 = 58;
    int y1 = 85;
    int x2 = 62;
    int y2 = 86;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
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
    int x1 = 17;
    int y1 = 2;
    int x2 = 21;
    int y2 = 66;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int x1 = 42;
    int y1 = 91;
    int x2 = 91;
    int y2 = 95;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int x1 = 24;
    int y1 = 23;
    int x2 = 77;
    int y2 = 88;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 689;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int x1 = 71;
    int y1 = 15;
    int x2 = 75;
    int y2 = 76;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 54;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int x1 = 26;
    int y1 = 44;
    int x2 = 49;
    int y2 = 48;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int x1 = 36;
    int y1 = 77;
    int x2 = 75;
    int y2 = 81;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int x1 = 24;
    int y1 = 7;
    int x2 = 26;
    int y2 = 60;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int x1 = 53;
    int y1 = 26;
    int x2 = 62;
    int y2 = 41;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 28;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int x1 = 36;
    int y1 = 59;
    int x2 = 79;
    int y2 = 83;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 216;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int x1 = 0;
    int y1 = 39;
    int x2 = 64;
    int y2 = 64;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 322;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int x1 = 19;
    int y1 = 79;
    int x2 = 64;
    int y2 = 82;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int x1 = 615446;
    int y1 = 163644;
    int x2 = 749490;
    int y2 = 650135;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 13042275165;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int x1 = 321707;
    int y1 = 271981;
    int x2 = 634146;
    int y2 = 453664;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 11353051623;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int x1 = 94514;
    int y1 = 373398;
    int x2 = 504724;
    int y2 = 692624;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 26190001024;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int x1 = 532129;
    int y1 = 292948;
    int x2 = 654675;
    int y2 = 356541;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1558613556;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int x1 = 270876;
    int y1 = 199737;
    int x2 = 749362;
    int y2 = 878413;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 64947516434;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int x1 = 334703;
    int y1 = 463001;
    int x2 = 849526;
    int y2 = 939461;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 49058513316;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int x1 = 177768;
    int y1 = 453617;
    int x2 = 938416;
    int y2 = 956955;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 76572609734;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int x1 = 851663;
    int y1 = 776821;
    int x2 = 888567;
    int y2 = 943688;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1231630486;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int x1 = 825156;
    int y1 = 475253;
    int x2 = 948036;
    int y2 = 598772;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 3035615232;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int x1 = 339763;
    int y1 = 786347;
    int x2 = 433350;
    int y2 = 978569;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 3597910353;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int x1 = 168821;
    int y1 = 456163;
    int x2 = 844707;
    int y2 = 936819;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 64973905725;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int x1 = 759046;
    int y1 = 16775;
    int x2 = 992749;
    int y2 = 710361;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 32418741139;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int x1 = 970271;
    int y1 = 859014;
    int x2 = 998515;
    int y2 = 877826;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 106265226;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int x1 = 553328;
    int y1 = 159457;
    int x2 = 696612;
    int y2 = 382583;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 6394085141;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int x1 = 615868;
    int y1 = 774738;
    int x2 = 823539;
    int y2 = 865654;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 3776168115;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int x1 = 180432;
    int y1 = 231705;
    int x2 = 746417;
    int y2 = 928042;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 78823287689;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int x1 = 535905;
    int y1 = 131492;
    int x2 = 895196;
    int y2 = 915257;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 56319942123;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int x1 = 620673;
    int y1 = 50521;
    int x2 = 700563;
    int y2 = 431891;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 6093529860;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int x1 = 819262;
    int y1 = 401220;
    int x2 = 939252;
    int y2 = 726504;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 7806177431;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int x1 = 245975;
    int y1 = 47960;
    int x2 = 471041;
    int y2 = 855069;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 36330558839;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int x1 = 319836;
    int y1 = 198500;
    int x2 = 832177;
    int y2 = 903900;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 72281174090;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int x1 = 446945;
    int y1 = 123155;
    int x2 = 830881;
    int y2 = 924441;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 61528508340;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int x1 = 169374;
    int y1 = 473311;
    int x2 = 373539;
    int y2 = 499159;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1055492217;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int x1 = 520038;
    int y1 = 828436;
    int x2 = 527848;
    int y2 = 907168;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 122981727;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int x1 = 400514;
    int y1 = 924669;
    int x2 = 719526;
    int y2 = 953442;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1835786456;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int x1 = 2282;
    int y1 = 18669;
    int x2 = 462561;
    int y2 = 118692;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9207697284;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int x1 = 189023;
    int y1 = 53547;
    int x2 = 889895;
    int y2 = 398667;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 48377006184;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int x1 = 259624;
    int y1 = 740923;
    int x2 = 265248;
    int y2 = 920593;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 202110783;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int x1 = 363687;
    int y1 = 865797;
    int x2 = 511521;
    int y2 = 877930;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 358764765;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int x1 = 581910;
    int y1 = 771045;
    int x2 = 763835;
    int y2 = 961963;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 6946587814;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int x1 = 170148;
    int y1 = 981582;
    int x2 = 961220;
    int y2 = 984368;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 441101190;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int x1 = 646630;
    int y1 = 343131;
    int x2 = 696966;
    int y2 = 512509;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1705162202;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int x1 = 575419;
    int y1 = 501044;
    int x2 = 734755;
    int y2 = 960723;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 14648682629;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int x1 = 945345;
    int y1 = 57113;
    int x2 = 977501;
    int y2 = 837110;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 5016316707;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int x1 = 917486;
    int y1 = 610702;
    int x2 = 952849;
    int y2 = 914047;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 2145498517;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int x1 = 177100;
    int y1 = 867939;
    int x2 = 220713;
    int y2 = 949260;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 709342457;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int x1 = 224275;
    int y1 = 789663;
    int x2 = 654529;
    int y2 = 840762;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 4397157965;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int x1 = 361188;
    int y1 = 394953;
    int x2 = 946983;
    int y2 = 501011;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 12425649222;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int x1 = 426976;
    int y1 = 12306;
    int x2 = 757402;
    int y2 = 637240;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 41299015160;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int x1 = 476643;
    int y1 = 819298;
    int x2 = 816047;
    int y2 = 885033;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 4462150962;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int x1 = 76315;
    int y1 = 202130;
    int x2 = 728241;
    int y2 = 892697;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 90039716409;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int x1 = 811965;
    int y1 = 37600;
    int x2 = 861948;
    int y2 = 837565;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 7997090111;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int x1 = 689047;
    int y1 = 229317;
    int x2 = 861501;
    int y2 = 830793;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 20745517550;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int x1 = 580150;
    int y1 = 266661;
    int x2 = 824902;
    int y2 = 645306;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 18534843140;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int x1 = 272094;
    int y1 = 274291;
    int x2 = 590527;
    int y2 = 581202;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 19546150512;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int x1 = 341095;
    int y1 = 856415;
    int x2 = 783791;
    int y2 = 944642;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 7811561311;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int x1 = 612593;
    int y1 = 765276;
    int x2 = 614601;
    int y2 = 809232;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 17652730;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int x1 = 132678;
    int y1 = 77197;
    int x2 = 961955;
    int y2 = 125990;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 8092738629;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int x1 = 121098;
    int y1 = 82827;
    int x2 = 426303;
    int y2 = 595423;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 31289494518;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1000000;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 200000;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 1000000;
    int y2 = 1;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 200000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int x1 = 9;
    int y1 = 12;
    int x2 = 51;
    int y2 = 55;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 362;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int x1 = 32;
    int y1 = 53;
    int x2 = 57;
    int y2 = 85;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 161;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int x1 = 23;
    int y1 = 40;
    int x2 = 65;
    int y2 = 64;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 207;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int x1 = 39;
    int y1 = 42;
    int x2 = 45;
    int y2 = 89;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 57;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int x1 = 3;
    int y1 = 63;
    int x2 = 30;
    int y2 = 76;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 71;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int x1 = 9;
    int y1 = 4;
    int x2 = 94;
    int y2 = 42;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 646;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int x1 = 9;
    int y1 = 4;
    int x2 = 34;
    int y2 = 52;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 240;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int x1 = 19;
    int y1 = 11;
    int x2 = 40;
    int y2 = 52;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 173;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int x1 = 2;
    int y1 = 3;
    int x2 = 999777;
    int y2 = 999777;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199909910148;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int x1 = 7;
    int y1 = 17;
    int x2 = 999987;
    int y2 = 999982;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199989000140;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int x1 = 1;
    int y1 = 6;
    int x2 = 999998;
    int y2 = 999992;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199996800007;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int x1 = 7;
    int y1 = 8;
    int x2 = 999996;
    int y2 = 999999;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199996000020;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int x1 = 8;
    int y1 = 2;
    int x2 = 999999;
    int y2 = 999996;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199997000011;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int x1 = 4353;
    int y1 = 4568;
    int x2 = 34567;
    int y2 = 56778;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 315499809;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int x1 = 2;
    int y1 = 1;
    int x2 = 999473;
    int y2 = 999982;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199890702056;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int x1 = 77;
    int y1 = 79;
    int x2 = 98721;
    int y2 = 97148;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1915074458;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int x1 = 8;
    int y1 = 4;
    int x2 = 999993;
    int y2 = 999997;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199995600021;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int x1 = 2;
    int y1 = 1;
    int x2 = 999997;
    int y2 = 999996;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199998000006;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int x1 = 2;
    int y1 = 2;
    int x2 = 4;
    int y2 = 4;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int x1 = 19;
    int y1 = 4126;
    int x2 = 987642;
    int y2 = 874231;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 171867142083;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int x1 = 3;
    int y1 = 9;
    int x2 = 11;
    int y2 = 13;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int x1 = 2;
    int y1 = 8;
    int x2 = 999997;
    int y2 = 999924;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199982350083;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int x1 = 81;
    int y1 = 93;
    int x2 = 99871;
    int y2 = 97971;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1953449124;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int x1 = 1;
    int y1 = 2;
    int x2 = 4;
    int y2 = 500003;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 400001;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 3;
    int y2 = 3;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int x1 = 4;
    int y1 = 0;
    int x2 = 14;
    int y2 = 5;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int x1 = 2;
    int y1 = 0;
    int x2 = 7;
    int y2 = 1;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 300013;
    int y2 = 300006;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 18001170016;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int x1 = 1;
    int y1 = 2;
    int x2 = 999987;
    int y2 = 999986;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199994000045;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 4;
    int y2 = 4;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int x1 = 6;
    int y1 = 1;
    int x2 = 17;
    int y2 = 7;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int x1 = 2;
    int y1 = 2;
    int x2 = 3;
    int y2 = 3;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int x1 = 2;
    int y1 = 0;
    int x2 = 999991;
    int y2 = 999991;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199996000020;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 4;
    int y2 = 999999;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 799999;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int x1 = 1;
    int y1 = 0;
    int x2 = 6;
    int y2 = 1;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 3;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int x1 = 13;
    int y1 = 12;
    int x2 = 60;
    int y2 = 26;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 134;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int x1 = 1;
    int y1 = 2;
    int x2 = 999998;
    int y2 = 999996;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 199998600001;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int x1 = 3;
    int y1 = 3;
    int x2 = 14;
    int y2 = 4;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int x1 = 2;
    int y1 = 0;
    int x2 = 7;
    int y2 = 8;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int x1 = 5;
    int y1 = 4;
    int x2 = 8;
    int y2 = 6;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int x1 = 4;
    int y1 = 5;
    int x2 = 46;
    int y2 = 22;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 143;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int x1 = 3;
    int y1 = 0;
    int x2 = 8;
    int y2 = 1;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int x1 = 0;
    int y1 = 1;
    int x2 = 4;
    int y2 = 6;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int x1 = 3;
    int y1 = 0;
    int x2 = 6;
    int y2 = 1;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int x1 = 0;
    int y1 = 3;
    int x2 = 1;
    int y2 = 8;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int x1 = 2;
    int y1 = 0;
    int x2 = 11;
    int y2 = 5;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int x1 = 9;
    int y1 = 2;
    int x2 = 13;
    int y2 = 6;
    BedroomFloor* pObj = new BedroomFloor();
    clock_t start = clock();
    long result = pObj->numberOfSticks(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=13750&pm=4810
********************************************************************************
#include <cstdio> 
#include <iostream> 
#include <algorithm> 
#include <set> 
#include <map> 
#include <stack> 
#include <list> 
#include <queue> 
#include <deque> 
#include <cctype> 
#include <string> 
#include <vector> 
#include <sstream> 
#include <iterator> 
#include <cmath> 
#include <numeric> 
using namespace std; 
 
typedef long long LL; 
 
const int K = 6; 
LL potrzeba[K]; 
 
void dolicz(int x1,int x2,int h, int ile_razy, int poziom_y){ 
  if (h == 0) return; 
  while (x1 < x2){ 
    int o_ile = min(x2-x1,5-x1%5); 
    if (x1 / 5 % 2 == poziom_y % 2){ 
      //poziome 
      potrzeba[o_ile] += h * (LL)ile_razy; 
    } else { 
      //pionowe 
      potrzeba[h] += o_ile * (LL)ile_razy; 
    } 
    x1 += o_ile; 
  } 
} 
 
class BedroomFloor { 
  public: 
  long long numberOfSticks(int x1, int y1, int x2, int y2) { 
    if (y1/5 == y2/5) dolicz(x1,x2,y2-y1, 1, y1/5); 
    else{ 
      if (y1 % 5){ 
        dolicz(x1,x2,5 - (y1%5), 1, y1/5); 
        y1 += 5-(y1%5); 
      } 
      if (y2 % 5){ 
        dolicz(x1,x2,y2%5, 1, y2/5); 
        y2 -= y2%5; 
      } 
 
      int paski = (y2-y1) / 5; 
      dolicz(x1,x2,5,(paski+1)/2,y1/5); 
      dolicz(x1,x2,5,paski/2,y1/5+1); 
    } 
 
    LL res = potrzeba[5] + potrzeba[4] + potrzeba[3]; 
    potrzeba[1] = max(0LL, potrzeba[1] - potrzeba[4]); 
    LL mam_dwojki = potrzeba[3]; 
    LL zabieram = min(mam_dwojki, potrzeba[2]); 
    mam_dwojki -= zabieram; 
    potrzeba[2] -= zabieram; 
 
    LL mam_jedynki = 2 * mam_dwojki; 
 
    if (potrzeba[2]){ 
      LL dwa_razy = potrzeba[2] / 2; 
      res += dwa_razy; 
 
      mam_jedynki += dwa_razy; 
      potrzeba[2] -= 2 * dwa_razy; 
 
      if (potrzeba[2]) res++, mam_jedynki += 3; 
    } 
 
    potrzeba[1] = max(0LL, potrzeba[1] - mam_jedynki); 
    res += (potrzeba[1] + 4) / 5; 
 
    return res; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/