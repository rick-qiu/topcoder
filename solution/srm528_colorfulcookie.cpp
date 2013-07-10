/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11595
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

class ColorfulCookie {
public:
    int getMaximum(vector<int> cookies, int P1, int P2);
};

int ColorfulCookie::getMaximum(vector<int> cookies, int P1, int P2) {
    int ret;
    return ret;
}


int test0() {
    vector<int> cookies = {100, 100};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cookies = {50, 250, 50};
    int P1 = 50;
    int P2 = 100;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cookies = {2000};
    int P1 = 100;
    int P2 = 200;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cookies = {123, 456, 789, 555};
    int P1 = 58;
    int P2 = 158;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 1728;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cookies = {1, 1, 1, 1, 1, 1, 1};
    int P1 = 2000;
    int P2 = 2000;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
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
    vector<int> cookies = {1518};
    int P1 = 1249;
    int P2 = 1760;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
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
    vector<int> cookies = {1994};
    int P1 = 1343;
    int P2 = 995;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cookies = {1571};
    int P1 = 1908;
    int P2 = 1116;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
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
    vector<int> cookies = {1025, 357};
    int P1 = 55;
    int P2 = 227;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 1128;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cookies = {1603, 416};
    int P1 = 126;
    int P2 = 179;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 915;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cookies = {350, 1784};
    int P1 = 88;
    int P2 = 223;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 933;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cookies = {1600, 1193};
    int P1 = 100;
    int P2 = 116;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 2376;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cookies = {1829, 313};
    int P1 = 57;
    int P2 = 218;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 1375;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cookies = {22, 24, 50, 33, 1};
    int P1 = 2000;
    int P2 = 54;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
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
    vector<int> cookies = {8, 33, 22, 17, 21};
    int P1 = 2000;
    int P2 = 200;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
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
    vector<int> cookies = {24, 36, 8, 49, 40, 5, 48};
    int P1 = 133;
    int P2 = 2000;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
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
    vector<int> cookies = {45, 25, 41, 5, 39, 39, 3};
    int P1 = 158;
    int P2 = 2000;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
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
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    int P1 = 2000;
    int P2 = 2000;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 48000;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    int P1 = 2000;
    int P2 = 2000;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 48000;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cookies = {386, 451, 702};
    int P1 = 135;
    int P2 = 94;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 1374;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cookies = {1209, 1646, 1108, 1266};
    int P1 = 69;
    int P2 = 62;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 5109;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cookies = {548, 1427, 374, 669, 1612};
    int P1 = 100;
    int P2 = 62;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 4536;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cookies = {1798, 1300, 1001, 307, 1152, 1816};
    int P1 = 110;
    int P2 = 222;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 6972;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cookies = {405, 406, 626, 1606, 1345, 521, 328};
    int P1 = 59;
    int P2 = 142;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 5025;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cookies = {2000, 2000, 2000};
    int P1 = 92;
    int P2 = 410;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 5522;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cookies = {2000, 2000, 2000, 2000};
    int P1 = 145;
    int P2 = 416;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 7854;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000};
    int P1 = 52;
    int P2 = 448;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000};
    int P1 = 66;
    int P2 = 383;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 11674;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000};
    int P1 = 55;
    int P2 = 369;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 13568;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cookies = {1964, 1976, 1797, 1883, 1510, 1777, 1564, 1791, 1712, 1547};
    int P1 = 173;
    int P2 = 181;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 16992;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cookies = {1600, 1718, 1707, 1562, 1656, 1671, 1784, 1825, 1699, 1529, 1626, 1516, 1596, 1626, 1834};
    int P1 = 333;
    int P2 = 83;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 24128;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cookies = {1740, 1741, 1605, 1656, 1735, 1762, 1740, 1768, 1946, 1528, 1595, 1859, 1935, 1854, 1551, 1766, 1951, 1991, 1627, 1828};
    int P1 = 90;
    int P2 = 150;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 34800;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cookies = {1641, 1787, 1977, 1648, 1726, 1783, 1748, 1602, 1656, 1848, 1983, 1616, 1606, 1629, 1594, 1691, 1924, 1927, 1820, 1961, 1816, 1998, 1871, 1694, 1594};
    int P1 = 161;
    int P2 = 355;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 43344;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cookies = {1566, 1588, 1553, 1867, 1905, 1707, 1962, 1813, 1852, 1928, 1806, 1825, 1834, 1541, 1748, 1694, 1898, 1621, 1536, 1721, 1844, 1846, 1875, 1619, 1595, 1914, 1562, 1803, 1727, 1650};
    int P1 = 117;
    int P2 = 215;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 51792;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cookies = {1813, 1812, 1946, 1985, 1908, 1891, 1949, 1828, 1989, 1991, 1973, 1922, 1843, 1927, 1916, 1871, 1976, 1826, 1808, 1937, 1873, 1830, 1867, 1976, 1827, 1942, 1965, 1884, 1807, 1950, 1916, 1973, 1973, 1963, 1923, 1834, 1837, 1895, 1993, 1971, 1818, 1890, 1809, 1894, 1968, 1884, 1931, 1944, 1936, 1852};
    int P1 = 63;
    int P2 = 99;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 94932;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cookies = {1958, 1892, 1921, 1851, 1891, 1991, 1944, 1840, 1824, 1934, 1879, 1841, 1962, 1821, 1885, 1955, 1977, 1827, 1807, 1911, 1963, 1886, 1935, 1810, 1891, 1984, 1840, 1820, 1974, 1952, 1880, 1804, 1975, 1848, 1824, 1941, 1829, 1869, 1911, 1987, 1800, 1957, 1836, 1975, 1802, 1860, 1963, 1845, 1897, 1934};
    int P1 = 93;
    int P2 = 107;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 94400;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cookies = {1870, 1852, 1806, 1978, 1982, 1937, 1918, 1803, 1840, 1806, 1869, 1812, 1903, 1953, 1995, 1825, 1947, 1941, 1897, 1964, 1841, 1823, 1881, 1952, 1879, 1960, 1907, 1980, 1830, 1887, 1830, 1887, 1996, 1923, 1911, 1863, 1814, 1909, 1992, 1881, 1956, 1872, 1933, 1971, 1990, 1983, 1954, 1986, 1998, 1849};
    int P1 = 94;
    int P2 = 119;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 94998;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cookies = {1846, 1938, 1918, 1958, 1936, 1942, 1934, 1825, 1817, 1925, 1830, 1824, 1826, 1983, 1873, 1934, 1800, 1883, 1832, 1908, 1843, 1814, 1934, 1959, 1873, 1868, 1983, 1962, 1909, 1868, 1951, 1952, 1971, 1911, 1894, 1876, 1977, 1815, 1916, 1963, 1984, 1983, 1812, 1822, 1885, 1835, 1953, 1842, 1874, 1814};
    int P1 = 67;
    int P2 = 111;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 94340;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cookies = {1916, 1829, 1910, 1897, 1997, 1887, 1995, 1871, 1986, 1993, 1942, 1942, 1822, 1827, 1881, 1838, 1969, 1918, 1904, 1873, 1971, 1845, 1994, 1877, 1819, 1920, 1999, 1900, 1826, 1968, 1816, 1821, 1989, 1850, 1808, 1879, 1939, 1928, 1927, 1909, 1876, 1931, 1936, 1810, 1956, 1800, 1811, 1827, 1893, 1911};
    int P1 = 64;
    int P2 = 101;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 94710;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cookies = {1971, 1919, 1868, 1978, 1768, 1784, 1848, 1810, 1884, 1808, 1755, 1960, 1765, 1884, 1749, 1766, 1959, 1843, 1748, 1815, 1902, 1783, 1935, 1881, 1989, 1740, 1783, 1987, 1705, 1885, 1852, 1807, 1902, 1786, 1896, 1748, 1803, 1755, 1816, 1925, 1940, 1993, 1954, 1912, 1789, 1708, 1973, 1880, 1987, 1880};
    int P1 = 404;
    int P2 = 429;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 83300;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cookies = {1966, 1777, 1852, 1711, 1728, 1833, 1966, 1703, 1950, 1757, 1720, 1926, 1969, 1851, 1829, 1969, 1746, 1710, 1739, 1981, 1862, 1747, 1986, 1803, 1738, 1948, 1757, 1885, 1938, 1847, 1711, 1924, 1857, 1876, 1911, 1799, 1887, 1820, 1879, 1891, 1851, 1829, 1838, 1965, 1869, 1762, 1845, 1705, 1721, 1830};
    int P1 = 492;
    int P2 = 309;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 88911;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cookies = {1709, 1916, 1926, 1779, 1857, 1728, 1881, 1836, 1782, 1762, 1948, 1974, 1943, 1764, 1805, 1721, 1851, 1806, 1838, 1866, 1715, 1817, 1700, 1910, 1779, 1903, 1787, 1871, 1726, 1714, 1842, 1783, 1775, 1766, 1729, 1820, 1827, 1984, 1916, 1891, 1750, 1735, 1999, 1819, 1789, 1956, 1947, 1704, 1700, 1745};
    int P1 = 461;
    int P2 = 357;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 88344;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cookies = {1742, 1787, 1731, 1763, 1845, 1877, 1830, 1807, 1997, 1704, 1873, 1821, 1957, 1917, 1966, 1748, 1746, 1885, 1925, 1816, 1926, 1826, 1825, 1761, 1846, 1762, 1986, 1771, 1724, 1761, 1983, 1978, 1763, 1823, 1735, 1882, 1959, 1762, 1791, 1933, 1748, 1788, 1777, 1751, 1887, 1763, 1745, 1996, 1992, 1702};
    int P1 = 312;
    int P2 = 457;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 87666;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cookies = {1767, 1795, 1725, 1935, 1722, 1893, 1796, 1823, 1974, 1838, 1733, 1768, 1918, 1936, 1995, 1745, 1741, 1715, 1708, 1926, 1948, 1834, 1779, 1878, 1831, 1849, 1835, 2000, 1792, 1939, 1841, 1716, 1875, 1746, 1961, 1951, 1812, 1894, 1911, 1949, 1882, 1918, 1868, 1791, 1820, 1804, 1764, 1807, 1901, 1936};
    int P1 = 423;
    int P2 = 402;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 82500;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cookies = {1816, 1864, 1956, 1919, 1963, 1987, 1812, 1937, 1871, 1974, 1848, 1938, 1959, 1833, 1961, 1813, 1942, 1959, 1998, 1823, 1870, 1878, 1860, 1824, 1979, 1991, 1904, 1941, 1961, 1839, 1924, 1936, 1919, 1872, 1928, 1835, 1877, 1914, 1841, 1906, 1822, 1952, 1801, 1841, 1918, 1829, 1889, 1884, 1950, 1970};
    int P1 = 113;
    int P2 = 314;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 93940;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cookies = {1857, 1901, 1916, 1829, 1950, 1877, 1973, 1814, 1842, 1959, 1880, 1885, 1986, 1949, 1914, 1922, 1902, 1980, 2000, 1979, 1858, 1963, 1816, 1974, 1928, 1997, 1975, 1937, 1968, 1932, 1892, 1864, 1918, 1923, 1931, 1952, 1836, 1950, 1802, 1823, 1947, 1848, 1918, 1859, 1819, 1882, 1880, 1936, 1842, 1935};
    int P1 = 76;
    int P2 = 397;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 93654;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cookies = {1927, 1985, 1876, 1979, 1888, 1952, 1883, 1842, 1805, 1932, 1902, 1897, 1870, 1848, 1855, 1886, 1882, 1937, 1926, 1928, 1995, 1990, 1919, 1941, 1817, 1877, 1874, 1870, 1906, 1896, 1980, 1823, 1829, 1980, 1880, 1855, 1969, 1845, 1861, 1825, 1926, 1968, 1915, 1811, 1860, 1973, 1876, 1896, 1842, 1979};
    int P1 = 109;
    int P2 = 453;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 93292;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cookies = {1909, 1830, 1823, 1981, 1981, 1982, 1954, 1901, 1865, 1977, 1968, 1817, 1942, 1805, 1828, 1945, 1876, 1826, 1813, 1921, 1862, 1919, 1951, 1905, 1868, 1877, 1806, 1907, 1822, 1954, 1861, 1907, 1839, 1899, 1827, 1940, 1812, 1883, 1991, 1871, 1892, 1931, 1881, 1896, 1991, 1959, 1988, 1942, 1955, 1808};
    int P1 = 70;
    int P2 = 412;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 93026;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cookies = {1809, 1819, 1881, 1905, 1949, 1813, 1941, 1867, 1929, 1846, 1815, 1831, 1876, 1881, 1803, 1845, 1944, 1898, 1899, 1973, 1977, 1808, 1811, 1877, 1859, 1970, 1833, 1928, 1856, 1864, 1883, 1920, 1981, 1929, 1900, 1970, 1808, 1947, 1849, 1946, 1901, 1918, 1983, 1832, 1911, 1886, 1917, 1952, 1997, 1985};
    int P1 = 87;
    int P2 = 400;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 92530;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cookies = {1980, 1916, 1989, 1987, 1929, 1998, 1957, 1909, 1945, 1997, 1900, 1971, 1905, 1945, 1915, 1987, 1994, 1926, 1955, 1921, 1942, 1975, 1944, 1927, 1930, 1945, 1970, 1980, 1923, 1982, 1921, 1913, 1983, 1909, 1923, 1969, 1917, 1938, 1949, 1902, 1981, 1913, 1999, 1907, 1904, 1947, 1932, 1986, 1995, 1959};
    int P1 = 1104;
    int P2 = 116;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 61000;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cookies = {1924, 1932, 1931, 1917, 1900, 1973, 1965, 1957, 1914, 1987, 1977, 1957, 1942, 1902, 1995, 1942, 1920, 1927, 1944, 1941, 1967, 1909, 1957, 1920, 1993, 1988, 1918, 1971, 1935, 1995, 1990, 1902, 1977, 1992, 1992, 1986, 1961, 1986, 1970, 1974, 1952, 1988, 1939, 1965, 1977, 1905, 1976, 1907, 1920, 1914};
    int P1 = 1060;
    int P2 = 106;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 58300;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cookies = {1976, 1926, 1928, 1988, 1973, 1958, 1976, 1952, 1926, 1933, 1950, 1963, 1953, 1968, 1990, 1942, 1903, 1920, 1953, 1998, 1940, 1909, 1993, 1987, 1979, 1902, 1972, 1900, 1908, 1905, 1952, 1924, 1938, 1955, 1919, 1979, 1941, 1964, 1989, 1995, 1907, 1908, 1925, 1931, 1987, 1992, 1969, 1913, 1998, 1992};
    int P1 = 900;
    int P2 = 67;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 94766;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cookies = {1913, 1912, 1950, 1986, 1967, 1978, 1961, 1908, 1922, 1932, 1959, 1964, 1955, 1924, 1907, 1966, 1947, 1909, 1944, 1928, 1980, 1913, 1906, 1926, 1910, 1985, 1912, 1964, 1977, 1941, 1912, 1979, 1916, 1914, 1925, 1968, 1953, 1932, 1991, 1986, 1976, 1932, 1911, 1996, 1970, 1903, 1981, 1947, 1925, 1968};
    int P1 = 1183;
    int P2 = 82;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 63250;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cookies = {1901, 1964, 1950, 1927, 1912, 1953, 1953, 1958, 1944, 1902, 1999, 1965, 1991, 1953, 1963, 1959, 1944, 1963, 1910, 1944, 1908, 1991, 1919, 1987, 1950, 1935, 1929, 1950, 1999, 1952, 1975, 1953, 1925, 1939, 1966, 1973, 1952, 1991, 1963, 1946, 1980, 1989, 1966, 1947, 1914, 1918, 1907, 1923, 1988, 1973};
    int P1 = 1183;
    int P2 = 85;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 63400;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 163, 404, 144, 485, 158, 761, 792, 656, 572, 482};
    int P1 = 60;
    int P2 = 64;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 84444;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 699, 727, 486, 760, 462, 68, 146, 645, 654, 746};
    int P1 = 64;
    int P2 = 60;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 85312;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 288, 78, 88, 543, 632, 117, 507, 430, 230, 92};
    int P1 = 59;
    int P2 = 64;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 82656;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 194, 705, 104, 317, 223, 107, 789, 743, 547, 356};
    int P1 = 59;
    int P2 = 52;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 83916;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 587, 404, 408, 203, 710, 156, 424, 311, 751, 649};
    int P1 = 51;
    int P2 = 62;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 84411;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 84, 60, 86, 94, 62, 91, 93, 92, 75, 100, 70, 78, 99, 80, 60, 100, 69, 100, 85, 83, 70, 75, 89, 100, 84, 75, 89, 87, 91, 81};
    int P1 = 57;
    int P2 = 1354;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 28220;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 69, 87, 72, 85, 99, 94, 68, 65, 72, 80, 69, 82, 92, 79, 73, 96, 69, 71, 70, 95, 77, 67, 90, 83, 71, 99, 96, 69, 80, 76};
    int P1 = 62;
    int P2 = 1336;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 27960;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 96, 84, 81, 87, 94, 67, 74, 90, 64, 87, 61, 87, 91, 70, 88, 75, 100, 86, 65, 100, 84, 69, 75, 64, 81, 70, 92, 100, 80, 83};
    int P1 = 56;
    int P2 = 1356;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 28240;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 98, 96, 69, 80, 69, 71, 98, 70, 90, 95, 74, 73, 94, 94, 87, 82, 96, 92, 91, 87, 92, 86, 99, 97, 74, 78, 77, 85, 97, 76};
    int P1 = 66;
    int P2 = 1309;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 27500;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 67, 97, 92, 60, 79, 55, 96, 86, 97, 71, 73, 62, 74, 83, 65, 86, 92, 96, 76, 87, 76, 55, 84, 64, 78, 69, 61, 88, 69, 90};
    int P1 = 51;
    int P2 = 1368;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 28380;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cookies = {1931, 1917, 1980, 1985, 1929, 1939, 1952, 1909, 1934, 1910, 1994, 1933, 1921, 1928, 1954, 1954, 1949, 1963, 2000, 1978, 1926, 1976, 1976, 1946, 1901, 1917, 1922, 1972, 1926, 1911, 1904, 1944, 1972, 1976, 1947, 1918, 1911, 1938, 1924, 1969, 1990, 1935, 1918, 1998, 1944, 1991, 1981, 1976, 1967, 1990};
    int P1 = 51;
    int P2 = 60;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 97347;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cookies = {1913, 1964, 1916, 1906, 1986, 1957, 1923, 1904, 1972, 1992, 1977, 1917, 1942, 1966, 1965, 1968, 1984, 1931, 1979, 1962, 1947, 1976, 1995, 1937, 1939, 1973, 1936, 1929, 1975, 1911, 1977, 1958, 1901, 1914, 1952, 1964, 1939, 1984, 1905, 1947, 1917, 1984, 1916, 1980, 1957, 1994, 1960, 1969, 1960, 1935};
    int P1 = 69;
    int P2 = 53;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 97478;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cookies = {1995, 1970, 1921, 1915, 1997, 1977, 1908, 1937, 1970, 1946, 1938, 1916, 1982, 1973, 1991, 1943, 1922, 1939, 1906, 1959, 1964, 1974, 1910, 1902, 1913, 1925, 1993, 1972, 1970, 1956, 1919, 1977, 1975, 1967, 1933, 1920, 1943, 1952, 1908, 1922, 1995, 1918, 1953, 1951, 1912, 1972, 1983, 1981, 1972, 1951};
    int P1 = 66;
    int P2 = 52;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 97350;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cookies = {1957, 1971, 1952, 1973, 1992, 1951, 1975, 1951, 1995, 1961, 1999, 1950, 1951, 1977, 1992, 1963, 1954, 1985, 1994, 1972, 1989, 1971, 1982, 1951, 1985, 2000, 1990, 1961, 1983, 1952, 799, 281, 789, 1305, 452, 1091, 293, 1463, 1046, 1269, 236, 963, 198, 989, 1179, 1214, 1329, 862, 1288, 110};
    int P1 = 60;
    int P2 = 66;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 75978;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cookies = {1963, 1983, 1984, 1953, 1970, 1983, 1988, 1960, 1951, 1969, 1973, 1988, 1956, 1995, 1978, 1953, 1980, 1993, 1986, 1979, 1954, 1980, 1988, 1958, 1957, 1982, 1990, 1963, 1966, 1976, 789, 969, 1307, 1161, 1356, 817, 847, 938, 752, 241, 1224, 1106, 1506, 327, 211, 710, 516, 1340, 749, 106};
    int P1 = 80;
    int P2 = 62;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 75970;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cookies = {1953, 1984, 2000, 1986, 1974, 1964, 1958, 1953, 1963, 2000, 1961, 1959, 1959, 1967, 1974, 1980, 1960, 1977, 1999, 1986, 1979, 1974, 1973, 1999, 1970, 1957, 1997, 1964, 1974, 1961, 935, 1118, 1229, 1303, 282, 297, 1344, 232, 916, 1580, 111, 540, 1385, 797, 1500, 1360, 605, 1057, 1515, 1588};
    int P1 = 54;
    int P2 = 54;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 77760;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cookies = {1970, 1963, 1966, 1967, 1971, 1969, 1972, 1971, 1970, 1967, 1969, 1968, 1967, 1971, 1969, 1974, 1967, 1964, 1972, 1972, 1971, 1968, 1968, 1970, 1970, 1975, 1970, 1965, 1970, 1976, 1968, 1966, 1965, 1967, 1969, 1968, 1974, 1966, 1973, 1972, 1968, 1969, 1975, 1969, 1967, 1968, 1973, 1974, 1970, 1972};
    int P1 = 50;
    int P2 = 51;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 98475;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> cookies = {1967, 1967, 1969, 1967, 1975, 1974, 1965, 1973, 1971, 1973, 1973, 1966, 1967, 1978, 1971, 1966, 1966, 1964, 1972, 1967, 1969, 1969, 1968, 1974, 1965, 1971, 1971, 1972, 1964, 1967, 1972, 1971, 1971, 1963, 1968, 1967, 1970, 1971, 1973, 1970, 1969, 1866, 1970, 1972, 1970, 1966, 1971, 1968, 1973, 1972};
    int P1 = 50;
    int P2 = 51;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 98374;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cookies = {1958, 1954, 1966, 1988, 1974, 1988, 1974, 1884, 1974, 1958, 1954, 1950, 1978, 1954, 1958, 1950, 1954, 1966, 1958, 1978, 1950, 1962, 2000, 1974, 1980, 1990, 1950, 1966, 2000, 1978, 1958, 1978, 2000, 1966, 1974, 2000, 1974, 1966, 1950, 1974, 1950, 1958, 1954, 1958, 1958, 1990, 1950, 1978, 1966, 1966};
    int P1 = 54;
    int P2 = 58;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 98336;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> cookies = {1966, 1970, 1950, 1950, 1962, 1950, 1974, 1982, 1974, 1962, 1900, 1950, 1988, 1966, 1954, 1958, 2000, 1954, 1996, 1954, 1996, 1954, 1974, 1970, 1962, 1950, 1978, 1962, 1978, 1966, 1970, 1962, 1966, 1996, 1954, 1974, 1982, 1996, 1954, 1966, 1966, 1950, 1974, 1962, 1950, 1958, 1978, 1958, 1996, 1974};
    int P1 = 54;
    int P2 = 58;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 98336;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> cookies = {1971, 1986, 1997, 1969, 1971, 1971, 1958, 1997, 1958, 1962, 1984, 1832, 1960, 1995, 1958, 1997, 1997, 1984, 1958, 1958, 1969, 1956, 1995, 1982, 1986, 1971, 1984, 1997, 1997, 1958, 1984, 1997, 1984, 1958, 1997, 1958, 1971, 1999, 1995, 1973, 1971, 1973, 1956, 1997, 1986, 1995, 1984, 1997, 1971, 1958};
    int P1 = 50;
    int P2 = 63;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 98762;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cookies = {1999, 1971, 1958, 1984, 1995, 1958, 1960, 1999, 1958, 1997, 1986, 1971, 1971, 1971, 1995, 1971, 1971, 1973, 1995, 1997, 1630, 1995, 1971, 1971, 1960, 1995, 1997, 1997, 1958, 1997, 1956, 1958, 1958, 1960, 1997, 1958, 1984, 1958, 1971, 1960, 1984, 1995, 1997, 1995, 1984, 1971, 1958, 1960, 1997, 1984};
    int P1 = 50;
    int P2 = 63;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 98536;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> cookies = {1971, 1541, 1959, 1965, 1959, 1950, 1953, 1965, 1962, 2000, 1953, 1968, 1959, 1956, 1965, 1965, 1968, 1977, 1965, 1974, 1974, 1956, 1959, 1971, 1968, 1974, 1974, 1953, 2000, 1974, 1959, 1953, 1950, 1953, 1962, 1965, 1965, 1962, 1965, 1962, 1965, 1962, 1959, 1962, 2000, 2000, 1965, 1959, 1962, 1974};
    int P1 = 56;
    int P2 = 53;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 97882;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cookies = {1965, 1971, 1980, 1980, 1965, 1968, 1950, 1965, 1971, 1968, 1962, 1953, 1956, 1950, 1953, 1980, 1968, 1962, 1968, 1956, 1968, 2000, 1956, 2000, 1968, 1965, 1968, 1965, 1965, 1971, 1962, 1997, 1953, 1977, 1962, 1971, 1956, 1959, 1959, 1953, 1968, 1953, 1974, 1956, 1959, 1953, 2000, 1968, 1953, 1968};
    int P1 = 56;
    int P2 = 53;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 98318;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cookies = {1990, 1993, 1990, 1987, 1965, 1993, 1987, 1965, 1990, 1965, 1990, 1993, 1990, 1990, 1987, 1990, 1993, 1962, 1984, 1968, 1990, 1968, 1993, 1959, 1987, 1965, 1971, 1996, 1993, 1993, 1971, 1987, 1968, 1965, 1990, 1987, 1993, 1993, 1578, 1974, 1962, 1987, 1965, 1962, 1993, 1962, 1965, 1996, 1993, 1965};
    int P1 = 78;
    int P2 = 53;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 98643;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> cookies = {1965, 1993, 1984, 1993, 1993, 1959, 1993, 1962, 1984, 1987, 1990, 1987, 1968, 1990, 1987, 1968, 1990, 1962, 1996, 1996, 1987, 1990, 1996, 1987, 1993, 1993, 1971, 1753, 1987, 1965, 1990, 1968, 1990, 1993, 1996, 1993, 1965, 1990, 1990, 1996, 1968, 1996, 1993, 1993, 1965, 1962, 1962, 1990, 1965, 1971};
    int P1 = 78;
    int P2 = 53;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 98905;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    int P1 = 500;
    int P2 = 750;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 97500;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> cookies = {1976, 1993, 1990, 1991, 1994, 1982, 1973, 1983, 1986, 1975, 1977, 1996, 1994, 1995, 1987, 1975, 1975, 1986, 1998, 1989, 1985, 1972, 1988, 1995, 1984, 1998, 1989, 1997, 1994, 1990, 1980, 1985, 1975, 1984, 1991, 1974, 1991, 1997, 1996, 1994, 1996, 1976, 1992, 1978};
    int P1 = 51;
    int P2 = 1328;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 60676;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> cookies = {1967, 1877, 1889, 1841, 1980, 1966, 1976, 1993, 1998, 1892, 1894, 1935, 1988, 1951, 1845, 1841, 1963, 1873, 1970, 1835, 1828, 1840, 1822, 1911, 1907, 1949, 1957, 1854, 1969, 1926, 1910, 1991, 1881, 1878, 1921, 1904, 1963, 1826, 1937};
    int P1 = 51;
    int P2 = 827;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 68484;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> cookies = {1997, 1998, 1998, 1997, 1997, 1999, 1999, 1999, 1997, 1999, 1998, 1998, 1997, 1997, 1999, 1997, 1999, 1999, 1998, 1998, 1997, 1998, 1997, 1997, 1997, 1998, 1999, 1997, 1999, 1997, 1997, 1999, 1997, 1998, 1999, 1997, 1998};
    int P1 = 52;
    int P2 = 754;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 59644;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> cookies = {1122, 618, 375, 591, 333, 756, 1052, 330, 775, 490, 986, 495, 612, 525, 934, 918, 810, 1134, 722, 578, 827, 1132, 846, 576, 366, 1078, 851, 363, 631, 455, 497, 725, 713, 1129, 843, 843, 1070, 773, 769, 886, 1127, 980, 845, 1030, 572, 640, 618, 409, 547, 527};
    int P1 = 50;
    int P2 = 1994;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
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
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    int P1 = 50;
    int P2 = 2000;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 79950;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> cookies = {1999, 1999};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 3900;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> cookies = {999, 999, 999, 999};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 3800;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> cookies = {1887};
    int P1 = 1503;
    int P2 = 76;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
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
    vector<int> cookies = {231, 1373};
    int P1 = 81;
    int P2 = 62;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 429;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> cookies = {387, 164, 1292};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> cookies = {553, 634, 1736, 373};
    int P1 = 53;
    int P2 = 51;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 3016;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> cookies = {58, 1551, 906, 123, 302};
    int P1 = 65;
    int P2 = 76;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 2538;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> cookies = {1771, 143, 119, 189, 341, 566};
    int P1 = 51;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 2424;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> cookies = {1980, 1971, 1971, 1978, 1980, 1978, 1983};
    int P1 = 971;
    int P2 = 53;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 12288;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> cookies = {121, 104, 98, 1618, 123, 123, 152, 110};
    int P1 = 52;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 1428;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> cookies = {56, 56, 56, 56, 56, 56, 56, 56, 1593};
    int P1 = 56;
    int P2 = 141;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 1576;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> cookies = {63, 1287, 63, 62, 62, 62, 63, 62, 63, 62};
    int P1 = 62;
    int P2 = 74;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 1224;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> cookies = {63, 1880, 71, 60, 67, 71, 68, 68, 68, 63, 60, 68, 60, 71, 61};
    int P1 = 51;
    int P2 = 96;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 2058;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> cookies = {50, 56, 57, 55, 58, 55, 65, 52, 61, 64, 50, 67, 63, 53, 1193, 59, 65, 54, 69, 58};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 1900;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> cookies = {70, 89, 103, 74, 73, 85, 73, 79, 78, 85, 69, 93, 99, 1988, 105, 84, 89, 86, 92, 81, 90, 95, 93, 83, 95, 77, 98, 92, 97, 86};
    int P1 = 51;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 3131;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> cookies = {75, 101, 76, 100, 1993, 79, 96, 76, 79, 102, 86, 82, 81, 99, 88, 95, 93, 81, 89, 91, 93, 82, 96, 92, 75, 103, 95, 81, 93, 76};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 3300;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> cookies = {57, 69, 60, 61, 64, 60, 60, 70, 66, 64, 72, 67, 69, 72, 68, 68, 57, 65, 73, 60, 67, 63, 58, 61, 72, 59, 69, 61, 68, 60, 72, 60, 60, 1978, 62, 63, 61, 71};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 3700;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> cookies = {47, 25, 3, 45, 47, 7, 27, 36, 765, 59, 67, 53, 36, 20, 8, 34, 5, 3, 27, 3, 13, 42, 50, 7, 15, 50, 62, 37, 20, 45, 41, 23, 52, 28, 58, 12, 48, 24, 16, 50, 28, 40, 56, 33, 63, 61, 32, 54, 15, 40};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 1300;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> cookies = {1968, 88, 96, 119, 71, 58, 112, 101, 54, 67, 98, 66, 53, 53, 59, 109, 99, 56, 102, 61, 111, 92, 87, 70, 63, 63, 63, 51, 119, 103, 112, 72, 53, 65, 58, 95, 61, 77, 58, 98, 101, 82, 59, 62, 63, 71, 57, 68, 104};
    int P1 = 69;
    int P2 = 74;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 3575;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> cookies = {1991, 109, 100, 81, 115, 69, 66, 61, 66, 59, 116, 59, 96, 57, 66, 65, 117, 63, 58, 51, 55, 118, 64, 53, 70, 53, 53, 75, 65, 80, 117, 76, 56, 50, 78, 74, 63, 55, 50, 77, 71, 90, 52, 101, 91, 87, 86, 75, 110};
    int P1 = 70;
    int P2 = 75;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 3480;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> cookies = {1991, 1984, 62, 51, 53, 65, 60, 59, 54, 64, 63, 66, 59, 57, 52, 65, 52, 54, 51, 57, 51, 55, 52, 54, 58, 64, 70, 68, 66, 55};
    int P1 = 69;
    int P2 = 297;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 3660;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> cookies = {1976, 1986, 1996, 62, 65, 63, 61, 68, 62, 65, 65, 68, 65, 54, 64, 63, 55, 64, 60, 71, 55, 53, 59, 58, 68, 51, 53, 62, 60, 62, 55, 54, 56, 60, 68, 66, 59, 60, 68, 54, 63, 63, 54, 52, 52, 52, 50, 51, 57, 60};
    int P1 = 70;
    int P2 = 644;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 4998;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> cookies = {1994, 1992, 1987, 1985, 50, 52, 60, 60, 60, 52, 59, 56, 55, 57, 59, 56, 60, 61, 51, 53, 50, 59, 50, 56, 53, 56, 52, 55, 61, 61, 61, 55, 55, 59, 52, 54, 50, 60, 57, 58, 54, 53, 59, 52, 51, 54, 54, 52, 57, 61};
    int P1 = 63;
    int P2 = 647;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 7100;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> cookies = {1950, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    int P1 = 50;
    int P2 = 1000;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 18900;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> cookies = {1821, 1851, 1876, 1952, 1961, 1855, 1838, 1851, 1829, 1949, 1925, 1905, 1865, 1927, 1972, 1833, 1992, 1974, 1961, 1883, 1965, 1863, 1849, 1876, 1848, 1981, 1813, 1942, 1868, 1894, 1879, 1896, 1944, 1881, 1846, 1880, 1863, 1861, 1901, 1852, 1965, 1856, 1989, 1931, 1884, 1952, 1889, 1981, 1819, 1869};
    int P1 = 50;
    int P2 = 53;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 94760;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> cookies = {1958, 1908, 1904, 1929, 1985, 1942, 1917, 1957, 1991, 1966, 1909, 1916, 1995, 1975, 1931, 1929, 1966, 1902, 1989, 1958, 1921, 1948, 1998, 1984, 1958, 1963, 1993, 2000, 1911, 1982, 1964, 1993, 1901, 1974, 1960, 1926, 1961, 1900, 1990, 1931, 1932, 1940, 1966, 1996, 1941, 1911, 1958, 1944, 1999, 1932};
    int P1 = 53;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 97541;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> cookies = {99, 99, 99, 99, 200};
    int P1 = 99;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 596;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> cookies = {300, 500, 500, 500, 1800};
    int P1 = 300;
    int P2 = 100;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 3600;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 999, 999, 999, 999, 999};
    int P1 = 50;
    int P2 = 51;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 94536;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> cookies = {467, 334, 500, 1169, 1724, 1478, 1358, 962, 464, 1705, 145, 1281, 827, 1961, 491, 995, 1942, 827, 1436, 391, 604, 1902, 153, 292, 382, 1421, 716, 1718, 1895, 1447, 1726, 771, 1538, 1869, 1912, 1667, 299, 1035, 1894, 703, 1811, 1322, 333, 1673, 664, 1141, 1711};
    int P1 = 434;
    int P2 = 1223;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 38111;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> cookies = {1950, 1951, 1952, 1953, 1954, 1955, 1956, 1957, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 1974, 1975, 1976, 1977, 1978, 1979, 1980, 1981, 1982, 1983, 1985, 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000};
    int P1 = 52;
    int P2 = 54;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 98686;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> cookies = {1941, 1967, 1934, 1900, 1969, 1924, 1978, 1958, 1962, 1964, 1905, 1945, 1981, 1927, 1961, 1991, 1995, 1942, 1927, 1936, 1991, 1904, 1902, 1953, 1992, 1982, 1921, 1916, 1918, 1995, 1947, 1926, 1971, 1938, 1969, 1912, 1967, 1999, 1935, 1994, 1903, 1911, 1922, 1933, 1973, 1964, 1941, 1911, 1953, 1968};
    int P1 = 52;
    int P2 = 67;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 97342;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> cookies = {60, 60, 100};
    int P1 = 50;
    int P2 = 60;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> cookies = {150, 50};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> cookies = {150, 500};
    int P1 = 50;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> cookies = {1020, 1020, 1020, 1020, 1020, 1020, 2000, 2000, 2000};
    int P1 = 51;
    int P2 = 50;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 12120;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 1999};
    int P1 = 50;
    int P2 = 51;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 79689;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> cookies = {800, 400, 400, 400};
    int P1 = 100;
    int P2 = 400;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> cookies = {987, 1995, 337, 1570, 297, 545, 1947, 357, 1195, 350, 1877, 1294, 1738, 1667, 1066, 1702, 625, 1866, 1709, 919, 264, 861, 145, 1847, 540, 12, 703, 452, 428, 1517, 343, 1878, 1167, 1242, 1030, 1066, 628, 1435, 1589, 1631, 205, 1707, 832, 595, 972, 1338, 1192, 1064, 872, 93};
    int P1 = 58;
    int P2 = 158;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 51192;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> cookies = {1974, 1442, 1974, 910, 1960, 770, 1267, 1701, 1624, 1540, 1323, 1876, 1939, 1939, 1386, 1841, 1288, 1876, 1841, 1659, 1659, 931, 1722, 1701, 1484, 1323, 1624, 1659, 574, 1561, 672, 1876, 812, 1169, 1645, 1855, 1638, 1876, 693, 1008, 812, 1883, 1939, 693, 931, 1778, 1624, 1148, 1820, 1127};
    int P1 = 119;
    int P2 = 217;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 72912;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> cookies = {91, 1417, 684, 1850, 219, 574, 128, 908, 412, 1714, 55, 1595, 531, 1677, 511, 541, 1145, 592, 1077, 1686, 141, 1354, 152, 203, 342, 1032, 371, 1666, 768, 945, 1697, 876, 1521, 188, 1919, 962, 1017, 1649, 1885, 444, 253, 1061, 972, 1883, 623, 914, 1891, 161, 1703, 1218};
    int P1 = 50;
    int P2 = 73;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 46986;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> cookies = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989, 1989};
    int P1 = 50;
    int P2 = 51;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 99687;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> cookies = {1996, 1995, 1998, 1996, 1997, 1996, 1995, 1997, 1998, 1998, 1996, 1999, 1997, 1995, 1995, 1998, 1997, 1998, 1998, 1997, 1999, 1999, 1997, 1997, 1998, 1996, 1996, 1995, 1995, 1997, 1997, 1997, 1996, 1995, 1996, 1998, 1997, 1998, 1998, 1996, 1996, 1997, 1997, 1999, 1999, 1997, 1998, 1998, 1997, 1995};
    int P1 = 50;
    int P2 = 52;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 99450;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> cookies = {70, 70, 70, 153};
    int P1 = 51;
    int P2 = 70;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> cookies = {600, 400};
    int P1 = 200;
    int P2 = 300;
    ColorfulCookie* pObj = new ColorfulCookie();
    clock_t start = clock();
    int result = pObj->getMaximum(cookies, P1, P2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14553&pm=11595
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
 
class ColorfulCookie {
public:
  int getMaximum(vector <int>, int, int);
};
 
int f[55][2222], b[55], c[55][55];
 
int ColorfulCookie::getMaximum(vector <int> a, int p1, int p2) {
  int n = a.size(), i, j, ll = 0, rr = 0, mid, ft, k;
  for (i=0;i<n;i++) {
    b[i] = a[i]/p1;
    for (j=0;j<=b[i];j++) c[i][j] = (a[i]-j*p1)/p2;
  }
  for (i=0;i<n;i++) rr += a[i];
  rr /= (p1+p2);
  while (ll < rr) {
    mid = (ll+rr+1) >> 1;
    memset(f,255,sizeof(f));
    f[0][0] = 0;
    for (i=0;i<n;i++)
      for (j=0;j<=40*i;j++)
        if (f[i][j] >= 0)
          for (k=0;k<=b[i] && k<=mid;k++) {
            ft = c[i][k];
            if (ft > mid-k) ft = mid-k;
            ft += f[i][j];
            if (ft > f[i+1][j+k]) f[i+1][j+k] = ft;
          }
    if (f[n][mid] >= mid) ll = mid;
    else rr = mid-1;
  }
  return ll*(p1+p2);
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/