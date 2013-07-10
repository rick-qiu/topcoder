/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11345
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

class ProductAndSum {
public:
    int getSum(int p2, int p3, int p5, int p7, int S);
};

int ProductAndSum::getSum(int p2, int p3, int p5, int p7, int S) {
    int ret;
    return ret;
}


int test0() {
    int p2 = 2;
    int p3 = 0;
    int p5 = 0;
    int p7 = 0;
    int S = 4;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int p2 = 0;
    int p3 = 0;
    int p5 = 0;
    int p7 = 0;
    int S = 10;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 110109965;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int p2 = 2;
    int p3 = 0;
    int p5 = 0;
    int p7 = 0;
    int S = 5;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 610;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int p2 = 1;
    int p3 = 1;
    int p5 = 1;
    int p7 = 1;
    int S = 10;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int p2 = 5;
    int p3 = 5;
    int p5 = 5;
    int p7 = 5;
    int S = 100;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 61610122;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int p2 = 100;
    int p3 = 100;
    int p5 = 34;
    int p7 = 67;
    int S = 2041;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 268200754;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int p2 = 100;
    int p3 = 99;
    int p5 = 24;
    int p7 = 69;
    int S = 2000;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 385907327;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int p2 = 100;
    int p3 = 98;
    int p5 = 62;
    int p7 = 58;
    int S = 2478;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 186084835;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int p2 = 100;
    int p3 = 97;
    int p5 = 45;
    int p7 = 5;
    int S = 2464;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 468723757;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int p2 = 100;
    int p3 = 96;
    int p5 = 61;
    int p7 = 27;
    int S = 2281;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 50668157;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int p2 = 99;
    int p3 = 100;
    int p5 = 42;
    int p7 = 95;
    int S = 2491;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 68489749;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int p2 = 99;
    int p3 = 99;
    int p5 = 91;
    int p7 = 36;
    int S = 2327;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 165766199;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int p2 = 99;
    int p3 = 98;
    int p5 = 53;
    int p7 = 2;
    int S = 2104;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 376559586;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int p2 = 99;
    int p3 = 97;
    int p5 = 21;
    int p7 = 82;
    int S = 2292;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 462109132;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int p2 = 99;
    int p3 = 96;
    int p5 = 95;
    int p7 = 18;
    int S = 2216;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 290254221;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int p2 = 98;
    int p3 = 100;
    int p5 = 71;
    int p7 = 26;
    int S = 2447;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 495878343;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int p2 = 98;
    int p3 = 99;
    int p5 = 12;
    int p7 = 69;
    int S = 2038;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 92823186;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int p2 = 98;
    int p3 = 98;
    int p5 = 35;
    int p7 = 99;
    int S = 2167;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 266535157;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int p2 = 98;
    int p3 = 97;
    int p5 = 11;
    int p7 = 3;
    int S = 2394;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 425265856;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int p2 = 98;
    int p3 = 96;
    int p5 = 73;
    int p7 = 33;
    int S = 2322;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 417856319;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int p2 = 97;
    int p3 = 100;
    int p5 = 11;
    int p7 = 41;
    int S = 2164;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 410729479;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int p2 = 97;
    int p3 = 99;
    int p5 = 47;
    int p7 = 68;
    int S = 2253;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 307010913;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int p2 = 97;
    int p3 = 98;
    int p5 = 57;
    int p7 = 62;
    int S = 2144;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 327029316;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int p2 = 97;
    int p3 = 97;
    int p5 = 23;
    int p7 = 59;
    int S = 2037;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 55856839;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int p2 = 97;
    int p3 = 96;
    int p5 = 78;
    int p7 = 29;
    int S = 2241;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 89485861;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int p2 = 96;
    int p3 = 100;
    int p5 = 90;
    int p7 = 35;
    int S = 2316;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 425224040;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int p2 = 96;
    int p3 = 99;
    int p5 = 6;
    int p7 = 88;
    int S = 2342;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 77717964;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int p2 = 96;
    int p3 = 98;
    int p5 = 64;
    int p7 = 42;
    int S = 2040;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 92927444;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int p2 = 96;
    int p3 = 97;
    int p5 = 5;
    int p7 = 46;
    int S = 2148;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 3621132;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int p2 = 96;
    int p3 = 96;
    int p5 = 70;
    int p7 = 29;
    int S = 2390;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 117476934;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int p2 = 100;
    int p3 = 100;
    int p5 = 100;
    int p7 = 100;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 170475026;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int p2 = 99;
    int p3 = 100;
    int p5 = 100;
    int p7 = 100;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 45315716;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int p2 = 100;
    int p3 = 99;
    int p5 = 100;
    int p7 = 100;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 349608881;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int p2 = 100;
    int p3 = 100;
    int p5 = 99;
    int p7 = 100;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 384987143;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int p2 = 100;
    int p3 = 100;
    int p5 = 100;
    int p7 = 99;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 263234477;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int p2 = 3;
    int p3 = 3;
    int p5 = 1;
    int p7 = 1;
    int S = 51;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 229603858;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int p2 = 1;
    int p3 = 4;
    int p5 = 4;
    int p7 = 3;
    int S = 30;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
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
    int p2 = 3;
    int p3 = 1;
    int p5 = 1;
    int p7 = 1;
    int S = 41;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 434668555;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int p2 = 0;
    int p3 = 0;
    int p5 = 0;
    int p7 = 0;
    int S = 1;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
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
    int p2 = 0;
    int p3 = 0;
    int p5 = 0;
    int p7 = 0;
    int S = 197;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 294037466;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int p2 = 0;
    int p3 = 0;
    int p5 = 0;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 31047937;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int p2 = 7;
    int p3 = 3;
    int p5 = 6;
    int p7 = 9;
    int S = 945;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 235497365;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int p2 = 1;
    int p3 = 9;
    int p5 = 2;
    int p7 = 8;
    int S = 539;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 379047531;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int p2 = 4;
    int p3 = 8;
    int p5 = 9;
    int p7 = 5;
    int S = 834;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 143638123;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int p2 = 96;
    int p3 = 93;
    int p5 = 96;
    int p7 = 97;
    int S = 2430;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 266971056;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int p2 = 90;
    int p3 = 92;
    int p5 = 94;
    int p7 = 95;
    int S = 2021;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 139944642;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int p2 = 92;
    int p3 = 97;
    int p5 = 93;
    int p7 = 97;
    int S = 2329;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 266759609;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int p2 = 55;
    int p3 = 36;
    int p5 = 61;
    int p7 = 90;
    int S = 2486;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 250703379;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int p2 = 52;
    int p3 = 31;
    int p5 = 74;
    int p7 = 55;
    int S = 2267;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 51859623;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int p2 = 66;
    int p3 = 24;
    int p5 = 41;
    int p7 = 50;
    int S = 1850;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 23841847;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int p2 = 80;
    int p3 = 0;
    int p5 = 0;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 368592545;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int p2 = 0;
    int p3 = 57;
    int p5 = 0;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 47528899;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int p2 = 57;
    int p3 = 91;
    int p5 = 0;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 323002950;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int p2 = 0;
    int p3 = 0;
    int p5 = 87;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 232566792;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int p2 = 87;
    int p3 = 0;
    int p5 = 57;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 92147065;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int p2 = 0;
    int p3 = 83;
    int p5 = 53;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 474185308;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int p2 = 59;
    int p3 = 59;
    int p5 = 95;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 314251932;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int p2 = 0;
    int p3 = 0;
    int p5 = 0;
    int p7 = 58;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 247506587;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int p2 = 88;
    int p3 = 0;
    int p5 = 0;
    int p7 = 71;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 22524280;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int p2 = 0;
    int p3 = 96;
    int p5 = 0;
    int p7 = 72;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 365333407;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int p2 = 63;
    int p3 = 80;
    int p5 = 0;
    int p7 = 56;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 135561643;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int p2 = 0;
    int p3 = 0;
    int p5 = 50;
    int p7 = 68;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 390058460;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int p2 = 55;
    int p3 = 0;
    int p5 = 62;
    int p7 = 91;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 113553236;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int p2 = 0;
    int p3 = 74;
    int p5 = 59;
    int p7 = 60;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 73032833;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int p2 = 95;
    int p3 = 83;
    int p5 = 98;
    int p7 = 87;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 489199652;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int p2 = 91;
    int p3 = 0;
    int p5 = 0;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 106218916;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int p2 = 0;
    int p3 = 52;
    int p5 = 0;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 420112512;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int p2 = 91;
    int p3 = 50;
    int p5 = 0;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 11656772;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int p2 = 0;
    int p3 = 0;
    int p5 = 86;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 223213735;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int p2 = 70;
    int p3 = 0;
    int p5 = 74;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 382506820;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int p2 = 0;
    int p3 = 71;
    int p5 = 96;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 103052079;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int p2 = 68;
    int p3 = 99;
    int p5 = 98;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 334538801;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int p2 = 0;
    int p3 = 0;
    int p5 = 0;
    int p7 = 84;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 187154282;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int p2 = 84;
    int p3 = 0;
    int p5 = 0;
    int p7 = 81;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 222801261;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int p2 = 0;
    int p3 = 99;
    int p5 = 0;
    int p7 = 53;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 45093158;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int p2 = 50;
    int p3 = 88;
    int p5 = 0;
    int p7 = 68;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 88279352;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int p2 = 0;
    int p3 = 0;
    int p5 = 77;
    int p7 = 88;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 288889906;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int p2 = 93;
    int p3 = 0;
    int p5 = 78;
    int p7 = 67;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 426799655;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int p2 = 0;
    int p3 = 57;
    int p5 = 83;
    int p7 = 98;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 489417667;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int p2 = 63;
    int p3 = 67;
    int p5 = 60;
    int p7 = 71;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 297755926;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int p2 = 1;
    int p3 = 1;
    int p5 = 0;
    int p7 = 0;
    int S = 6;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1338;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int p2 = 2;
    int p3 = 2;
    int p5 = 0;
    int p7 = 0;
    int S = 10;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 17775;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int p2 = 1;
    int p3 = 2;
    int p5 = 1;
    int p7 = 1;
    int S = 20;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 2666640;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int p2 = 2;
    int p3 = 1;
    int p5 = 1;
    int p7 = 2;
    int S = 100;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 266346431;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int p2 = 35;
    int p3 = 35;
    int p5 = 35;
    int p7 = 35;
    int S = 595;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 261176114;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int p2 = 76;
    int p3 = 53;
    int p5 = 31;
    int p7 = 53;
    int S = 1234;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 428298429;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int p2 = 99;
    int p3 = 98;
    int p5 = 96;
    int p7 = 97;
    int S = 2497;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 58035561;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int p2 = 100;
    int p3 = 100;
    int p5 = 0;
    int p7 = 0;
    int S = 2500;
    ProductAndSum* pObj = new ProductAndSum();
    clock_t start = clock();
    int result = pObj->getSum(p2, p3, p5, p7, S);
    clock_t end = clock();
    delete pObj;
    int expected = 415728531;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14429&pm=11345
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
 
class ProductAndSum {
public:
  int getSum(int, int, int, int, int);
};
 
const int md = 500500573;
int c[2510][2510], p[2510], inv[2510];
 
int ProductAndSum::getSum(int p2, int p3, int p5, int p7, int S) {
  int k2,k3,k4,k6,k8,k9,k1,k5 = p5,k7 = p7,i,j,sum,tot;
  memset(c,0,sizeof(c));
  for (i=0;i<=2500;i++) c[i][0] = 1;
  for (i=1;i<=2500;i++)
    for (j=1;j<=i;j++) {
      c[i][j] = c[i-1][j]+c[i-1][j-1];
      if (c[i][j] >= md) c[i][j] -= md;
    }
  for (i=1;i<=2500;i++) {
    int x, step;
    x = 1; step = 1 << 30;
    while (step > 0) {
      x = (long long)x*x % md;
      if (step & (md-2)) x = (long long)x*i % md;
      step >>= 1;
    } 
    inv[i] = x;
  }
  p[0] = 0;
  for (i=1;i<=2500;i++) p[i] = ((long long)p[i-1]*10+1) % md;
  long long ans = 0;
  for (k2=0;k2<=p2;k2++)
    for (k4=0;k2+2*k4<=p2;k4++)
      for (k8=0;k2+2*k4+3*k8<=p2;k8++) {
        k6 = p2 - k2 - 2*k4 - 3*k8;
        for (k9=0;2*k9+k6<=p3;k9++) {
          k3 = p3 - 2*k9 - k6;
          sum = 2*k2+4*k4+8*k8+6*k6+9*k9+3*k3+5*k5+7*k7;
          if (sum > S) continue;
          k1 = S-sum;
          tot = k1+k2+k3+k4+k5+k6+k7+k8+k9;
          long long nv = (long long)c[tot][k1]*c[tot-k1][k2] % md;
          nv = nv*c[tot-k1-k2][k3] % md;
          nv = nv*c[tot-k1-k2-k3][k4] % md;
          nv = nv*c[tot-k1-k2-k3-k4][k5] % md;
          nv = nv*c[tot-k1-k2-k3-k4-k5][k6] % md;
          nv = nv*c[tot-k1-k2-k3-k4-k5-k6][k7] % md;
          nv = nv*c[tot-k1-k2-k3-k4-k5-k6-k7][k8] % md;
          nv = nv*c[tot-k1-k2-k3-k4-k5-k6-k7-k8][k9] % md;
          long long res = nv*S % md;
          res = res*inv[tot] % md;
          res = res*p[tot] % md;
          ans = (ans+res) % md;
        }
      }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/