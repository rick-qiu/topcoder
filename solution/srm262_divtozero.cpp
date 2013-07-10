/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4556
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

class DivToZero {
public:
    string lastTwo(int num, int factor);
};

string DivToZero::lastTwo(int num, int factor) {
    string ret;
    return ret;
}


int test0() {
    int num = 2000000000;
    int factor = 100;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "00";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int num = 1000;
    int factor = 3;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "02";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int num = 23442;
    int factor = 75;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "00";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int num = 428392;
    int factor = 17;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "15";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int num = 32442;
    int factor = 99;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "72";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int num = 100;
    int factor = 100;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "00";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int num = 100;
    int factor = 99;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "98";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int num = 1000;
    int factor = 99;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "89";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int num = 374293384;
    int factor = 43;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "28";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int num = 743295;
    int factor = 1;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "00";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int num = 77329438;
    int factor = 13;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "08";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int num = 1999999999;
    int factor = 19;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "07";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int num = 53626;
    int factor = 77;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "69";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int num = 1364976;
    int factor = 11;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "02";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int num = 456;
    int factor = 18;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "14";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int num = 7347364;
    int factor = 83;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "26";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int num = 29837463;
    int factor = 2;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "00";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int num = 2000000000;
    int factor = 61;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "46";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int num = 7838392;
    int factor = 87;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "52";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int num = 72747322;
    int factor = 97;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "81";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int num = 783376226;
    int factor = 56;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "16";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int num = 8192;
    int factor = 16;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "12";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int num = 65536;
    int factor = 64;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "36";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int num = 84010;
    int factor = 35;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "00";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int num = 90210;
    int factor = 15;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int num = 80087355;
    int factor = 69;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "34";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int num = 38729292;
    int factor = 80;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "00";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int num = 1111111111;
    int factor = 12;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "04";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int num = 999999999;
    int factor = 33;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "24";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int num = 198;
    int factor = 99;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "98";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int num = 411;
    int factor = 99;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "95";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int num = 32768;
    int factor = 24;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "12";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int num = 565656565;
    int factor = 65;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "20";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int num = 100;
    int factor = 100;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "00";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int num = 676;
    int factor = 26;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "24";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int num = 102;
    int factor = 3;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "02";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int num = 2000000000;
    int factor = 100;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "00";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int num = 150;
    int factor = 5;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "00";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int num = 111;
    int factor = 3;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "02";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int num = 428392;
    int factor = 17;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "15";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int num = 100;
    int factor = 99;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "98";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int num = 217;
    int factor = 7;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "03";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int num = 112;
    int factor = 7;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "05";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int num = 141;
    int factor = 3;
    DivToZero* pObj = new DivToZero();
    clock_t start = clock();
    string result = pObj->lastTwo(num, factor);
    clock_t end = clock();
    delete pObj;
    string expected = "02";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7584407&rd=7996&pm=4556
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
 
class DivToZero {
public:
  string lastTwo(int, int);
};
 
string DivToZero::lastTwo(int num, int factor) {
  num = ((int)(num/100)) * 100;
  char result[10];
  ostringstream iss(result);
  for(int i = 0; i < 100; i ++)
    if((i + num) % factor == 0) {
      sprintf(result, "%02d", i);
      return result ;
    }
  return "";
}

********************************************************************************
*******************************************************************************/