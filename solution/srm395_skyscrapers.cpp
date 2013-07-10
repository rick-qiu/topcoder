/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8582
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

class Skyscrapers {
public:
    int buildingCount(int N, int leftSide, int rightSide);
};

int Skyscrapers::buildingCount(int N, int leftSide, int rightSide) {
    int ret;
    return ret;
}


int test0() {
    int N = 3;
    int leftSide = 2;
    int rightSide = 2;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
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
    int leftSide = 2;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
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
    int N = 5;
    int leftSide = 3;
    int rightSide = 2;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 100;
    int leftSide = 2;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 990953332;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 100;
    int leftSide = 13;
    int rightSide = 21;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 492729563;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 12;
    int leftSide = 1;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 8;
    int leftSide = 3;
    int rightSide = 2;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 4872;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 15;
    int leftSide = 2;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 227020758;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 14;
    int leftSide = 2;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 479001600;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 12;
    int leftSide = 11;
    int rightSide = 3;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 78;
    int leftSide = 44;
    int rightSide = 56;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 87;
    int leftSide = 23;
    int rightSide = 11;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 699722100;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 100;
    int leftSide = 99;
    int rightSide = 99;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 100;
    int leftSide = 95;
    int rightSide = 4;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 310413463;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 100;
    int leftSide = 49;
    int rightSide = 52;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 504025591;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 67;
    int leftSide = 32;
    int rightSide = 24;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 905017808;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 7;
    int leftSide = 6;
    int rightSide = 2;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 9;
    int leftSide = 5;
    int rightSide = 5;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 24;
    int leftSide = 18;
    int rightSide = 9;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 1;
    int leftSide = 1;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 2;
    int leftSide = 2;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 72;
    int leftSide = 1;
    int rightSide = 72;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 87;
    int leftSide = 87;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 16;
    int leftSide = 16;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 37;
    int leftSide = 1;
    int rightSide = 37;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 29;
    int leftSide = 12;
    int rightSide = 15;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 269928514;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 77;
    int leftSide = 6;
    int rightSide = 10;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 999993982;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 73;
    int leftSide = 11;
    int rightSide = 2;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 999991807;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 80;
    int leftSide = 30;
    int rightSide = 50;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 999983834;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 95;
    int leftSide = 40;
    int rightSide = 54;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 999954301;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 66;
    int leftSide = 5;
    int rightSide = 5;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 999953844;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 100;
    int leftSide = 8;
    int rightSide = 7;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 610390291;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 58;
    int leftSide = 32;
    int rightSide = 44;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 87;
    int leftSide = 5;
    int rightSide = 13;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 540283095;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 86;
    int leftSide = 12;
    int rightSide = 34;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 810933864;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 78;
    int leftSide = 54;
    int rightSide = 22;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 185138699;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 90;
    int leftSide = 45;
    int rightSide = 47;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
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
    int N = 90;
    int leftSide = 45;
    int rightSide = 46;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 722170429;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 38;
    int leftSide = 1;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
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
    int N = 87;
    int leftSide = 1;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
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
    int N = 44;
    int leftSide = 34;
    int rightSide = 8;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 956315439;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 71;
    int leftSide = 55;
    int rightSide = 8;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 329451734;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 94;
    int leftSide = 94;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 87;
    int leftSide = 1;
    int rightSide = 87;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 36;
    int leftSide = 13;
    int rightSide = 24;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 834451800;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 12;
    int leftSide = 3;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 10628640;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 14;
    int leftSide = 1;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 9;
    int leftSide = 9;
    int rightSide = 2;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 100;
    int leftSide = 24;
    int rightSide = 24;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 520063872;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 100;
    int leftSide = 40;
    int rightSide = 41;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 911646200;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 98;
    int leftSide = 17;
    int rightSide = 42;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 393135880;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 100;
    int leftSide = 20;
    int rightSide = 23;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 959802400;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 99;
    int leftSide = 50;
    int rightSide = 49;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 528934656;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 100;
    int leftSide = 25;
    int rightSide = 25;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 848175703;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 100;
    int leftSide = 32;
    int rightSide = 21;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 790323138;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 100;
    int leftSide = 100;
    int rightSide = 1;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 100;
    int leftSide = 20;
    int rightSide = 40;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 667870492;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 100;
    int leftSide = 2;
    int rightSide = 2;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 598881956;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 100;
    int leftSide = 23;
    int rightSide = 37;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 714070384;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 100;
    int leftSide = 39;
    int rightSide = 29;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 550026577;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 100;
    int leftSide = 25;
    int rightSide = 37;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 702363931;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 100;
    int leftSide = 25;
    int rightSide = 61;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 928920281;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 100;
    int leftSide = 50;
    int rightSide = 50;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 265248055;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 100;
    int leftSide = 53;
    int rightSide = 37;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 403760718;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 100;
    int leftSide = 7;
    int rightSide = 8;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 610390291;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 100;
    int leftSide = 35;
    int rightSide = 35;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 151954186;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 100;
    int leftSide = 20;
    int rightSide = 20;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 986752476;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 100;
    int leftSide = 49;
    int rightSide = 50;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 658420915;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 100;
    int leftSide = 49;
    int rightSide = 30;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 175486704;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 100;
    int leftSide = 20;
    int rightSide = 29;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 929804441;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 21;
    int leftSide = 8;
    int rightSide = 5;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 651222009;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 100;
    int leftSide = 50;
    int rightSide = 51;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 769496025;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 23;
    int leftSide = 9;
    int rightSide = 6;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 384590516;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 99;
    int leftSide = 7;
    int rightSide = 7;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 56353603;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 100;
    int leftSide = 10;
    int rightSide = 10;
    Skyscrapers* pObj = new Skyscrapers();
    clock_t start = clock();
    int result = pObj->buildingCount(N, leftSide, rightSide);
    clock_t end = clock();
    delete pObj;
    int expected = 559891373;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22710782&rd=11129&pm=8582
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
long long d[101][101][101];
class Skyscrapers {
public:
  int buildingCount(int, int, int);
};
 
int Skyscrapers::buildingCount(int N, int leftSide, int rightSide) {
  int n = N;
  int p = leftSide;
  int q = rightSide;
  d[1][1][1]=1;
  int i,j,k;
  for(i=2; i<=n; i++){
    for(j=1; j<=i; j++){
      for(k=1; k<=i; k++){
        d[i][j][k] = (long long)d[i-1][j][k]*(i-2)+d[i-1][j-1][k]+d[i-1][j][k-1];
        d[i][j][k] = d[i][j][k] % 1000000007;
      }
    }
  }
  return (int)(d[n][p][q]%1000000007);
}

********************************************************************************
*******************************************************************************/