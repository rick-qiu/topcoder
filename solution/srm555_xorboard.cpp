/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12180
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

class XorBoard {
public:
    int count(int H, int W, int Rcount, int Ccount, int S);
};

int XorBoard::count(int H, int W, int Rcount, int Ccount, int S) {
    int ret;
    return ret;
}


int test0() {
    int H = 2;
    int W = 2;
    int Rcount = 2;
    int Ccount = 2;
    int S = 4;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 2;
    int W = 2;
    int Rcount = 0;
    int Ccount = 0;
    int S = 1;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 10;
    int W = 20;
    int Rcount = 50;
    int Ccount = 40;
    int S = 200;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 333759825;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int H = 1200;
    int W = 1000;
    int Rcount = 800;
    int Ccount = 600;
    int S = 4000;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 96859710;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int H = 555;
    int W = 555;
    int Rcount = 555;
    int Ccount = 555;
    int S = 5550;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 549361755;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1555;
    int Ccount = 1555;
    int S = 1110000;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 188078400;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1555;
    int Ccount = 1555;
    int S = 1186490;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 337179150;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1554;
    int Ccount = 1555;
    int S = 1186490;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1555;
    int Ccount = 1554;
    int S = 1186490;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1555;
    int W = 1555;
    int Rcount = 1554;
    int Ccount = 1554;
    int S = 1186490;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 324123885;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int H = 1554;
    int W = 1554;
    int Rcount = 1555;
    int Ccount = 1555;
    int S = 1207458;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 394435170;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int H = 1;
    int W = 1;
    int Rcount = 0;
    int Ccount = 0;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int H = 1;
    int W = 1;
    int Rcount = 0;
    int Ccount = 0;
    int S = 1;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1;
    int W = 1;
    int Rcount = 0;
    int Ccount = 1;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1;
    int W = 1;
    int Rcount = 0;
    int Ccount = 1;
    int S = 1;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int H = 1;
    int W = 1;
    int Rcount = 1;
    int Ccount = 0;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1;
    int W = 1;
    int Rcount = 1;
    int Ccount = 0;
    int S = 1;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1;
    int W = 1;
    int Rcount = 1;
    int Ccount = 1;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1;
    int W = 1;
    int Rcount = 1;
    int Ccount = 1;
    int S = 1;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1000;
    int W = 1000;
    int Rcount = 1555;
    int Ccount = 1554;
    int S = 500000;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 122698845;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int H = 1000;
    int W = 1000;
    int Rcount = 1554;
    int Ccount = 1555;
    int S = 500000;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 122698845;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int H = 1000;
    int W = 1000;
    int Rcount = 1554;
    int Ccount = 1554;
    int S = 500000;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 524992815;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int H = 1000;
    int W = 1000;
    int Rcount = 1555;
    int Ccount = 1555;
    int S = 500000;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int H = 1554;
    int W = 1554;
    int Rcount = 777;
    int Ccount = 777;
    int S = 1207458;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 417635946;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int H = 1554;
    int W = 1554;
    int Rcount = 776;
    int Ccount = 777;
    int S = 1207458;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 373603689;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int H = 1554;
    int W = 1554;
    int Rcount = 776;
    int Ccount = 776;
    int S = 1207458;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int H = 1554;
    int W = 1554;
    int Rcount = 776;
    int Ccount = 777;
    int S = 1206681;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int H = 1178;
    int W = 1324;
    int Rcount = 476;
    int Ccount = 610;
    int S = 950628;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int H = 524;
    int W = 685;
    int Rcount = 753;
    int Ccount = 203;
    int S = 137820;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1497;
    int W = 1375;
    int Rcount = 1552;
    int Ccount = 750;
    int S = 1084410;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 349781535;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int H = 1460;
    int W = 985;
    int Rcount = 440;
    int Ccount = 972;
    int S = 1052811;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int H = 913;
    int W = 1043;
    int Rcount = 1322;
    int Ccount = 769;
    int S = 467978;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1303;
    int W = 1316;
    int Rcount = 426;
    int Ccount = 1454;
    int S = 409610;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 344;
    int W = 1232;
    int Rcount = 1089;
    int Ccount = 1132;
    int S = 276096;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 192597210;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int H = 851;
    int W = 603;
    int Rcount = 232;
    int Ccount = 1380;
    int S = 123594;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 497473695;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int H = 1426;
    int W = 1241;
    int Rcount = 418;
    int Ccount = 443;
    int S = 1179169;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int H = 1208;
    int W = 427;
    int Rcount = 679;
    int Ccount = 1334;
    int S = 180471;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 263854215;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int H = 743;
    int W = 438;
    int Rcount = 1278;
    int Ccount = 217;
    int S = 105809;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 539253540;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int H = 1013;
    int W = 923;
    int Rcount = 1412;
    int Ccount = 1554;
    int S = 582452;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 310847175;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int H = 1147;
    int W = 319;
    int Rcount = 1485;
    int Ccount = 1433;
    int S = 198368;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 226664775;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int H = 762;
    int W = 185;
    int Rcount = 131;
    int Ccount = 1546;
    int S = 32975;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 24082560;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int H = 446;
    int W = 1374;
    int Rcount = 1178;
    int Ccount = 1040;
    int S = 196734;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 803;
    int W = 929;
    int Rcount = 1277;
    int Ccount = 1253;
    int S = 460229;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1547;
    int W = 874;
    int Rcount = 1237;
    int Ccount = 161;
    int S = 934326;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1231;
    int W = 673;
    int Rcount = 1467;
    int Ccount = 1056;
    int S = 372063;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 463051485;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int H = 1107;
    int W = 5;
    int Rcount = 396;
    int Ccount = 1317;
    int S = 2265;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 49295655;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int H = 479;
    int W = 123;
    int Rcount = 810;
    int Ccount = 196;
    int S = 12413;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1016;
    int W = 226;
    int Rcount = 1013;
    int Ccount = 742;
    int S = 125000;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 24;
    int W = 324;
    int Rcount = 1186;
    int Ccount = 441;
    int S = 3888;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 429038865;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int H = 1369;
    int W = 1196;
    int Rcount = 927;
    int Ccount = 400;
    int S = 1336365;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int H = 1410;
    int W = 1208;
    int Rcount = 1023;
    int Ccount = 1198;
    int S = 1093560;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 461781090;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int H = 1266;
    int W = 715;
    int Rcount = 1078;
    int Ccount = 213;
    int S = 558882;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int H = 372;
    int W = 1014;
    int Rcount = 209;
    int Ccount = 226;
    int S = 200508;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int H = 563;
    int W = 193;
    int Rcount = 807;
    int Ccount = 1068;
    int S = 52631;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 538269525;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int H = 1543;
    int W = 1484;
    int Rcount = 1384;
    int Ccount = 648;
    int S = 1352010;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 155900610;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int H = 691;
    int W = 720;
    int Rcount = 1016;
    int Ccount = 913;
    int S = 249165;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 502548075;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int H = 662;
    int W = 374;
    int Rcount = 548;
    int Ccount = 124;
    int S = 106924;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int H = 94;
    int W = 1068;
    int Rcount = 1266;
    int Ccount = 135;
    int S = 59524;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int H = 291;
    int W = 883;
    int Rcount = 88;
    int Ccount = 970;
    int S = 181678;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 391586355;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int H = 11;
    int W = 541;
    int Rcount = 56;
    int Ccount = 929;
    int S = 1089;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 57637305;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int H = 31;
    int W = 1336;
    int Rcount = 1288;
    int Ccount = 812;
    int S = 15833;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int H = 1198;
    int W = 1067;
    int Rcount = 541;
    int Ccount = 208;
    int S = 779646;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int H = 1328;
    int W = 172;
    int Rcount = 1398;
    int Ccount = 756;
    int S = 210012;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int H = 497;
    int W = 1500;
    int Rcount = 1244;
    int Ccount = 674;
    int S = 490911;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int H = 1517;
    int W = 288;
    int Rcount = 1281;
    int Ccount = 105;
    int S = 214053;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int H = 1268;
    int W = 1160;
    int Rcount = 575;
    int Ccount = 735;
    int S = 1086440;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int H = 1366;
    int W = 543;
    int Rcount = 830;
    int Ccount = 1542;
    int S = 335386;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 327370635;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int H = 1434;
    int W = 1072;
    int Rcount = 516;
    int Ccount = 1258;
    int S = 808804;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 127680525;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int H = 408;
    int W = 979;
    int Rcount = 1244;
    int Ccount = 299;
    int S = 76364;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int H = 253;
    int W = 299;
    int Rcount = 52;
    int Ccount = 1000;
    int S = 68893;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int H = 230;
    int W = 270;
    int Rcount = 193;
    int Ccount = 243;
    int S = 52254;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int H = 1072;
    int W = 1033;
    int Rcount = 342;
    int Ccount = 875;
    int S = 422956;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 274245480;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int H = 496;
    int W = 225;
    int Rcount = 256;
    int Ccount = 1091;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int H = 394;
    int W = 1342;
    int Rcount = 276;
    int Ccount = 76;
    int S = 528748;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int H = 175;
    int W = 979;
    int Rcount = 707;
    int Ccount = 1020;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int H = 1420;
    int W = 1286;
    int Rcount = 1311;
    int Ccount = 214;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int H = 647;
    int W = 548;
    int Rcount = 980;
    int Ccount = 306;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 105502635;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int H = 1547;
    int W = 1437;
    int Rcount = 714;
    int Ccount = 434;
    int S = 2223039;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int H = 86;
    int W = 835;
    int Rcount = 159;
    int Ccount = 694;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int H = 275;
    int W = 1390;
    int Rcount = 66;
    int Ccount = 1251;
    int S = 382250;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int H = 799;
    int W = 819;
    int Rcount = 531;
    int Ccount = 1435;
    int S = 654381;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int H = 299;
    int W = 961;
    int Rcount = 1055;
    int Ccount = 1553;
    int S = 287339;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int H = 708;
    int W = 365;
    int Rcount = 721;
    int Ccount = 262;
    int S = 258420;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1279;
    int W = 989;
    int Rcount = 337;
    int Ccount = 1482;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int H = 1507;
    int W = 1022;
    int Rcount = 287;
    int Ccount = 1246;
    int S = 1540154;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int H = 1391;
    int W = 1215;
    int Rcount = 1267;
    int Ccount = 431;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1162;
    int W = 1352;
    int Rcount = 1301;
    int Ccount = 492;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int H = 745;
    int W = 277;
    int Rcount = 304;
    int Ccount = 1228;
    int S = 17768;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int H = 1439;
    int W = 1169;
    int Rcount = 359;
    int Ccount = 1164;
    int S = 941288;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int H = 816;
    int W = 896;
    int Rcount = 110;
    int Ccount = 361;
    int S = 561048;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int H = 433;
    int W = 893;
    int Rcount = 931;
    int Ccount = 1374;
    int S = 124779;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 177224265;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int H = 1107;
    int W = 1257;
    int Rcount = 403;
    int Ccount = 1487;
    int S = 745130;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int H = 677;
    int W = 624;
    int Rcount = 528;
    int Ccount = 860;
    int S = 186474;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 502991505;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int H = 438;
    int W = 1127;
    int Rcount = 223;
    int Ccount = 943;
    int S = 246813;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 539083710;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int H = 688;
    int W = 1007;
    int Rcount = 1551;
    int Ccount = 10;
    int S = 256058;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1168;
    int W = 1207;
    int Rcount = 1066;
    int Ccount = 835;
    int S = 655682;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 312696990;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int H = 554;
    int W = 63;
    int Rcount = 737;
    int Ccount = 223;
    int S = 15696;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1554;
    int W = 1500;
    int Rcount = 1398;
    int Ccount = 1490;
    int S = 1581000;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 29841795;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1554;
    int Ccount = 1554;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 412213410;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int H = 1555;
    int W = 1555;
    int Rcount = 796;
    int Ccount = 759;
    int S = 1051271;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 176012145;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int H = 1555;
    int W = 1554;
    int Rcount = 1555;
    int Ccount = 1554;
    int S = 2416470;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 105127245;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1555;
    int Ccount = 1555;
    int S = 2410250;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 243274149;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1551;
    int Ccount = 1551;
    int S = 1080020;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 295720650;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1555;
    int Ccount = 1554;
    int S = 2418025;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 435468645;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1555;
    int Ccount = 1555;
    int S = 500000;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 548226225;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1555;
    int Ccount = 1555;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1554;
    int W = 1554;
    int Rcount = 1554;
    int Ccount = 1554;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 430119541;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int H = 1400;
    int W = 1400;
    int Rcount = 700;
    int Ccount = 700;
    int S = 980000;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 411508080;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1555;
    int Ccount = 1555;
    int S = 1197612;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 507723435;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int H = 2;
    int W = 2;
    int Rcount = 1;
    int Ccount = 1;
    int S = 2;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
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
    int H = 1554;
    int W = 1554;
    int Rcount = 1554;
    int Ccount = 1554;
    int S = 2414916;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 210254490;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int H = 101;
    int W = 101;
    int Rcount = 101;
    int Ccount = 101;
    int S = 0;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int H = 1555;
    int W = 1555;
    int Rcount = 1555;
    int Ccount = 1555;
    int S = 3108;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 109489770;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int H = 10;
    int W = 2;
    int Rcount = 10;
    int Ccount = 1;
    int S = 10;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 184756;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int H = 1554;
    int W = 1554;
    int Rcount = 1554;
    int Ccount = 1554;
    int S = 1207458;
    XorBoard* pObj = new XorBoard();
    clock_t start = clock();
    int result = pObj->count(H, W, Rcount, Ccount, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22860142&rd=15177&pm=12180
********************************************************************************
#line 5 "CuttingBitString.cpp" 
 
#include <cstdlib> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
 
using namespace std; 
 
#define pb push_back 
#define sz(x) ((int)((x).size())) 
#define out(x) printf(#x" %d\n", x) 
#define rep(i,n) for(int i=0;i<(n);++i) 
#define repf(i,l,h) for(int i=(l);i<=(h);++i) 
#define repd(i,h,l) for(int i=(h);i>=(l);--i) 
 
typedef vector<int> vi; 
typedef vector<string> vs; 
typedef vector<double> vd; 
typedef long long ll; 
typedef pair<int,int> pii; 
 
const int mod = 555555555; 
const int maxn = 3200; 
 
int com[maxn][maxn]; 
 
void add(int& x, int y) { 
    x += y; 
    if (x >= mod) x -= mod; 
} 
 
class XorBoard 
{ 
    public: 
        int count(int h, int w, int rc, int cc, int s) 
        { 
            repf (i, 0, maxn - 1) { 
                com[i][0] = com[i][i] = 1; 
                repf (j, 1, i - 1) { 
                    com[i][j] = (com[i - 1][j - 1] + com[i - 1][j]) % mod; 
                } 
            } 
             
            int ans = 0; 
            repf (i, 0, min(rc, h)) repf (j, 0, min(cc, w)) { 
                if (i * w + j * h - 2 * i * j == s) { 
                    add (ans, solve(i, j, rc, cc, h, w)); 
                } 
            } 
            return ans; 
        } 
         
        int solve(int rt, int ct, int rtot, int ctot, int h, int w) { 
            int rleft = rtot - rt, cleft = ctot - ct; 
             
            if (rleft & 1) return 0; 
            if (cleft & 1) return 0; 
             
            rleft >>= 1; cleft >>= 1; 
             
            ll res = 1LL; 
            res = (res * com[h][rt] % mod) * com[w][ct] % mod; 
            res = (res * com[h + rleft - 1][h - 1] % mod) * com[w + cleft - 1][w - 1] % mod; 
            return res; 
        } 
 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/