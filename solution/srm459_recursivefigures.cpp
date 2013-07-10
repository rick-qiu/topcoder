/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10681
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

class RecursiveFigures {
public:
    double getArea(int sideLength, int K);
};

double RecursiveFigures::getArea(int sideLength, int K) {
    double ret;
    return ret;
}


int test0() {
    int sideLength = 10;
    int K = 1;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 78.53981633974483;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int sideLength = 10;
    int K = 2;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 67.80972450961724;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int sideLength = 10;
    int K = 3;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 62.444678594553444;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int sideLength = 1;
    int K = 4;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5976215563702155;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int sideLength = 7;
    int K = 7;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 28.133324544098755;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int sideLength = 9;
    int K = 6;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 46.77771336928683;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int sideLength = 16;
    int K = 7;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 146.9822670059037;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int sideLength = 18;
    int K = 4;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 193.62938426394982;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int sideLength = 19;
    int K = 7;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 207.26796245754392;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int sideLength = 21;
    int K = 5;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 257.6361432379073;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int sideLength = 23;
    int K = 6;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 305.4988934858362;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int sideLength = 23;
    int K = 9;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 302.39471145091727;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int sideLength = 28;
    int K = 7;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 450.1331927055801;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int sideLength = 32;
    int K = 2;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 694.3715789784806;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int sideLength = 41;
    int K = 8;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 962.3269510244776;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int sideLength = 44;
    int K = 2;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1312.7962665061896;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int sideLength = 44;
    int K = 4;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1156.995333132737;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int sideLength = 45;
    int K = 2;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1373.1469213197493;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int sideLength = 45;
    int K = 7;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1162.6526979959183;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int sideLength = 47;
    int K = 7;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1268.2962024064113;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int sideLength = 47;
    int K = 9;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1262.7408650190475;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int sideLength = 50;
    int K = 2;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1695.2431127404311;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int sideLength = 51;
    int K = 2;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1763.7309344951445;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int sideLength = 52;
    int K = 2;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1833.57495074005;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int sideLength = 52;
    int K = 7;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1552.5001952498578;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int sideLength = 53;
    int K = 1;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2206.1834409834323;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int sideLength = 53;
    int K = 8;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1608.0763863341815;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int sideLength = 54;
    int K = 2;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1977.3315667004385;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int sideLength = 55;
    int K = 1;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2375.8294442772813;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int sideLength = 55;
    int K = 6;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1746.9454684208972;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int sideLength = 63;
    int K = 8;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2272.144954560472;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int sideLength = 65;
    int K = 3;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2638.2876706198836;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int sideLength = 66;
    int K = 5;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2544.8141495336145;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int sideLength = 67;
    int K = 6;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2592.4093248731915;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int sideLength = 69;
    int K = 8;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2725.5434942460074;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int sideLength = 72;
    int K = 10;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2961.1810017003445;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int sideLength = 76;
    int K = 4;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3451.862109594365;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int sideLength = 78;
    int K = 1;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4778.362426110075;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int sideLength = 79;
    int K = 8;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3572.8033916381723;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int sideLength = 80;
    int K = 8;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3663.8265833174655;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int sideLength = 89;
    int K = 7;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4547.838034975638;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int sideLength = 89;
    int K = 8;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4534.557869759006;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int sideLength = 91;
    int K = 6;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4782.299313716843;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int sideLength = 94;
    int K = 10;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5047.259901817948;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int sideLength = 96;
    int K = 7;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5291.361612212533;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int sideLength = 98;
    int K = 10;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5485.953383551331;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int sideLength = 100;
    int K = 8;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5724.7290364335395;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int sideLength = 100;
    int K = 10;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5712.154710070109;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int sideLength = 99;
    int K = 10;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5598.482831339714;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int sideLength = 1;
    int K = 10;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5712154710070109;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int sideLength = 100;
    int K = 1;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7853.981633974483;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int sideLength = 99;
    int K = 9;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5602.590863762646;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int sideLength = 99;
    int K = 5;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5725.831836450631;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int sideLength = 9;
    int K = 2;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 54.92587685278996;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int sideLength = 3;
    int K = 1;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0685834705770345;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int sideLength = 1;
    int K = 1;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7853981633974483;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int sideLength = 1;
    int K = 3;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6244467859455345;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int sideLength = 7;
    int K = 10;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 27.98955807934353;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int sideLength = 20;
    int K = 3;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 249.77871437821378;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int sideLength = 100;
    int K = 7;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5741.494804918114;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int sideLength = 9;
    int K = 5;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 47.320924268187035;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int sideLength = 50;
    int K = 5;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1460.5223539563901;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int sideLength = 2;
    int K = 10;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2848618840280435;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int sideLength = 27;
    int K = 10;
    RecursiveFigures* pObj = new RecursiveFigures();
    clock_t start = clock();
    double result = pObj->getArea(sideLength, K);
    clock_t end = clock();
    delete pObj;
    double expected = 416.4160783641109;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22853412&rd=14145&pm=10681
********************************************************************************
#include<stdio.h> 
#include<cmath> 
using namespace std; 
class RecursiveFigures 
{ 
    public:  
    double getArea(int sideLength,int K) 
    { 
      int i; 
      double sq=sideLength; 
      double r=sq/2; 
      double sum=M_PI*r*r; 
      for(i=1;i<K;i++) 
      { 
        sq=r*sqrt(2); 
        r=sq/2; 
        sum=sum-sq*sq+M_PI*r*r; 
      } 
      return sum; 
    } 
};

********************************************************************************
*******************************************************************************/