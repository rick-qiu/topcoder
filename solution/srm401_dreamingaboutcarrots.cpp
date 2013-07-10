/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8314
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

class DreamingAboutCarrots {
public:
    int carrotsBetweenCarrots(int x1, int y1, int x2, int y2);
};

int DreamingAboutCarrots::carrotsBetweenCarrots(int x1, int y1, int x2, int y2) {
    int ret;
    return ret;
}


int test0() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 5;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
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
    int x2 = 1;
    int y2 = 1;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int x1 = 50;
    int y1 = 48;
    int x2 = 0;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 42;
    int y2 = 36;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
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
    int x2 = 0;
    int y2 = 1;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 50;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int x1 = 42;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int x1 = 22;
    int y1 = 22;
    int x2 = 42;
    int y2 = 22;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 50;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 10;
    int y1 = 49;
    int x2 = 9;
    int y2 = 34;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 32;
    int y1 = 37;
    int x2 = 37;
    int y2 = 48;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 45;
    int y1 = 19;
    int x2 = 5;
    int y2 = 31;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int x1 = 20;
    int y1 = 19;
    int x2 = 29;
    int y2 = 22;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int x1 = 45;
    int y1 = 30;
    int x2 = 40;
    int y2 = 31;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int x1 = 35;
    int y1 = 8;
    int x2 = 36;
    int y2 = 39;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 14;
    int y1 = 5;
    int x2 = 8;
    int y2 = 4;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int x1 = 31;
    int y1 = 28;
    int x2 = 17;
    int y2 = 15;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    int y1 = 0;
    int x2 = 23;
    int y2 = 33;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int x1 = 37;
    int y1 = 10;
    int x2 = 4;
    int y2 = 31;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int x1 = 3;
    int y1 = 9;
    int x2 = 36;
    int y2 = 23;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int x1 = 2;
    int y1 = 40;
    int x2 = 20;
    int y2 = 47;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int x1 = 44;
    int y1 = 9;
    int x2 = 2;
    int y2 = 28;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int x1 = 43;
    int y1 = 38;
    int x2 = 17;
    int y2 = 6;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 17;
    int y1 = 50;
    int x2 = 10;
    int y2 = 22;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int x1 = 27;
    int y1 = 27;
    int x2 = 38;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int x1 = 2;
    int y1 = 35;
    int x2 = 10;
    int y2 = 39;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int x1 = 19;
    int y1 = 14;
    int x2 = 45;
    int y2 = 48;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int x1 = 48;
    int y1 = 30;
    int x2 = 20;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int x1 = 44;
    int y1 = 14;
    int x2 = 21;
    int y2 = 38;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int x1 = 49;
    int y1 = 48;
    int x2 = 15;
    int y2 = 41;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int x1 = 35;
    int y1 = 6;
    int x2 = 21;
    int y2 = 2;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int x1 = 5;
    int y1 = 31;
    int x2 = 24;
    int y2 = 33;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int x1 = 32;
    int y1 = 36;
    int x2 = 10;
    int y2 = 34;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int x1 = 46;
    int y1 = 21;
    int x2 = 48;
    int y2 = 14;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 9;
    int y1 = 16;
    int x2 = 11;
    int y2 = 7;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int x1 = 20;
    int y1 = 6;
    int x2 = 32;
    int y2 = 14;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int x1 = 45;
    int y1 = 27;
    int x2 = 1;
    int y2 = 17;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int x1 = 25;
    int y1 = 41;
    int x2 = 32;
    int y2 = 34;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int x1 = 48;
    int y1 = 2;
    int x2 = 10;
    int y2 = 2;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int x1 = 7;
    int y1 = 9;
    int x2 = 9;
    int y2 = 40;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 45;
    int y1 = 20;
    int x2 = 48;
    int y2 = 14;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int x1 = 15;
    int y1 = 19;
    int x2 = 3;
    int y2 = 49;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int x1 = 35;
    int y1 = 39;
    int x2 = 30;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 19;
    int y1 = 11;
    int x2 = 44;
    int y2 = 14;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int x1 = 13;
    int y1 = 45;
    int x2 = 5;
    int y2 = 38;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 9;
    int y1 = 38;
    int x2 = 21;
    int y2 = 6;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int x1 = 40;
    int y1 = 32;
    int x2 = 34;
    int y2 = 48;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 15;
    int y1 = 17;
    int x2 = 11;
    int y2 = 34;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
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
    int x1 = 11;
    int y1 = 33;
    int x2 = 49;
    int y2 = 26;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 1;
    int y2 = 10;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 1;
    int y2 = 4;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int x1 = 25;
    int y1 = 3;
    int x2 = 25;
    int y2 = 34;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int x1 = 2;
    int y1 = 3;
    int x2 = 2;
    int y2 = 33;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 2;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 10;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int x1 = 2;
    int y1 = 5;
    int x2 = 2;
    int y2 = 8;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 50;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int x1 = 2;
    int y1 = 6;
    int x2 = 10;
    int y2 = 6;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 1;
    int y2 = 23;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int x1 = 1;
    int y1 = 5;
    int x2 = 1;
    int y2 = 20;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 10;
    int y2 = 1;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 1;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int x1 = 5;
    int y1 = 7;
    int x2 = 5;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int x1 = 4;
    int y1 = 1;
    int x2 = 4;
    int y2 = 10;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 30;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int x1 = 2;
    int y1 = 0;
    int x2 = 0;
    int y2 = 2;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 1;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int x1 = 50;
    int y1 = 3;
    int x2 = 50;
    int y2 = 34;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int x1 = 0;
    int y1 = 3;
    int x2 = 0;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int x1 = 1;
    int y1 = 2;
    int x2 = 1;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 9;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int x1 = 5;
    int y1 = 2;
    int x2 = 10;
    int y2 = 2;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int x1 = 0;
    int y1 = 1;
    int x2 = 0;
    int y2 = 50;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int x1 = 2;
    int y1 = 2;
    int x2 = 2;
    int y2 = 4;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int x1 = 5;
    int y1 = 0;
    int x2 = 5;
    int y2 = 18;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 4;
    int y2 = 1;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int x1 = 1;
    int y1 = 4;
    int x2 = 1;
    int y2 = 1;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
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
    int x2 = 10;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int x1 = 4;
    int y1 = 0;
    int x2 = 0;
    int y2 = 4;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 2;
    int y2 = 8;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int x1 = 5;
    int y1 = 10;
    int x2 = 5;
    int y2 = 11;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int x1 = 3;
    int y1 = 7;
    int x2 = 5;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int x1 = 1;
    int y1 = 2;
    int x2 = 3;
    int y2 = 4;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int x1 = 2;
    int y1 = 2;
    int x2 = 2;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int x1 = 2;
    int y1 = 3;
    int x2 = 2;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int x1 = 1;
    int y1 = 5;
    int x2 = 1;
    int y2 = 30;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int x1 = 0;
    int y1 = 50;
    int x2 = 50;
    int y2 = 50;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int x1 = 0;
    int y1 = 5;
    int x2 = 0;
    int y2 = 10;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int x1 = 5;
    int y1 = 7;
    int x2 = 1;
    int y2 = 7;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int x1 = 0;
    int y1 = 1;
    int x2 = 0;
    int y2 = 49;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int x1 = 0;
    int y1 = 5;
    int x2 = 0;
    int y2 = 50;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int x1 = 1;
    int y1 = 6;
    int x2 = 10;
    int y2 = 6;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int x1 = 1;
    int y1 = 2;
    int x2 = 1;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 4;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int x1 = 1;
    int y1 = 5;
    int x2 = 1;
    int y2 = 6;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int x1 = 0;
    int y1 = 2;
    int x2 = 0;
    int y2 = 6;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int x1 = 1;
    int y1 = 0;
    int x2 = 1;
    int y2 = 50;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int x1 = 50;
    int y1 = 47;
    int x2 = 0;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int x1 = 0;
    int y1 = 50;
    int x2 = 0;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int x1 = 0;
    int y1 = 13;
    int x2 = 0;
    int y2 = 11;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int x1 = 3;
    int y1 = 5;
    int x2 = 3;
    int y2 = 4;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int x1 = 0;
    int y1 = 5;
    int x2 = 0;
    int y2 = 40;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int x1 = 0;
    int y1 = 6;
    int x2 = 6;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
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
    int y1 = 3;
    int x2 = 1;
    int y2 = 6;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int x1 = 0;
    int y1 = 3;
    int x2 = 4;
    int y2 = 2;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 49;
    int y2 = 7;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
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
    int y1 = 1;
    int x2 = 0;
    int y2 = 2;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int x1 = 2;
    int y1 = 5;
    int x2 = 2;
    int y2 = 10;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
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
    int y1 = 40;
    int x2 = 1;
    int y2 = 10;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int x1 = 20;
    int y1 = 0;
    int x2 = 10;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int x1 = 1;
    int y1 = 0;
    int x2 = 7;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int x1 = 50;
    int y1 = 1;
    int x2 = 50;
    int y2 = 2;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int x1 = 0;
    int y1 = 1;
    int x2 = 0;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int x1 = 10;
    int y1 = 10;
    int x2 = 10;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
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
    int y1 = 49;
    int x2 = 20;
    int y2 = 33;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int x1 = 10;
    int y1 = 10;
    int x2 = 10;
    int y2 = 20;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int x1 = 3;
    int y1 = 6;
    int x2 = 3;
    int y2 = 10;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int x1 = 12;
    int y1 = 43;
    int x2 = 2;
    int y2 = 17;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int x1 = 20;
    int y1 = 25;
    int x2 = 45;
    int y2 = 25;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int x1 = 50;
    int y1 = 1;
    int x2 = 50;
    int y2 = 25;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int x1 = 1;
    int y1 = 2;
    int x2 = 1;
    int y2 = 4;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int x1 = 1;
    int y1 = 2;
    int x2 = 5;
    int y2 = 10;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
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
    int y1 = 10;
    int x2 = 0;
    int y2 = 20;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int x1 = 10;
    int y1 = 2;
    int x2 = 10;
    int y2 = 23;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
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
    int y1 = 2;
    int x2 = 0;
    int y2 = 50;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int x1 = 1;
    int y1 = 10;
    int x2 = 10;
    int y2 = 10;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int x1 = 3;
    int y1 = 3;
    int x2 = 3;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int x1 = 4;
    int y1 = 1;
    int x2 = 4;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int x1 = 11;
    int y1 = 11;
    int x2 = 11;
    int y2 = 50;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int x1 = 10;
    int y1 = 0;
    int x2 = 10;
    int y2 = 20;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int x1 = 10;
    int y1 = 0;
    int x2 = 20;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int x1 = 20;
    int y1 = 20;
    int x2 = 20;
    int y2 = 30;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 1;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int x1 = 0;
    int y1 = 1;
    int x2 = 1;
    int y2 = 2;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int x1 = 0;
    int y1 = 1;
    int x2 = 0;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int x1 = 50;
    int y1 = 50;
    int x2 = 50;
    int y2 = 48;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 3;
    int y2 = 1;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int x1 = 2;
    int y1 = 0;
    int x2 = 50;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int x1 = 0;
    int y1 = 5;
    int x2 = 5;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int x1 = 1;
    int y1 = 33;
    int x2 = 1;
    int y2 = 22;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int x1 = 1;
    int y1 = 2;
    int x2 = 2;
    int y2 = 2;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int x1 = 50;
    int y1 = 0;
    int x2 = 0;
    int y2 = 50;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int x1 = 2;
    int y1 = 4;
    int x2 = 5;
    int y2 = 4;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 48;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int x1 = 2;
    int y1 = 40;
    int x2 = 2;
    int y2 = 30;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 5;
    int y2 = 1;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int x1 = 2;
    int y1 = 3;
    int x2 = 2;
    int y2 = 1;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int x1 = 2;
    int y1 = 1;
    int x2 = 4;
    int y2 = 2;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int x1 = 14;
    int y1 = 11;
    int x2 = 0;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 1;
    int y2 = 13;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int x1 = 2;
    int y1 = 3;
    int x2 = 2;
    int y2 = 8;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int x1 = 4;
    int y1 = 1;
    int x2 = 4;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 5;
    int y2 = 0;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int x1 = 0;
    int y1 = 5;
    int x2 = 0;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int x1 = 5;
    int y1 = 1;
    int x2 = 10;
    int y2 = 1;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int x1 = 50;
    int y1 = 48;
    int x2 = 50;
    int y2 = 50;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int x1 = 1;
    int y1 = 1;
    int x2 = 4;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int x1 = 1;
    int y1 = 5;
    int x2 = 1;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int x1 = 5;
    int y1 = 10;
    int x2 = 5;
    int y2 = 12;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int x1 = 8;
    int y1 = 1;
    int x2 = 0;
    int y2 = 10;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int x1 = 0;
    int y1 = 2;
    int x2 = 0;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int x1 = 1;
    int y1 = 10;
    int x2 = 1;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int x1 = 3;
    int y1 = 5;
    int x2 = 10;
    int y2 = 5;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int x1 = 3;
    int y1 = 7;
    int x2 = 7;
    int y2 = 3;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int x1 = 50;
    int y1 = 50;
    int x2 = 5;
    int y2 = 15;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int x1 = 2;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int x1 = 0;
    int y1 = 40;
    int x2 = 0;
    int y2 = 50;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int x1 = 1;
    int y1 = 3;
    int x2 = 1;
    int y2 = 9;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int x1 = 21;
    int y1 = 19;
    int x2 = 3;
    int y2 = 49;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int x1 = 1;
    int y1 = 0;
    int x2 = 1;
    int y2 = 10;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int x1 = 1;
    int y1 = 43;
    int x2 = 37;
    int y2 = 1;
    DreamingAboutCarrots* pObj = new DreamingAboutCarrots();
    clock_t start = clock();
    int result = pObj->carrotsBetweenCarrots(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22714770&rd=12173&pm=8314
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
 
class DreamingAboutCarrots {
public:
  int carrotsBetweenCarrots(int, int, int, int);
};
 
int DreamingAboutCarrots::carrotsBetweenCarrots(int x1, int y1, int x2, int y2) {
  return __gcd(abs(x1-x2),abs(y1-y2))-1;  
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/