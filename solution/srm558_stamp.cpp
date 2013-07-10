/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11835
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

class Stamp {
public:
    int getMinimumCost(string desiredColor, int stampCost, int pushCost);
};

int Stamp::getMinimumCost(string desiredColor, int stampCost, int pushCost) {
    int ret;
    return ret;
}


int test0() {
    string desiredColor = "RRGGBB";
    int stampCost = 1;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string desiredColor = "R**GB*";
    int stampCost = 1;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string desiredColor = "BRRB";
    int stampCost = 2;
    int pushCost = 7;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string desiredColor = "R*RR*GG";
    int stampCost = 10;
    int pushCost = 58;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 204;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string desiredColor = "*B**B**B*BB*G*BBB**B**B*";
    int stampCost = 5;
    int pushCost = 2;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string desiredColor = "*R*RG*G*GR*RGG*G*GGR***RR*GG";
    int stampCost = 7;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string desiredColor = "R";
    int stampCost = 123;
    int pushCost = 234;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 357;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string desiredColor = "*";
    int stampCost = 987;
    int pushCost = 876;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1863;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string desiredColor = "RR*GG";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 300002;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string desiredColor = "RR*GG*BB*RR*GG*BB*RR*GG*BB*RR*GG*BB*RR*GG*BB*RR*GG";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2500002;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string desiredColor = "RR*GG*BB*RR*GG*BB*RR*GG*BB*RR*GG*BB*RR*GG*BB*RR*";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1600003;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string desiredColor = "R**G**B**R**G**B**R**G**B**R**G**B**R**G**B**R*";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2400002;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string desiredColor = "*R**G**B**R**G**B**R**G**B**R**G**B**R**G**B**R";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2400002;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string desiredColor = "*********R*********G*********R*********B*********";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 500010;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string desiredColor = "************************B************************";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 100049;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string desiredColor = "RGBRGBRGBRGBRGBRGBRGBRGBRGBRGBRGBRGBRGBRGBRGBRGBRG";
    int stampCost = 100000;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 5100000;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string desiredColor = "**************************************************";
    int stampCost = 100000;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1500000;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string desiredColor = "**************************************************";
    int stampCost = 10000;
    int pushCost = 40000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 290000;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string desiredColor = "**************************************************";
    int stampCost = 10000;
    int pushCost = 70000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 380000;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string desiredColor = "*************************************************";
    int stampCost = 100;
    int pushCost = 151;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1755;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string desiredColor = "*************************************************";
    int stampCost = 100;
    int pushCost = 150;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1750;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string desiredColor = "R************************************************G";
    int stampCost = 100000;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1500000;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string desiredColor = "*****R**********G**********B*****R***************G";
    int stampCost = 10000;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 600000;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string desiredColor = "*****R**********G**********B*****R***************G";
    int stampCost = 100000;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1500000;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGGGGGGGGGGGGGGGG";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 300024;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string desiredColor = "G";
    int stampCost = 89113;
    int pushCost = 79630;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 168743;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string desiredColor = "RB";
    int stampCost = 47185;
    int pushCost = 16261;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 79707;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string desiredColor = "GGBBRR";
    int stampCost = 75529;
    int pushCost = 91787;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 426419;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string desiredColor = "BBRRGGBB";
    int stampCost = 47574;
    int pushCost = 53214;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 308004;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string desiredColor = "RRRBBBGGGRRRBBB";
    int stampCost = 24969;
    int pushCost = 20906;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 179437;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string desiredColor = "*****";
    int stampCost = 85934;
    int pushCost = 3191;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 101889;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string desiredColor = "**B***";
    int stampCost = 52636;
    int pushCost = 27801;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 188675;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string desiredColor = "B*****R";
    int stampCost = 33491;
    int pushCost = 48378;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 245607;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string desiredColor = "RRRGGBBBB";
    int stampCost = 2431;
    int pushCost = 608;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 7902;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string desiredColor = "RRRGGBBBB";
    int stampCost = 2431;
    int pushCost = 607;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 7894;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string desiredColor = "RRR*RR*RRRRRR*RRBBBBBB*B*BBBBBB*G*GG*GG*GG*GGGGG";
    int stampCost = 89322;
    int pushCost = 89202;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1249788;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string desiredColor = "GG****G*****G*G*BBBB*B****BBBBB**RRR*R***R*R**RR";
    int stampCost = 91259;
    int pushCost = 77666;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1196068;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string desiredColor = "**R****RR*R*RR***B*B******B*B*BB***GGGGGGG****GG";
    int stampCost = 67617;
    int pushCost = 63581;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 918386;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string desiredColor = "**GG*GG*GGGGGGGG*GGGGGG*GGGGGGGGGGG**G*G*GGGGGG";
    int stampCost = 18541;
    int pushCost = 45191;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 403256;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string desiredColor = "RRRRR**R*RRRRR**RR***RRR*RRR****RR*RRR*R*RR*RRR";
    int stampCost = 76962;
    int pushCost = 93536;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1176912;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string desiredColor = "R*RR*RR**R****R*RR*R**R**R*R*R**RRR*R***R**R*RR";
    int stampCost = 76733;
    int pushCost = 19856;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 545204;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string desiredColor = "R*RR*RRB*BBB*BGGG*G***RR*R*RBB*BB**GGGGGGGRRRRRRR";
    int stampCost = 20379;
    int pushCost = 21843;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 295554;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string desiredColor = "R**R**RB*BBBBB*GGGG*GRR**RR*B*BBBBBGG*GGGG**RRR*R";
    int stampCost = 99687;
    int pushCost = 97099;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1377502;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string desiredColor = "***G*GG*BBB*BBR*R***R******G**B******R***R*G*GGG*";
    int stampCost = 56435;
    int pushCost = 49338;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 740411;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string desiredColor = "*RR*R*RR*RRRRR**RRRR*RR*GGGGG*GGGGG*G**GGG*GG*";
    int stampCost = 52922;
    int pushCost = 60897;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 788758;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string desiredColor = "G*G**GGG*GG*GG***GGG**GR*RRR*RRRR*R***R*RRRR**";
    int stampCost = 35667;
    int pushCost = 36890;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 506676;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string desiredColor = "*G*G***********G*GGG***RR*RRR**RRRR**RRRR*R*R*";
    int stampCost = 18414;
    int pushCost = 29955;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 327042;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string desiredColor = "B*RRGGB**RGG*BRRGGBBRRGGB**RG*BB**GGBB*RG*BBRRGG";
    int stampCost = 12524;
    int pushCost = 48143;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1180480;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string desiredColor = "*B*R***BR*GGB*R*G***R*GG**R*G**B*R*GB**R*GBB****";
    int stampCost = 16490;
    int pushCost = 12745;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 338860;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string desiredColor = "**GGBB*R*******G****G*BB*R***BR****B*R**B**R**B*";
    int stampCost = 62615;
    int pushCost = 99861;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1885482;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string desiredColor = "*********B**R***************************G*********";
    int stampCost = 57169;
    int pushCost = 20171;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 487555;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string desiredColor = "*B***********************G**RB******************R";
    int stampCost = 26694;
    int pushCost = 94313;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1683403;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string desiredColor = "****R********GB*************G**R*R*B************";
    int stampCost = 7245;
    int pushCost = 51166;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 547885;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string desiredColor = "*********B**G**R*******G********R****B*********";
    int stampCost = 42925;
    int pushCost = 5343;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 214082;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string desiredColor = "*******G*B******R****G*RB***R***G*G*R******B**B";
    int stampCost = 95614;
    int pushCost = 32088;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 961340;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string desiredColor = "BR*R*R**B***R***BRG***G*BB*G***G****G*R***GB***";
    int stampCost = 13610;
    int pushCost = 7350;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 359060;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string desiredColor = "RR****BBBB****R***R*R*G**GR**BGG**B*GB*GRRBG**G";
    int stampCost = 76223;
    int pushCost = 87458;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 4186749;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string desiredColor = "RRRRRRRRRRRRRGGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBB";
    int stampCost = 138;
    int pushCost = 7;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 458;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string desiredColor = "RRRRRRRRRRRRRGGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBB";
    int stampCost = 138;
    int pushCost = 6;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 432;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string desiredColor = "RRRRRRRRRRRRRGGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBB";
    int stampCost = 1115;
    int pushCost = 49;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3504;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string desiredColor = "RRRRRRRRRRRRRGGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBB";
    int stampCost = 1115;
    int pushCost = 48;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3467;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string desiredColor = "RRRRRRRRRRRRRGGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBB";
    int stampCost = 5;
    int pushCost = 4;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string desiredColor = "RRRRRRRRRRRRRGGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBB";
    int stampCost = 5;
    int pushCost = 3;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGG";
    int stampCost = 1385;
    int pushCost = 58;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 4278;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGG";
    int stampCost = 1385;
    int pushCost = 57;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 4235;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGG";
    int stampCost = 1351;
    int pushCost = 2027;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 24996;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGG";
    int stampCost = 1351;
    int pushCost = 2026;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 24990;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGG";
    int stampCost = 2887;
    int pushCost = 722;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 20934;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGG";
    int stampCost = 2887;
    int pushCost = 721;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 20918;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGGGGGGGGGGGGGGBBBB";
    int stampCost = 919;
    int pushCost = 184;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 6068;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGGGGGGGGGGGGGGBBBB";
    int stampCost = 919;
    int pushCost = 183;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 6051;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGGGGGGGGGGGGGGBBBB";
    int stampCost = 1481;
    int pushCost = 186;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 7791;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGGGGGGGGGGGGGGBBBB";
    int stampCost = 1481;
    int pushCost = 185;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 7772;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string desiredColor = "****RRRRR***B*BBB***GGGG*GGGBBB**BBGGGG***RR*RR*RR";
    int stampCost = 48;
    int pushCost = 52;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 804;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string desiredColor = "R*****";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 100006;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string desiredColor = "R**GGBBB";
    int stampCost = 5;
    int pushCost = 10;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string desiredColor = "*R*G*B*";
    int stampCost = 11;
    int pushCost = 100;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 422;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string desiredColor = "R*G*B*R*G*B*R*G*B*R*G*B*R*G*B*R*G*B*R*G*B*R*G*B*RB";
    int stampCost = 13;
    int pushCost = 3;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 163;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string desiredColor = "RRR***G";
    int stampCost = 5;
    int pushCost = 10;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string desiredColor = "*R*RG*G*GR*RGG*G*GG****R***RRGGGRRRR*G**G";
    int stampCost = 35;
    int pushCost = 142;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2377;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string desiredColor = "RBGRBGRBGRBGRBGRBGRBGRBGRBGRBGRBGRBGRBGRBGRBGRGBRG";
    int stampCost = 100000;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 5100000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string desiredColor = "****B*GB****R";
    int stampCost = 10000;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 10013;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string desiredColor = "*********R**********B*********G***********R*******";
    int stampCost = 3;
    int pushCost = 5;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string desiredColor = "RR*BB";
    int stampCost = 100;
    int pushCost = 10000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 30200;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string desiredColor = "***";
    int stampCost = 10000;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 10003;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string desiredColor = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 100050;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string desiredColor = "**************************************";
    int stampCost = 12;
    int pushCost = 6;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string desiredColor = "**R***BG**G*R**B*G*G***RB**G****";
    int stampCost = 1;
    int pushCost = 20;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 263;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string desiredColor = "RR*B";
    int stampCost = 1;
    int pushCost = 5;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string desiredColor = "R***G";
    int stampCost = 1;
    int pushCost = 100;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 302;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string desiredColor = "*R*RG*G*GR*RGG*G*GGR***RR*GG*R*RG****GR***RR*GG";
    int stampCost = 43;
    int pushCost = 54;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1101;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string desiredColor = "R************************GB***********************";
    int stampCost = 1;
    int pushCost = 20;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string desiredColor = "******B***R***R*B**";
    int stampCost = 2;
    int pushCost = 7;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string desiredColor = "GG*RR";
    int stampCost = 1;
    int pushCost = 1000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3002;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string desiredColor = "G****BR**B";
    int stampCost = 25142;
    int pushCost = 76188;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 431224;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string desiredColor = "RR*GGBBB";
    int stampCost = 1;
    int pushCost = 10;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string desiredColor = "G**RB*R*B*BG*B*B*B******R*R*****BG**";
    int stampCost = 14;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string desiredColor = "**RR*GGGRRR***********BB***R";
    int stampCost = 66576;
    int pushCost = 2671;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 141364;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string desiredColor = "R*G";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 300001;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string desiredColor = "RRRRRR";
    int stampCost = 1;
    int pushCost = 1000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1006;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string desiredColor = "**************************************************";
    int stampCost = 986;
    int pushCost = 34123;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 83423;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string desiredColor = "RRRRRR";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 100006;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string desiredColor = "**RR*R**R*G****RRBB****BB****R*G*G*GG****BBBBB***";
    int stampCost = 20;
    int pushCost = 30;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string desiredColor = "R*BGGRRBB";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 900001;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string desiredColor = "RG";
    int stampCost = 100000;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 300000;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string desiredColor = "R*B";
    int stampCost = 1;
    int pushCost = 100;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string desiredColor = "RR**R**BB";
    int stampCost = 1;
    int pushCost = 1000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3003;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string desiredColor = "R*****G";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 300003;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string desiredColor = "**************************************************";
    int stampCost = 1;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string desiredColor = "******";
    int stampCost = 1;
    int pushCost = 100;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string desiredColor = "R";
    int stampCost = 1;
    int pushCost = 2;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string desiredColor = "***********************************************RGR";
    int stampCost = 10000;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 10050;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string desiredColor = "*************B*********G************GG";
    int stampCost = 4;
    int pushCost = 10;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string desiredColor = "R****BGGGG";
    int stampCost = 1;
    int pushCost = 999;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3999;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string desiredColor = "G*GR**B*BRBG*RRBG*RGGR**";
    int stampCost = 79052;
    int pushCost = 13175;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 395252;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string desiredColor = "BR*B*";
    int stampCost = 98;
    int pushCost = 513;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2663;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string desiredColor = "R*G";
    int stampCost = 1;
    int pushCost = 100;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string desiredColor = "****************G*********************************";
    int stampCost = 1000;
    int pushCost = 1000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 15000;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRGRRRRRRRRRRRRRRRRRRRRRRRRRR";
    int stampCost = 10000;
    int pushCost = 10000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 510000;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string desiredColor = "RGBRGBRGB";
    int stampCost = 65536;
    int pushCost = 65536;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 655360;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string desiredColor = "RRRRRRRRRRBRRRRRRRRRR";
    int stampCost = 7;
    int pushCost = 98744;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2073631;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string desiredColor = "*";
    int stampCost = 1;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string desiredColor = "RR*R*B***";
    int stampCost = 12190;
    int pushCost = 25377;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 124891;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string desiredColor = "************************************R*************";
    int stampCost = 11;
    int pushCost = 12;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string desiredColor = "B*G";
    int stampCost = 1;
    int pushCost = 10000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 30001;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string desiredColor = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    int stampCost = 1;
    int pushCost = 50000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 50050;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string desiredColor = "R*G";
    int stampCost = 1;
    int pushCost = 10000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 30001;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string desiredColor = "RRR*GGG";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 300003;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string desiredColor = "R**RRRR***GGGGG";
    int stampCost = 13;
    int pushCost = 19;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string desiredColor = "*****************************************RR**GR*G*";
    int stampCost = 100000;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2700000;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string desiredColor = "**";
    int stampCost = 1;
    int pushCost = 100;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string desiredColor = "*RGB*";
    int stampCost = 4;
    int pushCost = 4;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string desiredColor = "RRRBBBBGGGGRRRRBBBB";
    int stampCost = 1;
    int pushCost = 10000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 90003;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string desiredColor = "*GG*B**B**B*BB*G*BBB**B**B**B**B**B*BB*G*BBB**B**B";
    int stampCost = 7;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string desiredColor = "RRRR";
    int stampCost = 2;
    int pushCost = 1000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1008;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string desiredColor = "RRBRR";
    int stampCost = 1;
    int pushCost = 100;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string desiredColor = "R*B";
    int stampCost = 3;
    int pushCost = 100;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 303;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string desiredColor = "*R*G*RGG*RRB*B***B**R**G**R**R**R**RGGG*R*G*BG*GR*";
    int stampCost = 100000;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2900000;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string desiredColor = "BB*R*G*BBR*GRR*";
    int stampCost = 39197;
    int pushCost = 70687;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1099502;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string desiredColor = "**************************************************";
    int stampCost = 1;
    int pushCost = 100000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 100050;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string desiredColor = "RR**GRRRR*";
    int stampCost = 1;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string desiredColor = "R***B";
    int stampCost = 1;
    int pushCost = 1000;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3002;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string desiredColor = "*************";
    int stampCost = 1;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string desiredColor = "BRR***BBRR***GGG**RR**BBB****RRR";
    int stampCost = 1;
    int pushCost = 1;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string desiredColor = "**************************************************";
    int stampCost = 4;
    int pushCost = 7;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string desiredColor = "*R*G*B*GR*B*RG*B";
    int stampCost = 1;
    int pushCost = 1867;
    Stamp* pObj = new Stamp();
    clock_t start = clock();
    int result = pObj->getMinimumCost(desiredColor, stampCost, pushCost);
    clock_t end = clock();
    delete pObj;
    int expected = 29873;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22708534&rd=15180&pm=11835
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <cstring>
 
using namespace std;
 
#define eprintf printf
#define pb push_back
#define mp make_pair
#define sz(x) ((int)(x).size())
#define sqr(x) ((x) * (x))
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<int, int> pii;
 
const int INF = 1e9;
 
class Stamp {
public:
  int getMinimumCost(string desiredColor, int stampCost, int pushCost) {
    int n = sz(desiredColor);
    vi msks(n);
    for (int i = 0; i < n; i++) {
      switch (desiredColor[i]) {
      case 'R': msks[i] = 1; break;
      case 'G': msks[i] = 2; break;
      case 'B': msks[i] = 4; break;
      case '*': msks[i] = 7; break;
      }
    }
    
    int ans = INF;
    for (int len = 1; len <= n; len++) {
      vi dyn(n + 1, INF);
      dyn[0] = 0;
      for (int i = 0; i < n; i++) {
        int ccol = 7;
        for (int ne = i; ne < n; ne++) {
          ccol = ccol & msks[ne];
          if (!ccol) break;
 
          int clen = (ne - i + 1);
          if (clen < len) continue;
          
          int cops = (clen + len - 1) / len;
          dyn[ne + 1] = min(dyn[ne + 1], dyn[i] + cops * pushCost);
        }
      }
      
      ans = min(ans, dyn[n] + len * stampCost);
    }
    return ans;
  }
};
 
 
 
 
 
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/