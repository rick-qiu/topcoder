/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6085
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

class NewAlbum {
public:
    int leastAmountOfCDs(int nSongs, int length, int cdCapacity);
};

int NewAlbum::leastAmountOfCDs(int nSongs, int length, int cdCapacity) {
    int ret;
    return ret;
}


int test0() {
    int nSongs = 7;
    int length = 2;
    int cdCapacity = 6;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 20;
    int length = 1;
    int cdCapacity = 100;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 26;
    int length = 1;
    int cdCapacity = 100;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int nSongs = 26;
    int length = 3;
    int cdCapacity = 51;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int nSongs = 67;
    int length = 271;
    int cdCapacity = 1000;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int nSongs = 27;
    int length = 1;
    int cdCapacity = 27;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int nSongs = 63;
    int length = 1;
    int cdCapacity = 99;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int nSongs = 38;
    int length = 27;
    int cdCapacity = 705;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int nSongs = 61;
    int length = 12;
    int cdCapacity = 319;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int nSongs = 31;
    int length = 25;
    int cdCapacity = 483;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int nSongs = 75;
    int length = 5;
    int cdCapacity = 373;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int nSongs = 85;
    int length = 19;
    int cdCapacity = 923;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int nSongs = 90;
    int length = 19;
    int cdCapacity = 642;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int nSongs = 67;
    int length = 37;
    int cdCapacity = 712;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int nSongs = 63;
    int length = 30;
    int cdCapacity = 821;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int nSongs = 58;
    int length = 4;
    int cdCapacity = 163;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int nSongs = 48;
    int length = 20;
    int cdCapacity = 740;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int nSongs = 69;
    int length = 6;
    int cdCapacity = 304;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int nSongs = 74;
    int length = 9;
    int cdCapacity = 616;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 58;
    int length = 11;
    int cdCapacity = 390;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int nSongs = 97;
    int length = 20;
    int cdCapacity = 602;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int nSongs = 61;
    int length = 42;
    int cdCapacity = 701;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int nSongs = 54;
    int length = 13;
    int cdCapacity = 586;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int nSongs = 54;
    int length = 9;
    int cdCapacity = 279;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int nSongs = 77;
    int length = 50;
    int cdCapacity = 838;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int nSongs = 47;
    int length = 5;
    int cdCapacity = 102;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 28;
    int length = 59;
    int cdCapacity = 919;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int nSongs = 79;
    int length = 7;
    int cdCapacity = 175;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int nSongs = 29;
    int length = 50;
    int cdCapacity = 858;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int nSongs = 100;
    int length = 10000;
    int cdCapacity = 10000;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int nSongs = 100;
    int length = 1;
    int cdCapacity = 10000;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 79;
    int length = 89;
    int cdCapacity = 264;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int nSongs = 100;
    int length = 89;
    int cdCapacity = 582;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int nSongs = 100;
    int length = 657;
    int cdCapacity = 10000;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int nSongs = 100;
    int length = 687;
    int cdCapacity = 9572;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int nSongs = 100;
    int length = 10;
    int cdCapacity = 150;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int nSongs = 1;
    int length = 1;
    int cdCapacity = 1;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 1;
    int length = 1;
    int cdCapacity = 10000;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int nSongs = 1;
    int length = 10000;
    int cdCapacity = 10000;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int nSongs = 1;
    int length = 13;
    int cdCapacity = 13;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int nSongs = 1;
    int length = 12;
    int cdCapacity = 13;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int nSongs = 100;
    int length = 1;
    int cdCapacity = 27;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int nSongs = 88;
    int length = 1;
    int cdCapacity = 49;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int nSongs = 27;
    int length = 1;
    int cdCapacity = 27;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int nSongs = 67;
    int length = 271;
    int cdCapacity = 1000;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int nSongs = 43;
    int length = 2;
    int cdCapacity = 45;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 28;
    int length = 1;
    int cdCapacity = 29;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int nSongs = 40;
    int length = 1;
    int cdCapacity = 53;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int nSongs = 33;
    int length = 1;
    int cdCapacity = 40;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int nSongs = 67;
    int length = 1;
    int cdCapacity = 53;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int nSongs = 27;
    int length = 1;
    int cdCapacity = 28;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int nSongs = 58;
    int length = 1;
    int cdCapacity = 29;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int nSongs = 42;
    int length = 1;
    int cdCapacity = 27;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int nSongs = 88;
    int length = 11;
    int cdCapacity = 179;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int nSongs = 26;
    int length = 1;
    int cdCapacity = 100;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int nSongs = 43;
    int length = 2;
    int cdCapacity = 44;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int nSongs = 33;
    int length = 5;
    int cdCapacity = 120;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int nSongs = 2;
    int length = 2;
    int cdCapacity = 2;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int nSongs = 47;
    int length = 1;
    int cdCapacity = 33;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int nSongs = 76;
    int length = 1;
    int cdCapacity = 100;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 80;
    int length = 1;
    int cdCapacity = 81;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int nSongs = 28;
    int length = 1;
    int cdCapacity = 30;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int nSongs = 50;
    int length = 9;
    int cdCapacity = 99;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int nSongs = 13;
    int length = 1;
    int cdCapacity = 28;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int nSongs = 73;
    int length = 1;
    int cdCapacity = 60;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 43;
    int length = 1;
    int cdCapacity = 29;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int nSongs = 13;
    int length = 1;
    int cdCapacity = 1000;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int nSongs = 1;
    int length = 1;
    int cdCapacity = 1;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 27;
    int length = 1;
    int cdCapacity = 53;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int nSongs = 94;
    int length = 1;
    int cdCapacity = 53;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int nSongs = 53;
    int length = 1;
    int cdCapacity = 39;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int nSongs = 2;
    int length = 2;
    int cdCapacity = 5;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int nSongs = 30;
    int length = 1;
    int cdCapacity = 33;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int nSongs = 80;
    int length = 2;
    int cdCapacity = 80;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 100;
    int length = 3;
    int cdCapacity = 11;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int nSongs = 88;
    int length = 1;
    int cdCapacity = 29;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int nSongs = 13;
    int length = 1;
    int cdCapacity = 2000;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int nSongs = 28;
    int length = 4;
    int cdCapacity = 75;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 100;
    int length = 2;
    int cdCapacity = 2;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int nSongs = 97;
    int length = 9997;
    int cdCapacity = 9997;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int nSongs = 10;
    int length = 1;
    int cdCapacity = 19;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int nSongs = 53;
    int length = 1;
    int cdCapacity = 79;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int nSongs = 2;
    int length = 5;
    int cdCapacity = 11;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int nSongs = 54;
    int length = 1;
    int cdCapacity = 55;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int nSongs = 53;
    int length = 1;
    int cdCapacity = 40;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int nSongs = 55;
    int length = 1;
    int cdCapacity = 27;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int nSongs = 13;
    int length = 13;
    int cdCapacity = 13;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int nSongs = 2;
    int length = 10;
    int cdCapacity = 21;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int nSongs = 100;
    int length = 1;
    int cdCapacity = 5;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int nSongs = 3;
    int length = 5;
    int cdCapacity = 17;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int nSongs = 67;
    int length = 2;
    int cdCapacity = 80;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 2;
    int length = 1;
    int cdCapacity = 3;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int nSongs = 12;
    int length = 1;
    int cdCapacity = 23;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int nSongs = 80;
    int length = 1;
    int cdCapacity = 54;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int nSongs = 65;
    int length = 1288;
    int cdCapacity = 1687;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int nSongs = 58;
    int length = 562;
    int cdCapacity = 8666;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int nSongs = 1;
    int length = 5;
    int cdCapacity = 5;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int nSongs = 88;
    int length = 1;
    int cdCapacity = 51;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int nSongs = 29;
    int length = 4;
    int cdCapacity = 80;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int nSongs = 1;
    int length = 10;
    int cdCapacity = 10;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int nSongs = 4;
    int length = 1;
    int cdCapacity = 3;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int nSongs = 53;
    int length = 1;
    int cdCapacity = 53;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int nSongs = 1;
    int length = 13;
    int cdCapacity = 13;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int nSongs = 80;
    int length = 1;
    int cdCapacity = 52;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int nSongs = 28;
    int length = 20;
    int cdCapacity = 319;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int nSongs = 1;
    int length = 12;
    int cdCapacity = 12;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int nSongs = 3;
    int length = 1;
    int cdCapacity = 5;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int nSongs = 13;
    int length = 1;
    int cdCapacity = 100;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int nSongs = 80;
    int length = 10;
    int cdCapacity = 43;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int nSongs = 61;
    int length = 2;
    int cdCapacity = 48;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 88;
    int length = 1;
    int cdCapacity = 30;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int nSongs = 13;
    int length = 88;
    int cdCapacity = 6150;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int nSongs = 33;
    int length = 1;
    int cdCapacity = 39;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
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
    int nSongs = 41;
    int length = 1;
    int cdCapacity = 28;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int nSongs = 13;
    int length = 1;
    int cdCapacity = 5;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int nSongs = 40;
    int length = 1;
    int cdCapacity = 54;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int nSongs = 5;
    int length = 1;
    int cdCapacity = 10;
    NewAlbum* pObj = new NewAlbum();
    clock_t start = clock();
    int result = pObj->leastAmountOfCDs(nSongs, length, cdCapacity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=9817&pm=6085
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
#include <numeric>
using namespace std;
 
 
typedef vector <int > VI;
#define REP(i,n) for (int i=0; i<n; ++i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define FOR(i,p,k) for (int i=p; i<=k; ++i)
#define PB push_back
#define ALL(x) x.begin(),x.end()
#define SIZE(x) (int)x.size()
 
const int N=200;
int t[N];
 
    class NewAlbum
        { 
        public: 
        int leastAmountOfCDs(int n, int l, int cd){ 
              l++; cd++;
              t[0]=0;
              FOR(i,1,n){
                t[i]=i;
                FOR(j,1,i) if (j%13 && j*l<=cd) t[i]=min(t[i],1+t[i-j]);
              }
              return t[n];     
            } 
        
 
         }; 
 
    
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/